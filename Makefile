APPNAME = pi-fanctl
OUTDIR = build
INSTALLDIR = /usr/local/bin

compile:
	@mkdir -p $(OUTDIR)
	@cd build; cmake .. -DCMAKE_BUILD_TYPE=Release; make

install:
	@cp $(OUTDIR)/$(APPNAME) $(INSTALLDIR)/$(APPNAME)

clean:
	@rm -r $(OUTDIR)
