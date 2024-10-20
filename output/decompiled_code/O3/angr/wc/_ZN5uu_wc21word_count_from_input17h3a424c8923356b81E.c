int uu_wc::word_count_from_input::h3a424c8923356b81()
{
    void* v0;  // [bp-0x4150], Other Possible Types: unsigned int, char
    unsigned int v1;  // [bp-0x4144], Other Possible Types: char
    unsigned int v2;  // [bp-0x4140], Other Possible Types: char
    char v3;  // [bp-0x413c]
    char v4;  // [bp-0x4138]
    char v5;  // [bp-0x4130]
    char v6[29];  // [bp-0x4128], Other Possible Types: int, char, unsigned long long
    int v7;  // [bp-0x4120]
    int v8;  // [bp-0x4118]
    int v9;  // [bp-0x4110]
    unsigned long long v10;  // [sp-0x4108]
    void* v11;  // [sp-0x4100]
    unsigned int v12;  // [bp-0x40f0], Other Possible Types: unsigned long, char
    struct_1 *v13;  // [bp-0x40e8], Other Possible Types: int, char, unsigned long long
    char v14;  // [sp-0x40e0]
    int v15;  // [sp-0x40d8], Other Possible Types: void*
    unsigned int v16;  // [sp-0x40d0]
    char v17;  // [sp-0x40cc]
    void* v18;  // [sp-0x40c8]
    char v19;  // [bp-0x40c7]
    char v20;  // [bp-0x40b0]
    char v21;  // [bp-0x40a8]
    struct_1 *v22;  // [bp-0x4048], Other Possible Types: char
    char v23;  // [bp-0x4044]
    char v24;  // [sp-0x4040]
    int v25;  // [sp-0x4038], Other Possible Types: unsigned long long
    void* v26;  // [bp-0x4030], Other Possible Types: char, unsigned int
    char v27;  // [sp-0x402f]
    unsigned short v28;  // [sp-0x402c]
    int v29;  // [sp-0x4028]
    void* v30;  // [sp-0x4018], Other Possible Types: unsigned long long
    char v31;  // [bp-0x4010]
    void* v32;  // [sp-0x4008], Other Possible Types: unsigned long
    unsigned int v33;  // [sp-0x4000]
    char v34;  // [sp-0x3ffc]
    void* v35;  // [sp-0x3030]
    void* v36;  // [sp-0x2030]
    void* v37;  // [sp-0x1030]
    unsigned long long v39[3];  // rsi
    struct_1 *v40;  // rax
    char v41;  // dl
    char v42;  // dl
    char v43[29];  // rdx
    char v44;  // sil
    char v45;  // cl
    char v46;  // dil
    char v47;  // r9b
    char v48;  // r8b
    unsigned long long v49[2];  // rdi
    unsigned int v50;  // esi
    char v51[29];  // rdx
    char v52;  // cl
    char v53;  // al
    char v54;  // dl
    char v55;  // r8b
    char v56;  // dil
    unsigned long long v57;  // rax
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rax
    unsigned long long v61;  // rsi
    unsigned long long v62;  // rax
    unsigned long long v63;  // rsi
    unsigned long long v64;  // rax
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rbp
    char v67[29];  // r15
    char v68[29];  // r15
    unsigned long long v69;  // rax
    unsigned long long v70;  // rsi
    unsigned long long v71;  // rax
    unsigned long long v72;  // rsi
    unsigned long long v73;  // rax
    unsigned long long v74;  // rsi
    unsigned long long v75;  // rax
    unsigned long long v76;  // rsi
    unsigned long long v77;  // rdx
    unsigned long long v78;  // rax
    unsigned long long v79;  // rsi
    unsigned long long v80;  // rax
    unsigned long long v81;  // rsi
    unsigned long long v82;  // rax
    unsigned long long v83;  // rsi
    unsigned long long v84;  // rax
    unsigned long long v85;  // rsi
    unsigned long long v86;  // rax
    unsigned long long v87;  // rsi
    unsigned long long v88;  // rdx
    unsigned long long v89;  // rax
    unsigned long long v90;  // rsi
    unsigned long long v91;  // rax
    unsigned long long v92;  // rsi
    unsigned long long v93;  // rax
    unsigned long long v94;  // rsi
    unsigned long v98;  // r14
    unsigned long long v99;  // rax
    unsigned long long v100;  // rsi
    unsigned long long v101;  // rax
    unsigned long long v102;  // rsi
    unsigned long long v103;  // rax
    unsigned long long v104;  // rsi
    unsigned long long v105;  // rax
    unsigned long long v106;  // rsi
    unsigned long long v107;  // rax
    unsigned long long v108;  // rsi
    unsigned long long v109;  // rax
    unsigned long long v110;  // rsi
    unsigned long long v111;  // rax
    unsigned long long v112;  // rsi
    unsigned long long v113;  // rax
    unsigned long long v114;  // rsi
    unsigned int v115;  // r14d
    struct_1 *v116;  // r14
    struct_1 *v117;  // rdi
    char v118[29];  // r14
    unsigned long long v120;  // rax
    int v122;  // xmm1
    void* v123;  // r13
    unsigned long long v124;  // rax
    unsigned long long v125;  // rdx
    unsigned long v126;  // rdi
    unsigned long long v127;  // rax
    unsigned long v128;  // cc_ndep
    unsigned long long v130;  // r13
    void* v131;  // r12
    unsigned int v132;  // ebp
    unsigned long long v133;  // r13
    char v134[29];  // r15
    unsigned long long v135;  // rax
    unsigned long long v136;  // rax
    unsigned long long v137;  // r15
    void* v138;  // rbp
    char v139[29];  // r15
    int v141;  // xmm0
    unsigned long long v142;  // rax
    unsigned long long v143;  // rax

    v37 = 0;
    v36 = 0;
    v35 = 0;
    v26 = 0;
    if (v39[0] == 9223372036854775809)
    {
        v12 = std::io::stdio::stdin::h7215cc131abb55d8();
        v40 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v12);
        v22 = v40;
        v42 = v41 & 1;
        v24 = v41 & 1;
        v44 = v43[28];
        v45 = v43[27];
        v46 = v45 | v44;
        v47 = v43[25];
        v48 = v43[26];
        if (v43[24])
        {
            if (v47)
            {
                if (!v48)
                {
                    if (!(!v46))
                        goto LABEL_488973;
                    uu_wc::count_fast::count_bytes_chars_and_lines_fast::h0f4ee7212c06e0fd(&v6, &v22);
                    goto LABEL_4893b1;
                }
                else
                {
                    if (!(!v46))
                        goto LABEL_488542;
                    uu_wc::count_fast::count_bytes_chars_and_lines_fast::hc8db0c104a3d68f7(&v6, &v22);
                    goto LABEL_4893b1;
                }
            }
            if (!v48)
            {
                if (!(!v46))
                    goto LABEL_488de6;
                nix::sys::stat::fstat::h5d9b5000ddcbb327(&v13, 0);
                if (!(!*((int *)&v13)) || !((v19 & 16)))
                {
LABEL_488aff:
                    v123 = 0;
                    goto LABEL_488b02;
                }
                v25 = 0x1b600000000;
                v26 = 0;
                v28 = 0;
                v27 = 1;
                std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v2, &v25, "/dev/nullsrc/uu/wc/src/count_fast.rs", 9);
                if (v2)
                {
                    ::0x482c40::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a390ff74bc7419e(*((long long *)&v4));
                    goto LABEL_488aff;
                }
                v115 = *((int *)&v3);
                v1 = v115;
                nix::sys::stat::fstat::h5d9b5000ddcbb327(&v25, v115);
                if ((int)v25)
                {
LABEL_489cea:
                    v123 = 0;
                    goto LABEL_489ced;
                }
                v124 = v32;
                v123 = 0;
                if (!(((unsigned int)(v124 >> 32) & -0x1000 | (unsigned int)v124 >> 8 & 4095) == 1) || !((unsigned int)((unsigned int)(v124 >> 12) & -0x100 | v124 & 4294967295) == 3))
                {
LABEL_489ced:
                    close(v115);
LABEL_488b02:
                    memset(&v25, 0, 0x4000);
                    while (true)
                    {
                        v123 = v123;
                        if (!_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(&v22, &v25, 0x4000))
                        {
                            v133 = v123 + v131;
                            if (!(!v131))
                                continue;
                            v131 = 0;
                            break;
                        }
                        else
                        {
                            if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v131) != 35)
                                break;
                            ::0x482c40::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a390ff74bc7419e(v131);
                        }
                    }
                }
                else
                {
                    v127 = uucore::features::pipes::pipe::h29e6c5e17087f056();
                    if ((unsigned int)v127 == -1)
                        goto LABEL_489cea;
                    v0 = v127;
                    v2 = v127 >> 32;
                }
                while (true)
                {
                    nix::fcntl::splice::hb6c6f9ad7aee65dc(&v25, &v22, 0, &v2, 0, 0x20000, 0);
                    if ((int)v25)
                    {
LABEL_489dc1:
                        close(v2);
                        close(v0);
                        v115 = v1;
                        goto LABEL_489ced;
                    }
                    else
                    {
                        v130 = v26;
                        if (!v130)
                        {
                            close(v2);
                            close(v0);
                            close(v1);
                            v131 = 0;
                            break;
                        }
                        v123 += v130;
                        goto LABEL_489dc1;
                    }
                }
                v6 = 0;
                *((int128_t *)&v7) = 0;
                *((int128_t *)&v9) = 0;
                v11 = v131;
                goto LABEL_4893b1;
            }
            else
            {
                if (!(!v46))
                    goto LABEL_4886dd;
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hc22b04359e8d23e3(&v6, &v22);
                goto LABEL_4893b1;
            }
        }
        if (v47)
        {
            if (v48)
            {
                if (!v46)
                {
                    uu_wc::count_fast::count_bytes_chars_and_lines_fast::h79197944fa6febed(&v6, &v22);
                    goto LABEL_4893b1;
                }
LABEL_488542:
                if (!v44)
                {
                    *((int128_t *)&v29) = 0;
                    *((int128_t *)&v25) = 0;
                    v30 = 0;
                    v13 = v40;
                    v14 = v42;
                    v15 = 0;
                    v16 = 0;
                    v17 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                        v57 = *((long long *)&v2);
                        if (v57 == 2)
                            break;
                        v58 = *((long long *)&v4);
                        v59 = *((long long *)&v5);
                        if (!v57)
                        {
                            uu_wc::process_chunk::h7d4d89b2ff3838a7(&v25, v58, v59, &v0);
                        }
                        else if (v58)
                        {
                            v25 += v59;
                            continue;
                        }
                    }
                    goto LABEL_48927e;
                }
                if (v45)
                {
                    *((int128_t *)&v29) = 0;
                    *((int128_t *)&v25) = 0;
                    v30 = 0;
                    v13 = v40;
                    v14 = v42;
                    v15 = 0;
                    v16 = 0;
                    v17 = 0;
                    v1 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                        v69 = *((long long *)&v2);
                        if (v69 == 2)
                            break;
                        v70 = *((long long *)&v4);
                        v59 = *((long long *)&v5);
                        if (!v69)
                        {
                            uu_wc::process_chunk::h69796bf26644a811(&v25, v70, v59, &v0, &v1);
                        }
                        else if (v70)
                        {
                            v25 += v59;
                            continue;
                        }
                    }
                }
                else
                {
                    *((int128_t *)&v29) = 0;
                    *((int128_t *)&v25) = 0;
                    v30 = 0;
                    v13 = v40;
                    v14 = v42;
                    v15 = 0;
                    v16 = 0;
                    v17 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                        v71 = *((long long *)&v2);
                        if (v71 == 2)
                            break;
                        v72 = *((long long *)&v4);
                        v59 = *((long long *)&v5);
                        if (!v71)
                        {
                            uu_wc::process_chunk::he4e9f91d7777281f(&v25, v72, v59, &v0);
                        }
                        else if (v72)
                        {
                            v25 += v59;
                            continue;
                        }
                    }
                    goto LABEL_489578;
                }
                goto LABEL_48927e;
            }
            if (!v46)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hbc42868589be23e9(&v6, &v22);
                goto LABEL_4893b1;
            }
