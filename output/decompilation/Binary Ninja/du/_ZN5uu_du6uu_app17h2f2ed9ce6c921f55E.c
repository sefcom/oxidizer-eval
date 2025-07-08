
  int64_t uu_du::uu_app::h2f2ed9ce6c921f55(int64_t arg1)

{
    void var_5c0;
    clap_builder::builder::command::Command::new::h162f37311a2c88cd(&var_5c0, 
        uucore::util_name::h60d842bf27b05e82());
    void var_888;
    clap_builder::builder::command::Command::version::h4713cff2823b85d0(&var_888, &var_5c0, 
        "0.0.28Estimate file space usageD…");
    clap_builder::builder::command::Command::about::h45b7a1a0e2736312(&var_5c0, &var_888, 
        "Estimate file space usageDisplay…", 0x19);
    clap_builder::builder::command::Command::after_help::hc73d7b7264e674dd(&var_888, &var_5c0, 
        "Display values are in units of t…", 0x22e);
    int64_t var_ae8;
    uucore::format_usage::h76fcb2d15fbabc58(&var_ae8, "{} [OPTION]... [FILE]...\n{} [OP…", 0x37);
    clap_builder::builder::command::Command::override_usage::h04167bad9a431f50(&var_5c0, &var_888, 
        &var_ae8);
    memcpy(&var_888, &var_5c0, 0x2bc);
    int64_t var_304;
    int64_t var_5cc = 0x4008000040080 | var_304;
    int32_t var_2fc;
    int32_t var_5c4 = var_2fc;
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "helpNoneshimname\x1b[0m    Cyan"…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_5c0, 
        "helpNoneshimname\x1b[0m    Cyan"…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_5c0, &var_ae8, 
        "Print help information.allwrite …", 0x17);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_5c0, 5);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "allwrite counts for all files, n…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x61);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "allwrite counts for all files, n…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "write counts for all files, not …", 0x30);
    int128_t var_268;
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "apparent-sizeprint apparent size…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_5c0, 
        "apparent-sizeprint apparent size…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_5c0, &var_ae8, 
        "print apparent sizes, rather tha…", 0xc4);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_5c0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "block-size ignored\nsrc/uu/du/sr…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x42);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "block-size ignored\nsrc/uu/du/sr…");
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&var_ae8, &var_888, "SIZE");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_268, &var_ae8, 
        "scale sizes by SIZE before print…", 0x76);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "bbytesequivalent to '--apparent-…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_5c0, 0x62);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_5c0, &var_ae8, 
        "bytesequivalent to '--apparent-s…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_5c0, 
        "equivalent to '--apparent-size -…", 0x2e);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "ctotalproduce a grand totaldmax-…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_888, 
        "totalproduce a grand totaldmax-d…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_888, &var_ae8, 0x63);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "produce a grand totaldmax-depthN…", 0x15);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "dmax-depthNprint the total for a…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_5c0, 0x64);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_5c0, &var_ae8, 
        "max-depthNprint the total for a …");
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&var_ae8, &var_5c0, 
        "Nprint the total for a directory…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_268, &var_ae8, 
        "print the total for a directory …", 0xa0);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "hhuman-readableprint sizes in hu…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_888, 
        "human-readableprint sizes in hum…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_888, &var_ae8, 0x68);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "print sizes in human readable fo…", 0x37);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "inodeslist inode usage informati…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_5c0, 
        "inodeslist inode usage informati…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_5c0, &var_ae8, 
        "list inode usage information ins…", 0x48);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_5c0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "klike --block-size=1Klcount-link…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x6b);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_888, &var_ae8, 
        "like --block-size=1Klcount-links…", 0x14);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_888, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "lcount-linkscount sizes many tim…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_5c0, 0x6c);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_5c0, &var_ae8, 
        "count-linkscount sizes many time…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_5c0, 
        "count sizes many times if hard l…", 0x25);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "dereferencefollow all symbolic l…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x4c);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "dereferencefollow all symbolic l…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "follow all symbolic linksfollow …", 0x19);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "dereference-argsConnection reset…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_5c0, 0x44);
    clap_builder::builder::arg::Arg::visible_short_alias::h5d050c0345745f6f(&var_5c0, &var_ae8, 
        0x48);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_5c0, 
        "dereference-argsConnection reset…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_5c0, &var_ae8, 
        "follow only symlinks that are li…", 0x38);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_5c0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "no-dereferencedon't follow any s…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x50);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "no-dereferencedon't follow any s…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "don't follow any symbolic links …", 0x35);
    clap_builder::builder::arg::Arg::overrides_with::h68fe5fb7c2f3d782(&var_888, &var_ae8, 
        "dereferencefollow all symbolic l…");
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_888, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "mlike --block-size=1M0end each o…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_5c0, 0x6d);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_5c0, &var_ae8, 
        "like --block-size=1M0end each ou…", 0x14);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_5c0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "0end each output line with 0 byt…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x30);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "nullBOLDBlue\x1b[4mSomedumb\x1b[…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "end each output line with 0 byte…", 0x34);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "Sseparate-dirsdo not include siz…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_5c0, 0x53);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_5c0, &var_ae8, 
        "separate-dirsdo not include size…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_5c0, 
        "do not include size of subdirect…", 0x25);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "ssummarizedisplay only a total f…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x73);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "summarizedisplay only a total fo…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "display only a total for each ar…", 0x26);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "silike -h, but use powers of 100…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_5c0, 
        "silike -h, but use powers of 100…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_5c0, &var_ae8, 
        "like -h, but use powers of 1000 …", 0x28);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_5c0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "one-file-systemskip directories …");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x78);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "one-file-systemskip directories …");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "skip directories on different fi…", 0x2a);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "thresholdexclude entries smaller…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_5c0, 0x74);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_5c0, &var_ae8, 
        "thresholdexclude entries smaller…");
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&var_ae8, &var_5c0, "SIZE");
    clap_builder::builder::arg::Arg::num_args::h0c0d87da7d7ac489(&var_5c0, &var_ae8);
    memcpy(&var_ae8, &var_5c0, 0x248);
    int32_t var_378;
    int32_t var_8a0 = var_378 | 0x20;
    int32_t var_374;
    int32_t var_89c = var_374;
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_268, &var_ae8, 
        "exclude entries smaller than SIZ…", 0x57);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "verbose: \n\ttotal\t: read error…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x76);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "verbose: \n\ttotal\t: read error…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "verbose mode (option not present…", 0x32);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "excludeadding  to the exclude li…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_5c0, 
        "excludeadding  to the exclude li…");
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&var_5c0, &var_ae8, 
        "PATTERNexclude files that match …");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_5c0, 
        "exclude files that match PATTERN…", 0x20);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 1);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "exclude-fromexcludeadding  to th…");
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&var_ae8, &var_888, 0x58);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_888, &var_ae8, 
        "exclude-fromexcludeadding  to th…");
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&var_ae8, &var_888, 
        "FILEcharWORDJuly ->  to \x1b[2mA…");
    clap_builder::builder::arg::Arg::value_hint::haf2f2a709c5fadce(&var_888, &var_ae8, 3);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_888, 
        "exclude files that match any pat…", 0x2c);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_268, &var_ae8, 1);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "files0-fromsummarize device usag…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_5c0, 
        "files0-fromsummarize device usag…");
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&var_5c0, &var_ae8, 
        "FILEcharWORDJuly ->  to \x1b[2mA…");
    clap_builder::builder::arg::Arg::value_hint::haf2f2a709c5fadce(&var_ae8, &var_5c0, 3);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_5c0, &var_ae8, 
        "summarize device usage of the NU…", 0x7b);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_5c0, 1);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "timecodetip:\x1b[3mu128for<keysK…");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_888, 
        "timecodetip:\x1b[3mu128for<keysK…");
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&var_888, &var_ae8, 
        "WORDJuly ->  to \x1b[2mAnsi -- \x1b…");
    memcpy(&var_ae8, &var_888, 0x248);
    int32_t var_640;
    int32_t var_8a0_1 = 0x80 | var_640;
    int32_t var_63c;
    int32_t var_89c_1 = var_63c;
    clap_builder::builder::arg::Arg::num_args::he1e39bae9b905f29(&var_888, &var_ae8);
    char const* const var_ab8 = "atimectime0.0.28Estimate file sp…";
    int64_t var_ab0 = 5;
    int64_t var_ad0 = -0x8000000000000000;
    int128_t var_898;
    int128_t var_ac8 = var_898;
    var_ae8 = 0;
    int64_t var_ae0 = 8;
    int64_t var_ad8 = 0;
    char var_aa8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::hda18b201abad5f4a(&var_268, 
        &var_ae8, "accessusestatusbirthshow time of…");
    int128_t var_2f8;
    clap_builder::builder::possible_value::PossibleValue::alias::hda18b201abad5f4a(&var_2f8, 
        &var_268, "usestatusbirthshow time of the l…");
    char const* const var_ab8_1 = "ctime0.0.28Estimate file space u…";
    int64_t var_ab0_1 = 5;
    int64_t var_ad0_1 = -0x8000000000000000;
    int128_t var_ac8_1 = var_898;
    var_ae8 = 0;
    int64_t var_ae0_1 = 8;
    int64_t var_ad8_1 = 0;
    char var_aa8_1 = 0;
    int128_t var_2b0;
    clap_builder::builder::possible_value::PossibleValue::alias::hda18b201abad5f4a(&var_2b0, 
        &var_ae8, "statusbirthshow time of the last…");
    char const* const var_ab8_2 = "creationUIoErrorinternal error: …";
    int64_t var_ab0_2 = 8;
    int64_t var_ad0_2 = -0x8000000000000000;
    int128_t var_ac8_2 = var_898;
    var_ae8 = 0;
    int64_t var_ae0_2 = 8;
    int64_t var_ad8_2 = 0;
    char var_aa8_2 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::hda18b201abad5f4a(&var_268, 
        &var_ae8, "birthshow time of the last modif…");
    var_ae8 = var_2f8;
    int128_t var_2e8;
    var_ad8_2 = var_2e8;
    int128_t var_2d8;
    int128_t var_ac8_3 = var_2d8;
    int128_t var_2c8;
    var_ab8_2 = var_2c8;
    int64_t var_2b8;
    var_aa8_2 = var_2b8;
    int128_t var_aa0 = var_2b0;
    int128_t var_2a0;
    int128_t var_a90 = var_2a0;
    int128_t var_290;
    int128_t var_a80 = var_290;
    int128_t var_280;
    int128_t var_a70 = var_280;
    int64_t var_270;
    int64_t var_a60 = var_270;
    int64_t var_228;
    int64_t var_a18 = var_228;
    int128_t var_238;
    int128_t var_a28 = var_238;
    int128_t var_248;
    int128_t var_a38 = var_248;
    int128_t var_258;
    int128_t var_a48 = var_258;
    int128_t var_a58 = var_268;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hf68df665b10f09a2(&var_268, &var_ae8);
    clap_builder::builder::arg::Arg::value_parser::hdecf3bfdbea0147c(&var_ae8, &var_888, &var_268);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_268, &var_ae8, 
        "show time of the last modificati…", 0xd5);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_888, &var_5c0, &var_268);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_5c0, 
        "time-styleSTYLEshow times using …");
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&var_ae8, &var_5c0, 
        "time-styleSTYLEshow times using …");
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&var_5c0, &var_ae8, 
        "STYLEshow times using style STYL…");
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&var_ae8, &var_5c0, 
        "show times using style STYLE: fu…", 0x60);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&var_5c0, &var_888, &var_ae8);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&var_888, 
        "FILEcharWORDJuly ->  to \x1b[2mA…");
    memcpy(&var_ae8, &var_888, 0x248);
    int32_t var_8a0_2 = var_640 | 4;
    int32_t var_89c_2 = var_63c;
    clap_builder::builder::arg::Arg::value_hint::haf2f2a709c5fadce(&var_888, &var_ae8, 2);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&var_ae8, &var_888, 1);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(arg1, &var_5c0, &var_ae8);
    return arg1;
}
