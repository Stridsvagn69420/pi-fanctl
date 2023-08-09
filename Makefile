APPNAME = pi-fanctl
OUTDIR = build
INSTALLDIR = /usr/local/bin

compile:
	@mkdir -p $(OUTDIR)
	@cmake -DCMAKE_BUILD_TYPE=Release -B$(OUTDIR) -S.
	@cmake --build $(OUTDIR)

install:
	@cp $(OUTDIR)/$(APPNAME) $(INSTALLDIR)/$(APPNAME)

clean:
	@rm -r $(OUTDIR)
