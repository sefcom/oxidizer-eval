int fish::screen::Screen::write()
{
    char v0;  // [bp-0x1d2]
    char v1;  // [bp-0x1d1]
    unsigned long long v2;  // [sp-0x1d0]
    void* v3;  // [bp-0x1c8], Other Possible Types: char, unsigned long long
    void* v4;  // [bp-0x1c0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x1b8], Other Possible Types: char *, char
    void* v6;  // [bp-0x1b8]
    char *v7;  // [bp-0x1b0]
    char *v8;  // [bp-0x1a8]
    void* v9;  // [bp-0x1a0]
    void* v10;  // [bp-0x1a0]
    void* v11;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x198]
    int v13;  // [bp-0x188], Other Possible Types: char, unsigned long long
    int v14;  // [bp-0x188]
    unsigned int *v15;  // [bp-0x180]
    void* v16;  // [sp-0x178]
    void* v17;  // [bp-0x170]
    unsigned int *v18;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x158]
    unsigned long long v20;  // [bp-0x150]
    void* v21;  // [bp-0x148]
    unsigned long long v22;  // [bp-0x140]
    void* v23;  // [bp-0x138]
    unsigned long long v24;  // [bp-0x130]
    unsigned long long v25;  // [bp-0x128]
    unsigned long long v26;  // [bp-0x120]
    unsigned long long v27;  // [bp-0x118]
    unsigned int v28;  // [bp-0x10c]
    char v29;  // [bp-0x108], Other Possible Types: unsigned long long
    char v30;  // [bp-0x108]
    unsigned long v31;  // [bp-0x100]
    unsigned int v32;  // [bp-0xf8], Other Possible Types: unsigned long long
    char v33;  // [bp-0xf0]
    unsigned long long v34;  // [bp-0xd0]
    unsigned long long v35;  // [bp-0xc8]
    unsigned long long v36;  // [bp-0xc0]
    unsigned long long v37;  // [bp-0xb8]
    unsigned long long v38;  // [bp-0xb0]
    unsigned long long v39;  // [bp-0xa8]
    unsigned long v40;  // [bp-0xa0]
    void* v41;  // [bp-0x98]
    unsigned long long v42;  // [bp-0x90]
    unsigned long long v43;  // [bp-0x88]
    void* v44;  // [sp-0x80]
    void* v45;  // [bp-0x80]
    unsigned long long v46;  // [bp-0x78]
    void* v47;  // [bp-0x70]
    char *v48;  // [bp-0x68]
    void* v49;  // [bp-0x60]
    unsigned long long v50;  // [bp-0x58]
    unsigned long long v51;  // [bp-0x50]
    unsigned long long v52;  // [bp-0x48]
    void* v53;  // [bp-0x40]
    unsigned long long v54;  // [bp-0x38]
    unsigned long long v55;  // [bp+0x8]
    void* v56;  // [bp+0x10]
    unsigned long long v57;  // [bp+0x18]
    unsigned long long v58[3];  // [bp+0x20]
    unsigned long long v59[3];  // [bp+0x28]
    unsigned long long v60;  // [bp+0x30]
    unsigned long v61;  // [bp+0x38]
    unsigned long long v62;  // [bp+0x40]
    unsigned long long v63;  // [bp+0x48]
    unsigned long long v64;  // [bp+0x50]
    struct_0 *v65;  // [bp+0x58]
    void* v66;  // [bp+0x60]
    char v67;  // [bp+0x68]
    unsigned long long v68;  // r8
    void* v69;  // rcx
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rsi
    unsigned int v72;  // 4099
    unsigned int v73;  // eax
    unsigned long long v74;  // cc_ndep
    void* v75;  // r9
    void* v76;  // r13
    void* v77;  // rax
    unsigned long long v78;  // rbx
    unsigned long long v79;  // rbp
    void* v80;  // r12
    void* v81;  // r12
    void* v83;  // r12
    void* v84;  // rdi
    char v86;  // al
    void* v87;  // r13
    unsigned long long v88;  // r15
    void* v91;  // rdi
    unsigned long long v92;  // rax
    void* v93;  // rcx
    unsigned long long v94;  // r15
    unsigned long long v95;  // r15
    unsigned long long v96;  // r12
    void* v97;  // rax
    unsigned long long v98;  // rbp
    unsigned long v99;  // rsi
    void* v100;  // r14
    unsigned long v101;  // r15
    unsigned long long v102;  // rax
    void* v104;  // rax
    unsigned long long v105;  // r14
    unsigned long long v107;  // rax
    unsigned long long v108;  // r14
    unsigned long long v109;  // r14
    unsigned long long v110;  // 4098
    unsigned long long v111;  // r14
    unsigned long long v112;  // rax
    unsigned long v113;  // rbx
    unsigned long long v114;  // rdx

    v12 = v68;
    v17 = v69;
    v18 = v70;
    v19 = v71;
    v1 = v67;
    v27 = fish::termsize::termsize_last();
    v2 = v70;
    if ((char)core::sync::atomic::atomic_load(&g_15a9a70, 0))
    {
        v21 = 0;
        v22 = 1;
        v23 = 0;
        v3.to_flog_str(&g_15a9a60);
        v29.into_iter(&v3);
        v21.spec_extend(&v29);
        v21.push(58, &g_14e1720);
        v21.push(32, &g_14e1720);
        v3 = 0;
        v4 = 4;
        v5 = 0;
        v72 = atomic_exchange_add(&_ZN4fish6screen6Screen5write8REPAINTS17h8e2a766b1fc4ffd5E, 1);
        v73 = v72;
        v74 = (v72 + 1 <= v72 ? 1 : 0);
        if ((char)_ccall(4, 23, (unsigned long long)(v73 + 1), 0, (v72 + 1 <= v72 ? 1 : 0)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e1738); /* do not return */
        v30 = 4;
        v31 = v73 + 1;
        fish_printf::printf_impl::sprintf_locale(&v13, &v3, "Repaint %uassertion failed: (0..=effective_commandline.len()).contains(&cursor_pos)Number of trailing prompt lines prompt linesexceeds prompt's yinferred from reported cursor positionReported cursor line indexis above fish's cursorGiven yexceeds the prompt's y", 10, &v30, 1);
        v13.unwrap(&g_14e1720);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v30);
        *((int128_t *)&v13) = *((int128_t *)&v3);
        v16 = v5;
        v3.to_flog_str(&v13);
        v30.into_iter(&v3);
        v21.spec_extend(&v30);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
        v21.push(10, &g_14e1720);
        fish::flog::flog_impl(v22, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v21, v22);
    }
    v76 = v75;
    if (v56 <= v55)
    {
        v77 = v76;
        if (!((char)_ccall(6, 8, v56, v55, v74)))
            goto LABEL_140b628;
LABEL_140acbc:
        v10 = v77;
        v78 = v57;
        v79 = v56.clone(v78);
        v25 = v70 - v79;
        *((int *)&v43) = ((!(v70 <= v55 ^ 1) && !v70 < v79) == 1 ? v76 + v79 * 4 : 0);
        if (!v70 > v55 && !v70 < v79)
        {
            v26 = v55 - v78;
            if (v78 <= v55)
            {
                v80 = v76 + v78 * 4;
                v81 = v80;
                if ((char)_ccall(2, 8, v55, v78, v74))
                    goto LABEL_140b63a;
LABEL_140ad29:
                v83 = v81;
                if ((char)fish::screen::is_dumb())
                {
                    fish::common::wcs2osstring(&v3, v19, v18);
                    v29 = fish::common::safe_write_loop(1, "\r", 1);
                    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v29);
                    v29 = fish::common::safe_write_loop(1, v4, v5);
                    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v29);
                    fish::common::wcs2osstring(&v29, v75, v56);
                    v13 = fish::common::safe_write_loop(1, v31, v32);
                    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v13);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v29, v31);
                    fish::common::wcs2osstring(&v29, v80, v26);
                    v13 = fish::common::safe_write_loop(1, v31, v32);
                    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v13);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v29, v31);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v4);
                }
                else
                {
                    v84.check_status();
                    if (v27 >= 4)
                    {
                        0.unwrap(&g_14e1798);
                        v20 = v27;
                        if (v2)
                        {
                            v2 >> 63.unwrap(&g_14e17b0);
                            fish::screen::compute_layout(&v29, (unsigned int)fish::common::get_ellipsis_char(), v20, v19, v18, v17, v12, v75, v56, v58, v59, v70, v25);
                            if (v70 != v79)
                                v86 = (char)v70.equal(v25, v34, v35) ^ 1;
                            v87 = v84;
                            *((char *)&v87[216]) = v86;
                            *((unsigned long long *)v87) = 1;
                            *((unsigned long long *)&v87[8]) = v20;
                            v87.resize(0);
                            *((uint128_t *)&v87[40]) = 0;
                            v28 = v65->field_111;
                            v88 = 18446744073709551615;
                            while (true)
                            {
                                v88 += 1;
                                if (v36 == v88)
                                    break;
                                v87.desired_append_char((v28 ^ 1) * 2, 0, -1, 32, 0, 0, v36, 1);
                            }
                            *((int *)&v46) = (v36 != v20 ? v36 : 0);
                            v3.to_vec(v10, v56);
                            v16 = v5;
                            *((int128_t *)&v14) = *((int128_t *)&v3);
                            v39 = v35;
                            v3.add(&v13, v34.index(v35, &g_14e17c8), v70);
                            v13.add(&v3, v83, v26);
                            v41 = v83;
                            v3 = 0;
                            v47 = v16;
                            v4 = v47;
                            v5 = 0;
                            if (!(char)v3.contains(v60))
                                core::panicking::panic("assertion failed: (0..=effective_commandline.len()).contains(&cursor_pos)Number of trailing prompt lines prompt linesexceeds prompt's yinferred from reported cursor positionReported cursor line indexis above fish's cursorGiven yexceeds the prompt's y", 73, &g_14e17e0); /* do not return */
                            v44 = v2 - 1;
                            v18 = v15;
                            v42 = v56 + v39;
                            v0 = __CFADD__(v56, v39);
                            v91 = 0;
                            v24 = &g_14e1828;
                            v38 = &g_14e17f8;
                            v37 = &g_14e1810;
                            v12 = 0;
                            if (v60)
                                goto LABEL_140b331;
                            while (true)
                            {
                                v92 = (long long)v87[32];
                                v93 = v92 * 40 + (long long)v87[24];
                                if (v93 == 40 || !v92)
                                {
                                    v94 = 0 + v92;
                                    v88 = v94 - v2;
                                    if (v94 >= v2)
                                        goto LABEL_140b312;
                                }
                                else
                                {
                                    v95 = (char)v93[8] + v92;
                                    v88 = v95 - v2;
                                    if (v95 >= v2)
                                        goto LABEL_140b312;
                                }
                                v88 = 0;
LABEL_140b312:
                                v40 = (long long)v87[40];
                                v10 = (long long)v87[48];
                                v12 = 1;
                                do
                                {
LABEL_140b331:
                                    if (v47 != v91)
                                    {
                                        if ((char)v28)
                                        {
                                            v96 = 0;
                                        }
                                        else
                                        {
                                            v96 = 1;
                                            if (v91 < v56)
                                            {
                                                v17 = v91;
                                            }
                                            else if (!v0)
                                            {
                                                v96 = 2;
                                                v17 = v56;
                                                if (v91 >= v42)
                                                {
                                                    v97 = v91;
                                                    v17 = v97 - v39;
                                                    if (v97 < v39)
                                                    {
                                                        v37 = &g_14e1810;
                                                        core::panicking::panic_const::panic_const_sub_overflow(&g_14e1810); /* do not return */
                                                    }
                                                    v96 = 1;
                                                }
                                            }
                                            else
                                            {
                                                v38 = &g_14e17f8;
                                                core::panicking::panic_const::panic_const_add_overflow(&g_14e17f8); /* do not return */
                                            }
                                        }
                                        v45 = v44;
                                        if (v88)
                                            v45 = v10;
                                        v98 = -(((char)v12 & 1) < 1) | v45;
                                        if (v67)
                                            v98 = 18446744073709551615;
                                        if (v91 >= v58[2])
                                        {
                                            v24 = &g_14e1828;
                                            core::panicking::panic_bounds_check(v91, v58[2], &g_14e1828); /* do not return */
                                        }
                                        v19 = v88;
                                        v99 = v59[2];
                                        if (v91 >= v59[2])
                                        {
                                            v24 = &g_14e1840;
                                            core::panicking::panic_bounds_check(v91, v99, 0x14e1840); /* do not return */
                                        }
                                        v100 = v91;
                                        v101 = *((int *)(v59[1] + v91 * 4));
                                        (v101 & 4294967295) >> 31.unwrap(&g_14e1858);
                                        v102 = fish::screen::wcwidth_rendered_min_0(*((int *)((char *)v18 + 0x4 * v100)));
                                        v88 = v19;
                                        if (!(char)v84.desired_append_char(v96, v17, v98, *((int *)((char *)v18 + 0x4 * v91)), *((int *)(v58[1] + v91 * 4)), v101, v46, v102))
                                        {
                                            v87 = v84;
                                            if (!((char)v12 & 1))
                                                core::option::unwrap_failed(&g_14e1870); /* do not return */
LABEL_140b362:
                                            v104 = (long long)v87[32] * 40 + (long long)v87[24];
                                            v48 = &v20;
                                            v49 = v75;
                                            v50 = v55;
                                            v51 = v43;
                                            v52 = v25;
                                            v53 = v41;
                                            v54 = v26;
                                            if (v104 == 40 || !(long long)v87[32] || (char)fish::screen::Screen::write::{{closure}}(&v48, (long long)v104[24]))
                                                v87.add_line();
                                            if (!(long long)v87[40])
                                            {
                                                v91 = (long long)v87[48] - 1;
                                                if ((long long)v87[48] >= 1)
                                                {
                                                    if (v91 >= (long long)v87[32])
                                                    {
                                                        v24 = &g_14e18a0;
                                                        core::panicking::panic_bounds_check(v91, v99, 0x14e1840); /* do not return */
                                                    }
                                                    v105 = 18446744073709551615;
                                                    if (*((char *)((long long)v87[24] + v91 * 40 + 32)))
                                                        goto LABEL_140b448;
                                                }
                                            }
                                            v105 = 0;
LABEL_140b448:
                                            v107 = fish::screen::calc_prompt_lines(v31, v32);
                                            v108 = v105 + (long long)v87[48];
                                            v109 = v108 + v107;
                                            if ((char)__CFADD__(v108, v107))
                                            {
                                                v38 = &g_14e18b8;
                                                core::panicking::panic_const::panic_const_add_overflow(0x14e18b8); /* do not return */
                                            }
                                            v110 = v2;
                                            v2 = v110 - v109;
                                            if ((v109 < 0 ^ (char)(((v110 ^ v109) & (v110 ^ v110 - v109)) >> 63)))
                                                v2 = 0x8000000000000000;
                                            v111 = 1.max(v2);
                                            if (((char)v61 & 1))
                                            {
                                                0.unwrap(&g_14e18d0);
                                                v112 = v62;
                                                if (v111 >= 4)
                                                {
                                                    v11 = (long long)v87[32];
LABEL_140b513:
                                                    *((unsigned long long *)&v87[40]) = v112;
                                                    *((unsigned long long *)&v87[48]) = v11;
                                                    v3 = 1.max(v27);
                                                    v4 = v111;
                                                    v65.set_term_size(&v3);
                                                    v65.update_rendering(v66);
                                                    v87.append_lines(v66 + 48);
                                                    *((char *)&v87[217]) = v88;
                                                    v3 = v63;
                                                    v4 = v64;
                                                    v5 = &v29;
                                                    v7 = &v33;
                                                    v8 = &v1;
                                                    v87.with_buffered_output(&v3);
                                                    v87.save_status();
                                                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
                                                    core::ptr::drop_in_place<fish::screen::ScreenLayout>(&v29);
                                                    core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v59[0], v59[1]);
                                                    core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(v58[0], v58[1]);
                                                    return;
                                                }
                                            }
                                            v11 = v10;
                                            if (v88)
                                            {
                                                if (!v67)
                                                {
                                                    v113 = v87 + 16;
                                                    v3.split_off(v113, v88);
                                                    core::ptr::drop_in_place<alloc::vec::Vec<fish::screen::Line>>(v113);
                                                    *((void* *)(v113 + 16)) = v6;
                                                    *((int128_t *)v113) = *((int128_t *)&v3);
                                                }
                                                v9 = v10 - v88;
                                                v11 = v9;
                                                if (v10 < v88)
                                                {
                                                    v37 = &g_14e1900;
                                                    core::panicking::panic_const::panic_const_sub_overflow(0x14e1900); /* do not return */
                                                }
                                            }
                                            v112 = v40;
                                            goto LABEL_140b513;
                                        }
                                    }
                                    else
                                    {
                                        if (!((char)v12 & 1))
                                            core::option::unwrap_failed(&g_14e1888); /* do not return */
                                        goto LABEL_140b362;
                                    }
                                    v91 = v100 + 1;
                                    v87 = v84;
                                } while (v60 != v91);
                            }
                        }
                    }
                }
                core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v59[0], v59[1]);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(v58[0], v58[1]);
                return;
            }
            v81 = 0;
            if (!((char)_ccall(2, 8, v55, v78, v74)))
                goto LABEL_140ad29;
LABEL_140b63a:
            v114 = &g_14e1780;
        }
        else
        {
            v114 = &g_14e1768;
        }
    }
    else
    {
        v77 = 0;
        if ((char)_ccall(6, 8, v56, v55, v74))
            goto LABEL_140acbc;
LABEL_140b628:
        v114 = &g_14e1750;
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, v114); /* do not return */
}
