fn uu_pathchk::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x401]
    let v1: void*;  // [bp-0x400], Other Possible Types: struct16
    let v2: u64;  // [bp-0x3f8]
    let v3: void*;  // [bp-0x3f0]
    let v4: struct16;  // [bp-0x3e8]
    let v5: u128;  // [bp-0x3e8]
    let v6: struct24;  // [bp-0x3e8]
    let v7: u64;  // [bp-0x3e0]
    let v8: u128;  // [bp-0x3d8]
    let v9: iNone;  // [bp-0x3c8]
    let v10: i8;  // [bp-0x3b8], Other Possible Types: u128
    let v11: u64;  // [bp-0x3a0]
    let v12: u64;  // [bp-0x398]
    let v13: iNone;  // [bp-0x390]
    let v14: iNone;  // [bp-0x380]
    let v15: u64;  // [bp-0x370]
    let v16: struct24;  // [bp-0x368]
    let v17: struct24;  // [bp-0x350]
    let v18: struct64;  // [bp-0x338]
    let v19: iNone;  // [bp-0x328]
    let v20: iNone;  // [bp-0x318]
    let v21: iNone;  // [bp-0x308]
    let v22: void*;  // [bp-0x2f8], Other Possible Types: struct28, struct56, struct712
    let v23: u64;  // [bp-0x2f0]
    let v24: u16;  // [bp-0x2b8]
    let v26: u8;  // al
    let v27: u8;  // r14b
    let v29: u8;  // r14b
    let v30: i64;  // rax
    let v31: u64;  // rcx
    let v32: core::fmt::Arguments;  // rax
    let v33: u32;  // rdx
    let v34: u8;  // al
    let v36: struct24;  // [bp-0x350]
    let v38: core::str::pattern::CharSearcher;  // [bp-0x2e8]

    v22 = uu_pathchk::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v22, a0, a1);
    if (((0 ^ v4.field_0) & (0 ^ -(v4.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    }
    v15 = *(&v10 as &i64);
    v14 = v9;
    v13 = v8;
    v11 = v4.field_0;
    v12 = v7;
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "posix");
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "posix-special");
    v0 = (!v26 ? (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "portability") ? 3 : v27 * 2) : (v27 ? 3 : clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "portability") * 2 + 1));
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11);
    v18 = clap_builder::parser::error::MatchesError::unwrap(&v22);
    if !v18.field_0 as i64 {
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
        v22 = struct28 {
            field_0: *(&v6.field_0 as &i128)
            field_16: v6.field_16
            field_24: 1
        };
        return alloc::boxed::Box<T>::new(&v22) as u64;
    }
    v10 = v21;
    v9 = v20;
    v8 = v19;
    v5 = v18.field_0;
    v29 = 1;
    loop {
        v30 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v5);
        if !v30 {
            break;
        }
        v1 = 0;
        v2 = 8;
        v3 = 0;
        v38 = <char as core::str::pattern::Pattern>::into_searcher(*((v30 + 8) as &i64), *((v30 + 16) as &i64), v31);
        v22 = 0;
        v23 = *((v30 + 16) as &i64);
        v24 = 1;
        loop {
            v32 = core::str::iter::SplitInternal<P>::next(&v22);
            if !v32 {
                break;
            }
            v36 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v32, v33);
            v16 = v17;
            v1 = alloc::vec::Vec<T,A>::push(&v16);
        }
        v34 = uu_pathchk::check_path(&v0, 8, 0) as u32;
    }
    if (v29 & 1) {
        return 0;
    }
    uucore::mods::error::set_exit_code(1);
    return 0;
}
