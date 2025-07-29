long long uu_ls::display_item_long(struct_3 *a0, unsigned long long a1[8], struct_2 *a2, struct_1 *a3, unsigned long long a4[3], unsigned int a5)
{
    char v0;  // [bp-0xe1]
    unsigned long long v1;  // [bp-0xe0]
    void* v2;  // [bp-0xd8]
    void* v3;  // [bp-0xd0]
    int v4;  // [bp-0xc8], Other Possible Types: void*
    int v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    void* v7;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v8;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    int v11;  // [bp-0x90], Other Possible Types: char
    unsigned long long v12;  // [bp-0x80]
    int v13;  // [bp-0x78]
    int v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    unsigned long long v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x68]
    unsigned int v18;  // [bp-0x5c]
    unsigned long long v19;  // [bp-0x58]
    char v20;  // [bp-0x50]
    unsigned long long v21;  // [bp-0x48]
    unsigned long long v22;  // [bp-0x40]
    struct_1 *v23;  // [bp-0x38]
    struct_1 *v25;  // rbx
    struct_0 *v26;  // r15
    char v27;  // al
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // cc_ndep
    unsigned long long v31[3];  // rax
    unsigned long long v32[3];  // rax
    unsigned long long v33[3];  // rax
    char *v34;  // rbp
    unsigned long long v36;  // rax
    unsigned long long v37;  // r14
    unsigned long v38;  // rax
    unsigned long long v39;  // rsi
    unsigned int v40;  // eax
    struct_1 *v41;  // r15
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rax

    v18 = a5;
    v25 = a3;
    v1 = 128.with_capacity_in(&g_69f538);
    v3 = 0;
    if (a3->field_45 != 2)
    {
        v8.apply_normal(&a3->padding_18[16]);
        v1.spec_extend(v9, v10 + v9, &g_69f550);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v8);
    }
    v0 = a2->field_f6;
    if (a2->field_f6)
        v1.spec_extend("  +?????????bd-???_-.:~/", "+?????????bd-???_-.:~/", &g_69f568);
    v26 = a0.get_metadata(a3);
    if (v26)
    {
        xattr::list_deref(&v8, a0->field_8, a0->field_10);
        v27 = v8.is_ok_and();
        uucore::features::fs::display_permissions(&v8, v26, 1);
        v1.spec_extend(v9, v10 + v9, &g_69f580);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v8);
        v28 = a0->field_40;
        if (!((v27 ^ 1) & v28 < 2))
        {
            if (2 <= v28)
                v29 = &g_69f5b0;
            else
                v29 = &g_69f598;
            v1.spec_extend(((char)amd64g_calculate_condition(3, 8, v28, 2, v30) ? "./a Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/s" : "+?????????bd-???_-.:~/"), ((char)amd64g_calculate_condition(3, 8, v28, 2, v30) ? "/a Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/sr" : "?????????bd-???_-.:~/"), v29);
        }
        v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f5c8);
        uu_ls::display_symlink_count(&v8, v26->field_30);
        v1.extend_pad_left(v9, v10, a1[1]);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v8);
        if (a2->field_ea)
        {
            v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f5e0);
            v31 = uu_ls::display_uname(v26->field_3c, a2->field_eb, a3);
            v1.extend_pad_right(v31[1], v31[2], a1[2]);
        }
        if (a2->field_e9)
        {
            v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f5f8);
            v32 = uu_ls::display_group(v26->field_40, a2->field_eb, a3);
            v1.extend_pad_right(v32[1], v32[2], a1[3]);
        }
        if (a2->field_f3)
        {
            v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f610);
            v1.extend_pad_right(a0->field_38, a0->field_40, a1[4]);
        }
        if (a2->field_e8)
        {
            v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f628);
            v33 = uu_ls::display_uname(v26->field_3c, a2->field_eb, a3);
            v1.extend_pad_right(v33[1], v33[2], a1[2]);
        }
        v34 = &v8;
        uu_ls::display_len_or_rdev(&v8, v26, a2->field_d0, a2->field_f9);
        if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        {
            v7 = *((long long *)&v11);
            *((int128_t *)&v4) = *((int128_t *)&v9);
            v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f640);
            v1.extend_pad_left(v6, v7, a1[5]);
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
        }
        else
        {
            v23 = a3;
            v17 = v10;
            *((int128_t *)&v13) = *((int128_t *)&v8);
            v7 = v12;
            v4 = v11;
            v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f658);
            v1.extend_pad_left(v15, v17, ::0x51bc80::core::cmp::max_by(a1[6], (((char)amd64g_calculate_condition(3, 4, a1[7], 2, v30) ? a1[7] + 2 : 18446744073709551615) <= a1[5] ? a1[5] - ((char)amd64g_calculate_condition(3, 4, a1[7], 2, v30) ? a1[7] + 2 : 18446744073709551615) : 0)));
            v1.spec_extend(", '  +?????????bd-???_-.:~/", "'  +?????????bd-???_-.:~/", &g_69f670);
            v1.extend_pad_left(v6, v7, a1[7]);
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
            v25 = v23;
            v34 = &v8;
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v13);
        }
        v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f688);
        v36 = uu_ls::display_date(v26, a2, v25->field_a8, v25->field_b0, &v1);
        if (v36)
        {
            v37 = v36;
        }
        else
        {
            v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f6a0);
            v4 = 0;
            v6 = 1;
            v7 = 0;
            v8 = 0;
            v9 = v1.new();
            v10 = &g_69f6b8;
            uu_ls::display_item_name(&v20, a0, a2, 0, a4, &v4, v25, v34);
            if (!(char)v18 || (char)uu_ls::os_str_starts_with(v21, v22, "'  +?????????bd-???_-.:~/", 1))
            {
                v17 = v22;
                *((int128_t *)&v14) = *((int128_t *)&v20);
                if (!(!v0))
                    goto LABEL_52f25c;
            }
            else
            {
                v8.to_owned(" ,\n, '  +?????????bd-???_-.:~/", 1);
                v7 = v10;
                *((int128_t *)&v5) = *((int128_t *)&v8);
                v10 = v22;
                memcpy(&v8, &v20, 16);
                v4.push(&v8);
                *((int128_t *)&v14) = (int128_t)v5;
                v17 = v7;
                if (v0)
                {
LABEL_52f25c:
                    uu_ls::dired::update_positions(a4, (!a4[2] ? 0 : *((long long *)(a4[1] + a4[2] * 16 - 8)) + 1) + v3, v17 + (!a4[2] ? 0 : *((long long *)(a4[1] + a4[2] * 16 - 8)) + 1) + v3);
                }
            }
            uu_ls::write_os_str(&v1, v15, v17);
            v8.spec_to_string(&a2[1].padding_0[8]);
            v1.spec_extend(v9, v10 + v9, &g_69f6d8);
            ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v8);
            ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v14);
