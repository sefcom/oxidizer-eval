long long uu_sleep::uu_app::h021e8a5a69169878(unsigned long long a0)
{
    int v0;  // [bp-0xae8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0xae0]
    void* v2;  // [bp-0xad8], Other Possible Types: char, unsigned long
    char v3;  // [bp-0xad0]
    void* v4;  // [sp-0xac8]
    void* v5;  // [sp-0xab0]
    void* v6;  // [sp-0xaa0]
    unsigned long long v7;  // [sp-0xa88]
    void* v8;  // [sp-0xa70]
    unsigned long long v9;  // [sp-0xa68]
    int v10;  // [sp-0xa60]
    unsigned long long v11;  // [sp-0xa50]
    int v12;  // [sp-0xa48]
    unsigned long long v13;  // [sp-0xa38]
    int v14;  // [sp-0xa30]
    unsigned long long v15;  // [sp-0xa20]
    int v16;  // [sp-0xa18]
    unsigned long long v17;  // [sp-0xa08]
    int v18;  // [sp-0xa00]
    unsigned long long v19;  // [sp-0x9f0]
    int v20;  // [sp-0x9e8]
    unsigned long long v21;  // [sp-0x9d8]
    int v22;  // [sp-0x9d0]
    unsigned long long v23;  // [sp-0x9c0]
    int v24;  // [sp-0x9b8]
    unsigned long long v25;  // [sp-0x9a8]
    int v26;  // [sp-0x9a0]
    unsigned long long v27;  // [sp-0x990]
    int v28;  // [sp-0x988]
    unsigned long long v29;  // [sp-0x978]
    int v30;  // [sp-0x970]
    unsigned long long v31;  // [sp-0x960]
    int v32;  // [sp-0x958]
    unsigned long long v33;  // [sp-0x948]
    int v34;  // [sp-0x940]
    unsigned long long v35;  // [sp-0x930]
    void* v36;  // [sp-0x928]
    unsigned long long v37;  // [sp-0x920]
    int v38;  // [sp-0x918]
    unsigned long long v39;  // [sp-0x908]
    unsigned long long v40;  // [sp-0x8e0]
    unsigned long long v41;  // [sp-0x8c8]
    unsigned long long v42;  // [sp-0x8c0]
    void* v43;  // [sp-0x8b8]
    void* v44;  // [sp-0x8a8]
    unsigned long long v45;  // [sp-0x898]
    unsigned int v46;  // [sp-0x890]
    char v47;  // [bp-0x88c], Other Possible Types: unsigned short
    void* v48;  // [bp-0x888], Other Possible Types: char, unsigned long long
    unsigned long long v49;  // [sp-0x880]
    void* v50;  // [sp-0x878], Other Possible Types: unsigned long long
    void* v51;  // [sp-0x720]
    char v52;  // [bp-0x718]
    unsigned long v53;  // [sp-0x6b8], Other Possible Types: unsigned long long
    int v54;  // [bp-0x6b0], Other Possible Types: char
    char v55;  // [bp-0x5cc]
    char v56;  // [bp-0x5c4]
    int v57;  // [bp-0x5b8], Other Possible Types: char
    unsigned long long v58;  // [sp-0x2fc]
    unsigned int v59;  // [sp-0x2f4]
    char v60;  // [bp-0x2e8]
    unsigned long long v61;  // [sp-0x88]
    unsigned long long v62;  // [sp-0x80]
    unsigned long long v64;  // r15
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rax
    unsigned long long v67;  // rdx

    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    clap_builder::builder::command::Command::new::hdd673fdeec8920ee(&v60, g_4e3b08, g_4e3b10);
    v61 = "0.0.27{} NUMBER[SUFFIX]...\n{} OPTIONNUMBER";
    v62 = &g_1;
    clap_builder::builder::command::Command::about::h982624ed1ed5b281(&v57, &v60, "Pause for NUMBER seconds.Pause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),\n'm' for minutes, 'h' for hours or 'd' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint ", 25);
    clap_builder::builder::command::Command::after_help::h6dea07c01f9579b2(&v48, &v57, "Pause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),\n'm' for minutes, 'h' for hours or 'd' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint number.  Given two or more arguments, pause for the amount of time\nspecified by the sum of their values.", 335);
    uucore::format_usage::ha88dc4d716cb78ed(&v2, "{} NUMBER[SUFFIX]...\n{} OPTIONNUMBER", 30);
    v64 = v2;
    if (v64 != 0x8000000000000000)
        *((int128_t *)&v57) = *((int128_t *)&v3);
    v65 = v53;
    if (v65 != 0x8000000000000000 && v65)
        __rust_dealloc(*((long long *)&v54));
    v53 = v64;
    v54 = v57;
    memcpy(&v57, &v48, 700);
    v58 = 549755814016 | *((long long *)&v55);
    v59 = *((int *)&v56);
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    *((int128_t *)&v10) = 0;
    v11 = &g_1;
    *((int128_t *)&v12) = 0;
    v13 = &g_1;
    *((int128_t *)&v14) = 0;
    v15 = &g_1;
    *((int128_t *)&v16) = 0;
    v17 = &g_1;
    *((int128_t *)&v18) = 0;
    v19 = &g_1;
    *((int128_t *)&v20) = 0;
    v21 = &g_1;
    *((int128_t *)&v22) = 0;
    v23 = &g_1;
    *((int128_t *)&v24) = 0;
    v25 = &g_1;
    *((int128_t *)&v26) = 0;
    v27 = &g_1;
    *((int128_t *)&v28) = 0;
    v29 = &g_1;
    *((int128_t *)&v30) = 0;
    v31 = &g_1;
    *((int128_t *)&v32) = 0;
    v33 = &g_1;
    *((int128_t *)&v34) = 0;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = "NUMBER";
    v42 = &g_1;
    v43 = 0;
    v44 = 0;
    v45 = 0x11000000110000;
    v46 = 0;
    v47 = 3337;
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v48, 0, 24);
    v66 = v49;
    v67 = v50;
    *((int128_t *)(v66 + v67)) = 109356308903605034568510445565878034800;
    *((long long *)(v66 + v67 + (char *)&g_1)) = 8314892236720796448;
    v50 = v67 + (char *)&g_11;
    *((int128_t *)&v0) = *((int128_t *)&v49);
    if (v37 != 0x8000000000000000)
        *((int128_t *)&v48) = (int128_t)v0;
    v37 = v48;
    *((int128_t *)&v38) = *((int128_t *)&v48);
    memcpy(&v48, &v2, 360);
    memcpy(&v52, &v30, 224);
    v51 = 0;
    v0 = "NUMBER";
    v1 = &g_1;
    clap_builder::builder::arg::Arg::value_names::h9666d40de429fa66(&v2, &v48, &v0);
    *((uint128_t **)&v47) = &g_1;
    memcpy(&v48, &v2, 592);
    clap_builder::builder::command::Command::arg::h42f0de8dd91eaca7(a0, &v57, &v48);
    return a0;
}
