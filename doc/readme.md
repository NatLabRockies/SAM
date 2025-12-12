# SAM Help Build Instructions

These instructions are for building SAM's Help system in HTML from text files in reStructuredText (.rst) format with the Sphinx documentation generator.

Sphinx is a Python package that converts .rst files into structured html documents. It can also be used to generate a PDF document using LaTex.

## Requirements

* Python
* Python packages listed in `requirements.txt`
* Make

Tested on Windows with Python 3.12.10 and GNU Make 4.4.1.

## Help Context IDs


## Notes

Do not include labels (`.. _label-name`) and references to labels `\`:doc: <>\`` in snip files in the includes folder.

## Headers

```
if level == 1:
	char = '='
if level == 2:
	char = '-'
if level == 3:
	char = '~'
if level == 4:
	char = '`'
if level == 4:
	char = '.'
```

## Cross References

Cross references to targets like `.. _clipping` do not require a path. Each target in the entire project must be unique.

Cross references to files must have a path. For example, references to the `create_project` file in the `getting-started` folder:`<create_project>` or `Create a Project <create_project>` must have a path. For example:

* From another file in the same folder, use `<create_project>`

* From a file in a different folder, use `<../getting-started/create_project>`

## Indentation

Sphinx is very sensitive to spacing and indentation.

** Do not use tabs ** Sphinx counts number of spaces, so tabs will break documentation builds.

for `toctree`, lines following the directive should be preceded by three spaces:

```
.. toctree::
   :maxdepth: 1
   :caption: Getting Started and Reference

   introduction/index
   getting-started/index
   reference/index
   window-reference/index
   simulation-options/index
```