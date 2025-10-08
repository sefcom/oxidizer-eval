long long uu_touch::uu_app(unsigned long long a0)
{
    int v0;  // [bp-0xb20], Other Possible Types: char
    int v1;  // [bp-0xb10]
    int v2;  // [bp-0xb00]
    int v3;  // [bp-0xaf0]
    unsigned long long v4;  // [bp-0xae0]
    int v5;  // [bp-0xad8]
    void* v6;  // [bp-0xac8], Other Possible Types: char
    int v7;  // [bp-0xac8]
    unsigned long long v8;  // [bp-0xac0]
    int v9;  // [bp-0xab8], Other Possible Types: void*
    int v10;  // [bp-0xab8]
    unsigned long long v11;  // [bp-0xab0]
    int v12;  // [bp-0xaa8]
    unsigned long long v13;  // [bp-0xaa8]
    int v14;  // [bp-0xaa0]
    int v15;  // [bp-0xa98], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xa90]
    void* v17;  // [bp-0xa88], Other Possible Types: unsigned long long, char
    int v18;  // [bp-0xa80], Other Possible Types: unsigned long long
    void* v19;  // [bp-0xa78]
    int v20;  // [bp-0xa70], Other Possible Types: unsigned short
    char v21;  // [bp-0xa6f]
    unsigned int v22;  // [bp-0xa6e]
    int v23;  // [bp-0xa60]
    int v24;  // [bp-0xa50]
    unsigned long long v25;  // [bp-0xa40]
    unsigned long v26;  // [bp-0x80c]
    char v27;  // [bp-0x804]
    char v28;  // [bp-0x7f8]
    char v29;  // [bp-0x7e8]
    char v30;  // [bp-0x7d8]
    char v31;  // [bp-0x7c8]
    char v32;  // [bp-0x7b8]
    void* v33;  // [bp-0x7a8]
    char v34;  // [bp-0x7a0]
    char v35;  // [bp-0x79f]
    unsigned int v36;  // [bp-0x79e]
    unsigned short v37;  // [bp-0x79a]
    unsigned int v38;  // [bp-0x580]
    unsigned int v39;  // [bp-0x57c]
    char v40;  // [bp-0x578]
    unsigned int v41;  // [bp-0x300]
    char v42;  // [bp-0x2fc]
    unsigned long long v43;  // [bp-0x2bc]
    unsigned int v44;  // [bp-0x2b4]
    char v45;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v46;  // [bp-0x2b0]
    unsigned long long v47;  // [bp-0x2a8]
    char v48;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v49;  // [bp-0x298]
    char v50;  // [bp-0x290], Other Possible Types: unsigned long long
    unsigned long long v51;  // [bp-0x288]
    int v52;  // [bp-0x280]
    char v53;  // [bp-0x270]
    unsigned long long v56;  // rdx
    int v57;  // xmm1
    int v58;  // xmm2

    v40.new(uucore::util_name(), v56);
    v6.version(&v40);
    v40.about(&v6);
    uucore::format_usage(&v28, "{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symb", 21);
    v6.override_usage(&v40, &v28);
    memcpy(&v40, &v6, 700);
    v43 = 2252349570023552 | v26;
    v44 = *((int *)&v27);
    v6.new("helpt", 4);
    v28.long(&v6, "helpt", 4);
    v6.help(&v28, "Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of ", 23);
    v28.action(&v6, 5);
    v6.arg(&v40, &v28);
    v40.new("accessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 6);
    v28.short(&v40, 97);
    v40.help(&v28, "change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (on", 27);
    v28.action(&v40, 2);
    v40.arg(&v6, &v28);
    v6.new("timestampaccessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 9);
    v28.short(&v6, 116);
    v6.help(&v28, "use [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can cha", 53);
    v28.value_name(&v6, "STAMPparse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times", 5);
    v6.arg(&v40, &v28);
    v40.new("datethur]", 4);
    v28.short(&v40, 100);
    v40.long(&v28, "datethur]", 4);
    memcpy(&v28, &v40, 632);
    v38 = v41 | 32;
    v39 = *((int *)&v42);
    v40.help(&v28, "parse argument and use it instead of current timeSTRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times inst", 49);
    v28.value_name(&v40, "STRINGchange only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times instead of the current timechange only the specified ", 6);
    v45.conflicts_with(&v28);
    v40.arg(&v6, &v45);
    v6.new("modificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 12);
    v28.short(&v6, 109);
    v6.help(&v28, "change only the modification timedo not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file's times instead of the current timechange only the specified time: ", 33);
    v28.action(&v6, 2);
    v6.arg(&v40, &v28);
    v40.new("no-createno-dereferencefilessrc/uu/touch/src/touch.rs", 9);
    v28.short(&v40, 99);
    v40.long(&v28, "no-createno-dereferencefilessrc/uu/touch/src/touch.rs", 9);
    v28.help(&v40, "do not create any filesaffect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are e", 23);
    v45.action(&v28, 2);
    v40.arg(&v6, &v45);
    v6.new("no-dereferencefilessrc/uu/touch/src/touch.rs", 14);
    v28.short(&v6, 104);
    v6.long(&v28, "no-dereferencefilessrc/uu/touch/src/touch.rs", 14);
    v28.help(&v6, "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modif", 119);
    v45.action(&v28, 2);
    v6.arg(&v40, &v45);
    v40.new("referencetimestampaccessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 9);
    v28.short(&v40, 114);
    v40.long(&v28, "referencetimestampaccessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 9);
    v28.help(&v40, "use this file\'s times instead of the current timechange only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -musemodify-setting times of : No such file or directory: \n", 49);
    v40.value_name(&v28, "FILE", 4);
    v46 = 2;
    v28.value_parser(&v40, &v46);
    v40.value_hint(&v28);
    v28.conflicts_with(&v40);
    v40.arg(&v6, &v28);
    v6.new("timeHashj", 4);
    v28.long(&v6, "timeHashj", 4);
    v6.help(&v28, "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -musemodify-setting times of : No such file or directory: \n", 122);
    v28.value_name(&v6, &g_454058, 4);
    v15 = "atimemtime(uutils coreutils) 0.0.30Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument a";
    v16 = 5;
    v11 = 0x8000000000000000;
    v12 = v5;
    v6 = 0;
    v8 = 8;
    v9 = 0;
    v17 = 0;
    v46.alias(&v6, "accessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs", 6);
    v0.alias(&v46, "usemodify-setting times of : No such file or directory: \n", 3);
    v15 = "mtime(uutils coreutils) 0.0.30Update the access and modification times of each `FILE` to the current time.{} [OPTION]... [USER]Print help information.change only the access timeuse [[CC]YY]MMDDhhmm[.ss] instead of the current timeSTAMPparse argument and us";
    v16 = 5;
    v11 = 0x8000000000000000;
    v12 = v5;
    *((unsigned long long *)&v7) = 0;
    v8 = 8;
    v9 = 0;
    v17 = 0;
    v46.alias(&(unsigned long long)v7, "modify-setting times of : No such file or directory: \n", 6);
    v7 = v0;
    v10 = v1;
    v12 = v2;
    v15 = v3;
    v17 = v4;
    v57 = *((int128_t *)&v48);
    v58 = *((int128_t *)&v50);
    *((int128_t *)&v18) = *((int128_t *)&v46);
    v20 = v57;
    v23 = v58;
    v24 = v52;
    v25 = *((long long *)&v53);
    v0.from(&(unsigned long long)v7);
    v46.value_parser(&v28, &v0);
    (unsigned long long)v7.arg(&v40, &v46);
    v40.new("filessrc/uu/touch/src/touch.rs", 5);
    v28.action(&v40, 1);
    v40.num_args(&v28);
    v28.value_hint(&v40);
    v40.arg(&(unsigned long long)v7, &v28);
    v18 = 1;
    v19 = 0;
    v6 = 0;
    v8 = 8;
    v20 = 0;
    *((uint128_t *)&v9) = 0;
    v13 = 8;
    *((uint128_t *)&v14) = 0;
    v16 = 8;
    v17 = 0;
    v28.id(&v6);
    v45 = "timestampaccessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs";
    v47 = 9;
    v48 = "datethur]";
    v49 = 4;
    v50 = "referencetimestampaccessmodificationno-createno-dereferencefilessrc/uu/touch/src/touch.rs";
    v51 = 9;
    v6.args(&v28, &v45);
    v21 = 1;
    memcpy(&v28, &v6, 16);
    memcpy(&v29, &v9, 16);
    memcpy(&v30, &v13, 16);
    memcpy(&v31, &v14, 16);
    memcpy(&v32, &v17, 16);
    v33 = 0;
    v34 = v20;
    v35 = 1;
    v36 = v22;
    v37 = (short)(&v20)[6];
    a0.group(&v40, &v28);
    return a0;
}
