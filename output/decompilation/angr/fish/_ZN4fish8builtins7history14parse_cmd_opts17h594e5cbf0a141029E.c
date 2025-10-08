long long fish::builtins::history::parse_cmd_opts(struct_1 *a0, unsigned long long *a1, unsigned long long a2[2305843009213693951], unsigned long long a3, unsigned long long a4, struct_0 *a5)
{
    unsigned long v0;  // [bp-0x198]
    unsigned long v1;  // [bp-0x190]
    unsigned long v2;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0x180]
    unsigned long v4;  // [bp-0x178]
    unsigned long long v5;  // [bp-0x170]
    unsigned long long v6;  // [bp-0x168]
    unsigned long long v7;  // [bp-0x160]
    int v8;  // [bp-0x148]
    unsigned long long v9;  // [bp-0x140]
    void* v10;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long v11;  // [bp-0x130]
    unsigned long long v12;  // [bp-0x128]
    char v13;  // [bp-0x128]
    int v14;  // [bp-0x128]
    unsigned long v15;  // [bp-0x120], Other Possible Types: unsigned long long
    void* v16;  // [bp-0x118], Other Possible Types: unsigned long, unsigned long long
    int v17;  // [bp-0x110]
    char v18;  // [bp-0x108]
    unsigned long long v19;  // [bp-0x100]
    unsigned long long v20;  // [bp-0xf8]
    void* v21;  // [bp-0xd8]
    unsigned long long v22;  // [bp-0xd0]
    void* v23;  // [bp-0xc8]
    unsigned long long v24[2305843009213693952];  // [bp-0xc0]
    unsigned long long v25;  // [bp-0xb8]
    unsigned long long v26;  // [bp-0xb0]
    unsigned long long v27;  // [bp-0xa8]
    unsigned long long v28;  // [bp-0xa0]
    unsigned long long v29;  // [bp-0x98]
    unsigned long long v30;  // [bp-0x90]
    int v31;  // [bp-0x88], Other Possible Types: void*
    unsigned long long v32;  // [bp-0x80]
    unsigned long long v33;  // [bp-0x78]
    void* v34;  // [bp-0x70]
    uint128_t v35;  // [bp-0x68]
    unsigned int v36;  // [bp-0x58]
    unsigned short v37;  // [bp-0x54]
    char v38;  // [bp-0x52]
    unsigned long long v39;  // [bp-0x50]
    unsigned long long v40;  // [bp-0x48]
    char v41;  // [bp-0x40]
    unsigned long long v44;  // rbp
    char *v45;  // rdi
    unsigned long long v46;  // rcx
    char *v47;  // r14
    unsigned long long v48;  // r12
    unsigned int v49;  // eax
    char v50;  // al
    unsigned long long v51;  // rcx
    unsigned long long v53;  // rdx
    unsigned long long v57;  // rsi
    unsigned long v62;  // rax
    unsigned long v65;  // rax
    unsigned long long v67;  // rdx
    void* v68;  // [bp-0x148], Other Possible Types: unsigned long long

    if (!a3)
        return 8589934593;
    v44 = a3;
    v0 = a2[0];
    v1 = a2[1];
    v26 = "C";
    v27 = 13;
    v28 = &g_14ca528;
    v29 = 14;
    v30 = 4;
    *((uint128_t *)&v31) = 0;
    v34 = 0;
    v36 = 63;
    v38 = 1;
    v37 = 0;
    v21 = 0;
    v35 = 0;
    v22 = 8;
    v23 = 0;
    v11 = &a0->field_10;
    v4 = &a0->padding_2c;
    v3 = a5->field_10;
    v45 = &v21;
    v46 = fish::wgetopt::WGetopter::next_opt;
    v7 = &g_14ca708;
    v5 = &g_14ca720;
    while (true)
    {
        v47 = v45;
        v48 = v46;
        v49 = v45.next_opt();
        if (v49 == 0x110000)
        {
            *(a1) = v34;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v21);
            return 0;
        }
        switch (v49)
        {
        case 1:
            v50 = fish::builtins::history::set_hist_cmd(v0, v1, v4, 1, v3);
            goto LABEL_1356f3d;
        case 2:
            v50 = fish::builtins::history::set_hist_cmd(v0, v1, v4, 0, v3);
            goto LABEL_1356f3d;
        case 3:
            v50 = fish::builtins::history::set_hist_cmd(v0, v1, v4, 4, v3);
LABEL_1356f3d:
            v45 = v47;
            v46 = v48;
            if (!v50)
            {
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v21);
                return 4294967297;
            }
            continue;
        case 4:
            v50 = fish::builtins::history::set_hist_cmd(v0, v1, v4, 2, v3);
            goto LABEL_1356f3d;
        case 5:
            v50 = fish::builtins::history::set_hist_cmd(v0, v1, v4, 3, v3);
            goto LABEL_1356f3d;
        case 58:
            v62 = v34 - 1;
            if (v34 < 1)
            {
                v7 = &g_14ca6a8;
                core::panicking::panic_const::panic_const_sub_overflow(0x14ca6d8); /* do not return */
            }
            else if (v62 < a3)
            {
                fish::builtins::shared::builtin_missing_argument(a4, a5, v0, v1, a2[2 * v62], a2[1 + 2 * v62], 1);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v21);
                return 8589934593;
            }
            else
            {
                v2 = v62;
                v5 = &g_14ca6c0;
                core::panicking::panic_bounds_check(v2, v44, &g_14ca6c0); /* do not return */
            }
        case 59:
            v65 = v34 - 1;
            if (v34 < 1)
            {
                v7 = &g_14ca6d8;
                core::panicking::panic_const::panic_const_sub_overflow(0x14ca6d8); /* do not return */
            }
            else if (v65 < a3)
            {
                fish::builtins::shared::builtin_unexpected_argument(a4, a5, v0, v1, a2[2 * v65], a2[1 + 2 * v65], 1);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v21);
                return 8589934593;
            }
            else
            {
                v2 = v65;
                v5 = &g_14ca6f0;
                core::panicking::panic_bounds_check(v2, v44, &g_14ca6f0); /* do not return */
            }
        case 63:
            if (v34 < 1)
            {
                v7 = &g_14ca708;
                core::panicking::panic_const::panic_const_sub_overflow(&g_14ca708); /* do not return */
            }
            v2 = v34 - 1;
            if (v2 >= v25)
                core::panicking::panic_bounds_check(v2, v44, 0x14ca720); /* do not return */
            v51 = v2 * 16;
            if (!*((long long *)(8 + (char *)v24 + v51)))
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14ca738); /* do not return */
            v6 = v51;
            fish::wutil::wcstoi::fish_wcstol(&v12, *((long long *)((char *)v24 + v6)) + 4, *((long long *)(8 + (char *)v24 + v6)) - 1);
            if (!v13)
            {
                a0->field_0 = 1;
                a0->field_8 = v15;
                v30 = 4;
                v31 = 0;
                break;
            }
            else if (v2 < a3)
            {
                fish::builtins::shared::builtin_unknown_option(a4, a5, v0, v1, *((long long *)((char *)a2 + v6)), *((long long *)(8 + (char *)a2 + v6)), 1);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v21);
                goto LABEL_1357008__35;
            }
            else
            {
                v5 = &g_14ca750;
                core::panicking::panic_bounds_check(v2, v44, &g_14ca750); /* do not return */
            }
        case 67:
            a0->field_29 = 1;
            break;
        case 82:
            a0->field_2b = 1;
            break;
        case 99:
            a0->field_2d = 4;
            break;
        case 101:
            a0->field_2d = 0;
            break;
        case 104:
            a0->field_28 = 1;
            break;
        case 110:
            if (v32)
            {
                v2 = v32;
                v6 = v33;
                fish::wutil::wcstoi::fish_wcstol(&v39, v32, v33);
                if ((char)v39 == 1)
                {
                    v68 = 0;
                    v9 = 4;
                    v10 = 0;
                    v13 = 1;
                    v15 = v0;
                    v16 = v1;
                    v18 = 1;
                    v19 = v2;
                    v20 = v6;
                    fish_printf::printf_impl::sprintf_locale(&v41, &v68, g_14c83b8[0].localize(), v67, ".", &(unsigned long long)v14, 2);
                    v41.unwrap(&g_14ca690);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v14);
                    *((int128_t *)&v14) = *((int128_t *)&v68);
                    v16 = 0;
                    v3.append(&(unsigned long long)v14);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v21);
                    return 8589934593;
                }
                a0->field_0 = 1;
                a0->field_8 = v40;
                break;
            }
            else
            {
                core::option::unwrap_failed(&g_14ca678); /* do not return */
            }
        case 112:
            a0->field_2d = 5;
            break;
        case 116:
            if (!v32)
                v53 = 6;
            else
                v53 = v33;
            if (!v32)
                v57 = "#";
            else
                v57 = v32;
            v12.to_string(v57, v53);
            v10 = v16;
            *((int128_t *)&v8) = *((int128_t *)&v12);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v11);
            *((unsigned long long *)(v11 + 16)) = v10;
            *((int128_t *)v11) = *((int128_t *)&v68);
            break;
        case 122:
            a0->field_2a = 1;
            break;
        default:
            v12 = &g_14c60b8;
            v15 = 1;
            v16 = 8;
            *((uint128_t *)&v17) = 0;
            core::panicking::panic_fmt(&v12, &g_14ca768); /* do not return */
        }
        v45 = v47;
        v46 = v48;
    }
LABEL_1357008__35:
    return 8589934593;
}
