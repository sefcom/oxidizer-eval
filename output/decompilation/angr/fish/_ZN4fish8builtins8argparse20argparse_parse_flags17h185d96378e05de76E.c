long long fish::builtins::argparse::argparse_parse_flags(unsigned long long a0, void* a1, void* a2, unsigned long long *a3, unsigned long long a4, unsigned long long *a5, struct_0 *a6)
{
    char v0;  // [bp-0x200]
    char v1;  // [sp-0x1f9]
    void* v2;  // [bp-0x1e8]
    unsigned long long v3;  // [bp-0x1e0]
    void* v4;  // [bp-0x1d8]
    unsigned long long v5;  // [bp-0x1d0]
    unsigned long v6;  // [bp-0x1c8]
    void* v7;  // [bp-0x1c0]
    int v8;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned int v9;  // [bp-0x1b8]
    unsigned int v10;  // [bp-0x1b7]
    unsigned int v11;  // [bp-0x1b4]
    void* v12;  // [bp-0x1b0], Other Possible Types: int
    int v13;  // [bp-0x1b0]
    void* v14;  // [bp-0x1a8]
    char v15;  // [sp-0x198]
    int v16;  // [sp-0x190]
    unsigned long long v17;  // [bp-0x178]
    unsigned long long v18;  // [bp-0x168]
    unsigned long v19;  // [bp-0x160]
    char v20;  // [bp-0x158]
    char v21;  // [bp-0x155]
    void* v22;  // [bp-0x148], Other Possible Types: char
    unsigned long long v23;  // [bp-0x140]
    void* v24;  // [bp-0x138], Other Possible Types: unsigned long long
    char v25;  // [bp-0x120]
    unsigned long long v26;  // [bp-0x110]
    void* v27;  // [bp-0x108]
    unsigned long long v28;  // [sp-0x100]
    int v29;  // [bp-0xf8], Other Possible Types: void*
    unsigned long long v30;  // [bp-0xf0]
    unsigned long long v31;  // [bp-0xf0]
    void* v32;  // [bp-0xe8]
    void* v33;  // [bp-0xe0]
    uint128_t v34;  // [bp-0xd8]
    unsigned int v35;  // [bp-0xc8]
    char v36;  // [bp-0xc4]
    char v37;  // [bp-0xc3]
    char v38;  // [bp-0xc2]
    unsigned long long v39;  // [bp-0xb8]
    void* v40;  // [bp-0xa8]
    void* v41;  // [bp-0xa0]
    unsigned long long v42;  // [bp-0x98]
    void* v43;  // [bp-0x90]
    char v44;  // [bp-0x88]
    char v45;  // [bp-0x80]
    unsigned long long v46;  // [bp-0x78]
    unsigned long long v47;  // [bp-0x60]
    int v48;  // [bp-0x58]
    int v49;  // [bp-0x48]
    unsigned long long v50;  // rsi
    unsigned long long v51;  // cc_ndep
    unsigned long long v52;  // r15
    unsigned int v53;  // edx
    void* v54;  // rbp
    unsigned long long v55;  // rax
    void* v56;  // r12
    void* v57;  // rbp
    unsigned long v58;  // rbp
    unsigned long v59;  // rdx
    unsigned long long v60;  // r14
    void* v61;  // rbx
    uint128_t *v62;  // rbp
    unsigned long long v63;  // rax
    void* v64;  // r15
    unsigned long long v66;  // r13
    char v67;  // al
    unsigned long v68;  // cc_dep1
    unsigned long long v69;  // cc_ndep
    unsigned long v70;  // rdx
    void* v71;  // r15
    char v72;  // sil
    unsigned long long v73;  // rcx
    void* v74;  // r14
    unsigned long long *v75;  // r12
    unsigned int v76;  // ecx
    unsigned long v77;  // rax
    void* v78;  // r14
    unsigned long long v79;  // rbx
    unsigned long long v80;  // r14
    unsigned long long v81;  // rax
    unsigned long long v82;  // rax
    unsigned long long v83;  // rax
    int v84;  // xmm1
    unsigned long long v85;  // rax
    int v86;  // xmm1
    unsigned long long v87;  // rax
    int v88;  // xmm0
    int v89;  // xmm1
    unsigned int v90;  // esi
    unsigned long long v91;  // rsi
    unsigned long long v92;  // rdi
    unsigned long long v93;  // rdx
    char v97;  // [bp-0x1b8]

    v39 = a4.with_capacity_in(8, 16, &g_14c7108);
    v40 = 0;
    v39.spec_extend(a3, &a3[2 * a4]);
    if ((char)a1[238])
        v50 = "+";
    else
        v50 = "-";
    v22.to_vec(v50, 1);
    v46 = v24;
    memcpy(&v44, &v22, 16);
    v41 = 0;
    v42 = 8;
    v43 = 0;
    fish::builtins::argparse::populate_option_strings(a1, &v44, &v41);
    memcpy(&v25, &v45, 16);
    v18 = 8;
    v26 = v18;
    v27 = 0;
    v28 = 4;
    *((uint128_t *)&v29) = 0;
    v33 = 0;
    v35 = 63;
    v38 = 1;
    v36 = 0;
    v22 = 0;
    v34 = 0;
    v23 = 8;
    v24 = 0;
    v37 = (char)a1[236];
    v19 = a1 + 48;
    v7 = 0;
    v6 = a6->field_10;
    v5 = &g_14c72e8;
    v17 = &g_14c7300;
    do
    {
        v47.next_opt_indexed(&v22);
        v52 = (long long)v48;
        if (v52 == 2)
        {
            v78 = v33;
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::borrow::Cow<widestring::utfstr::Utf32Str>>>(a1 + 72);
            *((unsigned long long *)&a1[88]) = 0;
            *((int128_t *)&a1[72]) = *((int128_t *)&v22);
            *(a5) = v78;
            v79 = 0;
            v80 = 0;
        }
        v53 = v47;
        if (v53 <= 58)
        {
            if (v53 == 1)
            {
                v54 = v33 - 1;
                if (v33 < 1)
                    goto LABEL_133bcd2;
                if (v54 >= v7)
                    goto LABEL_133bca5;
                *((int128_t *)&v13) = *((int128_t *)(v59 + v54 * 16));
                v8 = 0x8000000000000000;
                v19.push(&(char)v8, &g_14c7318);
                continue;
            }
            else
            {
                if (v53 == 58)
                {
                    v54 = v33 - 1;
                    if (v33 < 1)
                    {
                        v82 = &g_14c7120;
LABEL_133bccd:
                        v5 = v82;
LABEL_133bcd2:
                        core::panicking::panic_const::panic_const_sub_overflow(v5); /* do not return */
                    }
                    if (v54 < v7)
                    {
                        fish::builtins::shared::builtin_missing_argument(a0, a6, (long long)a1[8], (long long)a1[16], *((long long *)(v59 + v54 * 16)), *((long long *)(v59 + v54 * 16 + 8)), 0);
                        goto LABEL_133ba35;
                    }
                    else
                    {
                        v81 = &g_14c7138;
                    }
LABEL_133bc9d:
                    v17 = v81;
LABEL_133bca5:
                    core::panicking::panic_bounds_check(v54, v7, v17); /* do not return */
                }
            }
            v55 = fish::builtins::argparse::handle_flag(a0, a1, v53, (unsigned int)v52 == 1, &v22, v6);
            goto LABEL_133b434;
        }
        else if (v53 != 63 && v53 == 59)
        {
            v54 = v33 - 1;
            if (v33 < 1)
            {
                v82 = &g_14c7150;
                goto LABEL_133bccd;
            }
            else if (v54 < v7)
            {
                fish::builtins::shared::builtin_unexpected_argument(a0, a6, (long long)a1[8], (long long)a1[16], *((long long *)(v59 + v54 * 16)), *((long long *)(v59 + v54 * 16 + 8)), 0);
                goto LABEL_133ba35;
            }
            else
            {
                v81 = &g_14c7168;
                goto LABEL_133bc9d;
            }
        }
        v56 = v33;
        v57 = v56;
        v54 = v57 - 1;
        if (v57 < 1)
        {
            v82 = &g_14c7180;
            goto LABEL_133bccd;
        }
        if (v54 >= v7)
        {
            v81 = &g_14c7198;
            goto LABEL_133bc9d;
        }
        v58 = v54 * 16;
        v60 = *((long long *)(v59 + v58)).slice_from(*((long long *)(v59 + v58 + 8)), 1);
        v61 = v59;
        if ((char)fish::builtins::argparse::is_implicit_int((int)a1[232], v60, a2))
        {
            v55 = fish::builtins::argparse::validate_and_store_implicit_int(a0, a1, v60, v59, &v22, (unsigned int)v52 == 1, v6);
LABEL_133b434:
            if (!((char)v55 & 1))
                continue;
            v80 = v55 & 0xffffffff00000000;
            goto LABEL_133ba3f;
        }
        v62 = v58 + v59;
        if (!(char)a1[239])
        {
            v2 = 0;
            v3 = 4;
            v4 = 0;
            v83 = g_14c5fc8[0].localize();
            v84 = *(v62);
            v97 = 1;
            *((int128_t *)&v12) = (int128_t)a1[8];
            v15 = 1;
            v16 = v84;
            fish_printf::printf_impl::sprintf_locale(&v20, &v2, v83, v59, ".", &v97, 2, *((long long *)&v0));
            v20.unwrap(&g_14c71b0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v97);
            *((int128_t *)&v8) = *((int128_t *)&v2);
            v14 = 0;
            v6.append(&v97);
            goto LABEL_133ba35;
        }
        if ((unsigned int)v52 == 1)
        {
            v91 = 31;
            v92 = "assertion failed: !is_long_flag%";
            v93 = &g_14c72d0;
            goto LABEL_133bc8e;
        }
        v63 = v60.starts_with(v59, "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1);
        if (!(char)v63)
        {
            v71 = a1;
            v72 = (char)v71[240];
            if (!v72)
                goto LABEL_133b7d8;
            v73 = v30;
            if (!v29)
                goto LABEL_133b6ec;
            if (!v30)
            {
                v30 = 4;
                v32 = v29;
                v28 = 4;
                v29 = 0;
                goto LABEL_133b7d8;
            }
            else
            {
                v91 = 37;
                v92 = "assertion failed: w.woptarg.is_none()assertion failed: opts.unknown_handling == UnknownHandling::Moveassertion failed: !is_long_flag%";
                v93 = &g_14c7210;
                goto LABEL_133bc8e;
            }
        }
        v1 = v63;
        if (!v30)
        {
            v64 = v29;
            v31 = 4;
        }
        else if (!v29)
        {
            v64 = v32;
            v31 = v30;
        }
        else
        {
            v91 = 45;
            v92 = "assertion failed: w.remaining_text.is_empty()assertion failed: opt_spec.accumulate_argsassertion failed: w.woptarg.is_none()assertion failed: opts.unknown_handling == UnknownHandling::Moveassertion failed: !is_long_flag%";
            v93 = &g_14c71c8;
LABEL_133bc8e:
            core::panicking::panic(v92, v91, v93); /* do not return */
        }
        v66 = v31;
        v67 = v66.find_char(v64, 61);
        v68 = v67 & 1;
        if ((v67 & 1))
        {
            v69 = _ccall(17, v68, 0, v51);
            v70 = v59 + 1;
            if ((char)_ccall(4, 24, v59 + 1, 0, _ccall(17, v68, 0, v51)))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14c71e0); /* do not return */
            }
            else if (v64 >= v70)
            {
                v30 = v70 * 4 + v66;
                v32 = v64 - v70;
                v51 = v69;
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c71f8); /* do not return */
            }
        }
        v28 = 4;
        v29 = 0;
        v71 = a1;
        v72 = (char)v71[240];
        if (v72)
        {
            v73 = v30;
            v63 = v1;
LABEL_133b6ec:
            if (v72 != 1)
                goto LABEL_133b7d8;
            v74 = 0;
            if (v73)
            {
LABEL_133b731:
                v76 = (char)v71[239];
                if (v76 != 1)
                    goto LABEL_133b7ec;
                goto LABEL_133b742;
            }
            else if (v56 < a4)
            {
                v33 = v56 + 1;
                v75 = v56 * 16;
                v74 = *((long long *)(a3 + v75));
                v61 = *((long long *)(a3 + v75 + 8));
                goto LABEL_133b731;
            }
            else
            {
                v2 = 0;
                v3 = 4;
                v4 = 0;
                v85 = g_14c6010[0].localize();
                v86 = *(v62);
                *((char *)&v8) = 1;
                *((int128_t *)&v12) = (int128_t)v71[8];
                v15 = 1;
                v16 = v86;
                fish_printf::printf_impl::sprintf_locale(&v20, &v2, v85, v59, ".", &(char)v8, 2, *((long long *)&v0));
                v20.unwrap(&g_14c7228);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v8);
                *((int128_t *)&v8) = *((int128_t *)&v2);
                v14 = 0;
                v6.append(&(char)v8);
                goto LABEL_133ba35;
            }
        }
        v9 = 61;
        v63 = v1;
        if ((char)v8.slice_contains(v60, v59))
        {
            v2 = 0;
            v3 = 4;
            v4 = 0;
            v87 = g_14c6058[0].localize();
            v88 = (int128_t)v71[8];
            v89 = *(v62);
            v97 = 1;
            v90 = *((int *)&v21);
            v10 = *((int *)&v20);
            v11 = v90;
            v12 = v88;
            v15 = 1;
            v16 = v89;
            fish_printf::printf_impl::sprintf_locale(&v20, &v2, v87, v59, ".", &v97, 2, *((long long *)&v0));
            v20.unwrap(&g_14c7240);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v97);
            *((int128_t *)&v8) = *((int128_t *)&v2);
            v14 = 0;
            v6.append(&v97);
