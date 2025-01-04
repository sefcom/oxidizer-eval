fn uu_fold::uumain::uumain(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0x438]
    let v1: i64;  // [sp-0x428]
    let v2: i192;  // [sp-0x418], Other Possible Types: struct24
    let v3: i64;  // [sp-0x400], Other Possible Types: Result<struct8, struct1>, struct64
    let v4: i64;  // [sp-0x3c0]
    let v5: i64;  // [sp-0x3b8]
    let v6: i128;  // [sp-0x3b0]
    let v7: i128;  // [sp-0x3a0]
    let v8: i64;  // [sp-0x390]
    let v9: i128;  // [sp-0x388]
    let v10: i64;  // [sp-0x378]
    let v11: i128;  // [bp-0x368]
    let v12: i64;  // [sp-0x358]
    let v13: i128;  // [sp-0x348]
    let v14: i512;  // [bp-0x338]
    let v15: i384;  // [sp-0x2f8], Other Possible Types: struct24, struct712, struct56, Result<struct40, struct16>, struct48
    let v16: i128;  // [sp-0x2f0]
    let v18: i64;  // rsi
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v23: i64;  // rax
    let v26: i64;  // r15
    let v27: i64;  // rax
    let v28: i64;  // r14
    let v29: i64;  // r15

    v2 = uucore::Args::collect_lossy(a0, a1);
    v15 = uu_fold::handle_obsolete(*((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
    v10 = *((&v15 as &char + 16) as &i64);
    v9 = v15;
    v1 = *((&v15 as &char + 40) as &i64);
    v0 = *((&v15 as &char + 24) as &i128);
    v15 = uu_fold::uu_app(v18, v19);
    v11 = v9;
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v15, &v11, v20);
    match v3 {
        Err(_) => {
            v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
            return v23;
        },
        Ok(_) => {
            v8 = *((&v3 as &char + 48) as &i64);
            v7 = *((&v3 as &char + 32) as &i128);
            v6 = *((&v3 as &char + 16) as &i128);
            v4 = v3;
            v5 = *((&v3 as &char + 8) as &i64);
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "width");
            v26 = clap_builder::parser::error::MatchesError::unwrap("width", &v15);
            if v26 {
                v15 = <alloc::string::String as core::clone::Clone>::clone(v26);
                v13 = v16;
            } else {
                v27 = v0;
                v13 = *((&v0 as &char + 8) as &i128);
                v28 = 80;
                if v27 == 0x8000000000000000 {
                    goto LABEL_464b2c;
                }
            }
            v15 = v27;
            v16 = v13;
            v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v16, *((&v16 as &char + 8) as &i64));
            match v3 {
                Ok(v28) => {
                },
                Err(_) => {
                    v23 = uu_fold::uumain::uumain::{{closure}}(v16, *((&v16 as &char + 8) as &i64), *((&v3 as &char + 1) as &i8) as u8 as u64);
                    if !v23 {
                        v28 = &g_517fb8;
                    } else if v26 {
                        return v23;
                    } else {
                        return v23;
                    }
                },
            }
LABEL_464b2c:
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
            v3 = clap_builder::parser::error::MatchesError::unwrap("file", &v15);
            if v3 {
                v14 = v3;
                v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v14, v19);
            } else {
                v29 = alloc::alloc::Global::alloc_impl(24);
                v15 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v11 = v15;
                *((v29 + 16) as &i64) = v12;
                *(v29 as &i128) = v11;
                v15 = alloc::slice::hack::into_vec(v29);
            }
            v23 = uu_fold::fold(*((&v15 as &char + 8) as &i64), *((&v15 as &char + 16) as &i64), clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "bytes") as i32 as u32 as u64, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "spaces") as i32 as u32 as u64, v28);
            return v23;
        },
    }
}
