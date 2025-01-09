fn uu_fold::uumain::uumain(a0: i64, a1: i64) -> u32 {
    let v0: i128;  // [sp-0x438]
    let v1: i64;  // [sp-0x428]
    let v2: i192;  // [sp-0x418], Other Possible Types: struct24
    let v3: i456;  // [sp-0x400], Other Possible Types: Result<struct56, struct8>, struct64
    let v4: i64;  // [sp-0x3c0]
    let v5: i64;  // [sp-0x3b8]
    let v6: i128;  // [sp-0x3b0]
    let v7: i128;  // [sp-0x3a0]
    let v8: i64;  // [sp-0x390]
    let v9: i128;  // [sp-0x388]
    let v10: i64;  // [sp-0x378]
    let v11: i192;  // [bp-0x368], Other Possible Types: struct24
    let v12: i64;  // [sp-0x358]
    let v13: i128;  // [sp-0x348]
    let v14: struct64;  // [bp-0x338]
    let v15: i64;  // [sp-0x2f8], Other Possible Types: struct24, struct56, Result<struct40, struct8>, struct712, struct48
    let v16: i128;  // [sp-0x2f0]
    let v20: i64;  // rax
    let v23: i64;  // r15
    let v24: i64;  // rax
    let v25: i64;  // r14
    let v26: i64;  // r15

    v2 = uucore::Args::collect_lossy(a0, a1);
    v15 = uu_fold::handle_obsolete(*((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
    v10 = *((&v15 as &char + 16) as &i64);
    v9 = v15;
    v1 = *((&v15 as &char + 40) as &i64);
    v0 = *((&v15 as &char + 24) as &i128);
    v15 = uu_fold::uu_app();
    v11 = struct24 {
        field_0: v9
        field_16: v10
    };
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v15, &v11);
    match v3 {
        Err(_) => {
            v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
            return v20;
        },
        Ok(_) => {
            v8 = *((&v3 as &char + 48) as &i64);
            v7 = *((&v3 as &char + 32) as &i128);
            v6 = *((&v3 as &char + 16) as &i128);
            v4 = v3;
            v5 = *((&v3 as &char + 8) as &i64);
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "width");
            v23 = clap_builder::parser::error::MatchesError::unwrap("width", &v15);
            if v23 {
                v15 = <alloc::string::String as core::clone::Clone>::clone(v23);
                v13 = v16;
            } else {
                v24 = v0;
                v13 = *((&v0 as &char + 8) as &i128);
                v25 = 80;
                if v24 == 0x8000000000000000 {
                    goto LABEL_464b2c;
                }
            }
            v15 = v24;
            v16 = v13;
            v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v16, *((&v16 as &char + 8) as &i64)) as u64;
            match v3 {
                Ok(v25) => {
                },
                Err(_) => {
                    v20 = uu_fold::uumain::uumain::{{closure}}(v16, *((&v16 as &char + 8) as &i64), *((&v3 as &char + 1) as &i8) as u8 as u64);
                    if !v20 {
                        v25 = &g_517fb8;
                    } else if v23 {
                        return v20;
                    } else {
                        return v20;
                    }
                },
            }
LABEL_464b2c:
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
            v3 = clap_builder::parser::error::MatchesError::unwrap("file", &v15);
            if v3 {
                v14 = struct64 {
                    field_0: v3
                    field_16: *((&v3 as &char + 16) as &i128)
                    field_32: *((&v3 as &char + 32) as &i128)
                    field_48: *((&v3 as &char + 48) as &i128)
                };
                v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v14);
            } else {
                v26 = alloc::alloc::Global::alloc_impl();
                v15 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v11 = v15;
                *((v26 + 16) as &i64) = v12;
                *(v26 as &i128) = v11;
                v15 = alloc::slice::hack::into_vec(v26);
            }
            v20 = uu_fold::fold(*((&v15 as &char + 8) as &i64), *((&v15 as &char + 16) as &i64), clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "bytes") as i32 as u32 as u64, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "spaces") as i32 as u32 as u64, v25);
            return v20;
        },
    }
}
