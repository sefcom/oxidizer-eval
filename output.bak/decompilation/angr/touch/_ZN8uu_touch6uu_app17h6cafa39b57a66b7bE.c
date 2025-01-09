long long uu_touch::uu_app::h6cafa39b57a66b7b(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::h8f6f053073336047(&v39, uucore::util_name::h60d842bf27b05e82(), v53);
    clap_builder::builder::command::Command::version::h249a8addfe9218b9(&v3, &v39, "0.0.28Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current ", 6);
    clap_builder::builder::command::Command::about::hcd0c64ae1fb3bf44(&v39, &v3, "Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeST", 76);
    uucore::format_usage::h76fcb2d15fbabc58(&v27, "{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symb", 21);
    clap_builder::builder::command::Command::override_usage::h4f72e345e4c2d551(&v3, &v39, &v27);
    memcpy(&v39, &v3, 700);
    v42 = 1126449662918784 | *((long long *)&v19);
    v43 = *((int *)&v20);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v3, "helpt", 4);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&v27, &v3, "helpt", 4);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v3, &v27, "Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of ", 23);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&v27, &v3, 5);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v3, &v39, &v27);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v39, "accessmodificationno-createno-dereferencereferencetimestamp", 6);
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&v27, &v39, 97);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v39, &v27, "change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (on", 27);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&v27, &v39, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v39, &v3, &v27);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v3, "timestamp", 9);
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&v27, &v3, 116);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v3, &v27, "use [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can cha", 53);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&v27, &v3, "STAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times", 5);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v3, &v39, &v27);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v39, "datethur]", 4);
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&v27, &v39, 100);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&v39, &v27, "datethur]", 4);
    memcpy(&v27, &v39, 584);
    v37 = *((int *)&v40) | 32;
    v38 = *((int *)&v41);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v39, &v27, "parse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times inst", 49);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&v27, &v39, "STRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times instead of the current timechange only the specified ", 6);
    clap_builder::builder::arg::Arg::conflicts_with::hdbb9d93b1671065a(&v44, &v27, "timestamp", 9);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v39, &v3, &v44);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v3, "modificationno-createno-dereferencereferencetimestamp", 12);
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&v27, &v3, 109);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v3, &v27, "change only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times instead of the current timechange only the specified time: ", 33);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&v27, &v3, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v3, &v39, &v27);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v39, "no-createno-dereferencereferencetimestamp", 9);
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&v27, &v39, 99);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&v39, &v27, "no-createno-dereferencereferencetimestamp", 9);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v27, &v39, "do not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are e", 23);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&v44, &v27, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v39, &v3, &v44);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v3, "no-dereferencereferencetimestamp", 14);
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&v27, &v3, 104);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&v3, &v27, "no-dereferencereferencetimestamp", 14);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v27, &v3, "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modif", 119);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&v44, &v27, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v3, &v39, &v44);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v39, "referencetimestamp", 9);
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&v27, &v39, 114);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&v39, &v27, "referencetimestamp", 9);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v27, &v39, "use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -maccessusemodify-setting times of : No such file or directory: \n", 49);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&v39, &v27, "FILE", 4);
    v0 = 2;
    v46 = *((long long *)&v2);
    v44 = v0;
    v45 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::hb52e9aea5bfdb3a1(&v27, &v39, &v44);
    clap_builder::builder::arg::Arg::value_hint::h404e11100d0a1c16(&v39, &v27, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hdbb9d93b1671065a(&v27, &v39, "timestamp", 9);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v39, &v3, &v27);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v3, "timeHashj", 4);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&v27, &v3, "timeHashj", 4);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&v3, &v27, "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -maccessusemodify-setting times of : No such file or directory: \n", 122);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&v27, &v3, &g_4655d8, 4);
    v9 = "atimemtime0.0.28Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead o";
    v10 = 5;
    v6 = 0x8000000000000000;
    *((int128_t *)&v7) = *((int128_t *)&v26);
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v11 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&v44, &v3, "accessusemodify-setting times of : No such file or directory: \n", 6);
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&v21, &v44, "usemodify-setting times of : No such file or directory: \n", 3);
    v9 = "mtime0.0.28Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of cur";
    v10 = 5;
    v6 = 0x8000000000000000;
    *((int128_t *)&v7) = *((int128_t *)&v26);
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v11 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&v44, &v3, "modify-setting times of : No such file or directory: \n", 6);
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
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc2cee83c12a38d49(&v21, &v3);
    clap_builder::builder::arg::Arg::value_parser::he866d5515236ff25(&v44, &v27, &v21);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v3, &v39, &v44);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&v39, "filesatimemtime0.0.28Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it inst", 5);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&v27, &v39, 1);
    clap_builder::builder::arg::Arg::num_args::h203cb77198aa86dd(&v39, &v27);
    clap_builder::builder::arg::Arg::value_parser::hb52e9aea5bfdb3a1(&v27, &v39, &v0);
    clap_builder::builder::arg::Arg::value_hint::h404e11100d0a1c16(&v44, &v27, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&v39, &v3, &v44);
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
    clap_builder::builder::arg_group::ArgGroup::id::hcace4fe8ee13b965(&v27, &v3, "sourcesaccessmodificationno-createno-dereferencereferencetimestamp", 7);
    v44 = "timestamp";
    v45 = 9;
    v46 = "datethur]";
    v47 = 4;
    v48 = "referencetimestamp";
    v49 = 9;
    clap_builder::builder::arg_group::ArgGroup::args::hb7318d04a0d50504(&v3, &v27, &v44);
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
    clap_builder::builder::command::Command::group::hdb1f30e6b6af6197(a0, &v39, &v27);
    return a0;
}
