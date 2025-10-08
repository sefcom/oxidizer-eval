fn uu_chroot::Options::from(a1: i64) -> Result<struct97, struct24> {
    let a0: i64;  // rdi
    let v0: Result<struct40, struct16>;  // [bp-0xd8], Other Possible Types: u128
    let v1: Result<struct40, struct16>;  // [bp-0xd8]
    let v2: struct48;  // [bp-0xd8]
    let v3: Result<struct40, struct16>;  // [bp-0xd8]
    let v4: struct36;  // [bp-0xd8]
    let v5: u128;  // [bp-0xd4]
    let v6: u64;  // [bp-0xc8]
    let v7: u64;  // [bp-0xc8]
    let v8: u128;  // [bp-0xc0]
    let v9: u64;  // [bp-0xb8]
    let v10: u64;  // [bp-0xb0]
    let v11: u64;  // [bp-0xb0]
    let v12: u128;  // [bp-0xa8]
    let v14: u64;  // [bp-0x98]
    let v15: std::path::PathBuf;  // [bp-0x90]
    let v16: u64;  // [bp-0x80]
    let v17: iNone;  // [bp-0x78], Other Possible Types: u128
    let v18: iNone;  // [bp-0x68], Other Possible Types: u128
    let v19: u64;  // [bp-0x58]
    let v20: u128;  // [bp-0x48]
    let v21: u128;  // [bp-0x3c]
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: u64;  // rax
    let v26: u8;  // al
    let v27: i64;  // rax
    let v28: u64;  // r15
    let v29: u128;  // xmm0
    let v30: iNone;  // xmm0

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "newroot");
    v23 = clap_builder::parser::error::MatchesError::unwrap("newroot", &v0);
    if !v23 {
        v0 = 6;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v0) as u64
            field_16: &g_4fabb0
        };
    }
    v15 = std::sys::pal::unix::os::split_paths::bytes_to_path(*((v23 + 8) as &i64), *((v23 + 16) as &i64));
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "groups");
    v24 = clap_builder::parser::error::MatchesError::unwrap("groups", &v3);
    if v24 && *((v24 + 16) as &i64) {
        v4 = uu_chroot::parse_group_list(*((v24 + 8) as &i64), *((v24 + 16) as &i64));
        if v4.field_0 != 14 {
            v21 = *((&v4.field_4 as &char + 8) as &i128);
            v20 = *(&(&v4.field_0)[1] as &i128);
            v6 = v21;
            v5 = v20;
            v0 = v4.field_0;
            return struct24 {
                field_0: 0x8000000000000000
                field_8: alloc::boxed::Box<T>::new(&v0) as u64
                field_16: &g_4fabb0
            };
        }
        v25 = v4.field_16;
        v12 = v4.field_4;
        v14 = v25;
    }
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "skip-chdir");
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "userspec");
    v27 = clap_builder::parser::error::MatchesError::unwrap("userspec", &v1);
    if !v27 {
        v6 = v16;
        v30 = *((&v1 as &char + 72) as &i128);
        *(&v0 as void*) = v30;
        v10 = v14;
        v8 = *((&v1 as &char + 48) as &i128);
        return Ok(struct104 {
            field_0: v30
            field_16: v6
            field_24: v8 as i64
            field_32: v9
            field_40: v10
            field_48: 9223372036854775811
            field_56: v17
            field_72: v18
            field_88: v19
            field_96: v26
        });
    }
    v2 = uu_chroot::parse_userspec(*((v27 + 8) as &i64), *((v27 + 16) as &i64));
    v28 = v2.field_0;
    v17 = *((&v2.field_0 as &char + 8) as &i128);
    v18 = v2.field_24;
    v19 = v10;
    v7 = v16;
    v29 = *((&v1 as &char + 72) as &i128);
    v0 = v29;
    v11 = v14;
    v8 = *((&v1 as &char + 48) as &i128);
    return Ok(struct104 {
        field_0: v29
        field_16: v6
        field_24: v8 as i64
        field_32: v9
        field_40: v10
        field_48: v28
        field_56: v17
        field_72: v18
        field_88: v19
        field_96: v26
    });
}
