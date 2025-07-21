fn uu_tac::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x3b0]
    let v1: u64;  // [bp-0x3a8]
    let v2: u128;  // [bp-0x3a0]
    let v3: u128;  // [bp-0x390]
    let v4: u64;  // [bp-0x380]
    let v5: struct64;  // [bp-0x378]
    let v6: Result<struct56, struct16>;  // [bp-0x378]
    let v7: u64;  // [bp-0x370]
    let v8: u128;  // [bp-0x368]
    let v9: u128;  // [bp-0x358]
    let v10: u128;  // [bp-0x348]
    let v11: struct152;  // [bp-0x338]
    let v12: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: struct56, u8
    let v13: struct24;  // [bp-0x2f8]
    let v14: u64;  // [bp-0x2f0]
    let v16: u64;  // rdi
    let v17: u32;  // eax
    let v18: u32;  // eax
    let v19: i64;  // rax
    let v20: u64;  // r14
    let v21: u64;  // r15
    let v22: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax

    uu_tac::uu_app(&v12);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1);
    v16 = v7;
    match v6 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        },
        Ok(_) => {
            v4 = *((&v6 as &char + 48) as &i64);
            v3 = v9;
            v2 = v8;
            v0 = v6 as i64;
            v1 = v7;
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options6BEFORE17h5ea3e93d3c7a2a31E.field_0, g_6c8d68.field_0) as i32;
            v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN6uu_tac7options5REGEX17hba9800e3ae0d6749E.field_0, g_6c8d78.field_0) as i32;
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0, _ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E.field_0, g_6c8d88.field_0);
            v19 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E.field_0, g_6c8d88.field_0, &v12);
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN6uu_tac7options4FILE17ha26efb49879adcc6E.field_0, g_6c8d98.field_0);
            v5 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_tac7options4FILE17ha26efb49879adcc6E.field_0, g_6c8d98.field_0, &v12);
            if v5.field_0 as i64 {
                v11 = struct152 {
                    field_0: v5.field_0
                    field_16: v8
                    field_32: v9
                    field_48: v10
                    field_64: <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6 as u128)
                };
            } else {
                v22 = alloc::alloc::Global::alloc_impl(a0) as u64;
                *(v22 as &&u8) = &g_463ca2;
                *((v22 + 8) as &i64) = 1;
                v13 = alloc::slice::hack::into_vec(v22, 1);
            }
            return uu_tac::tac(v14, *((&(&v11)[1].field_0 as &char + 8) as &i64), v17 as u64, v18 as u64, v21, v20 + (v20 < 1) as u8 as u64);
        },
    }
}