LABEL_133ba35:
            v80 = 0x200000000;
LABEL_133ba3f:
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::borrow::Cow<widestring::utfstr::Utf32Str>>>(&v22);
            v79 = 1;
        }
LABEL_133b7d8:
        v74 = 0;
        v76 = (char)v71[239];
        if (v76 == 1)
        {
LABEL_133b742:
            fish::builtins::argparse::delete_flag(&v49, &v22, v63);
            v19.push(&v49, &g_14c7258);
            if (v74)
            {
                v12 = v74;
                v14 = v61;
                v8 = 0x8000000000000000;
                v19.push(&v97, &g_14c7270);
                goto LABEL_133b82c;
            }
        }
LABEL_133b7ec:
        if (v76 != 2)
        {
            v91 = 64;
            v92 = "assertion failed: opts.unknown_handling == UnknownHandling::Moveassertion failed: !is_long_flag%";
            v93 = &g_14c72b8;
            goto LABEL_133bc8e;
        }
        else if (v74)
        {
            v12 = v74;
            v14 = v61;
            v8 = 0x8000000000000000;
            v22.push(&(char)v8, &g_14c7288);
        }
LABEL_133b82c:
        v77 = v33;
        if (v29)
        {
            if (v77)
            {
                v51 = _ccall(20, v77, 0, v51);
                v77 -= 1;
                v33 = v77;
            }
            else
            {
                v82 = &g_14c72a0;
                goto LABEL_133bccd;
            }
        }
    } while (v77 != a2);
}
