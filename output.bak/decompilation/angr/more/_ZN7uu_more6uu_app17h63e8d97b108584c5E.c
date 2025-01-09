long long uu_more::uu_app::h63e8d97b108584c5(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x800]
    unsigned int v2;  // [sp-0x7fc]
    char v3;  // [bp-0x7f8]
    char v4;  // [bp-0x5b0]
    char v5;  // [bp-0x5ac]
    unsigned long long v6;  // [sp-0x53c]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x274]
    char v10;  // [bp-0x26c]
    char v11;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x260]
    unsigned long long v13;  // [sp-0x258]
    unsigned int v14;  // [sp-0x20]
    unsigned int v15;  // [sp-0x1c]
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rsi

    clap_builder::builder::command::Command::new::h4cd9e3569d13970e(&v3, uucore::util_name::h60d842bf27b05e82(), v17);
    clap_builder::builder::command::Command::about::h9ff2bbb321d67a8d(&v8, &v3, "Display the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning fro", 35);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginni", 20);
    clap_builder::builder::command::Command::override_usage::h47a621d79ce17eab(&v3, &v8, &v0);
    clap_builder::builder::command::Command::version::h24b63b7e8d28daa3(&v8, &v3, "0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberT", 6);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | *((long long *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v8, "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDis", 10);
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&v0, &v8, 99);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v8, &v0, "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDis", 10);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v0, &v8, "Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe num", 47);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v3, "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file ", 6);
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&v0, &v3, 100);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v3, &v0, "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file ", 6);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v0, &v3, "Display help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfile", 36);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v8, "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into ", 11);
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&v0, &v8, 112);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v8, &v0, "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into ", 11);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v0, &v8, "Do not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/", 44);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v3, "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginn", 7);
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v3, &v0, "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginn", 7);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v0, &v3, "Squeeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 37);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v8, "plainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 5);
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&v0, &v8, 117);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v8, &v0, "plainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 5);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&v0, &v8, 2);
    memcpy(&v11, &v0, 584);
    v14 = v1 | 4;
    v15 = v2;
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v3, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank line", 7);
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&v0, &v3, 80);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v3, &v0, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank line", 7);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) & -34 | 32;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::value_name::hd3aae3acca850dc6(&v3, &v0, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank line", 7);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v0, &v3, "Display file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 41);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v8, "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple b", 9);
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&v0, &v8, 70);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v8, &v0, "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple b", 9);
    clap_builder::builder::arg::Arg::num_args::hab109f783006334e(&v0, &v8);
    clap_builder::builder::arg::Arg::value_name::hd3aae3acca850dc6(&v8, &v0, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    v11 = 4;
    v12 = ::0x4db9a0::alloc::boxed::Box$LT$T$GT$::new::hfae2bfb329dafdab();
    v13 = &g_5628d0;
    clap_builder::builder::arg::Arg::value_parser::h875608cf92624eed(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v11, &v0, "Display file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 39);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v3, "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze", 5);
    clap_builder::builder::arg::Arg::short::h97a1ce4c8b6bf8e1(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v3, &v0, "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze", 5);
    clap_builder::builder::arg::Arg::value_name::hd3aae3acca850dc6(&v0, &v3, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    clap_builder::builder::arg::Arg::num_args::hab109f783006334e(&v3, &v0);
    _$LT$u16$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h14857a0c9fe853b0(&v0, v18);
    clap_builder::builder::value_parser::RangedI64ValueParser$LT$T$GT$::range::h9002732387942f74(&v11, &v0, 0);
    clap_builder::builder::arg::Arg::value_parser::hf8e0a5c2eae1e03c(&v0, &v3, &v11);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v11, &v0, "The number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 35);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v8, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    clap_builder::builder::arg::Arg::long::h12f0ba76cb7eb328(&v0, &v8, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    clap_builder::builder::arg::Arg::num_args::hab109f783006334e(&v8, &v0);
    _$LT$u16$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h14857a0c9fe853b0(&v0, v18);
    clap_builder::builder::value_parser::RangedI64ValueParser$LT$T$GT$::range::h9002732387942f74(&v11, &v0, 0);
    clap_builder::builder::arg::Arg::value_parser::hf8e0a5c2eae1e03c(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v11, &v0, "Same as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 15);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h96a7073f8f8824a0(&v3, "filesPath to the files to be readsrc/uu/more/src/more.rs\r", 5);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) & -2;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::action::h4bee5205dd7d4073(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::help::h94ea6279b4aa990d(&v0, &v3, "Path to the files to be readsrc/uu/more/src/more.rs\r", 28);
    clap_builder::builder::arg::Arg::value_hint::h0d53a1b77a8e0b73(&v3, &v0, 3);
    clap_builder::builder::command::Command::arg::h27b36f6dc0b01fdc(a0, &v8, &v3);
    return a0;
}
