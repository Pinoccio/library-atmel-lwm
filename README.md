Atmel Lightweight Mesh for Arduino
----------------------------------
This is an Arduino port of the Atmel LWM network stack. Most of the code
is taken as-is, with some small tweaks to make it work with the Arduino
stack.

Original code from atmel can be downloaded here: http://www.atmel.com/tools/lightweight_mesh.aspx

The upstream branch contains only sources directly taken from the
upstream zipfile, using the import script in this repository. The only
modifications made are done using that import script.

The master branch contains the same sources, with additions to make them
compile in the Arduino environment. The pinoccio branch contains some
modifications specific to the [pinocc.io][] software stack.

[pinocc.io]: http://www.pinocc.io

License
-------
The code from Atmel is licensed under a custom open source license,
as found in license.txt (but not without restrictions, so be sure to
really look at the licensing terms). This is the same license as
presented during the download process.

Note that comments in the source files indicate another, shorter and slightly
different license ("asf license"), but also refer to license.txt so the exact
terms are not entirely clear.  When asked, Atmel replied on 2014-03-04
that the license.txt is binding. In version 1.2.1 (after my question),
they added a reference to license.txt in all source file headers, but
did not remove the "superseded" asf license, which makes things still
slightly confusing.

> > (Me) In particular, there is a file called "license.txt", which contains a
> > "LIMITED LICENSE AGREEMENT" that grants fairly liberal rights to the
> > Software. However, looking inside the actual source files, I see that
> > most of them contain a header with a different and slightly more
> > libraral license (referred to as "asf\_license", which I take to mean
> > Atmel Software Framework?).
> >
> > (Me) Could you clarify what the intent here is? In particular, I'd assume
> > that the license in the header of a file applies to the content of that
> > file, and needs to be retained when reusing or redistributing (parts of)
> > that file. However, does the longer license in license.txt also apply
> > and do I need to keep that one distributed as well?

> (Atmel) The license.txt file supersedes the asf\_license (Atmel Software Framework
> License).

> > (Me) However, does the longer license in license.txt also apply and do I need to
> > keep that one distributed as well?

> (Atmel) Yes, license.txt should be distributed.

The import script is licensed under a more liberal license, see the file itself
for details.
