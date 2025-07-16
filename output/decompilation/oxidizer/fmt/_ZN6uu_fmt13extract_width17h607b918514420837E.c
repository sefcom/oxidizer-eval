fn uu_fmt::extract_width(a0: &struct24, a1: i64) -> long long {
    let v0: u64;  // [bp-0xb8], Other Possible Types: core::result::Result<usize, core::num::error::ParseIntError>, struct24
    let v1: u64;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb0]
    let v3: i64;  // [bp-0xa8]
    let v4: u64;  // [bp-0xa0]
    let v5: void*;  // [bp-0x98]
    let v6: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x88]
    let v7: i64;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: void*;  // [bp-0x68]
    let v10: u64;  // [bp-0x60]
    let v11: u64;  // [bp-0x58]
    let v12: u8;  // [bp-0x50]
    let v13: u224;  // [bp-0x48]
    let v15: u64;  // r8
    let v16: i64;  // rax
    let v17: u64;  // rax
    let v20: u64;  // rdx
    let v21: u64;  // rax
    let v22: u64;  // rdx
    let v23: u64;  // rcx
    let v24: i64;  // rax
    let v25: u64;  // rdx
    let v29: u64;  // rcx
    let v31: u64;  // r13
    let v32: &mut [u8];  // rax:rdx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "width", v15);
    v16 = clap_builder::parser::error::MatchesError::unwrap("width", &v0);
    if v16 {
        v6 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v16 + 8) as &i64), *((v16 + 16) as &i64));
        if let Ok(_) = v6 {
            return struct24 {
                field_0: v22
                field_8: v21
                field_16: v23
            };
        }
        v9 = 0;
        v10 = *((v16 + 8) as &i64);
        v11 = *((v16 + 16) as &i64);
        v12 = 1;
        v7 = &v9;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = "invalid width: ";
        v2 = 1;
        v5 = 0;
        v3 = &v7;
        v4 = 1;
        v0 = core::option::Option<T>::map_or_else(v20);
        v13 = struct28 {
            field_0: <UNKNOWN>
            field_16: <UNKNOWN>
            field_24: 1
        };
        v21 = alloc::boxed::Box<T>::new(&v13);
        return struct24 {
            field_0: v22
            field_8: v21
            field_16: v23
        };
    } else {
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "files");
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files", v15);
        v24 = clap_builder::parser::error::MatchesError::unwrap("files", &v0);
        if !v24 {
            core::option::unwrap_failed(); /* do not return */
        }
        v0 = 0;
        v0 = v1 & -0x100000000;
        v32 = core::char::methods::encode_utf8_raw(&v0 as u32, a1, v25);
        v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(<&str as core::str::pattern::Pattern>::strip_prefix_of(v32.data_ptr, *((v24 + 8) as &i64), *((v24 + 16) as &i64)), v25);
        v29 = v2;
        v31 = 16;
        return struct16 {
            field_0: 0
            field_8: v0 as i8 as u8 as u64 ^ 1
        };
    }
}
