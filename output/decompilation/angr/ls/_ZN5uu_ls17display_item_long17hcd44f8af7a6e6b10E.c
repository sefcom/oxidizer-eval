long long uu_ls::display_item_long(struct_2 *a0, unsigned long long a1[8], struct_3 *a2, struct_1 *a3, unsigned long long a4[3], unsigned int a5)
{
    char v0;  // [bp-0xe9]
    unsigned long long v1;  // [bp-0xe8]
    void* v2;  // [bp-0xe0]
    void* v3;  // [bp-0xd8]
    void* v4;  // [bp-0xc8], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    void* v10;  // [bp-0x98]
    int v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    void* v13;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned int v14;  // [bp-0x7c]
    char v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x68]
    unsigned long long v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x58]
    void* v19;  // [bp-0x48], Other Possible Types: char
    unsigned long long v20;  // [bp-0x40]
    char v21;  // [bp-0x38]
    struct_0 *v23;  // r15
    char v24;  // al
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27;  // cc_ndep
    unsigned long long v28[3];  // rax
    unsigned long long v29[3];  // rax
    unsigned long long v30[3];  // rax
    char *v31;  // rdi
    unsigned long long v33;  // r15
    unsigned long long v34;  // r13
    void* v35;  // r12
    unsigned long v36;  // rax
    unsigned long long v37;  // rsi
    unsigned int v38;  // eax
    unsigned long long v40;  // r15
    unsigned long long v41;  // rax
    void* v42;  // rbx
    unsigned long long v43;  // rdx

    v14 = a5;
    v1 = 128.with_capacity_in(1, 1, &g_686cd0);
    v3 = 0;
    if (a3->field_85 != 2)
    {
        v4.apply_normal(&a3->padding_18[80]);
        v1.spec_extend(v5, v6 + v5);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
    }
    v0 = a2->field_f6;
    if (a2->field_f6)
        v1.spec_extend("  src/uu/ls/src/dired.rs//DIRED-OPTIONS// --quoting-style=", "src/uu/ls/src/dired.rs//DIRED-OPTIONS// --quoting-style=");
    v23 = a0.get_metadata(a3);
    if (v23)
    {
        xattr::list(&v4, a0->field_8, a0->field_10);
        v24 = v4.is_ok_and();
        uucore::features::fs::display_permissions(&v4, v23, 1);
        v1.spec_extend(v5, v6 + v5);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
        v25 = a0->field_40;
        if (2 <= v25 || v24)
        {
            if (2 <= v25)
                v26 = "//home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs";
            else
                v26 = "?????????bd-???_-.:~/";
            v1.spec_extend(((char)_ccall(3, 8, v25, 2, v27) ? ".//home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs" : "+?????????bd-???_-.:~/"), v26);
        }
        v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
        uu_ls::display_symlink_count(&v4, v23->field_30);
        v1.extend_pad_left(v5, v6, a1[1]);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
        if (a2->field_ea)
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v28 = uu_ls::display_uname(v23->field_3c, a2->field_eb, a3);
            v1.extend_pad_right(v28[1], v28[2], a1[2]);
        }
        if (a2->field_e9)
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v29 = uu_ls::display_group(v23->field_40, a2->field_eb, a3);
            v1.extend_pad_right(v29[1], v29[2], a1[3]);
        }
        if (a2->field_f3)
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v1.extend_pad_right(a0->field_38, a0->field_40, a1[4]);
        }
        if (a2->field_e8)
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v30 = uu_ls::display_uname(v23->field_3c, a2->field_eb, a3);
            v1.extend_pad_right(v30[1], v30[2], a1[2]);
        }
        uu_ls::display_len_or_rdev(&v4, v23, a2->field_d0, a2->field_f9);
        if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v1.extend_pad_left(v6, v7, a1[5]);
            v31 = &v5;
        }
        else
        {
            v18 = v8;
            v17 = v9;
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v1.extend_pad_left(v5, v6, a1[6].max((((char)_ccall(3, 4, a1[7], 2, v27) ? a1[7] + 2 : 18446744073709551615) <= a1[5] ? a1[5] - ((char)_ccall(3, 4, a1[7], 2, v27) ? a1[7] + 2 : 18446744073709551615) : 0)));
            v1.spec_extend(", ", &g_4d1ec9);
            v1.extend_pad_left(v18, v17, a1[7]);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
            v31 = &v4;
        }
        core::ptr::drop_in_place<alloc::string::String>(v31);
        v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
        uu_ls::display_date(&v4, v23, a2->field_fb, a3);
        v1.spec_extend(v5, v6 + v5);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
        v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
        v10 = 0;
        v12 = 1;
        v13 = 0;
        v4 = 0;
        v5 = v1.new();
        v6 = &g_686ce8;
        uu_ls::display_item_name(&v19, a0, a2, 0, a4, &v10, a3, &v4);
        v33 = v20;
        v34 = *((long long *)&v21);
        if (!(char)v14 || (char)uu_ls::os_str_starts_with(v33, v34, "\'\"+?????????bd-???_-.:~/"))
        {
            v35 = v19;
            if (v0)
                goto LABEL_59dd28;
        }
        else
        {
            v4.to_vec(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", 1);
            v13 = v6;
            *((int128_t *)&v11) = *((int128_t *)&v4);
            v10.push(&v19);
            v35 = v10;
            v33 = 1;
            v34 = v13;
            if (v0)
            {
LABEL_59dd28:
                uu_ls::dired::update_positions(a4, (!a4[2] ? 0 : *((long long *)(a4[1] + a4[2] * 16 - 8)) + 1) + v3, (!a4[2] ? 0 : *((long long *)(a4[1] + a4[2] * 16 - 8)) + 1) + v3 + v34);
            }
        }
        uu_ls::write_os_str(&v1, v33, v34);
        v4.spec_to_string(&a2[1].padding_0[6]);
        v1.spec_extend(v5, v6 + v5);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
    }
    else
    {
        v36 = a0->field_f8;
        v37 = "-???_-.:~/";
        if ((unsigned int)v36 != 2 && ((char)v36 & 1))
        {
            v38 = __ROL__((0xf000 & a0->field_fc) - 0x2000, 19);
            if (v38 <= 4)
                v37 = g_4d44c0[v38] + (char *)&g_4d44c0[0];
        }
        v1.spec_extend(v37, v37 + 1);
        v1.spec_extend("?????????bd-???_-.:~/", "bd-???_-.:~/");
        if (a0->field_40 >= 2)
            v1.spec_extend(".//home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs", "//home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs");
        v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
        v1.extend_pad_left("?,\n", 1, a1[1]);
        if (a2->field_ea)
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v1.extend_pad_right("?,\n", 1, a1[2]);
        }
        if (a2->field_e9)
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v1.extend_pad_right("?,\n", 1, a1[3]);
        }
        if (a2->field_f3)
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v1.extend_pad_right(a0->field_38, a0->field_40, a1[4]);
        }
        if (a2->field_e8)
        {
            v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
            v1.extend_pad_right("?,\n", 1, a1[2]);
        }
        v10 = 0;
        v12 = 1;
        v13 = 0;
        v4 = 0;
        v5 = v1.new();
        v6 = &g_686d08;
        uu_ls::display_item_name(&v15, a0, a2, 0, a4, &v10, a3, &v4);
        v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
        v1.extend_pad_left("?,\n", 1, a1[5]);
        v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
        v1.extend_pad_left("?,\n", 1, 12);
        v1.spec_extend(" \t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", "\t/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs");
        if (v0)
        {
            v4.from_utf8_lossy(v33, v16);
            uu_ls::dired::calculate_and_update_positions(a4, v3, core::str::<impl str>::trim_matches(v5, v6));
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
        }
        uu_ls::write_os_str(&v1, v33, v16);
        v4.spec_to_string(&a2[1].padding_0[6]);
        v1.spec_extend(v5, v6 + v5);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
    }
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v35, v33);
    v40 = a3->field_10;
    if (v3 < a3->field_0 - v40)
    {
        memcpy(a3->field_8 + v40, v2, v3);
        a3->field_10 = v40 + v3;
LABEL_59ddde:
        v42 = 0;
    }
    else
    {
        v41 = a3.write_all_cold(v2, v3);
        if (!v41)
            goto LABEL_59ddde;
        v42 = v41.from();
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v1, v43);
    return v42;
}
