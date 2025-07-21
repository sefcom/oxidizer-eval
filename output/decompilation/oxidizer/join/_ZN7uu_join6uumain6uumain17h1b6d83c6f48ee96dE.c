fn uu_join::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x570]
    let v1: u64;  // [bp-0x568]
    let v2: u64;  // [bp-0x560]
    let v3: u128;  // [bp-0x558]
    let v4: u128;  // [bp-0x548]
    let v6: u128;  // [bp-0x538]
    let v7: u128;  // [bp-0x528]
    let v8: u64;  // [bp-0x518]
    let v9: struct56;  // [bp-0x4e8]
    let v10: u64;  // [bp-0x4e0]
    let v11: struct28;  // [bp-0x450], Other Possible Types: Result<struct96, struct24>, u8
    let v12: u64;  // [bp-0x448]
    let v13: u64;  // [bp-0x440]
    let v14: u128;  // [bp-0x428]
    let v15: u128;  // [bp-0x418]
    let v16: u128;  // [bp-0x408]
    let v17: Result<struct56, struct16>;  // [bp-0x170]
    let v18: struct24;  // [bp-0x170], Other Possible Types: struct56
    let v20: u64;  // rax
    let v21: u128;  // xmm0

    uu_join::uu_app(&v11);
    v17 = clap_builder::builder::command::Command::try_get_matches_from(&v11, a0, a1);
    match v17 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        },
        Ok(v9) => {
            v11 = uu_join::parse_settings(&v9);
            v20 = v11 as i64;
            if v20 == 0x8000000000000000 {
                return v1;
            }
            v8 = *((&v11 as &char + 88) as &i64);
            v21 = *((&v11 as &char + 24) as &i128);
            v7 = v16;
            v6 = v15;
            v4 = v14;
            v3 = v21;
            v0 = v20;
            v1 = v12;
            v2 = v13;
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "file1");
            if !clap_builder::parser::error::MatchesError::unwrap("file1", &v11) {
                core::option::unwrap_failed(); /* do not return */
            }
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "file2");
            if !clap_builder::parser::error::MatchesError::unwrap("file2", &v11) {
                core::option::unwrap_failed(); /* do not return */
            }
            v18 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v11 = struct28 {
                field_0: *(&v18.field_0 as &i128)
                field_16: v18.field_16
                field_24: 1
            };
            v1 = alloc::boxed::Box<T>::new(&v11);
            return v1;
        },
    }
}
