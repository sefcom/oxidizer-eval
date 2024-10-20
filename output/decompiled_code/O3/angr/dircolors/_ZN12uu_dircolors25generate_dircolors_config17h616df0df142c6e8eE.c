double uu_dircolors::generate_dircolors_config::h616df0df142c6e8e(long long a0)
{
    void* v0;  // [sp-0x100], Other Possible Types: unsigned long
    unsigned long long *v1;  // [sp-0xf8]
    void* v2;  // [sp-0xf0], Other Possible Types: unsigned long long *, unsigned long long
    unsigned long long *v3;  // [sp-0xe8]
    unsigned long v4;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xc8]
    unsigned long long v8;  // [sp-0xc0]
    unsigned long long v9;  // [sp-0xb8]
    unsigned long v10;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xa8]
    unsigned long long v12;  // [sp-0xa0]
    unsigned long long v13;  // [sp-0x98]
    void* v14;  // [sp-0x90]
    char v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    char v17;  // [bp-0x68]
    char v18;  // [bp-0x60]
    char v19;  // [bp-0x58]
    char v20;  // [bp-0x50]
    char v21;  // [bp-0x48]
    char v22;  // [bp-0x40]
    char v23;  // [bp-0x38]
    unsigned long long *v25;  // r13
    unsigned long long v26;  // r14
    unsigned long long *v27;  // r13
    unsigned long long *v28;  // r13
    void* v29;  // r12
    unsigned long long v31;  // rbp
    unsigned long long v32;  // r15
    unsigned long long v33;  // r14
    unsigned long long *v34;  // r13
    unsigned long long v35;  // r15
    unsigned long long v37;  // r13
    unsigned long long v38;  // r12
    unsigned long long v40;  // rbp
    unsigned long long v41;  // r14
    unsigned long long *v42;  // r15
    unsigned long long v44;  // rax
    unsigned long long *v45;  // r14
    unsigned long long v46;  // rax
    unsigned long long *v47;  // rdx
    unsigned long long *v48;  // rdx
    unsigned long long v50;  // r13
    unsigned long long v51;  // r12
    unsigned long long v53;  // rbp
    unsigned long long v54;  // r15
    unsigned long long *v55;  // r14
    unsigned long long v57;  // rcx
    unsigned long long *v58;  // r15
    unsigned long long v59;  // rcx
    unsigned long long *v60;  // rax
    unsigned long long *v61;  // rax
    int v62;  // xmm0
    int v63;  // ymm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, 0, 484);
    v25 = v1;
    v26 = v2;
    memcpy(v26 + (char *)v25, "# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n", 484);
    v2 = v26 + 484;
    if (v0 - v2 <= 12)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, 13);
        v27 = v1;
    }
    v28 = v27;
    *((long long *)(v28 + v2 + 5)) = 732467297369867604;
    *((long long *)(v28 + v2)) = 5928237196997578563;
    v2 = (char *)&v2[1] + 5;
    v29 = 0;
    v2 = v2;
    do
    {
        v2 = v2;
        v4 = &anon.4406f472a8377c7ece58ca9d20f54484.79.llvm.13238753694568376422 + v29;
        v6 = &v4;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h460ee2741e998109;
        v10 = &g_4f3278;
        v11 = 2;
        v14 = 0;
        v12 = &v6;
        v13 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v15, &v10);
        v31 = *((long long *)&v16);
        v32 = *((long long *)&v17);
        if (v0 - v2 < v32)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, v32);
            v33 = v2;
            v34 = v1;
        }
        v28 = v34;
        memcpy(v33 + (char *)v28, v31, v32);
        v2 = v32 + v2;
        v2 = v2;
        if (*((long long *)&v15))
            __rust_dealloc(v31);
        v29 += 16;
    } while (v29 != 400);
    if (v0 - v2 <= 621)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, 622);
        v35 = v2;
    }
    v3 = v1;
    memcpy((char *)v3 + v35, "# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as per the following codes:\n# Attribute codes:\n# 00=none 01=bold 04=underscore 05=blink 07=reverse 08=concealed\n# Text color codes:\n# 30=black 31=red 32=green 33=yellow 34=blue 35=magenta 36=cyan 37=white\n# Background color codes:\n# 40=black 41=red 42=green 43=yellow 44=blue 45=magenta 46=cyan 47=white\n#NORMAL 00 # no color code at all\n#FILE 00 # regular file: use no color at all\n", 622);
    v2 = v35 + 622;
    v37 = &anon.4406f472a8377c7ece58ca9d20f54484.129.llvm.13238753694568376422;
    v2 = v2;
    do
    {
        v38 = 864;
        v2 = v2;
        v5 = v37;
        v4 = v37 + 32;
        v6 = &v5;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h460ee2741e998109;
        v8 = &v4;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h460ee2741e998109;
        v10 = &g_4f3248;
        v11 = 3;
        v14 = 0;
        v12 = &v6;
        v13 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v18, &v10);
        v40 = *((long long *)&v19);
        v41 = *((long long *)&v20);
        if (v0 - v2 >= v41)
        {
            v3 = v3;
        }
        else
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, v41);
            v42 = v2;
            v3 = v1;
        }
        v3 = v3;
        memcpy(v42 + v3, v40, v41);
        v2 = v41 + (char *)v2;
        v2 = v2;
        if (*((long long *)&v18))
            __rust_dealloc(v40);
        v37 += 48;
    } while (v38 != 48);
    v44 = v0;
    if (v44 - (char *)v2 <= 70)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, 71);
        v45 = v2;
        v46 = v0;
    }
    v47 = v1;
    *((int128_t *)(v47 + v45 + 48)) = 143724813878190444940758977351516252276;
    *((int128_t *)(v47 + v45 + 32)) = 42740115358382802882316379831868534311;
    *((int128_t *)(v47 + v45 + 16)) = 43061896418077592046142604138092197989;
    *((int128_t *)(v47 + v45)) = 43061916698630313972054502022086139939;
    *((long long *)(v47 + v45 + 63)) = 753064449097296236;
    v2 = (char *)&v45[8] + 7;
    if (v46 - (char *)v2 <= 72)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, 73);
        v48 = v1;
    }
    *((int128_t *)(v48 + v2 + 57)) = 13533223449263106983984766617569489519;
    *((int128_t *)(v48 + v2 + 48)) = 154737878075251727880012765624024703076;
    *((int128_t *)(v48 + v2 + 32)) = 146719384886143221572448267347730263913;
    *((int128_t *)(v48 + v2 + 16)) = 153434429920801432569169911680661987374;
    v3 = v48;
    *((int128_t *)(v3 + v2)) = 158756674982352720057324505576387125283;
    v2 = (char *)&v2[9] + 1;
    v50 = &anon.4406f472a8377c7ece58ca9d20f54484.263.llvm.13238753694568376422;
    v2 = v2;
    do
    {
        v51 = 4160;
        v2 = v2;
        v5 = v50;
        v4 = v50 + 16;
        v6 = &v5;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h460ee2741e998109;
        v8 = &v4;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h460ee2741e998109;
        v10 = &g_4f3248;
        v11 = 3;
        v14 = 0;
        v12 = &v6;
        v13 = 2;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v21, &v10);
        v53 = *((long long *)&v22);
        v54 = *((long long *)&v23);
        if (v0 - v2 >= v54)
        {
            v3 = v3;
        }
        else
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, v54);
            v55 = v2;
            v3 = v1;
        }
        v3 = v3;
        memcpy(v55 + v3, v53, v54);
        v2 = v54 + (char *)v2;
        v2 = v2;
        if (*((long long *)&v21))
            __rust_dealloc(v53);
        v50 += 32;
    } while (v51 != 32);
    v57 = v0;
    if (v57 - (char *)v2 <= 69)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, 70);
        v58 = v2;
        v59 = v0;
    }
    v60 = v1;
    *((int128_t *)(v60 + v58 + 48)) = 134866972500935773791479269858077861235;
    *((int128_t *)(v60 + v58 + 32)) = 155687885304075128883011812623851353198;
    *((int128_t *)(v60 + v58 + 16)) = 134419749337454829139059318783130673229;
    *((int128_t *)(v60 + v58)) = 109356670431343633986143725357341286435;
    *((long long *)(v60 + v58 + 62)) = 749115317081498998;
    v2 = (char *)&v58[8] + 6;
    if (v59 - (char *)v2 <= 57)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v0, v2, 58);
        v61 = v1;
    }
    *((int128_t *)(v61 + v2 + 42)) = 61743659055296450415544208459865353582;
    *((int128_t *)(v61 + v2 + 32)) = 43139841401675537766168122084316114537;
    *((int128_t *)(v61 + v2 + 16)) = 138756109429045016979802790814463303779;
    *((int128_t *)(v61 + v2)) = 140100691364977120764219418636890349603;
    v2 = (char *)&v2[7] + 2;
    a0->field_10 = v2;
    v62 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v62;
    return (unsigned long long)(...);
}
