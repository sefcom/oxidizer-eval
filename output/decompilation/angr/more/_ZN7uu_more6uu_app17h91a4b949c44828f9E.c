long long uu_more::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned int v1;  // [bp-0x840]
    unsigned int v2;  // [bp-0x83c]
    char v3;  // [bp-0x838]
    unsigned int v4;  // [bp-0x5c0]
    char v5;  // [bp-0x5bc]
    unsigned long long v6;  // [bp-0x57c]
    unsigned int v7;  // [bp-0x574]
    char v8;  // [bp-0x570]
    unsigned long v9;  // [bp-0x2b4]
    unsigned int v10;  // [bp-0x2ac]
    char v11;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x2a0]
    unsigned long long v13;  // [bp-0x298]
    unsigned int v14;  // [bp-0x30]
    unsigned int v15;  // [bp-0x2c]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rsi

    v3.new(uucore::util_name(), v18);
    v8.about(&v3);
    uucore::format_usage(&v0, "{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchD", 20);
    v3.override_usage(&v8, &v0);
    v8.version(&v3);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v9;
    v7 = v10;
    v8.new("print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lin", 10);
    v0.short(&v8, 99);
    v8.long(&v0, "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lin", 10);
    v0.help(&v8, "Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe num", 47);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into on", 6);
    v0.short(&v3, 100);
    v3.long(&v0, "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into on", 6);
    v0.help(&v3, "Display help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfile", 36);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multipl", 11);
    v0.short(&v8, 112);
    v8.long(&v0, "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multipl", 11);
    v0.help(&v8, "Do not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\rsrc/uu", 44);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("squeezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplain", 7);
    v0.short(&v3, 115);
    v3.long(&v0, "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplain", 7);
    v0.help(&v3, "Squeeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\rsrc/uu/more/src/more.rs", 37);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("plainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\rsrc/uu/more/src/more.rs", 5);
    v0.short(&v8, 117);
    v8.long(&v0, "plainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\rsrc/uu/more/src/more.rs", 5);
    v0.action(&v8, 2);
    memcpy(&v11, &v0, 632);
    v14 = v1 | 4;
    v15 = v2;
    v8.arg(&v3, &v11);
    v3.new("patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze ", 7);
    v0.short(&v3, 80);
    v3.long(&v0, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze ", 7);
    memcpy(&v0, &v3, 632);
    v1 = v4 & 4294967262 | 32;
    v2 = *((int *)&v5);
    v3.value_name(&v0, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze ", 7);
    v0.help(&v3, "Display file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\rsrc/uu/more/src/more.rs", 41);
    v3.arg(&v8, &v0);
    v8.new("from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display tex", 9);
    v0.short(&v8, 70);
    v8.long(&v0, "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display tex", 9);
    v0.num_args(&v8);
    v8.value_name(&v0, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and displ", 6);
    v11 = 4;
    v12 = core::num::<impl core::str::traits::FromStr for usize>::from_str.new();
    v13 = &g_525228;
    v0.value_parser(&v8, &v11);
    v11.help(&v0, "Display file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\rsrc/uu/more/src/more.rs", 39);
    v8.arg(&v3, &v11);
    v3.new("linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and ", 5);
    v0.short(&v3, 110);
    v3.long(&v0, "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and ", 5);
    v0.value_name(&v3, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and displ", 6);
    v3.num_args(&v0);
    v0.value_parser(v19);
    v11.range(&v0);
    v0.value_parser(&v3, &v11);
    v11.help(&v0, "The number of lines per screen fullSame as --linesfilesPath to the files to be read\rsrc/uu/more/src/more.rs", 35);
    v3.arg(&v8, &v11);
    v8.new("numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and displ", 6);
    v0.long(&v8, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...(uutils coreutils) 0.0.30Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and displ", 6);
    v8.num_args(&v0);
    v0.value_parser(v19);
    v11.range(&v0);
    v0.value_parser(&v8, &v11);
    v11.help(&v0, "Same as --linesfilesPath to the files to be read\rsrc/uu/more/src/more.rs", 15);
    v8.arg(&v3, &v11);
    v3.new("filesPath to the files to be read\rsrc/uu/more/src/more.rs", 5);
    memcpy(&v0, &v3, 632);
    v1 = v4 & 4294967294;
    v2 = *((int *)&v5);
    v3.action(&v0, 1);
    v0.help(&v3, "Path to the files to be read\rsrc/uu/more/src/more.rs", 28);
    v3.value_hint(&v0);
    a0.arg(&v8, &v3);
    return a0;
}
