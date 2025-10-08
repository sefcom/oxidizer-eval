
  fn uu_du::uu_app::habf9d5389fa2ad43(arg1: i64) -> i64

{
    let mut var_8c0: ();
    clap_builder::builder::command::Command::new::h45cdf7975ffd0ad0(&var_8c0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_5f8: ();
    clap_builder::builder::command::Command::version::h71ca2a97acaab561(&var_5f8, &var_8c0);
    clap_builder::builder::command::Command::about::h05551ccc0695b999(&var_8c0, &var_5f8);
    clap_builder::builder::command::Command::after_help::h8901b1f912cb5214(&var_5f8, &var_8c0);
    let mut var_b58: i64;
    uucore::format_usage::he053403a896311ed(&var_b58, "{} [OPTION]... [FILE]...\n{} [OP…", 0x37);
    clap_builder::builder::command::Command::override_usage::h47191a5b99330ee2(&var_8c0, &var_5f8, 
        &var_b58);
    memcpy(&var_5f8, &var_8c0, 0x2bc);
    let var_604: i64;
    let var_33c: i64 = 0x8008000080080 | var_604;
    let var_5fc: i32;
    let var_334: i32 = var_5fc;
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_8c0, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_8c0, &var_b58, 
        "Print help information.allwrite …", 0x17);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_8c0, 5);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "allwrite counts for all files, n…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x61);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "allwrite counts for all files, n…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "write counts for all files, not …", 0x30);
    let mut var_2a0: i128;
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "apparent-sizeprint apparent size…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_8c0, 
        "apparent-sizeprint apparent size…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_8c0, &var_b58, 
        "print apparent sizes, rather tha…", 0xc4);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_8c0, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "block-size ignored\nsrc/uu/du/sr…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x42);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "block-size ignored\nsrc/uu/du/sr…");
    clap_builder::builder::arg::Arg::value_name::h462c81dd99a90185(&var_b58, &var_5f8, "SI");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_2a0, &var_b58, 
        "scale sizes by SIZE before print…", 0x76);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "bbytesequivalent to '--apparent-…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_8c0, 0x62);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_8c0, &var_b58, 
        "bytesequivalent to '--apparent-s…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_8c0, 
        "equivalent to '--apparent-size -…", 0x2e);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "ctotalproduce a grand totaldmax-…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_5f8, 
        "totalproduce a grand totaldmax-d…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_5f8, &var_b58, 0x63);
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "produce a grand totaldmax-depthN…", 0x15);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "dmax-depthNprint the total for a…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_8c0, 0x64);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_8c0, &var_b58, 
        "max-depthNprint the total for a …");
    clap_builder::builder::arg::Arg::value_name::h462c81dd99a90185(&var_b58, &var_8c0, 
        "Nprint the total for a directory…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_2a0, &var_b58, 
        "print the total for a directory …", 0xa0);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "hhuman-readableprint sizes in hu…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_5f8, 
        "human-readableprint sizes in hum…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_5f8, &var_b58, 0x68);
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "print sizes in human readable fo…", 0x37);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "inodeslist inode usage informati…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_8c0, 
        "inodeslist inode usage informati…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_8c0, &var_b58, 
        "list inode usage information ins…", 0x48);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_8c0, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "klike --block-size=1Klcount-link…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x6b);
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_5f8, &var_b58, 
        "like --block-size=1Klcount-links…", 0x14);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_5f8, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "lcount-linkscount sizes many tim…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_8c0, 0x6c);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_8c0, &var_b58, 
        "count-linkscount sizes many time…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_8c0, 
        "count sizes many times if hard l…", 0x25);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "dereferencefollow all symbolic l…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x4c);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "dereferencefollow all symbolic l…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "follow all symbolic linksfollow …", 0x19);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "dereference-argsConnection reset…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_8c0, 0x44);
    clap_builder::builder::arg::Arg::visible_short_alias::h8abe76db7d80bfd5(&var_8c0, &var_b58);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_8c0, 
        "dereference-argsConnection reset…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_8c0, &var_b58, 
        "follow only symlinks that are li…", 0x38);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_8c0, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "no-dereferencedon't follow any s…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x50);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "no-dereferencedon't follow any s…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "don't follow any symbolic links …", 0x35);
    clap_builder::builder::arg::Arg::overrides_with::hbd211fffcbf27667(&var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_5f8, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "mlike --block-size=1M0end each o…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_8c0, 0x6d);
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_8c0, &var_b58, 
        "like --block-size=1M0end each ou…", 0x14);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_8c0, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "0end each output line with 0 byt…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x30);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "nullBOLDBlue\x1b[4mSomedumb\x1b[…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "end each output line with 0 byte…", 0x34);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "Sseparate-dirsdo not include siz…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_8c0, 0x53);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_8c0, &var_b58, 
        "separate-dirsdo not include size…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_8c0, 
        "do not include size of subdirect…", 0x25);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "ssummarizedisplay only a total f…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x73);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "summarizedisplay only a total fo…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "display only a total for each ar…", 0x26);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "silike -h, but use powers of 100…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_8c0, 
        "silike -h, but use powers of 100…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_8c0, &var_b58, 
        "like -h, but use powers of 1000 …", 0x28);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_8c0, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "one-file-systemskip directories …");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x78);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "one-file-systemskip directories …");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "skip directories on different fi…", 0x2a);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "thresholdexclude entries smaller…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_8c0, 0x74);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_8c0, &var_b58, 
        "thresholdexclude entries smaller…");
    clap_builder::builder::arg::Arg::value_name::h462c81dd99a90185(&var_b58, &var_8c0, "SI");
    clap_builder::builder::arg::Arg::num_args::hdb5535818e492c0e(&var_8c0, &var_b58);
    memcpy(&var_b58, &var_8c0, 0x278);
    let var_648: i32;
    let var_8e0: i32 = var_648 | 0x20;
    let var_644: i32;
    let var_8dc: i32 = var_644;
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_2a0, &var_b58, 
        "exclude entries smaller than SIZ…", 0x57);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "verbose: \n\ttotal\t: read error…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x76);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "verbose: \n\ttotal\t: read error…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "verbose mode (option not present…", 0x32);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 2);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "excludeverbose: \n\ttotal\t: rea…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_8c0, 
        "excludeverbose: \n\ttotal\t: rea…");
    clap_builder::builder::arg::Arg::value_name::h462c81dd99a90185(&var_8c0, &var_b58, 
        "PATTERNexclude files that match …");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_8c0, 
        "exclude files that match PATTERN…", 0x20);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 1);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "exclude-fromexcludeverbose: \n\t…");
    clap_builder::builder::arg::Arg::short::he552bdc63100fdb4(&var_b58, &var_5f8, 0x58);
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_5f8, &var_b58, 
        "exclude-fromexcludeverbose: \n\t…");
    clap_builder::builder::arg::Arg::value_name::h462c81dd99a90185(&var_b58, &var_5f8, 
        "FILEWORDcharJu");
    clap_builder::builder::arg::Arg::value_hint::h48d892b9356562a6(&var_5f8, &var_b58, 3);
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_5f8, 
        "exclude files that match any pat…", 0x2c);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_2a0, &var_b58, 1);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "files0-fromsummarize device usag…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_8c0, 
        "files0-fromsummarize device usag…");
    clap_builder::builder::arg::Arg::value_name::h462c81dd99a90185(&var_8c0, &var_b58, 
        "FILEWORDcharJu");
    clap_builder::builder::arg::Arg::value_hint::h48d892b9356562a6(&var_b58, &var_8c0, 3);
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_8c0, &var_b58, 
        "summarize device usage of the NU…", 0x7b);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_8c0, 1);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, 
        "timecodetip:\x1b[3mkeysu128for<\x1b…");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_5f8, 
        "timecodetip:\x1b[3mkeysu128for<\x1b…");
    clap_builder::builder::arg::Arg::value_name::h462c81dd99a90185(&var_5f8, &var_b58, 
        "WORDcharJu");
    memcpy(&var_b58, &var_5f8, 0x278);
    let var_380: i32;
    let var_8e0_1: i32 = 0x80 | var_380;
    let var_37c: i32;
    let var_8dc_1: i32 = var_37c;
    clap_builder::builder::arg::Arg::num_args::h41de31b25648b013(&var_5f8, &var_b58);
    let var_b28: *const i8 = "atimectime(uutils coreutils) 0.0…";
    let var_b20: i64 = 5;
    let var_b40: i64 = -0x8000000000000000;
    let var_8d0: i128;
    let var_b38: i128 = var_8d0;
    var_b58 = 0;
    let var_b50: i64 = 8;
    let var_b48: i64 = 0;
    let var_b18: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::hf18292d0dd5891e4(&var_2a0, 
        &var_b58, "accessusestatusbirthshow time of…");
    let mut var_330: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::hf18292d0dd5891e4(&var_330, 
        &var_2a0, "usestatusbirthshow time of the l…");
    let var_b28_1: *const i8 = "ctime(uutils coreutils) 0.0.30Es…";
    let var_b20_1: i64 = 5;
    let var_b40_1: i64 = -0x8000000000000000;
    let var_b38_1: i128 = var_8d0;
    var_b58 = 0;
    let var_b50_1: i64 = 8;
    let var_b48_1: i64 = 0;
    let var_b18_1: i8 = 0;
    let mut var_2e8: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::hf18292d0dd5891e4(&var_2e8, 
        &var_b58, "statusbirthshow time of the last…");
    let mut var_b28_2: *const i8 = "creationUIoErrorinternal error: …";
    let var_b20_2: i64 = 8;
    let var_b40_2: i64 = -0x8000000000000000;
    let var_b38_2: i128 = var_8d0;
    var_b58 = 0;
    let var_b50_2: i64 = 8;
    let mut var_b48_2: i64 = 0;
    let mut var_b18_2: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::hf18292d0dd5891e4(&var_2a0, 
        &var_b58, "birthshow time of the last modif…");
    var_b58 = var_330;
    let var_320: i128;
    var_b48_2 = var_320;
    let var_310: i128;
    let var_b38_3: i128 = var_310;
    let var_300: i128;
    var_b28_2 = var_300;
    let var_2f0: i64;
    var_b18_2 = var_2f0;
    let var_b10: i128 = var_2e8;
    let var_2d8: i128;
    let var_b00: i128 = var_2d8;
    let var_2c8: i128;
    let var_af0: i128 = var_2c8;
    let var_2b8: i128;
    let var_ae0: i128 = var_2b8;
    let var_2a8: i64;
    let var_ad0: i64 = var_2a8;
    let var_260: i64;
    let var_a88: i64 = var_260;
    let var_270: i128;
    let var_a98: i128 = var_270;
    let var_280: i128;
    let var_aa8: i128 = var_280;
    let var_290: i128;
    let var_ab8: i128 = var_290;
    let var_ac8: i128 = var_2a0;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h42ecd2172e02f350(&var_2a0, &var_b58);
    clap_builder::builder::arg::Arg::value_parser::ha48db8fe7c44b6ae(&var_b58, &var_5f8, &var_2a0);
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_2a0, &var_b58, 
        "show time of the last modificati…", 0xd5);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_5f8, &var_8c0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_8c0, 
        "time-styleSTYLEshow times using …");
    clap_builder::builder::arg::Arg::long::h3a9d5ebc30382ea1(&var_b58, &var_8c0, 
        "time-styleSTYLEshow times using …");
    clap_builder::builder::arg::Arg::value_name::h462c81dd99a90185(&var_8c0, &var_b58, 
        "STYLEshow times using style STYL…");
    clap_builder::builder::arg::Arg::help::h584a1d2e64fd917d(&var_b58, &var_8c0, 
        "show times using style STYLE: fu…", 0x60);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(&var_8c0, &var_5f8, &var_b58);
    clap_builder::builder::arg::Arg::new::hafcf7864a64549ef(&var_5f8, "FILEWORDcharJu");
    memcpy(&var_b58, &var_5f8, 0x278);
    let var_8e0_2: i32 = var_380 | 4;
    let var_8dc_2: i32 = var_37c;
    clap_builder::builder::arg::Arg::value_hint::h48d892b9356562a6(&var_5f8, &var_b58, 2);
    clap_builder::builder::arg::Arg::action::hb68e9e4dee372978(&var_b58, &var_5f8, 1);
    clap_builder::builder::command::Command::arg::h9f2affe725c5faaa(arg1, &var_8c0, &var_b58);
    arg1
}