LABEL_488973:
            if (!v44)
            {
                *((int128_t *)&v29) = 0;
                *((int128_t *)&v25) = 0;
                v30 = 0;
                v13 = v40;
                v14 = v42;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                    v60 = *((long long *)&v2);
                    if (v60 == 2)
                        break;
                    v61 = *((long long *)&v4);
                    v59 = *((long long *)&v5);
                    if (!v60)
                    {
                        uu_wc::process_chunk::hdda6c1667cc56ff1(&v25, v61, v59, &v0);
                    }
                    else if (v61)
                    {
                        v25 += v59;
                        continue;
                    }
                }
                goto LABEL_48927e;
            }
            if (v45)
            {
                *((int128_t *)&v29) = 0;
                *((int128_t *)&v25) = 0;
                v30 = 0;
                v13 = v40;
                v14 = v42;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v1 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                    v73 = *((long long *)&v2);
                    if (v73 == 2)
                        break;
                    v74 = *((long long *)&v4);
                    v59 = *((long long *)&v5);
                    if (!v73)
                    {
                        uu_wc::process_chunk::ha784d7b748d71434(&v25, v74, v59, &v0, &v1);
                    }
                    else if (v74)
                    {
                        v25 += v59;
                        continue;
                    }
                }
            }
            else
            {
                *((int128_t *)&v29) = 0;
                *((int128_t *)&v25) = 0;
                v30 = 0;
                v13 = v40;
                v14 = v42;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                    v75 = *((long long *)&v2);
                    if (v75 == 2)
                        break;
                    v76 = *((long long *)&v4);
                    v77 = *((long long *)&v5);
                    if (!v75)
                    {
                        uu_wc::process_chunk::h4d413846479b4e10(&v25, v76, v77, &v0);
                    }
                    else if (v76)
                    {
                        v25 += v77;
                        continue;
                    }
                }
                goto LABEL_48927e;
            }
            goto LABEL_489578;
        }
        if (v48)
        {
            if (!v46)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h779a377a795f6718(&v6, &v22);
LABEL_4893b1:
                v117 = v22;
                if (!v24)
                    goto LABEL_4895b4;
                goto LABEL_4895d1;
            }
