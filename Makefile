APPNAME = pi-fanctl
OUTDIR = build
INSTALLDIR = /usr/local/bin

compile:
	@mkdir -p $(OUTDIR)
	@cmake -B$(OUTDIR) -S.
	@make -C $(OUTDIR)

install:
	@cp $(OUTDIR)/$(APPNAME) $(INSTALLDIR)/$(APPNAME)

clean:
	@rm -r $(OUTDIR)
