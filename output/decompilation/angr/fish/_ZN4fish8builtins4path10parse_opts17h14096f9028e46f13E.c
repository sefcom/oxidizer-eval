long long fish::builtins::path::parse_opts(void* a0, unsigned long a1, unsigned long a2, void* a3, unsigned long long a4, unsigned long long a5, struct_0 *a6)
{
    char v0;  // [bp-0x208]
    unsigned long v1;  // [bp-0x200]
    unsigned long v2;  // [bp-0x1f8]
    unsigned long long v3;  // [bp-0x1f0]
    unsigned long long v4;  // [bp-0x1e8]
    unsigned long long v5;  // [bp-0x1e0]
    int v7;  // [bp-0x1d8]
    unsigned long v8;  // [bp-0x1d0], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x1c8], Other Possible Types: unsigned long, unsigned long long
    char v10;  // [bp-0x1b8]
    unsigned long long v11;  // [bp-0x1b0]
    unsigned long long v12[2305843009213693952];  // [bp-0x1a8]
    unsigned long long v13;  // [bp-0x190]
    unsigned long long v14;  // [bp-0x188]
    void* v15;  // [bp-0x178]
    void* v16;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x168]
    void* v18;  // [bp-0x160]
    void* v19;  // [bp-0x150]
    unsigned long long v20;  // [bp-0x148]
    void* v21;  // [bp-0x140]
    unsigned long long v22;  // [bp-0x138]
    void* v23;  // [bp-0x130]
    void* v24;  // [bp-0x128]
    unsigned long long *v25;  // [bp-0x118]
    char v26;  // [bp-0x110]
    void* v27;  // [bp-0x100]
    unsigned long long v28;  // [bp-0xf8]
    void* v29;  // [bp-0xf0]
    void* v30;  // [bp-0xe8]
    unsigned long long v31;  // [bp-0xe0]
    int v32;  // [bp-0xd8]
    unsigned long long v33;  // [bp-0xc8]
    unsigned long long v34;  // [bp-0xc0]
    unsigned long long v35;  // [bp-0xb8]
    int v36;  // [bp-0xb0]
    unsigned long long v37;  // [bp-0xa8]
    unsigned long long v38;  // [bp-0xa0]
    void* v39;  // [bp-0x98]
    uint128_t v40;  // [bp-0x90]
    unsigned int v41;  // [bp-0x80]
    unsigned short v42;  // [bp-0x7c]
    char v43;  // [bp-0x7a]
    char v44;  // [bp-0x78]
    int v45;  // [bp-0x70]
    int v46;  // [bp-0x60]
    int v47;  // [bp-0x48]
    void* v48;  // r14
    char *v49;  // r12
    unsigned int v50;  // eax
    void* v51;  // rdi
    unsigned int *v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // r14
    unsigned long long v55[2305843009213693952];  // r13
    char *v56;  // rax
    char *v57;  // rax
    void* v58;  // rdi
    unsigned int *v59;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61;  // r14
    unsigned long long v62[2305843009213693952];  // rdx, Other Possible Types: unsigned long
    unsigned long long v63[2305843009213693952];  // r13
    char *v64;  // rax
    char *v65;  // rax
    unsigned long long v68;  // rbx
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbx
    unsigned long long v71;  // rax
    void* v72;  // rax
    unsigned long long v73;  // rdx
    struct_0 *v74;  // rcx
    unsigned long long v75;  // rbx
    unsigned long long v76;  // rax
    unsigned long long v77;  // rbx
    unsigned long long v78;  // rbx
    unsigned long long v79;  // rax
    unsigned long v80;  // rdi
    unsigned long long v82;  // rcx

    if (!a4)
        core::panicking::panic_bounds_check(0, 0, &g_14cae58); /* do not return */
    v1 = *((long long *)a3);
    v2 = (long long)a3[8];
    v14 = a4.with_capacity_in(8, 16, &g_14cae70);
    v15 = 0;
    v14.spec_extend(a3, a4 * 16 + a3);
    fish::builtins::path::construct_short_opts(&v44, a0);
    v24 = a3;
    v30 = a3;
    v22 = a4;
    v31 = a4;
    v32 = v45;
    v33 = &g_14cae88;
    v34 = 12;
    v35 = 4;
    *((uint128_t *)&v36) = 0;
    v39 = 0;
    v41 = 63;
    v43 = 1;
    v42 = 0;
    v27 = 0;
    v40 = 0;
    v28 = 8;
    v29 = 0;
    v49 = &v27;
    v23 = a0 + 8;
    while (true)
    {
        v50 = v49.next_opt();
        switch (v50)
        {
        case 1:
            if (v37)
            {
                *((unsigned long long *)&a0[16]) = v37;
                *((unsigned long long *)&a0[24]) = v38;
                continue;
            }
            else
            {
                core::panicking::panic("assertion failed: w.woptarg.is_some()", 37, &g_14cb098); /* do not return */
            }
        case 2:
            if (!(char)a0[63])
                break;
            *((char *)&a0[64]) = 1;
            continue;
            continue;
        case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 60: case 61: case 62: case 64: case 65: case 66: case 67: case 68: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99: case 101: case 103: case 104: case 105: case 106: case 107: case 109: case 110: case 111: case 115: case 121:
            if (!v39)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cb0b0); /* do not return */
            v80 = v39 - 1;
            v82 = a5;
            if (v80 >= v15)
                core::panicking::panic_bounds_check(v80, v15, &g_14cb0c8); /* do not return */
            goto LABEL_135ba16;
        case 58:
            a6->field_10.append("p", 5);
            v80 = v39 - 1;
            if (v39 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cafa8); /* do not return */
            }
            else if (v80 < v15)
            {
                fish::builtins::shared::builtin_missing_argument(v13, a6, v1, v2, *((long long *)(v62 + v80 * 16)), *((long long *)(v62 + v80 * 16 + 8)), 0);
            }
            else
            {
                core::panicking::panic_bounds_check(v80, v15, &g_14cafc0); /* do not return */
            }
