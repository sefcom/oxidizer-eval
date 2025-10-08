long long fish::builtins::string::string(unsigned long long a0, struct_0 *a1, void* a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xc0]
    void* v1;  // [bp-0xb8], Other Possible Types: char, unsigned short, unsigned long long
    int v2;  // [bp-0xb0], Other Possible Types: void*, unsigned long, char, unsigned long long
    int v3;  // [bp-0xa8], Other Possible Types: void*, unsigned int, unsigned long long, unsigned short
    char v4;  // [bp-0xa6]
    unsigned short v5;  // [bp-0xa4]
    int v6;  // [bp-0xa0], Other Possible Types: void*, unsigned long long
    unsigned short v7;  // [bp-0x98], Other Possible Types: char, unsigned long long
    int v8;  // [bp-0x90], Other Possible Types: unsigned int, unsigned long long
    char v9;  // [bp-0x8c]
    unsigned int v10;  // [bp-0x88]
    char v11;  // [bp-0x84]
    void* v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    void* v14;  // [bp-0x60]
    char v15;  // [bp-0x58]
    unsigned long long v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    char v18;  // [bp-0x40]
    unsigned long v20;  // rbp
    unsigned long long v21;  // r13
    unsigned long long v22;  // r15
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rbx
    unsigned long long v32;  // r15
    unsigned long long v33;  // rax
    int v34;  // xmm0
    unsigned long long v35;  // rdx

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14d44f0); /* do not return */
    v20 = *((long long *)a2);
    v21 = (long long)a2[8];
    if (a3 == 1)
    {
        v22 = a1->field_10;
        v12 = 0;
        v13 = 4;
        v14 = 0;
        v23 = g_14cb260[0].localize();
        v1 = 1;
        v3 = v21;
        fish_printf::printf_impl::sprintf_locale(&v15, &v12, v23, v24, ".", &v1, 1);
        v15.unwrap(&g_14d4520);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
        memcpy(&v1, &v12, 16);
        v3 = 0;
        v22.append(&v1);
        fish::builtins::shared::builtin_print_error_trailer(a0, v22, v20, v21);
        goto LABEL_1380e33;
    }
    else
    {
        if ((long long)a2[16].eq_by((long long)a2[16] + (long long)a2[24] * 4, "-h--help", "--help") || (long long)a2[16].eq_by((long long)a2[16] + (long long)a2[24] * 4, "--help", &g_a05752))
        {
            fish::builtins::shared::builtin_print_help(a0, a1, v20, v21);
            return 0;
        }
        v15.to_string((long long)a2[16], (long long)a2[24]);
        v0 = v17;
        if ((char)v16.equal(v17, "collectescapejoin0lengthlowermatchpadrepeatreplaceshortensplitsplit0subupper", 7))
        {
            v1 = 0;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "escapejoin0lengthlowermatchpadrepeatreplaceshortensplitsplit0subupper", 6))
        {
            v2 = 0;
            v1 = 0;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "join)", 4))
        {
            v3 = 0;
            v4 = 0;
            v1 = &g_550cf8;
            v2 = 1;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "join0lengthlowermatchpadrepeatreplaceshortensplitsplit0subupper", 5))
        {
            v3 = 0;
            v1 = &g_550cf8;
            v2 = 1;
            v4 = 1;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "lengthlowermatchpadrepeatreplaceshortensplitsplit0subupper", 6))
        {
            v1 = 0;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "lowermatchpadrepeatreplaceshortensplitsplit0subupper", 5))
        {
            v2 = 0;
            v1 = widestring::utfstr::Utf32Str::to_lowercase;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "matchpadrepeatreplaceshortensplitsplit0subupper", 5))
        {
            v6 = 0;
            v1 = 4;
            *((uint128_t *)&v2) = 0;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "padrepeatreplaceshortensplitsplit0subupper", 3))
        {
            v3 = 32;
            v1 = 1;
            v5 = 0;
            v2 = 0;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "repeatreplaceshortensplitsplit0subupper", 6))
        {
            v1 = 0;
            v3 = 0;
            v7 = 0;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "replaceshortensplitsplit0subupper", 7))
        {
            v9 = 0;
            v8 = 0;
            v1 = 4;
            v2 = 0;
            v3 = 4;
            *((uint128_t *)&v6) = 0;
            v26 = v1.run(a0, a1, a2, a3);
        }
        else if ((char)v16.equal(v0, "shortensplitsplit0subupper", 7))
        {
            (char)v1.default();
            v26 = (char)v1.run(a0, a1, a2, a3);
        }
        else
        {
            if ((char)v16.equal(v0, "splitsplit0subupper", 5))
            {
                v8 = 18446744073709551615;
                v1 = 0;
                v2 = 8;
                v3 = 0;
                v10 = 0;
                v11 = 0;
                v6 = &g_550cf8;
                v7 = 1;
                v1.run(a0, a1, a2, a3);
                core::ptr::drop_in_place<std::sync::poison::mutex::Mutex<alloc::vec::Vec<&phf::map::Map<&str,&str>>>>(0, 8);
                core::ptr::drop_in_place<alloc::string::String>(&v15);
                return 0xffffffff00000000 & v28 | (unsigned int)v28 & 0xffff0000 | (unsigned int)v28 & 0xff00 | v28 & 4294967295;
            }
            if ((char)v16.equal(v0, "split0subupper", 6))
            {
                v8 = 18446744073709551615;
                v1 = 0;
                v2 = 8;
                v3 = 0;
                v10 = 0;
                v6 = &g_550cf8;
                v7 = 1;
                v11 = 1;
                v27 = v1.run(a0, a1, a2, a3);
                v28 = v27;
                core::ptr::drop_in_place<std::sync::poison::mutex::Mutex<alloc::vec::Vec<&phf::map::Map<&str,&str>>>>(0, 8);
                core::ptr::drop_in_place<alloc::string::String>(&v15);
                return 0xffffffff00000000 & v28 | (unsigned int)v28 & 0xffff0000 | (unsigned int)v28 & 0xff00 | v28 & 4294967295;
            }
            if ((char)v16.equal(v0, "subupper", 3))
            {
                v1 = 0;
                *((uint128_t *)&v3) = 0;
                v7 = 0;
                v26 = v1.run(a0, a1, a2, a3);
            }
            else if ((char)v16.equal(v0, "trimkLFTxvpawindritmkcanmvpakrefmainchar", 4))
            {
                v1 = " ";
                v2 = 6;
                v3 = 0;
                v4 = 0;
                v26 = v1.run(a0, a1, a2, a3);
            }
            else if ((char)v16.equal(v0, "unescape-", 8))
            {
                v2 = 0;
                v1 = 0;
                v26 = v1.run(a0, a1, a2, a3);
            }
            else if ((char)v16.equal(v0, "upper", 5))
            {
                v2 = 0;
                v1 = widestring::utfstr::Utf32Str::to_uppercase;
                v26 = v1.run(a0, a1, a2, a3);
            }
            else
            {
                v32 = a1->field_10;
                v12 = 0;
                v13 = 4;
                v14 = 0;
                v33 = g_14cb230[0].localize();
                v34 = *((int128_t *)a2);
                v1 = 1;
                v2 = v20;
                v3 = v21;
                v7 = 1;
                v8 = v34;
                fish_printf::printf_impl::sprintf_locale(&v18, &v12, v33, v35, ".", &v1, 2);
                v18.unwrap(&g_14d4508);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v1);
                memcpy(&v1, &v12, 16);
                v3 = 0;
                v32.append(&v1);
                fish::builtins::shared::builtin_print_error_trailer(a0, v32, v20, v21);
                core::ptr::drop_in_place<alloc::string::String>(&v15);
LABEL_1380e33:
                return 8589934593;
            }
        }
        v28 = v26;
        core::ptr::drop_in_place<alloc::string::String>(&v15);
        return 0xffffffff00000000 & v28 | (unsigned int)v28 & 0xffff0000 | (unsigned int)v28 & 0xff00 | v28 & 4294967295;
    }
}
