long long fish::parser::print_profile(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x110]
    unsigned long long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf0]
    char *v4;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xe0]
    char *v6;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v7;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xc0], Other Possible Types: unsigned short
    void* v10;  // [bp-0xb8]
    unsigned short v11;  // [bp-0xb0]
    void* v12;  // [bp-0xa8]
    unsigned short v13;  // [bp-0xa0]
    unsigned long long v14;  // [bp-0x98]
    int v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x90]
    char *v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x70]
    unsigned long v21;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long v22;  // [bp-0x58]
    unsigned long long v23;  // [bp-0x50]
    unsigned long long v24;  // [bp-0x48]
    void* v25;  // [bp-0x40]
    unsigned long v26;  // [bp-0x38]
    char *v28;  // r12
    unsigned long long v29;  // rax
    struct_0 *v30;  // rdx
    char *v31;  // r13
    char *v32;  // rbp
    struct_0 *v33;  // rbx
    struct_0 *v34;  // rbx
    unsigned long long v35;  // rdi
    unsigned long v36;  // rdi
    unsigned long long v37;  // rax
    unsigned long v38;  // 4097
    unsigned long v39;  // rcx
    unsigned long v40;  // r13
    unsigned long v42;  // rcx

    v4 = &g_14dea90;
    v5 = <&T as core::fmt::Display>::fmt;
    v6 = &g_14deaa0;
    v7 = <&T as core::fmt::Display>::fmt;
    v8 = 0;
    v9 = 10;
    v14 = &g_14dea60;
    v16 = 3;
    v19 = &g_a1ece0;
    v20 = 2;
    v17 = &v4;
    v18 = 3;
    v0.map_or_else(&v14);
    v3 = a2;
    v4 = std::io::Write::write_all();
    v28 = &v4;
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v4);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    v21 = a1 * 48;
    v23 = a0;
    v24 = v21 + a0;
    v25 = 0;
    v29 = v23.next();
    if (!v30)
        return v29;
    v21 -= 48;
    v31 = &v23;
    v32 = &v14;
    while (true)
    {
        v34 = v33;
        if (!v34->field_28 && v34->field_10)
        {
            v42 = v34->field_18;
            v26 = v42;
            v22 = v42;
            v35 = v29;
            v36 = v35 + 1;
            if ((char)_ccall(4, 24, v35 + 1, 0, (unsigned long long)(char)(v34->field_10 < 0)))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14deab0); /* do not return */
            }
            else if (v36 <= a1)
            {
                if (v36 != a1)
                {
                    v37 = v29 * 48;
                    do
                    {
                        if (*((char *)(a0 + v37 + 88)))
                            continue;
                        if (*((long long *)(a0 + v37 + 80)) <= v34->field_20)
                            break;
                        v42 = v42;
                        if (*((long long *)(a0 + v37 + 80)) == v34->field_20 + 1)
                        {
                            v38 = *((long long *)(a0 + v37 + 72));
                            v39 = v42 - v38;
                            if ((char)(((v42 ^ v38) & (v42 ^ v42 - v38)) >> 63))
                                core::panicking::panic_const::panic_const_sub_overflow(&g_14deac8); /* do not return */
                            v22 = v39;
                            v42 = v39;
                        }
                        v37 += 48;
                    } while (v21 != v37);
                }
                v40 = -(v34->field_20);
                if ((char)(-(v34->field_20) >> 63))
                    v40 = v34->field_20;
                if (v40 > 65534)
                {
                    v4 = &g_14bd620;
                    v5 = 1;
                    v6 = 8;
                    *((uint128_t *)&v7) = 0;
                    core::panicking::panic_fmt(&v4, &g_14deb38); /* do not return */
                }
                v4 = &v22;
                v5 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
                v6 = &v26;
                v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
                v8 = ">";
                v9 = <char as core::fmt::Display>::fmt;
                v10 = 0;
                v11 = 10;
                v12 = 0;
                v13 = (unsigned short)v40 + 1;
                v14 = &g_14deae0;
                v16 = 4;
                v19 = &g_a1ed40;
                v20 = 3;
                v17 = v28;
                v18 = 5;
                v0.map_or_else(v32);
                v4 = std::io::Write::write_all();
                core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v28);
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                v0.from_str("\n%s: %s\nInvalid working directory, it must start and end with /", 1);
                alloc::slice::<impl [T]>::repeat(v28, " ", v40 + 24);
                v17 = v6;
                *((int128_t *)&v15) = *((int128_t *)&v4);
                v28.add(&v0, 4.index(v6, &g_14deb20), v30);
                v0.replace(v34->field_8, v34->field_10, v5, v6);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v28);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v32);
                fish::common::wcs2osstring(v28, v1, v2);
                v14 = std::io::Write::write_all();
                core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v32);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
                v4 = std::io::Write::write_all();
                core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v28);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                v31 = &v23;
            }
            else
            {
                core::slice::index::slice_start_index_len_fail(v36, a1, &g_14deb50); /* do not return */
            }
        }
        v29 = v31.next();
        v33 = v30;
        if (!v30)
            return v29;
    }
}