LABEL_135ba49:
            v77 = 8589934593;
            goto LABEL_135ba53;
        case 59:
            a6->field_10.append("p", 5);
            v80 = v39 - 1;
            if (v39 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cafd8); /* do not return */
            }
            else if (v80 < v15)
            {
                fish::builtins::shared::builtin_unexpected_argument(v13, a6, v1, v2, *((long long *)(v62 + v80 * 16)), *((long long *)(v62 + v80 * 16 + 8)), 0);
                goto LABEL_135ba49;
            }
            else
            {
                core::panicking::panic_bounds_check(v80, v15, &g_14caff0); /* do not return */
            }
        case 63:
            if (!v39)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cb008); /* do not return */
            v80 = v39 - 1;
            v82 = a5;
            if (v80 >= v15)
                core::panicking::panic_bounds_check(v80, v15, &g_14cb020); /* do not return */
LABEL_135ba16:
            fish::builtins::path::path_unknown_option(v82, a6->field_10, v1, v2, *((long long *)(v62 + v80 * 16)), *((long long *)(v62 + v80 * 16 + 8)));
            goto LABEL_135ba49;
        case 69:
            if (!(char)a0[61])
                break;
            *((char *)&a0[62]) = 1;
            continue;
            continue;
        case 82:
            if (!(char)a0[53])
                break;
            *((char *)&a0[54]) = 1;
            continue;
            continue;
        case 90:
            *((char *)&a0[49]) = 1;
            continue;
            continue;
        case 100:
            if (!(char)a0[59])
                break;
            v51 = a0;
