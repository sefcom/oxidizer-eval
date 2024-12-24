long long uu_more::uu_app::h5b3af37e48060d61(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h2e027b8d8fee3aa5(&v3, uucore::util_name::h412db5e565a079f3(), v17);
    clap_builder::builder::command::Command::about::h331d7722b642ab92(&v8, &v3, "Display the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning fro", 35);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginni", 20);
    clap_builder::builder::command::Command::override_usage::h541575902fe7e816(&v3, &v8, &v0);
    clap_builder::builder::command::Command::version::hed502b5a335915fe(&v8, &v3, "0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberT", 6);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | *((long long *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v8, "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDis", 10);
    clap_builder::builder::arg::Arg::short::h9e1d516c35bb20b5(&v0, &v8, 99);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v8, &v0, "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDis", 10);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v0, &v8, "Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe num", 47);
    clap_builder::builder::arg::Arg::action::h8e552b69203e5e67(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v3, "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file ", 6);
    clap_builder::builder::arg::Arg::short::h9e1d516c35bb20b5(&v0, &v3, 100);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v3, &v0, "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file ", 6);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v0, &v3, "Display help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfile", 36);
    clap_builder::builder::arg::Arg::action::h8e552b69203e5e67(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v8, "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into ", 11);
    clap_builder::builder::arg::Arg::short::h9e1d516c35bb20b5(&v0, &v8, 112);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v8, &v0, "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into ", 11);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v0, &v8, "Do not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/", 44);
    clap_builder::builder::arg::Arg::action::h8e552b69203e5e67(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v3, "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginn", 7);
    clap_builder::builder::arg::Arg::short::h9e1d516c35bb20b5(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v3, &v0, "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginn", 7);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v0, &v3, "Squeeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 37);
    clap_builder::builder::arg::Arg::action::h8e552b69203e5e67(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v8, "plainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 5);
    clap_builder::builder::arg::Arg::short::h9e1d516c35bb20b5(&v0, &v8, 117);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v8, &v0, "plainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 5);
    clap_builder::builder::arg::Arg::action::h8e552b69203e5e67(&v0, &v8, 2);
    memcpy(&v11, &v0, 584);
    v14 = v1 | 4;
    v15 = v2;
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v3, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank line", 7);
    clap_builder::builder::arg::Arg::short::h9e1d516c35bb20b5(&v0, &v3, 80);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v3, &v0, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank line", 7);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) & -34 | 32;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::value_name::h4ebae34dbfc07908(&v3, &v0, "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank line", 7);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v0, &v3, "Display file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 41);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v8, "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple b", 9);
    clap_builder::builder::arg::Arg::short::h9e1d516c35bb20b5(&v0, &v8, 70);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v8, &v0, "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple b", 9);
    clap_builder::builder::arg::Arg::num_args::hd7b2ca4462ec0390(&v0, &v8, v17);
    clap_builder::builder::arg::Arg::value_name::h4ebae34dbfc07908(&v8, &v0, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    v11 = 4;
    v12 = ::0x4dbd70::alloc::boxed::Box$LT$T$GT$::new::h47971ab6b84a50cf();
    v13 = &g_563820;
    clap_builder::builder::arg::Arg::value_parser::h1a94d0119e09c43c(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v11, &v0, "Display file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 39);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v3, "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze", 5);
    clap_builder::builder::arg::Arg::short::h9e1d516c35bb20b5(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v3, &v0, "linesnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze", 5);
    clap_builder::builder::arg::Arg::value_name::h4ebae34dbfc07908(&v0, &v3, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    clap_builder::builder::arg::Arg::num_args::hd7b2ca4462ec0390(&v3, &v0, v17);
    _$LT$u16$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hca3894c06cc9ec4c(&v0, v18, v17);
    clap_builder::builder::value_parser::RangedI64ValueParser$LT$T$GT$::range::h9bd8101bfd46f2dc(&v11, &v0, 0);
    clap_builder::builder::arg::Arg::value_parser::hc38e11f197b39b53(&v0, &v3, &v11);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v11, &v0, "The number of lines per screen fullSame as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 35);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v8, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    clap_builder::builder::arg::Arg::long::h83b3c48ff2e0a20b(&v0, &v8, "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.28Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display textSqueeze mult", 6);
    clap_builder::builder::arg::Arg::num_args::hd7b2ca4462ec0390(&v8, &v0, v17);
    _$LT$u16$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hca3894c06cc9ec4c(&v0, v18, v17);
    clap_builder::builder::value_parser::RangedI64ValueParser$LT$T$GT$::range::h9bd8101bfd46f2dc(&v11, &v0, 0);
    clap_builder::builder::arg::Arg::value_parser::hc38e11f197b39b53(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v11, &v0, "Same as --linesfilesPath to the files to be readsrc/uu/more/src/more.rs\r", 15);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h06669568b8fee785(&v3, "filesPath to the files to be readsrc/uu/more/src/more.rs\r", 5);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) & -2;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::action::h8e552b69203e5e67(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::help::h111be1a80584ce58(&v0, &v3, "Path to the files to be readsrc/uu/more/src/more.rs\r", 28);
    clap_builder::builder::arg::Arg::value_hint::h4c39d77df43e8da8(&v3, &v0, 3);
    clap_builder::builder::command::Command::arg::ha67ea526436ac47c(a0, &v8, &v3);
    return a0;
}