LABEL_52f2f1:
            v41 = v25;
            v42 = v25->field_10;
            if (v3 < v25->field_0 - v42)
            {
                memcpy(v41->field_8 + v42, v2, v3);
                v41->field_10 = v42 + v3;
                ::0x51ca50::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
                return 0;
            }
            v43 = v41.write_all_cold(v2, v3);
            if (!v43)
            {
                ::0x51ca50::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
                return 0;
            }
            v37 = v43.from();
        }
        ::0x51ca50::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
        return v37;
    }
    v38 = a0->field_f8;
    v39 = "-???_-.:~/";
    if ((unsigned int)v38 != 2 && ((char)v38 & 1))
    {
        v40 = __ROL__((0xf000 & a0->field_fc) - 0x2000, 19);
        if (v40 <= 4)
            v39 = g_42907c[v40] + (char *)&g_42907c[0];
    }
    v1.spec_extend(v39, v39 + 1, &g_69f6f0);
    v1.spec_extend("?????????bd-???_-.:~/", "bd-???_-.:~/", &g_69f708);
    if (a0->field_40 >= 2)
        v1.spec_extend("./a Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/s", "/a Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/sr", &g_69f720);
    v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f738);
    v1.extend_pad_left("? ,\n, '  +?????????bd-???_-.:~/", 1, a1[1]);
    if (a2->field_ea)
    {
        v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f750);
        v1.extend_pad_right("? ,\n, '  +?????????bd-???_-.:~/", 1, a1[2]);
    }
    if (a2->field_e9)
    {
        v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f768);
        v1.extend_pad_right("? ,\n, '  +?????????bd-???_-.:~/", 1, a1[3]);
    }
    if (a2->field_f3)
    {
        v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f780);
        v1.extend_pad_right(a0->field_38, a0->field_40, a1[4]);
    }
    if (a2->field_e8)
    {
        v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f798);
        v1.extend_pad_right("? ,\n, '  +?????????bd-???_-.:~/", 1, a1[2]);
    }
    v4 = 0;
    v6 = 1;
    v7 = 0;
    v8 = 0;
    v9 = v1.new();
    v10 = &g_69f7b0;
    uu_ls::display_item_name(&(char)v14, a0, a2, 0, a4, &v4, a3, &v8);
    v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f7d0);
    v1.extend_pad_left("? ,\n, '  +?????????bd-???_-.:~/", 1, a1[5]);
    v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f7e8);
    v1.extend_pad_left("? ,\n, '  +?????????bd-???_-.:~/", 1, 12);
    v1.spec_extend(" ,\n, '  +?????????bd-???_-.:~/", ",\n, '  +?????????bd-???_-.:~/", &g_69f800);
    if (v0)
    {
        v8.to_string_lossy(v16, v17);
        core::str::<impl str>::trim_matches(v9, v10);
        uu_ls::dired::calculate_and_update_positions(v19, v3, a2);
        ::0x51cbe0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8);
    }
    uu_ls::write_os_str(&v1, v16, v17);
    v8.spec_to_string(&a2[1].padding_0[8]);
    v1.spec_extend(v9, v10 + v9, &g_69f818);
    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v8);
    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v14);
    goto LABEL_52f2f1;
}
