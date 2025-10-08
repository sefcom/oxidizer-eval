fn uu_fold::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x3f2]
    let v1: u8;  // [bp-0x3f1]
    let v2: u64;  // [bp-0x3f0]
    let v3: u8;  // [bp-0x3e8]
    let v4: u64;  // [bp-0x3e0]
    let v5: u64;  // [bp-0x3d8]
    let v6: u64;  // [bp-0x3d0]
    let v7: u64;  // [bp-0x3c8]
    let v8: iNone;  // [bp-0x3c0]
    let v9: iNone;  // [bp-0x3b0]
    let v10: u64;  // [bp-0x3a0]
    let v11: u128;  // [bp-0x398]
    let v12: u64;  // [bp-0x388]
    let v13: struct16;  // [bp-0x378], Other Possible Types: u128
    let v14: u64;  // [bp-0x370]
    let v15: i8;  // [bp-0x368], Other Possible Types: u64
    let v16: iNone;  // [bp-0x358]
    let v17: i8;  // [bp-0x348]
    let v18: struct64;  // [bp-0x338]
    let v19: struct24;  // [bp-0x2f8], Other Possible Types: struct56, struct712, u8
    let v20: alloc::string::String;  // [bp-0x2f8]
    let v21: iNone;  // [bp-0x2f7]
    let v22: i64;  // [bp-0x2f0]
    let v23: i64;  // [bp-0x2f0]
    let v24: u64;  // [bp-0x2e8]
    let v25: u64;  // [bp-0x2e8]
    let v26: u64;  // [bp-0x2e0]
    let v27: i8;  // [bp-0x2d0]
    let v30: u64;  // r12
    let v31: u64;  // rax
    let v33: u64;  // r12
    let v35: i64;  // r13
    let v37: i64;  // rbx
    let v40: iNone;  // xmm0
    let v41: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    uucore::Args::collect_lossy(&v3, a0, a1);
    uu_fold::handle_obsolete(&v19, v4, v5);
    v12 = v25;
    v11 = *(&v19 as &i128);
    v2 = v26;
    v19 = uu_fold::uu_app();
    v13 = clap_builder::builder::command::Command::try_get_matches_from(&v19, &v11);
    if (((0 ^ v13.field_0) & (0 ^ -(v13.field_0))) >> 63) as char {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v30;
    }
    v10 = *(&v17 as &i64);
    v9 = v16;
    v8 = *(&v15 as &i128);
    v6 = v13.field_0;
    v7 = v14;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "bytes");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, "spaces");
    v20 as u640 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6);
    v31 = clap_builder::parser::error::MatchesError::unwrap(&v20 as u640);
    if v31 {
        v20 = <alloc::string::String as core::clone::Clone>::clone(v31);
        v23 = v22;
        v24 = v25;
    } else {
        v24 = *(&v27 as &i64);
        if v2 == 0x8000000000000000 {
            goto LABEL_456480;
        }
    }
    v33 = v24;
    v41 = core::num::<impl usize>::from_ascii_radix(&v20 as u640, v22, v33);
    if let Ok(_) = v20 as u640 {
        uu_fold::uumain::uumain::{{closure}}(v22, v33, v21 as i8);
        if v30 {
            return v30;
        }
        v35 = &g_4e5f18.field_0;
    }
LABEL_456480:
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v6);
    v18 = clap_builder::parser::error::MatchesError::unwrap(&v19);
    if v18.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v19, &v18);
        v37 = v23;
    } else {
        v37 = alloc::alloc::Global::alloc_impl(8, 24);
        v19 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v15 = v25;
        v40 = *(&v19.field_0 as &i128);
        *(&v13 as void*) = v40;
        *((v37 + 16) as &u64) = v25;
        *(v37 as void*) = v40;
        v19 = 1;
        v22 = v37;
        v24 = 1;
    }
    uu_fold::fold(v37, v25, v1, v0, v35);
    return v30;
}
