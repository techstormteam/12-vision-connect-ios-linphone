# here are the file names and urls for the technical specification
technical_spec = rfc3951.txt
technical_spec_url = http://www.ietf.org/rfc/$(technical_spec)

downloaded_files = $(technical_spec) $(license)
checkmarks = $(downloaded_files:%=%.check)
success_marker = ../src/iLBC_define.h
BUILT_SOURCES = $(downloaded_files) $(checkmarks) $(success_marker)

checksum_dir = $(srcdir)/known_checksums
checksum_files = $(addprefix $(checksum_dir)/, $(downloaded_files:%=%.md5))
EXTRA_DIST = $(checksum_files)

$(technical_spec):
	$(WGET) --no-check-certificate $(technical_spec_url) -O ${technical_spec}

# for check, go to $(srcdir) or ./, depending on where file is
$(checkmarks): %.check: %
	cd $(<D); $(MD5SUM) -c $(checksum_dir)/$(<F).md5
	touch $@

# cleaning up in ../src is necessary because the awk script appends
$(success_marker): $(technical_spec) $(checkmarks)
	cd ../src; rm *.c *.h &> /dev/null; $(AWK) -f $(srcdir)/extract-cfile.awk \
		$(CURDIR)/$< > /dev/null

DISTCLEANFILES = $(BUILT_SOURCES)
