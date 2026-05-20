# Makefile for generating SAM documentation from Sphinx

SOURCEDIR = source
BUILDDIR = build

# These can also be set from the environment
SPHINXOPTS ?= 
SPHINXBUILD ?= sphinx-build

# Put this first so that "make" without argument is like "make help".
help:
	@$(SPHINXBUILD) -M help "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)

.PHONY: help Makefile

# Catch-all target: route all unknown targets to Sphinx using the new
# "make mode" option.  $(O) is meant as a shortcut for $(SPHINXOPTS).
%: Makefile
	@$(SPHINXBUILD) -M $@ "$(SOURCEDIR)" "$(BUILDDIR)" $(SPHINXOPTS) $(O)

#	echo "For Windows copy HTML files from build/html to deploy/runtime/help/html folder."
