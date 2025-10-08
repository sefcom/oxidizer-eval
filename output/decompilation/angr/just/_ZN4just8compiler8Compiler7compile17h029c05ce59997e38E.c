char just::compiler::Compiler::compile(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v15;  // [bp-0x9b8]
    unsigned long long v16;  // [bp-0x9b0]
    void* v17;  // [sp-0x9a8]
    int v20;  // [bp-0x998]
    int v21;  // [bp-0x991]
    void* v30;  // [bp-0x920]
    unsigned long long v31;  // [bp-0x918]
    void* v32;  // [bp-0x910]
    int v40;  // [bp-0x8c8]
    int v41;  // [bp-0x8b8]
    unsigned long long v42;  // [bp-0x8a8]
    unsigned long long v43;  // [bp-0x8a0]
    int v44;  // [bp-0x898], Other Possible Types: unsigned long long
    int v45;  // [bp-0x898], Other Possible Types: unsigned long long
    int v46;  // [bp-0x898]
    int v47;  // [bp-0x888]
    int v48;  // [bp-0x878]
    int v54;  // [bp-0x818]
    int v55;  // [bp-0x808]
    unsigned long long v56;  // [bp-0x7f8]
    unsigned long long v57;  // [bp-0x7f0]
    int v58;  // [bp-0x7e8]
    int v59;  // [bp-0x7d8]
    unsigned long long v60;  // [bp-0x7c8]
    unsigned long long v61;  // [bp-0x7c0]
    int v67;  // [bp-0x768], Other Possible Types: char
    int v68;  // [bp-0x758], Other Possible Types: char
    int v69;  // [bp-0x748], Other Possible Types: char
    int v70;  // [bp-0x738], Other Possible Types: char
    int v71;  // [bp-0x728], Other Possible Types: char
    char v72;  // [sp-0x718]
    char v73;  // [bp-0x718]
    int v75;  // [bp-0x711]
    char v76;  // [sp-0x710]
    int v79;  // [bp-0x701]
    unsigned long long v81;  // [bp-0x700]
    int v83;  // [bp-0x6f1]
    unsigned long long v84;  // [bp-0x6f0]
    int v85;  // [sp-0x6e8]
    int v87;  // [bp-0x6e0]
    int v88;  // [bp-0x6d8]
    unsigned long v89;  // [bp-0x6d1]
    char v90;  // [bp-0x6d0]
    char v93;  // [bp-0x6c9]
    unsigned long long v95;  // [bp-0x6c0]
    int v96;  // [bp-0x6b8]
    unsigned long long v97;  // [bp-0x420]
    char v98;  // [bp-0x418]
    int v99;  // [bp-0x408]
    int v100;  // [bp-0x3f8]
    int v101;  // [bp-0x3e8]
    int v102;  // [bp-0x3d8]
    char v103;  // [bp-0x3c8]
    unsigned long long v106;  // [bp-0x398]
    int v108;  // [bp-0x390]
    int v110;  // [bp-0x380]
    int v112;  // [bp-0x370]
    int v114;  // [bp-0x360]
    char v115;  // [bp-0x358]
    int v117;  // [bp-0x350]
    unsigned long long v119;  // [bp-0x340]
    void* v133;  // r15
    unsigned long long v134;  // rax
    unsigned long long v135;  // rdx
    unsigned long long v136;  // rax
    unsigned long long v137;  // rax
    int v138;  // ymm0
    uint256_t v139;  // ymm0
    void* v140;  // rbx
    unsigned long long v222;  // rbx
    int v223;  // xmm1
    int v224;  // xmm2
    int v225;  // xmm3

    v133 = a0;
    v134 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v40) = g_82bd10;
    *((uint128_t *)&v41) = g_82bd20;
    v42 = v134;
    v43 = v135;
    v30 = 0;
    v31 = 8;
    v32 = 0;
    v136 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v55) = g_82bd20;
    *((uint128_t *)&v54) = g_82bd10;
    v56 = v136;
    v57 = v135;
    v137 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v59) = g_82bd20;
    v139 = (((((v138 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd10) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd20) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd20) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd10) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd20) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd10;
    *((uint128_t *)&v58) = g_82bd10;
    v60 = v137;
    v61 = v135;
    v15 = 0;
    v16 = 8;
    v17 = 0;
    v72.root(a2, a3);
    v15.push(&v72, &g_82e520);
    v140 = 0;
    v44 = 0x8000000000000000;
    v46 = v45;
    core::ptr::drop_in_place<core::option::Option<just::source::Source>>(&v46);
    v45 = 0x8000000000000000;
    v115 = 37;
    v73.analyze(&v40, &v45, 8, 0, 8, 0, &v106, &v54, a2, a3);
    v222 = *((long long *)&v73);
    memcpy(&v67, &v76, 16);
    memcpy(&v68, &v81, 16);
    memcpy(&v69, &v84, 16);
    memcpy(&v70, &v87, 16);
    memcpy(&v71, &v90, 16);
    if (v222 != 0x8000000000000000)
    {
        memcpy(&v119, &v95, 656);
        v108 = v67;
        v110 = v68;
        v112 = v69;
        v114 = v70;
        v117 = v71;
        memcpy(&v48, &v42, 16);
        v47 = v41;
        v44 = v40;
        v106 = v222;
        (char)v20.to_vec(a2, a3);
        v97 = (long long)(&v21)[9];
        memcpy(&(char)v96, &(char)v20, 16);
        v101 = v58;
        v102 = v59;
        memcpy(&v103, &v60, 16);
        memcpy(&v98, &v44, 16);
        v99 = v47;
        v100 = v48;
        memcpy(&v73, &v106, 744);
        memcpy(v133, &v73, 864);
        core::ptr::drop_in_place<alloc::vec::Vec<just::source::Source>>(&v15);
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,std::path::PathBuf>>(&v54);
        return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v30);
    }
    memcpy(&(char)v89, &v71, 16);
    memcpy(&(char)v85, &v70, 16);
    v83 = v69;
    v79 = v68;
    v75 = v67;
    *((char *)&v133[8]) = 12;
    v223 = (int128_t)(&v75)[9];
    v224 = (int128_t)(&v79)[9];
    v225 = (int128_t)(&v83)[9];
    *((int128_t *)&v133[9]) = *((int128_t *)&v73);
    v133[25] = v223;
    v133[41] = v224;
    v133[57] = v225;
    *((int128_t *)&v133[73]) = (int128_t)v88;
    *((long long *)&v133[88]) = *((long long *)&v93);
    *((unsigned long long *)v133) = 0x8000000000000000;
    core::ptr::drop_in_place<alloc::vec::Vec<just::source::Source>>(&v15);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,&str>>(&v58);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,std::path::PathBuf>>(&v54);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v30);
    return (char)core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,just::ast::Ast>>(&v40);
}