LABEL_4886dd:
            if (!v44)
            {
                *((int128_t *)&v29) = 0;
                *((int128_t *)&v25) = 0;
                v30 = 0;
                v13 = v40;
                v14 = v42;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                    v62 = *((long long *)&v2);
                    if (v62 == 2)
                        break;
                    v63 = *((long long *)&v4);
                    v59 = *((long long *)&v5);
                    if (!v62)
                    {
                        uu_wc::process_chunk::he71ad85287cd8649(&v25, v63, v59, &v0);
                    }
                    else if (v63)
                    {
                        v25 += v59;
                        continue;
                    }
                }
                goto LABEL_48927e;
            }
            if (v45)
            {
                *((int128_t *)&v29) = 0;
                *((int128_t *)&v25) = 0;
                v30 = 0;
                v13 = v40;
                v14 = v42;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v1 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                    v78 = *((long long *)&v2);
                    if (v78 == 2)
                        break;
                    v79 = *((long long *)&v4);
                    v59 = *((long long *)&v5);
                    if (!v78)
                    {
                        uu_wc::process_chunk::h83dcf77e9605ddf2(&v25, v79, v59, &v0, &v1);
                    }
                    else if (v79)
                    {
                        v25 += v59;
                        continue;
                    }
                }
            }
            else
            {
                *((int128_t *)&v29) = 0;
                *((int128_t *)&v25) = 0;
                v30 = 0;
                v13 = v40;
                v14 = v42;
                v15 = 0;
                v16 = 0;
                v17 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                    v80 = *((long long *)&v2);
                    if (v80 == 2)
                        break;
                    v81 = *((long long *)&v4);
                    v77 = *((long long *)&v5);
                    if (!v80)
                    {
                        uu_wc::process_chunk::h2e04751f6ac9b171(&v25, v81, v77, &v0);
                    }
                    else if (v81)
                    {
                        v25 += v77;
                        continue;
                    }
                }
                goto LABEL_48927e;
            }
            goto LABEL_489578;
        }
        if (!v46)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
