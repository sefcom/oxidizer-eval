fn uu_fold::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x438]
    let v1: u64;  // [bp-0x428]
    let v2: struct24;  // [bp-0x418]
    let v3: u64;  // [bp-0x410]
    let v4: u64;  // [bp-0x408]
    let v5: Result<struct56, struct16>;  // [bp-0x400], Other Possible Types: struct64
    let v6: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x400]
    let v7: u64;  // [bp-0x3f8]
    let v8: u128;  // [bp-0x3f0]
    let v9: u128;  // [bp-0x3e0]
    let v10: u128;  // [bp-0x3d0]
    let v11: u64;  // [bp-0x3c0]
    let v12: u64;  // [bp-0x3b8]
    let v13: u128;  // [bp-0x3b0]
    let v14: u128;  // [bp-0x3a0]
    let v15: u64;  // [bp-0x390]
    let v16: struct24;  // [bp-0x388]
    let v17: u128;  // [bp-0x388]
    let v18: u64;  // [bp-0x378]
    let v19: struct24;  // [bp-0x368]
    let v20: u128;  // [bp-0x348]
    let v21: struct88;  // [bp-0x338], Other Possible Types: u8
    let v22: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: struct24, struct56, u8
    let v23: alloc::string::String;  // [bp-0x2f8]
    let v24: u64;  // [bp-0x2f8]
    let v25: struct24;  // [bp-0x2f8]
    let v26: u128;  // [bp-0x2f0]
    let v27: u64;  // [bp-0x2e8]
    let v28: u128;  // [bp-0x2e0]
    let v29: i8;  // [bp-0x2d0]
    let v31: u32;  // eax
    let v32: u64;  // r14
    let v33: u32;  // eax
    let v34: core::fmt::rt::Argument;  // r15
    let v35: u64;  // rax
    let v37: u64;  // rdx
    let v39: i64;  // r15

    v2 = uucore::Args::collect_lossy(a0, a1);
    uu_fold::handle_obsolete(&v22, v3, v4);
    v18 = v27;
    v17 = *(&v22 as &i128);
    v1 = *(&v29 as &i64);
    v0 = v28;
    uu_fold::uu_app(&v22);
    v19 = v16;
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v22, &v19);
    match v5 {
        Err(_) => {
            uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
            return v32;
        },
        Ok(_) => {
            v15 = *((&v5 as &char + 48) as &i64);
            v14 = v9;
            v13 = v8;
            v11 = v5 as i64;
            v12 = v7;
            v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "bytes") as i32;
            v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, "spaces") as i32;
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, "width");
            v34 = clap_builder::parser::error::MatchesError::unwrap("width", &v22);
            if v34 {
                v23 = <alloc::string::String as core::clone::Clone>::clone(v34);
            } else {
                v20 = *((&v0 as &char + 8) as &i128);
                if v35 == 0x8000000000000000 {
                    goto LABEL_464b2c;
                }
            }
            v24 = v35;
            v26 = v20;
            v6 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v26 as i64, v27);
            if let Err(_) = v6 {
                uu_fold::uumain::uumain::{{closure}}(v26 as i64, v27, *((&v6 as &char + 1) as &i8));
                if v32 {
                    return v32;
                }
            }
LABEL_464b2c:
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, "file");
            v5 = clap_builder::parser::error::MatchesError::unwrap("file", &v22);
            if v5.field_0 as i64 {
                v21 = struct88 {
                    field_0: v5.field_0
                    field_16: v8
                    field_32: v9
                    field_48: v10
                    field_64: <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21 as u128)
                };
            } else {
                v39 = alloc::alloc::Global::alloc_impl(0x18, a1, v37) as u64;
                v22 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v19 = v25;
                *((v39 + 16) as &u64) = v27;
                *(v39 as &u128) = v19.field_0;
                v25 = alloc::slice::hack::into_vec(v39);
            }
            uu_fold::fold((&v21)[1].field_0 as i64, v27, v31 as u64, v33 as u64, v7);
            return v32;
        },
    }
}
