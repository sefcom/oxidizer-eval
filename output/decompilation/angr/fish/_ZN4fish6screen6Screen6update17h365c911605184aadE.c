void fish::screen::Screen::update(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, char a7)
{
    char v0;  // [bp-0x192]
    char v1;  // [bp-0x191]
    unsigned long long v2;  // [sp-0x190]
    unsigned long long v3;  // [bp-0x190]
    void* v4;  // [bp-0x188], Other Possible Types: int, unsigned long long
    unsigned long long v5;  // [bp-0x188]
    int v6;  // [bp-0x188]
    int v7;  // [bp-0x188]
    void* v8;  // [bp-0x178], Other Possible Types: int, unsigned long long
    int v9;  // [bp-0x178], Other Possible Types: unsigned long long
    int v10;  // [bp-0x178]
    unsigned long v11;  // [bp-0x160]
    unsigned long v12;  // [bp-0x158]
    unsigned long long v13;  // [bp-0x150], Other Possible Types: char
    void* v14;  // [bp-0x150], Other Possible Types: char
    char v15;  // [bp-0x150]
    char v16;  // [bp-0x150]
    char v17;  // [bp-0x150]
    char v18;  // [bp-0x150]
    char v19;  // [bp-0x150]
    char v20;  // [bp-0x150]
    unsigned long v21;  // [bp-0x148], Other Possible Types: unsigned long long
    char v23;  // [bp-0x140]
    unsigned long long v24;  // [bp-0x130]
    unsigned int v25;  // [bp-0x128]
    unsigned int v26;  // [bp-0x124]
    void* v27;  // [bp-0x120]
    int v28;  // [bp-0x118]
    unsigned long long v29;  // [bp-0x118]
    unsigned long long v30;  // [bp-0x110]
    void* v31;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long v32;  // [sp-0x100]
    unsigned int v33;  // [bp-0xf4]
    char *v34;  // [bp-0xf0]
    unsigned long long v35;  // [bp-0xe8]
    unsigned long long v36;  // [bp-0xe0]
    unsigned long long v37;  // [bp-0xd8]
    unsigned long long v38;  // [bp-0xd0]
    unsigned long v39;  // [bp-0xc0]
    unsigned long long v40;  // [bp-0xb8]
    unsigned long v41;  // [bp-0xb0]
    unsigned long long v42;  // [bp-0xa8]
    unsigned long v43;  // [bp-0xa0]
    void* v44;  // [bp-0x98]
    unsigned long long v45;  // [bp-0x90]
    char v46;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v47;  // [bp-0x80]
    char v48;  // [bp-0x78]
    void* v49;  // [bp-0x68]
    char v50;  // [bp-0x60], Other Possible Types: unsigned long long
    char v51;  // [bp-0x58]
    char v52;  // dl
    unsigned long v53;  // r12
    void* v54;  // r12
    char v55;  // bpl
    unsigned int v56;  // ecx
    unsigned long long v57;  // cc_ndep
    char v58;  // al
    unsigned long long v59;  // r14
    unsigned long v60;  // r12
    void* v61;  // r14
    unsigned long long v62;  // cc_ndep
    unsigned long long v63;  // rax
    unsigned long v65;  // r12
    unsigned long long v66;  // rax
    unsigned long long v68;  // rdx
    unsigned long v71;  // rdi
    unsigned long long v72;  // rcx
    void* v73;  // rax
    unsigned long v74;  // rax
    unsigned long long v75;  // rax
    unsigned long long v76;  // r14
    char v77;  // al
    void* v79;  // r12
    void* v81;  // r12
    unsigned long v82;  // rcx
    void* v83;  // r13
    unsigned long long v84;  // rax
    struct_0 *v85;  // rax
    struct_2 *v86;  // rax
    unsigned int v87;  // ebx
    void* v88;  // rax
    void* v89;  // rbx
    void* v90;  // rbp
    unsigned long long v91;  // rax
    void* v92;  // rax
    void* v93;  // rbx
    struct_1 *v94;  // rax
    unsigned int v95;  // eax
    unsigned int v96;  // eax
    unsigned long long v97;  // rax
    unsigned long long v98;  // r13
    char v100;  // bpl
    void* v101;  // rsi
    unsigned long long v102;  // r12
    unsigned long v107;  // rbx
    unsigned long v108;  // rbx
    unsigned long long v109;  // [bp-0x178]

    v8 = a4;
    v5 = a3;
    v50.new();
    v34 = &v50;
    v35 = a1;
    v36 = a2;
    v13.lock();
    v38 = v13.unwrap(&g_14e1c90);
    v1 = v52 & 1;
    v53 = v38 + 8;
    v46.calc_prompt_layout(v53, v4, v9, 0, -1);
    v27 = v49;
    v13.calc_prompt_layout(v53, a5, a6, 0, -1);
    v2 = v24;
    core::ptr::drop_in_place<core::cell::UnsafeCell<alloc::vec::Vec<&phf::map::Map<&str,&str>>>>(v13, v21);
    v54 = (long long)a0[208];
    *((unsigned long long *)&a0[208]) = 0;
    v0 = (char)a0[218];
    v12 = *((long long *)a0);
    v11 = (long long)a0[8];
    if ((int)a0[56] == 1)
    {
        if (!((long long)a0[64] == (long long)a0[8] & (char)v12))
        {
            if ((long long)a0[64])
            {
                a0.move(0, 0);
                a0.reset_line(0);
                v0 |= (char)a0[218];
                v55 = 1;
            }
LABEL_140d58a:
            *((unsigned long *)&a0[56]) = v12;
            *((unsigned long *)&a0[64]) = v11;
        }
    }
    else
    {
        if ((v12 & 255))
            goto LABEL_140d58a;
    }
    *((unsigned short *)&a0[218]) = 0;
    v40 = v54.max((long long)a0[88]);
    if (v40 <= (long long)a0[32])
        v56 = v55;
    else
        v56 = 1;
    v25 = v56;
    if ((char)a0[217] != 1 || a7)
    {
        if ((char)(((0 ^ (long long)a0[136]) & (0 ^ -((long long)a0[136]))) >> 63))
        {
LABEL_140d5f9:
            a0.move(0, 0);
            v59 = *((long long *)&v48);
            if (!v59)
            {
                v14 = 35;
                (long long)a0[192].write_command(&v14);
            }
            v60 = a0 + 136;
            if (*((long long *)v60) == 0x8000000000000000 || !(char)(long long)a0[144].equal((long long)a0[152], v4, v9) || (a7 & (char)a0[217]))
            {
                v32 = v60;
                v29 = v47;
                v30 = v47 + v59 * 8;
                v31 = 0;
                v61 = 0;
                while (true)
                {
                    v62 = v57;
                    v63 = v29.next();
                    if (!v52)
                        break;
                    v65 = *((long long *)v52);
                    v16 = 10;
                    (long long)a0[192].write_command(&v16);
                    if (!v63)
                    {
                        v17 = 35;
                        (long long)a0[192].write_command(&v17);
                    }
                    v14 = v61;
                    v21 = v65;
                    v23 = 0;
                    v66 = v14.get(v4, v9);
                    if (!v66)
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1d68); /* do not return */
                    (long long)a0[192].write_str(v66, a2);
                    if ((char)_ccall(4, 24, v65 + 1, 0, _ccall(20, v66, 0, v62)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e1d80); /* do not return */
                    v61 = v65 + 1;
                    v57 = _ccall(20, v66, 0, v62);
                }
                v60 = v32;
                v68 = v9 - v61;
                if (v9 < v61)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1ca8); /* do not return */
            }
            else
            {
                v71 = v47 + v59 * 8 - 8;
                if (!v59)
                    v71 = 0;
                v61 = v71.map_or();
                v68 = v9 - v61;
                if (v9 < v61)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1ca8); /* do not return */
            }
            (long long)a0[192].write_str(v4 + v61 * 4, v68);
            v15.to_vec(v4, v9);
            v31 = *((long long *)&v23);
            *((int128_t *)&v28) = *((int128_t *)&v15);
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(v60);
            *((unsigned long long *)(v60 + 16)) = v31;
            *((int128_t *)v60) = *((int128_t *)&v29);
            *((void* *)&a0[96]) = v27;
            if ((v27 == v11 & (char)v12) == 1 && (char)a0.should_wrap(0))
            {
                *((unsigned long long *)&a0[112]) = 1;
                *((unsigned long long *)&a0[120]) = 0;
                v72 = 1;
                v73 = 128;
LABEL_140d764:
                *((unsigned long long *)(a0 + v73)) = v72;
            }
        }
        else
        {
            v58 = (long long)a0[144].equal((long long)a0[152], v4, v9);
            if (((char)a0[217] & a7) || !v58 || (v27 == v11 & (char)v12) && (char)a0.should_wrap(0))
                goto LABEL_140d5f9;
        }
        v39 = a0 + 56;
        v43 = (long long)a0[32];
        if ((long long)a0[32])
        {
            v74 = v11;
            v41 = v74 - 2;
            v42 = v74 - v2;
            v32 = v74 - 1;
            v75 = 1;
            v4 = 0;
            v37 = &g_14e1cd8;
            v76 = 0;
            do
            {
                v45 = v75;
                v39.create_line(v76);
                v77 = (char)a0[217];
                if ((v77 & 1))
                    v79 = 0;
                else
                    v79 = v27;
                if (v76)
                    v81 = 0;
                v8 = 0;
                v26 = (v76 ? 0 : v77 ^ 1);
                v8 = v9;
                if ((char)v25)
                {
                    v82 = v76 + 1;
                    if (v82 == (long long)a0[32])
                    {
                        v8 = (v82 ^ (long long)a0[48] | (long long)a0[40]) & 0xffffffffffffff00 | ((v82 ^ (long long)a0[48]) || (long long)a0[40]);
                        v8 = v9;
                        goto LABEL_140d99f;
                    }
                    else
                    {
                        v8 = 0;
                        v8 = v9;
                        v10 = v9;
                        if ((v77 & 1))
                        {
LABEL_140d9a3:
                            v83 = 0;
                            goto LABEL_140d9e4;
                        }
                        else
                        {
LABEL_140d9bd:
                            v84 = fish::screen::Screen::update::o_line(a0, v76);
                            v83 = fish::screen::line_shared_prefix(v84, fish::screen::Screen::update::s_line(a0, v76));
LABEL_140d9e4:
                            if (v83 < *((long long *)(fish::screen::Screen::update::o_line(a0, v76) + 24)))
                            {
                                v85 = fish::screen::Screen::update::o_line(a0, v76);
                                v86 = fish::screen::Screen::update::s_line(a0, v76);
                                if (v85->field_18 <= v86->field_18 || ((char)v6 & 1))
                                {
                                    v87 = 0;
                                    v4 = v6;
                                }
                                else
                                {
                                    fish::screen::Screen::update::{{closure}}(&v34, (long long)a0[192], 0);
                                    a0.move(0, v76);
                                    v18 = (char)v109 + 10;
                                    (long long)a0[192].write_command(&v18);
                                    v87 = (unsigned int)v85->field_18 & 0xffffff00 | 1;
                                    v4 = v109;
                                    v4 = v7;
                                }
                                v6 = v4;
                                v88 = *((long long *)(fish::screen::Screen::update::o_line(a0, v76) + 24));
                                if (!v88)
                                    goto LABEL_140daf0;
                                goto LABEL_140da3e;
                            }
                            else
                            {
                                v87 = 0;
                                v88 = v83;
                                if (v88)
                                {
LABEL_140da3e:
                                    if (v83 >= v88)
                                        v88 = fish::screen::Screen::update::o_line(a0, v76).wcswidth_min_0(v83);
                                    if (v88 > v81)
                                        v81 = v88;
                                    v44 = v83;
                                    v33 = v87;
                                    if ((char)v109)
                                        goto LABEL_140db60;
                                    goto LABEL_140db06;
                                }
                                else
                                {
LABEL_140daf0:
                                    v44 = v83;
                                    v33 = v87;
                                    if ((char)v109)
                                        goto LABEL_140db60;
LABEL_140db06:
                                    if ((char)a0.should_wrap(v76))
                                    {
                                        if (!(char)v12)
                                        {
                                            core::option::unwrap_failed(&g_14e1cc0); /* do not return */
                                        }
                                        else if (v11 >= 2)
                                        {
                                            v81 = v81.min(v41);
                                            if (((char)v26 & 1))
                                                v81 = v81.max(v27);
                                        }
                                        else
                                        {
                                            v37 = &g_14e1cd8;
                                            core::panicking::panic_const::panic_const_sub_overflow(&g_14e1cd8); /* do not return */
                                        }
                                    }
LABEL_140db60:
                                    v89 = 0;
                                    for (v90 = 0; v90 < *((long long *)(fish::screen::Screen::update::o_line(a0, v76) + 16)); v89 = v92)
                                    {
                                        v91 = fish::screen::wcwidth_rendered_min_0((unsigned int)fish::screen::Screen::update::o_line(a0, v76).char_at(v90));
                                        v92 = v91 + v89;
                                        if ((char)__CFADD__(v91, v89))
                                            core::panicking::panic_const::panic_const_add_overflow(&g_14e1cf0); /* do not return */
                                        if (v92 > v81)
                                            break;
                                        v90 += 1;
                                    }
                                    while (true)
                                    {
                                        v93 = v89;
                                        v94 = fish::screen::Screen::update::o_line(a0, v76);
                                        v4 = v6;
                                        if ((char)v109)
                                        {
                                            v4 = v6;
                                            if (!((char)vvar_1848{stack -392} & 1))
                                            {
                                                if (v90 < v94->field_10 && (v32 == v90 & (char)v12) != 1)
                                                    goto LABEL_140dbc0;
                                                fish::screen::Screen::update::{{closure}}(&v34, (long long)a0[192], 0);
                                                a0.move(v93, v76);
                                                v19 = 11;
                                                v4 = (unsigned long long)(long long)a0[192].write_command(&v19) & 0xffffffffffffff00 | 1;
                                                v4 = v7;
                                            }
                                        }
                                        *((int *)&v6) = vvar_1848{stack -392};
                                        if (v90 >= v94->field_10)
                                            break;
LABEL_140dbc0:
                                        a0.handle_soft_wrap(v93, v76);
                                        a0.move(v93, v76);
                                        v95 = fish::screen::Screen::update::o_line(a0, v76).color_at(v90);
                                        fish::screen::Screen::update::{{closure}}(&v34, (long long)a0[192], v95);
                                        v96 = fish::screen::Screen::update::o_line(a0, v76).char_at(v90);
                                        v97 = fish::screen::wcwidth_rendered_min_0(v96);
                                        v98 = v97;
                                        a0.with_buffered_output(v96, v97);
                                        if ((char)__CFADD__(v93, v98))
                                            core::panicking::panic_const::panic_const_add_overflow(&g_14e1d08); /* do not return */
                                        v90 += 1;
                                        v89 = v93 + v98;
                                    }
                                    if ((((char)v33 | (char)v6) & 1))
                                    {
LABEL_140dce8:
                                        continue;
                                    }
                                    else
                                    {
                                        if (v0)
                                        {
                                            v100 = 1;
                                            if ((v93 < v11 & (char)v12) || v2 < (long long)a0[200])
                                                continue;
                                        }
                                        else
                                        {
                                            v100 = 1;
                                            if (v2 < (long long)a0[200])
                                                continue;
                                        }
                                        if (*((long long *)(fish::screen::Screen::update::s_line(a0, v76) + 16)) == v44)
                                            goto LABEL_140dce8;
                                        v100 = fish::screen::Screen::update::s_line(a0, v76).wcswidth_min_0(18446744073709551615) > v93;
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
LABEL_140d99f:
                    v10 = v8;
                    v8 = v10;
                    if (!(v77 & 1))
                        goto LABEL_140d9bd;
                    goto LABEL_140d9a3;
                }
                fish::screen::Screen::update::{{closure}}(&v34, (long long)a0[192], 0);
                if (v100)
                {
                    a0.move(v93, v76);
                    v20 = 10;
                    (long long)a0[192].write_command(&v20);
                }
                v3 = v2;
                if (v3)
                {
                    v3 = v2;
                    if (((char)v26 & 1))
                    {
                        a0.move(0, 0);
                        if (!(char)v12)
                        {
                            core::option::unwrap_failed(&g_14e1d20); /* do not return */
                        }
                        else if (v11 >= v2)
                        {
                            a0.move(v42, v76);
                            fish::screen::Screen::update::{{closure}}(&v34, (long long)a0[192], 0);
                            (long long)a0[192].write_str(a5, a6);
                            v101 = (long long)a0[96] + v2;
                            if ((char)__CFADD__((long long)a0[96], v2))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14e1d50); /* do not return */
                            *((void* *)&a0[96]) = v101;
                            a0.move(v101 - v2, (long long)a0[104]);
                            (long long)a0[192].write_str("\r", 1);
                            *((unsigned long long *)&a0[96]) = 0;
                            v3 = v2;
                        }
                        else
                        {
                            v37 = &g_14e1d38;
                            core::panicking::panic_const::panic_const_sub_overflow(0x14e1d38); /* do not return */
                        }
                    }
                }
                v76 = v45;
                v75 = v76 + (v76 < v43);
            } while (v76 < v43);
        }
        else
        {
            v4 = 0;
            v102 = v2;
        }
        if (!_ZN4fish6screen23MIDNIGHT_COMMANDER_HACK17hdd77718a4084c5f3E.load())
            a0.move(0, 0);
        if (!((char)v6 & 1) && (char)v25)
        {
            fish::screen::Screen::update::{{closure}}(&v34, (long long)a0[192], 0);
            v107 = (long long)a0[32];
            if ((long long)a0[32] < v40)
            {
                do
                {
                    a0.move(0, v107);
                    v13 = 10;
                    (long long)a0[192].write_command(&v13);
                    v107 += 1;
                } while (v40 != v107);
            }
        }
        a0.move((long long)a0[40], (long long)a0[48]);
        fish::screen::Screen::update::{{closure}}(&v34, (long long)a0[192], 0);
        v15.clone((long long)a0[24], (long long)a0[32]);
        v108 = a0 + 72;
        *((int128_t *)&v8) = *((int128_t *)a0);
        *((int128_t *)&v28) = *((int128_t *)&v15);
        v31 = *((long long *)&v23);
        *((int128_t *)&v4) = (int128_t)a0[40];
        core::ptr::drop_in_place<fish::screen::ScreenData>(v39);
        a0[56] = v8;
        *((unsigned long long *)(v108 + 16)) = v31;
        *((int128_t *)v108) = *((int128_t *)&v29);
        a0[96] = v4;
        *((unsigned long long *)&a0[200]) = v102;
        core::ptr::drop_in_place<core::cell::UnsafeCell<alloc::vec::Vec<&phf::map::Map<&str,&str>>>>(v46, v47);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v38, v1);
        core::ptr::drop_in_place<fish::highlight::highlight::HighlightColorResolver>(v50, *((long long *)&v51));
        return;
    }
    a0.move(0, 0);
    v14 = 10;
    (long long)a0[192].write_command(&v14);
    core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(a0 + 136);
    *((unsigned long long *)&a0[136]) = 0x8000000000000000;
    v73 = 96;
    v72 = 0;
    goto LABEL_140d764;
}