LABEL_488de6:
        if (!v44)
        {
            *((int128_t *)&v29) = 0;
            *((int128_t *)&v25) = 0;
            v30 = 0;
            v13 = v40;
            v14 = v42;
            v15 = 0;
            v16 = 0;
            v17 = 0;
            v0 = 0;
            while (true)
            {
                uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                v64 = *((long long *)&v2);
                if (v64 == 2)
                    break;
                v65 = *((long long *)&v4);
                v59 = *((long long *)&v5);
                if (!v64)
                {
                    uu_wc::process_chunk::h6929a41d35e5bf25(&v25, v65, v59, &v0);
                }
                else if (v65)
                {
                    v25 += v59;
                    continue;
                }
            }
            goto LABEL_48927e;
        }
        if (!v45)
        {
            *((int128_t *)&v29) = 0;
            *((int128_t *)&v25) = 0;
            v30 = 0;
            v13 = v40;
            v14 = v42;
            v15 = 0;
            v16 = 0;
            v17 = 0;
            v0 = 0;
            while (true)
            {
                uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
                v84 = *((long long *)&v2);
                if (v84 == 2)
                    break;
                v85 = *((long long *)&v4);
                v59 = *((long long *)&v5);
                if (!v84)
                {
                    uu_wc::process_chunk::h56f61a13b7a8ba90(&v25, v85, v59, &v0);
                }
                else if (v85)
                {
                    v25 += v59;
                    continue;
                }
            }
LABEL_489578:
            *((int128_t *)&v6) = (int128_t)v25;
            v8 = v29;
            v10 = v30;
            v11 = 0;
            v117 = v13;
            if (!v14)
            {
LABEL_4895b4:
                if ((9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE))
                {
                    v117 = v117;
                    if (!(char)std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c())
                        v117->field_4 = 1;
                }
            }
LABEL_4895d1:
            v117->field_0 = 0;
            if (CasCmpNE(v117->field_0, v117->field_0))
                goto LABEL_0x4895d3;
            if ((Not (Load(addr=vvar_86{reg 72}, size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
            std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(v117);
            goto LABEL_489e12;
        }
        *((int128_t *)&v29) = 0;
        *((int128_t *)&v25) = 0;
        v30 = 0;
        v13 = v40;
        v14 = v42;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v1 = 0;
        v0 = 0;
        while (true)
        {
            uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h4180f30ccbd909ad(&v2, &v13);
            v82 = *((long long *)&v2);
            if (v82 == 2)
                break;
            v83 = *((long long *)&v4);
            v77 = *((long long *)&v5);
            if (!v82)
            {
                uu_wc::process_chunk::h9a6dfcba72cb6aeb(&v25, v83, v77, &v0, &v1);
            }
            else if (v83)
            {
                v25 += v77;
                continue;
            }
        }
LABEL_48927e:
        *((int128_t *)&v6) = (int128_t)v25;
        v8 = v29;
        v10 = v30;
        v11 = 0;
        v116 = v13;
        if (!v14 && (9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) && !(char)std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c())
            v116->field_4 = 1;
        v116->field_0 = 0;
        if (CasCmpNE(v116->field_0, v116->field_0))
            goto LABEL_0x48955e;
        if ((Not (Load(addr=vvar_1917{reg 128}, size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
        std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(v116);
        goto LABEL_489e12;
    }
    v25 = 0x1b600000000;
    v26 = 0;
    v28 = 0;
    v26 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v22, &v25, v39[1], v39[2]);
    if (*((int *)&v22))
    {
        v49[1] = *((long long *)&v24);
        v49[0] = 2;
        goto LABEL_489e47;
    }
    v50 = *((int *)&v23);
    v1 = v50;
    v52 = v43[28];
    v53 = v43[27];
    v54 = v53 | v52;
    v55 = v43[25];
    v56 = v43[26];
    if (!v43[24])
    {
        if (!v55)
        {
            if (!v56)
            {
                if (!v54)
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
LABEL_489804:
                if (!v52)
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v93 = *((long long *)&v2);
                        if (v93 == 2)
                            break;
                        v94 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v93)
                        {
                            uu_wc::process_chunk::h6929a41d35e5bf25(&v13, v94, v88, &v0);
                        }
                        else
                        {
                            if (v94)
                            {
                                v13 += v88;
                                continue;
                            }
                        }
                    }
                }
                else if (!v53)
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v113 = *((long long *)&v2);
                        if (v113 == 2)
                            break;
                        v114 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v113)
                        {
                            uu_wc::process_chunk::h56f61a13b7a8ba90(&v13, v114, v88, &v0);
                        }
                        else if (v114)
                        {
                            v13 += v88;
                            continue;
                        }
                    }
                }
                else
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v12 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v111 = *((long long *)&v2);
                        if (v111 == 2)
                            break;
                        v112 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v111)
                        {
                            uu_wc::process_chunk::h9a6dfcba72cb6aeb(&v13, v112, v88, &v0, &v12);
                        }
                        else if (v112)
                        {
                            v13 += v88;
                            continue;
                        }
                    }
                }
                goto LABEL_489c00;
            }
            if (!v54)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::he5a51d14d92f5e3b(&v6, &v1);
                goto LABEL_489e08;
            }
            else
            {
LABEL_488ecb:
                if (!v52)
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v91 = *((long long *)&v2);
                        if (v91 == 2)
                            break;
                        v92 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v91)
                        {
                            uu_wc::process_chunk::he71ad85287cd8649(&v13, v92, v88, &v0);
                        }
                        else
                        {
                            if (v92)
                            {
                                v13 += v88;
                                continue;
                            }
                        }
                    }
                }
                else if (!v53)
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v109 = *((long long *)&v2);
                        if (v109 == 2)
                            break;
                        v110 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v109)
                        {
                            uu_wc::process_chunk::h2e04751f6ac9b171(&v13, v110, v88, &v0);
                        }
                        else if (v110)
                        {
                            v13 += v88;
                            continue;
                        }
                    }
                }
                else
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v12 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v107 = *((long long *)&v2);
                        if (v107 == 2)
                            break;
                        v108 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v107)
                        {
                            uu_wc::process_chunk::h83dcf77e9605ddf2(&v13, v108, v88, &v0, &v12);
                        }
                        else if (v108)
                        {
                            v13 += v88;
                            continue;
                        }
                    }
                }
            }
        }
        if (v56)
        {
            if (!v54)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hc60211fd12bebc00(&v6, &v1);
                goto LABEL_489e08;
            }
            else
            {
LABEL_4887da:
                if (!v52)
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v86 = *((long long *)&v2);
                        if (v86 == 2)
                            break;
                        v87 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v86)
                        {
                            uu_wc::process_chunk::h7d4d89b2ff3838a7(&v13, v87, v88, &v0);
                        }
                        else
                        {
                            if (v87)
                            {
                                v13 += v88;
                                continue;
                            }
                        }
                    }
                }
                else if (!v53)
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v101 = *((long long *)&v2);
                        if (v101 == 2)
                            break;
                        v102 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v101)
                        {
                            uu_wc::process_chunk::he4e9f91d7777281f(&v13, v102, v88, &v0);
                        }
                        else if (v102)
                        {
                            v13 += v88;
                            continue;
                        }
                    }
                }
                else
                {
                    *((int128_t *)&v15) = 0;
                    *((int128_t *)&v13) = 0;
                    v18 = 0;
                    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                    v32 = 0;
                    v33 = 0;
                    v34 = 0;
                    v12 = 0;
                    v0 = 0;
                    while (true)
                    {
                        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                        v99 = *((long long *)&v2);
                        if (v99 == 2)
                            break;
                        v100 = *((long long *)&v4);
                        v88 = *((long long *)&v5);
                        if (!v99)
                        {
                            uu_wc::process_chunk::h69796bf26644a811(&v13, v100, v88, &v0, &v12);
                        }
                        else if (v100)
                        {
                            v13 += v88;
                            continue;
                        }
                    }
                }
            }
        }
        if (!v54)
        {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h05207f618ec7a033(&v6, &v1);
            goto LABEL_489e08;
        }
        else
        {
LABEL_4892d2:
            if (!v52)
            {
                *((int128_t *)&v15) = 0;
                *((int128_t *)&v13) = 0;
                v18 = 0;
                _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                v32 = 0;
                v33 = 0;
                v34 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                    v89 = *((long long *)&v2);
                    if (v89 == 2)
                        break;
                    v90 = *((long long *)&v4);
                    v88 = *((long long *)&v5);
                    if (!v89)
                    {
                        uu_wc::process_chunk::hdda6c1667cc56ff1(&v13, v90, v88, &v0);
                    }
                    else
                    {
                        if (v90)
                        {
                            v13 += v88;
                            continue;
                        }
                    }
                }
            }
            else if (!v53)
            {
                *((int128_t *)&v15) = 0;
                *((int128_t *)&v13) = 0;
                v18 = 0;
                _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                v32 = 0;
                v33 = 0;
                v34 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                    v105 = *((long long *)&v2);
                    if (v105 == 2)
                        break;
                    v106 = *((long long *)&v4);
                    v88 = *((long long *)&v5);
                    if (!v105)
                    {
                        uu_wc::process_chunk::h4d413846479b4e10(&v13, v106, v88, &v0);
                    }
                    else if (v106)
                    {
                        v13 += v88;
                        continue;
                    }
                }
            }
            else
            {
                *((int128_t *)&v15) = 0;
                *((int128_t *)&v13) = 0;
                v18 = 0;
                _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hc35cf8ec9e6cfdcf(&v25, v50);
                v32 = 0;
                v33 = 0;
                v34 = 0;
                v12 = 0;
                v0 = 0;
                while (true)
                {
                    uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(&v2, &v25);
                    v103 = *((long long *)&v2);
                    if (v103 == 2)
                        break;
                    v104 = *((long long *)&v4);
                    v88 = *((long long *)&v5);
                    if (!v103)
                    {
                        uu_wc::process_chunk::ha784d7b748d71434(&v13, v104, v88, &v0, &v12);
                    }
                    else if (v104)
                    {
                        v13 += v88;
                        continue;
                    }
                }
            }
