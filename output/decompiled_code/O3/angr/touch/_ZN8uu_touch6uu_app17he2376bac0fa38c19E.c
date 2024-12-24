long long uu_touch::uu_app::he2376bac0fa38c19(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0xad0]
    char v1;  // [bp-0xac8]
    char v2;  // [bp-0xac0]
    int v3;  // [bp-0xab8], Other Possible Types: void*, char
    unsigned long long v4;  // [sp-0xab0]
    int v5;  // [sp-0xaa8], Other Possible Types: void*
    unsigned long long v6;  // [sp-0xaa0]
    int v7;  // [bp-0xa98], Other Possible Types: unsigned long long
    int v8;  // [bp-0xa90]
    int v9;  // [sp-0xa88], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xa80]
    void* v11;  // [bp-0xa78], Other Possible Types: unsigned long long, char
    int v12;  // [bp-0xa70], Other Possible Types: unsigned long long
    void* v13;  // [sp-0xa68]
    int v14;  // [bp-0xa60], Other Possible Types: unsigned short
    char v15;  // [sp-0xa5f]
    int v16;  // [sp-0xa50]
    int v17;  // [sp-0xa40]
    unsigned long long v18;  // [sp-0xa30]
    char v19;  // [bp-0x7fc]
    char v20;  // [bp-0x7f4]
    char v21;  // [bp-0x7f0]
    char v22;  // [bp-0x7e0]
    char v23;  // [bp-0x7d0]
    char v24;  // [bp-0x7c0]
    char v25;  // [bp-0x7b0]
    char v26;  // [bp-0x7a8]
    int v27;  // [bp-0x798], Other Possible Types: char
    int v28;  // [sp-0x788]
    int v29;  // [sp-0x778]
    int v30;  // [sp-0x768]
    int v31;  // [sp-0x758]
    unsigned long long v32;  // [sp-0x748]
    char v33;  // [sp-0x740]
    char v34;  // [sp-0x73f]
    unsigned int v35;  // [sp-0x73e]
    unsigned short v36;  // [sp-0x73a]
    unsigned int v37;  // [sp-0x550]
    unsigned int v38;  // [sp-0x54c]
    char v39;  // [bp-0x540]
    char v40;  // [bp-0x2f8]
    char v41;  // [bp-0x2f4]
    unsigned long long v42;  // [sp-0x284]
    unsigned int v43;  // [sp-0x27c]
    char v44;  // [bp-0x278], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v45;  // [sp-0x270]
    unsigned long long v46;  // [sp-0x268]
    unsigned long long v47;  // [sp-0x260]
    char v48;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v49;  // [sp-0x250]
    char v50;  // [bp-0x248]
    char v51;  // [bp-0x238]
    unsigned long long v53;  // rdx
    int v54;  // xmm1
    int v55;  // xmm2
    int v56;  // xmm3
    int v57;  // xmm1
    int v58;  // xmm2
    int v59;  // xmm3

    clap_builder::builder::command::Command::new::h048126e9e004e7c0(&v39, uucore::util_name::h412db5e565a079f3(), v53);
    clap_builder::builder::command::Command::version::h08e4bf5773036147(&v3, &v39, "0.0.28Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current ", 6);
    clap_builder::builder::command::Command::about::h6c4db7eb0ff8af3e(&v39, &v3, "Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeST", 76);
    uucore::format_usage::h00b69bae12d8ac9c(&v27, "{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symb", 21);
    clap_builder::builder::command::Command::override_usage::hdaf86f4dd0638e6a(&v3, &v39, &v27);
    memcpy(&v39, &v3, 700);
    v42 = 1126449662918784 | *((long long *)&v19);
    v43 = *((int *)&v20);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v3, "helpt", 4);
    clap_builder::builder::arg::Arg::long::ha9a905c3b4db3e8a(&v27, &v3, "helpt", 4);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v3, &v27, "Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of ", 23);
    clap_builder::builder::arg::Arg::action::hdef424e857df1ad0(&v27, &v3, 5);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v3, &v39, &v27);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v39, "accessmodificationno-createno-dereference", 6);
    clap_builder::builder::arg::Arg::short::h6c81b5011f5b93c6(&v27, &v39, 97);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v39, &v27, "change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (on", 27);
    clap_builder::builder::arg::Arg::action::hdef424e857df1ad0(&v27, &v39, 2);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v39, &v3, &v27);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v3, "timestampaccessmodificationno-createno-dereference", 9);
    clap_builder::builder::arg::Arg::short::h6c81b5011f5b93c6(&v27, &v3, 116);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v3, &v27, "use [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can cha", 53);
    clap_builder::builder::arg::Arg::value_name::h7f6955f7b17cd571(&v27, &v3, "STAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times", 5);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v3, &v39, &v27);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v39, "datethur]", 4);
    clap_builder::builder::arg::Arg::short::h6c81b5011f5b93c6(&v27, &v39, 100);
    clap_builder::builder::arg::Arg::long::ha9a905c3b4db3e8a(&v39, &v27, "datethur]", 4);
    memcpy(&v27, &v39, 584);
    v37 = *((int *)&v40) | 32;
    v38 = *((int *)&v41);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v39, &v27, "parse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times inst", 49);
    clap_builder::builder::arg::Arg::value_name::h7f6955f7b17cd571(&v27, &v39, "STRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times instead of the current timechange only the specified ", 6);
    clap_builder::builder::arg::Arg::conflicts_with::hc502c7cf917e145e(&v44, &v27, "timestampaccessmodificationno-createno-dereference", 9);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v39, &v3, &v44);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v3, "modificationno-createno-dereference", 12);
    clap_builder::builder::arg::Arg::short::h6c81b5011f5b93c6(&v27, &v3, 109);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v3, &v27, "change only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times instead of the current timechange only the specified time: ", 33);
    clap_builder::builder::arg::Arg::action::hdef424e857df1ad0(&v27, &v3, 2);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v3, &v39, &v27);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v39, "no-createno-dereference", 9);
    clap_builder::builder::arg::Arg::short::h6c81b5011f5b93c6(&v27, &v39, 99);
    clap_builder::builder::arg::Arg::long::ha9a905c3b4db3e8a(&v39, &v27, "no-createno-dereference", 9);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v27, &v39, "do not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are e", 23);
    clap_builder::builder::arg::Arg::action::hdef424e857df1ad0(&v44, &v27, 2);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v39, &v3, &v44);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v3, "no-dereference", 14);
    clap_builder::builder::arg::Arg::short::h6c81b5011f5b93c6(&v27, &v3, 104);
    clap_builder::builder::arg::Arg::long::ha9a905c3b4db3e8a(&v3, &v27, "no-dereference", 14);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v27, &v3, "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modif", 119);
    clap_builder::builder::arg::Arg::action::hdef424e857df1ad0(&v44, &v27, 2);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v3, &v39, &v44);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v39, "referencetimestampaccessmodificationno-createno-dereference", 9);
    clap_builder::builder::arg::Arg::short::h6c81b5011f5b93c6(&v27, &v39, 114);
    clap_builder::builder::arg::Arg::long::ha9a905c3b4db3e8a(&v39, &v27, "referencetimestampaccessmodificationno-createno-dereference", 9);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v27, &v39, "use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -matimeaccessusemtimemodify-No such file or directory: \nsetting times of : No such file", 49);
    clap_builder::builder::arg::Arg::value_name::h7f6955f7b17cd571(&v39, &v27, "FILE", 4);
    v0 = 2;
    v46 = *((long long *)&v2);
    v44 = v0;
    v45 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::hb6f0c2ec4d711e45(&v27, &v39, &v44);
    clap_builder::builder::arg::Arg::value_hint::h99ba5c5bfef0274b(&v39, &v27, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hc502c7cf917e145e(&v27, &v39, "timestampaccessmodificationno-createno-dereference", 9);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v39, &v3, &v27);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v3, "timeHashj", 4);
    clap_builder::builder::arg::Arg::long::ha9a905c3b4db3e8a(&v27, &v3, "timeHashj", 4);
    clap_builder::builder::arg::Arg::help::h156060531dd32559(&v3, &v27, "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -matimeaccessusemtimemodify-No such file or directory: \nsetting times of : No such file or directory", 122);
    clap_builder::builder::arg::Arg::value_name::h7f6955f7b17cd571(&v27, &v3, &g_4652c4, 4);
    v9 = "atimeaccessusemtimemodify-No such file or directory: \nsetting times of : No such file or directory";
    v10 = 5;
    v6 = 0x8000000000000000;
    *((int128_t *)&v7) = *((int128_t *)&v26);
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v11 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h712ea99bb3b89aa1(&v44, &v3, "accessusemtimemodify-No such file or directory: \nsetting times of : No such file or directory", 6);
    clap_builder::builder::possible_value::PossibleValue::alias::h712ea99bb3b89aa1(&v21, &v44, "usemtimemodify-No such file or directory: \nsetting times of : No such file or directory", 3);
    v9 = "mtimemodify-No such file or directory: \nsetting times of : No such file or directory";
    v10 = 5;
    v6 = 0x8000000000000000;
    *((int128_t *)&v7) = *((int128_t *)&v26);
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v11 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h712ea99bb3b89aa1(&v44, &v3, "modify-No such file or directory: \nsetting times of : No such file or directory", 6);
    v54 = *((int128_t *)&v22);
    v55 = *((int128_t *)&v23);
    v56 = *((int128_t *)&v24);
    *((int128_t *)&v3) = *((int128_t *)&v21);
    v5 = v54;
    v7 = v55;
    v9 = v56;
    v11 = *((long long *)&v25);
    v57 = *((int128_t *)&v46);
    v58 = *((int128_t *)&v48);
    v59 = *((int128_t *)&v50);
    *((int128_t *)&v12) = *((int128_t *)&v44);
    v14 = v57;
    v16 = v58;
    v17 = v59;
    v18 = *((long long *)&v51);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h0cf08c20c9d5dd46(&v21, &v3);
    clap_builder::builder::arg::Arg::value_parser::hcee8bcc286800e7a(&v44, &v27, &v21);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v3, &v39, &v44);
    clap_builder::builder::arg::Arg::new::he8ad7e41d1311ad1(&v39, "files0.0.28Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of cur", 5);
    clap_builder::builder::arg::Arg::action::hdef424e857df1ad0(&v27, &v39, 1);
    clap_builder::builder::arg::Arg::num_args::h9d1b6d0baab8da4b(&v39, &v27);
    clap_builder::builder::arg::Arg::value_parser::hb6f0c2ec4d711e45(&v27, &v39, &v0);
    clap_builder::builder::arg::Arg::value_hint::h99ba5c5bfef0274b(&v44, &v27, 2);
    clap_builder::builder::command::Command::arg::h30ac463da4c2e04d(&v39, &v3, &v44);
    v12 = 1;
    v13 = 0;
    v3 = 0;
    v4 = 8;
    v14 = 0;
    *((int128_t *)&v5) = 0;
    v7 = 8;
    *((int128_t *)&v8) = 0;
    v10 = 8;
    v11 = 0;
    clap_builder::builder::arg_group::ArgGroup::id::hca8a070ea456f998(&v27, &v3, "sourcesreferencetimestampaccessmodificationno-createno-dereference", 7);
    v44 = "timestampaccessmodificationno-createno-dereference";
    v45 = 9;
    v46 = "datethur]";
    v47 = 4;
    v48 = "referencetimestampaccessmodificationno-createno-dereference";
    v49 = 9;
    clap_builder::builder::arg_group::ArgGroup::args::h00b7b9a92b2e2720(&v3, &v27, &v44);
    v15 = 1;
    *((int128_t *)&v27) = *((int128_t *)&v3);
    *((int128_t *)&v28) = (int128_t)v5;
    *((int128_t *)&v29) = *((int128_t *)&v7);
    *((int128_t *)&v30) = (int128_t)(&v8)[8];
    *((int128_t *)&v31) = *((int128_t *)&v11);
    v32 = v13;
    v33 = v14;
    v34 = v15;
    v35 = (int)(&v14)[2];
    v36 = (short)(&v14)[6];
    clap_builder::builder::command::Command::group::h0c49910de994cf94(a0, &v39, &v27);
    return a0;
}
