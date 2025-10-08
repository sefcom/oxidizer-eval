fn uu_join::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x558]
    let v1: u64;  // [bp-0x550]
    let v2: u64;  // [bp-0x548]
    let v3: iNone;  // [bp-0x540]
    let v4: u128;  // [bp-0x530]
    let v6: iNone;  // [bp-0x520]
    let v7: iNone;  // [bp-0x510]
    let v8: u64;  // [bp-0x500]
    let v9: struct56;  // [bp-0x4e8]
    let v10: u64;  // [bp-0x4e0]
    let v11: struct28;  // [bp-0x450], Other Possible Types: struct712, Result<struct40, struct16>
    let v12: Result<struct96, struct24>;  // [bp-0x450]
    let v13: u64;  // [bp-0x448]
    let v14: u64;  // [bp-0x440]
    let v15: u128;  // [bp-0x428]
    let v16: iNone;  // [bp-0x418]
    let v17: iNone;  // [bp-0x408]
    let v18: struct24;  // [bp-0x170], Other Possible Types: struct56, u64
    let v19: struct16;  // [bp-0x170]
    let v20: u64;  // [bp-0x10]
    let v22: u64;  // r15
    let v23: u64;  // rax
    let v24: iNone;  // xmm0

    v20 = v22;
    v11 = uu_join::uu_app();
    v19 = clap_builder::builder::command::Command::try_get_matches_from(&v11, a0, a1);
    if (((0 ^ v19.field_0) & (0 ^ -(v18))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
    }
    v9 = v18;
    v12 = uu_join::parse_settings(&v9);
    v23 = v12 as i64;
    if v23 == 0x8000000000000000 {
        return v1;
    }
    v8 = *((&v12 as &char + 88) as &i64);
    v24 = *((&v12 as &char + 24) as &i128);
    v7 = v17;
    v6 = v16;
    v4 = v15;
    v3 = v24;
    v0 = v23;
    v1 = v13;
    v2 = v14;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, &g_419ccc);
    if !clap_builder::parser::error::MatchesError::unwrap(&g_419ccc, &v11) {
        core::option::unwrap_failed(); /* do not return */
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, &g_419cd1);
    if !clap_builder::parser::error::MatchesError::unwrap(&g_419cd1, &v11) {
        core::option::unwrap_failed(); /* do not return */
    }
    v18 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("both files cannot be standard input");
    v11 = struct28 {
        field_0: *(&v18.field_0 as &i128)
        field_16: v18.field_16
        field_24: 1
    };
    v1 = alloc::boxed::Box<T>::new(&v11) as u64;
    return v1;
}