LABEL_489c00:
            v122 = (int128_t)v15;
            *((int128_t *)&v6) = (int128_t)v13;
            v8 = v122;
            v10 = v18;
            v11 = 0;
            if (v26)
                __rust_dealloc(v25);
            v126 = *((int *)&v31);
            goto LABEL_489e0c;
        }
    }
    if (v55)
    {
        if (!v56)
        {
            if (!(!v54))
                goto LABEL_4892d2;
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h80a537415615a4d1(&v6, &v1);
            goto LABEL_489e08;
        }
        else
        {
            if (!(!v54))
                goto LABEL_4887da;
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h3ae562e85e61e62e(&v6, &v1);
            goto LABEL_489e08;
        }
    }
    if (v56)
    {
        if (!(!v54))
            goto LABEL_488ecb;
        uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcf61df7e9cb8025b(&v6, &v1);
        goto LABEL_489e08;
    }
    if (!(!v54))
        goto LABEL_489804;
    nix::sys::stat::fstat::h5d9b5000ddcbb327(&v13, v50);
    if ((int)v13)
    {
LABEL_4893ed:
        v134 = 0;
        goto LABEL_4893f0;
    }
    v66 = (int)v18;
    v67 = 0;
    if (v50 > 0 && (unsigned short)v66 < 0 && v98 > 0)
    {
        v118 = *((long long *)&v20);
        v120 = sysconf(30);
        if (!v120)
            goto LABEL_48a0a2;
        v125 = (!(v120 | v118) >> 32 ? (0 CONCAT v118) /m v120 >> 64 : (0 CONCAT (unsigned int)v118) /m (unsigned int)v120 >> 32 & 4294967295);
        if (!(!v125))
            goto LABEL_489dec;
        if ((char)amd64g_calculate_condition(4, 24, *((long long *)&v21) + 1, 0, amd64g_calculate_rflags_c(20, v125, 0, v128)))
        {
LABEL_48a0a2:
            core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
        }
        else if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&v1, 0))
        {
            ::0x482c40::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a390ff74bc7419e(v51);
            v68 = 0;
        }
    }
    if (!((unsigned short)v66 & 0x1000))
    {
LABEL_4893f0:
        memset(&v25, 0, 0x4000);
        while (true)
        {
            v134 = v134;
            if (!_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(&v1, &v25, 0x4000))
            {
                v139 = v134 + v138;
                if (!(!v138))
                    continue;
                v138 = 0;
                break;
            }
            else
            {
                if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v138) != 35)
                    break;
                ::0x482c40::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a390ff74bc7419e(v138);
            }
        }
        goto LABEL_489df1;
    }
    v25 = 0x1b600000000;
    v26 = 0;
    v28 = 0;
    v27 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v2, &v25, "/dev/nullsrc/uu/wc/src/count_fast.rs", 9);
    if (v2)
    {
        ::0x482c40::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a390ff74bc7419e(*((long long *)&v4));
        goto LABEL_4893ed;
    }
    v132 = *((int *)&v3);
    v12 = v132;
    nix::sys::stat::fstat::h5d9b5000ddcbb327(&v25, v132);
    if ((int)v25)
    {
LABEL_489f2e:
        v134 = 0;
        goto LABEL_489f31;
    }
    v135 = v32;
    v134 = 0;
    if (!(((unsigned int)(v135 >> 32) & -0x1000 | (unsigned int)v135 >> 8 & 4095) == 1) || !((unsigned int)((unsigned int)(v135 >> 12) & -0x100 | v135 & 4294967295) == 3))
    {
LABEL_489f31:
        close(v132);
        goto LABEL_4893f0;
    }
    else
    {
        v136 = uucore::features::pipes::pipe::h29e6c5e17087f056();
        if ((unsigned int)v136 == -1)
            goto LABEL_489f2e;
        v0 = v136;
        v2 = v136 >> 32;
        v118 = 0;
    }
    while (true)
    {
        nix::fcntl::splice::hb23ded3901ce6d4f(&v25, &v1, 0, &v2, 0, 0x20000, 0);
        if ((int)v25)
        {
LABEL_489ffe:
            close(v2);
            close(v0);
            v132 = v12;
            goto LABEL_489f31;
        }
        else
        {
            v137 = v26;
            if (!v137)
            {
                close(v2);
                close(v0);
                close(v12);
LABEL_489dec:
                v138 = 0;
LABEL_489df1:
                *((char *[29])&v6[0]) = v118;
                *((int128_t *)&v7) = 0;
                *((int128_t *)&v9) = 0;
                v11 = v138;
LABEL_489e08:
                v126 = v1;
LABEL_489e0c:
                close(v126);
LABEL_489e12:
                v49[2 + 1] = v10;
                v141 = (int128_t)v6;
                *((int128_t *)&v49[1 + 1]) = (int128_t)(&v7)[8];
                *((void*)&v49[1]) = v141;
                v142 = v11;
                if (!v142)
                {
                    v143 = 0;
                }
                else
                {
                    v49[3] = v142;
                    v143 = 1;
                }
                v49[0] = v143;
LABEL_489e47:
                return;
            }
            v134 = &v134[v137];
            goto LABEL_489ffe;
        }
    }
}
