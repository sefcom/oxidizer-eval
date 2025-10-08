fn uu_install::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: core::fmt::Arguments;  // [bp-0x3e0]
    let v1: struct24;  // [bp-0x3e0]
    let v2: u64;  // [bp-0x3d8]
    let v3: void*;  // [bp-0x3d0]
    let v4: struct16;  // [bp-0x3c8], Other Possible Types: u64
    let v5: struct56;  // [bp-0x3c8], Other Possible Types: u64
    let v6: u64;  // [bp-0x3c0]
    let v7: core::fmt::Arguments;  // [bp-0x3b8]
    let v8: u128;  // [bp-0x3b0]
    let v9: u128;  // [bp-0x3a0]
    let v10: iNone;  // [bp-0x390]
    let v11: iNone;  // [bp-0x380]
    let v12: u128;  // [bp-0x370]
    let v13: struct56;  // [bp-0x360]
    let v14: u64;  // [bp-0x358]
    let v15: struct64;  // [bp-0x328]
    let v16: struct24;  // [bp-0x2e8], Other Possible Types: struct712
    let v17: Result<struct104, struct24>;  // [bp-0x2e8]
    let v18: struct56;  // [bp-0x2e8]
    let v19: u64;  // [bp-0x2e0]
    let v20: core::fmt::Arguments;  // [bp-0x2d8]
    let v21: u128;  // [bp-0x2d0]
    let v22: u128;  // [bp-0x2c0]
    let v23: iNone;  // [bp-0x2b0]
    let v24: iNone;  // [bp-0x2a0]
    let v26: u64;  // rdi
    let v27: u64;  // rax
    let v28: u64;  // rbx
    let v29: u64;  // rax

    v16 = uu_install::uu_app();
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v16, a0, a1);
    v26 = v6;
    if (((0 ^ v4.field_0) & (0 ^ -(v5))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
    }
    v13 = v5;
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, _ZN10uu_install9ARG_FILES17h2be6c31939077ab6E.field_0, g_5021e0.field_0);
    v15 = clap_builder::parser::error::MatchesError::unwrap(_ZN10uu_install9ARG_FILES17h2be6c31939077ab6E.field_0, g_5021e0.field_0, &v18);
    if v15.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v18, &v15);
        v27 = v18.field_0;
        v2 = *(&v18.field_8 as &i128);
        v0 = v27;
    }
    v28 = uu_install::check_unimplemented(&v13);
    if v28 {
        return v28;
    }
    v17 = uu_install::behavior(&v13);
    v29 = v17 as i64;
    v28 = v19;
    if v29 != 0x8000000000000000 {
        v12 = *((&v17 as &char + 88) as &i128);
        v11 = v24;
        v10 = v23;
        v9 = v22;
        v8 = v21;
        v4 = v29;
        v6 = v28;
        v7 = v20;
        if *((&v12 as &char + 8) as &i8) == 1 {
            v16 = v1;
            v28 = uu_install::standard(&v16);
        } else {
            v28 = uu_install::directory(v2, v3, &v4);
        }
    }
    return v28;
}