LABEL_135b5a2:
            v57 = v51.get_or_insert_with();
            *(v57) = *(v57) | 2;
            continue;
            continue;
        case 102:
            if (!(char)a0[59])
                break;
            v58 = a0;
            goto LABEL_135b6f6;
        case 108:
            if (!(char)a0[59])
                break;
            v64 = a0.get_or_insert_with();
            *(v64) = *(v64) | 8;
            continue;
            continue;
        case 112:
            if (!(char)a0[60])
                break;
            v59 = v48.get_or_insert_with();
            if (!v37)
                core::option::unwrap_failed(&g_14cb068); /* do not return */
            fish::wcstringutil::split_string_tok(&v47, v37, v38, ",", 1, 0, *((long long *)&v0));
            v16.into_iter(&v47);
            v60 = v16.next();
            if (v60)
            {
                v61 = v60;
                v63 = v62;
                do
                {
                    if (((char)v61.try_from(v63) & 1))
                    {
                        v70 = a6->field_10;
                        v70.append("p", 5);
                        v19 = 0;
                        v20 = 4;
                        v21 = 0;
                        v4 = "%";
                        v5 = 30;
                        v3 = 0x8000000000000000;
                        v71 = v3.localize();
                        *((char *)&v7) = 0;
                        v8 = "path+";
                        v9 = 4;
                        v10 = 1;
                        v11 = v61;
                        v12[0] = v63;
                        fish_printf::printf_impl::sprintf_locale(&v26, &v19, v71, v62, ".", &(char)v7, 2, *((long long *)a3));
                        v26.unwrap(&g_14cb080);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v7);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                        *((int128_t *)&v7) = *((int128_t *)&v19);
                        v9 = 0;
                        v70.append(&(char)v7);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v16);
                        goto LABEL_135ba49;
                    }
                    *(v59) = *(v59) | (unsigned int)v62;
                    v61 = v16.next();
                    v63 = v62;
                } while (v61);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v16);
            v48 = v23;
            v49 = &v27;
            continue;
        case 113:
            *((char *)&a0[50]) = 1;
            continue;
            continue;
        case 114:
            if ((char)a0[55])
            {
                *((char *)&a0[56]) = 1;
                continue;
            }
            else
            {
                if (!(char)a0[60])
                    break;
                v56 = v48.get_or_insert_with();
                *(v56) = *(v56) | 1;
                continue;
            }
        case 116:
            if (!(char)a0[59])
                break;
            v52 = a0.get_or_insert_with();
            if (!v37)
                core::option::unwrap_failed(&g_14cb038); /* do not return */
            fish::wcstringutil::split_string_tok(&v46, v37, v38, ",", 1, 0, *((long long *)&v0));
            v16.into_iter(&v46);
            v53 = v16.next();
            if (v53)
            {
                v54 = v53;
                v55 = v62;
                do
                {
                    if (((char)v54.try_from(v55) & 1))
                    {
                        v68 = a6->field_10;
                        v68.append("p", 5);
                        v19 = 0;
                        v20 = 4;
                        v21 = 0;
                        v4 = "%";
                        v5 = 24;
                        v3 = 0x8000000000000000;
                        v69 = v3.localize();
                        *((char *)&v7) = 0;
                        v8 = "path+";
                        v9 = 4;
                        v10 = 1;
                        v11 = v54;
                        v12[0] = v55;
                        fish_printf::printf_impl::sprintf_locale(&v26, &v19, v69, v62, ".", &(char)v7, 2, *((long long *)a3));
                        v26.unwrap(&g_14cb050);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v7);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                        *((int128_t *)&v7) = *((int128_t *)&v19);
                        v9 = 0;
                        v68.append(&(char)v7);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v16);
                        goto LABEL_135ba49;
                    }
                    *(v52) = *(v52) | (unsigned int)v62;
                    v54 = v16.next();
                    v55 = v62;
                } while (v54);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v16);
            v48 = v23;
            v49 = &v27;
            continue;
        case 117:
            if (!(char)a0[57])
                break;
            *((char *)&a0[58]) = 1;
            continue;
        case 118:
            if (!(char)a0[51])
                break;
            *((char *)&a0[52]) = 1;
            continue;
            continue;
        case 119:
            if (!(char)a0[60])
                break;
            v51 = v48;
            goto LABEL_135b5a2;
        case 120:
            if (!(char)a0[60])
                break;
            v58 = v48;
LABEL_135b6f6:
            v65 = v58.get_or_insert_with();
            *(v65) = *(v65) | 4;
            continue;
            continue;
        case 122:
            *((char *)&a0[48]) = 1;
            continue;
            continue;
        default:
            if (v50 != 0x110000)
                break;
            v72 = v39;
            *(v25) = v72;
            if (a2)
            {
                v73 = v22;
                if (v72 < v22)
                {
                    *((int128_t *)&a0[32]) = *((int128_t *)((char *)v24 + 0x10 * v72));
                    v72 += 1;
                    *(v25) = v72;
                    v74 = a6;
                    goto LABEL_135bbd5;
                }
                else
                {
                    *((unsigned long long *)&a0[32]) = 0;
                    v75 = a6->field_10;
                    v75.append("p", 5);
                    v16 = 0;
                    v17 = 4;
                    v18 = 0;
                    v76 = g_14cb0f8[0].localize();
                    *((char *)&v7) = 1;
                    v8 = v1;
                    v9 = v2;
                    fish_printf::printf_impl::sprintf_locale(&(char)v3, &v16, v76, v62, ".", &(char)v7, 1, *((long long *)a3));
                    (char)v3.unwrap(&g_14cb110);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v7);
                    *((int128_t *)&v7) = *((int128_t *)&v16);
                    v9 = 0;
                    v75.append(&(char)v7);
                    goto LABEL_135ba49;
                }
            }
            else
            {
                v74 = a6;
                v73 = v22;
LABEL_135bbd5:
                v77 = 0x200000000;
                if (v73 > v72 && v74->field_24)
                {
                    v78 = v74->field_10;
                    v78.append("p", 5);
                    v16 = 0;
                    v17 = 4;
                    v18 = 0;
                    v79 = g_14c6510[0].localize();
                    *((char *)&v7) = 1;
                    v8 = v1;
                    v9 = v2;
                    fish_printf::printf_impl::sprintf_locale(&(char)v3, &v16, v79, v62, ".", &(char)v7, 1, *((long long *)a3));
                    (char)v3.unwrap(&g_14cb0e0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v7);
                    *((int128_t *)&v7) = *((int128_t *)&v16);
                    v9 = 0;
                    v78.append(&(char)v7);
                    v77 = 8589934593;
                    goto LABEL_135ba53;
                }
            }
        }
    }
LABEL_135ba53:
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v27);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v44);
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v14, v62);
    return v77;
}
