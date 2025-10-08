fn uu_shred::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x3f9]
    let v1: u64;  // [bp-0x3f0]
    let v2: void*;  // [bp-0x3e0], Other Possible Types: struct16, struct24
    let v3: struct64;  // [bp-0x3e0], Other Possible Types: u64
    let v4: u64;  // [bp-0x3d8]
    let v5: u8;  // [bp-0x3d0]
    let v6: u8;  // [bp-0x3c8]
    let v7: i8;  // [bp-0x3c0]
    let v8: i8;  // [bp-0x3b0], Other Possible Types: u128
    let v9: u64;  // [bp-0x3a0]
    let v10: i64;  // [bp-0x398], Other Possible Types: u64
    let v11: u64;  // [bp-0x390]
    let v12: u64;  // [bp-0x388]
    let v13: iNone;  // [bp-0x380]
    let v14: iNone;  // [bp-0x370]
    let v15: u64;  // [bp-0x360]
    let v16: u64;  // [bp-0x350]
    let v17: iNone;  // [bp-0x328]
    let v18: alloc::string::String;  // [bp-0x310]
    let v19: u64;  // [bp-0x300]
    let v20: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: u128
    let v21: Result<struct40, struct16>;  // [bp-0x2f8]
    let v22: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: u128
    let v23: alloc::string::String;  // [bp-0x2f8]
    let v24: u128;  // [bp-0x2f8]
    let v25: iNone;  // [bp-0x2f0]
    let v26: u128;  // [bp-0x2e8]
    let v27: u32;  // [bp-0x2e0]
    let v28: iNone;  // [bp-0x2d8]
    let v29: iNone;  // [bp-0x2c8]
    let v31: i64;  // rax
    let v32: u64;  // rbx
    let v33: u64;  // r12
    let v34: void*;  // rax
    let v35: void*;  // rbx
    let v36: u64;  // r15
    let v37: u8;  // al
    let v38: u64;  // rax
    let v39: u64;  // rax
    let v40: u64;  // rsi
    let v41: u64;  // r15
    let v42: u8;  // al
    let v43: u8;  // al
    let v44: u128;  // xmm0
    let v45: i64;  // rax
    let v46: i64;  // rdx
    let v47: u64;  // rax
    let v49: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v24 = uu_shred::uu_app();
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1);
    if (((0 ^ v2.field_0) & (0 ^ -(v3))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    }
    v15 = *(&v8 as &i64);
    v14 = *(&v7 as &i128);
    v13 = *(&v5 as &i128);
    v11 = v2.field_0;
    v12 = v4;
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v11, "file") {
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, "iterations");
        v31 = clap_builder::parser::error::MatchesError::unwrap("iterations", &v21);
        if !v31 {
            core::panicking::panic("internal error: entered unreachable code"); /* do not return */
        }
        v49 = core::num::<impl usize>::from_ascii_radix(&v9, *((v31 + 8) as &i64), *((v31 + 16) as &i64));
        if v9 {
            v2 = 0;
            v4 = *((v31 + 8) as &i64);
            v5 = *((v31 + 16) as &i64);
            v6 = 1;
            v18 = format!("invalid number of passes: {}", &v2);
            v27 = 1;
            v22 = *(&v18.vec.buf.inner.cap as &i128);
            v26 = v19;
            alloc::boxed::Box<T>::new(&v22);
        } else {
            v16 = v10;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "u") && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v11, "remove") {
                v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, "remove");
                v34 = clap_builder::parser::error::MatchesError::unwrap("remove", &v20);
                if !v34 {
                    panic!("internal error: entered unreachable code: should be caught by clap");
                }
                v35 = v34[8] as i64;
                v36 = v34[16] as i64;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v36, "unlink") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v36, "wipe") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v36, "wipesync") {
                    panic!("internal error: entered unreachable code: should be caught by clap");
                }
            }
            v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "force");
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, "size");
            v38 = clap_builder::parser::error::MatchesError::unwrap("size", &v22);
            if v38 {
                v23 = <alloc::string::String as core::clone::Clone>::clone(v38);
            }
            v20 = v39;
            v25 = v17;
            v41 = uu_shred::get_size(&v20, v40);
            v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "exact");
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "zero");
            v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "verbose");
            v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11);
            v3 = clap_builder::parser::error::MatchesError::unwrap(&v20);
            core::option::unwrap(v3);
            v44 = v3.field_0;
            v29 = v8;
            v28 = v3.field_32;
            v26 = v3.field_16;
            v20 = v44;
            loop {
                v45 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v20);
                if !v45 {
                    return 0;
                }
                v47 = uu_shred::wipe_file(*((v45 + 8) as &i64), *((v45 + 16) as &i64), v16, v33 & 4294967295, v41, v46, v42 | v41 == 1, v0, v43, v37);
                if v47 {
                    v1 = v47;
                    uucore::mods::error::set_exit_code(*((v46 + 88) as &i64)(v47) as u32);
                    v9 = uucore::util_name();
                    v10 = v46;
                    eprintln!("{}: {}", &v9, &v1);
                }
            }
        }
    } else {
        v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing file operand");
        v26 = v5;
        v24 = *(&v2.field_0 as &i128);
        v27 = 1;
        alloc::boxed::Box<T>::new(&v24);
    }
    return v32;
}
