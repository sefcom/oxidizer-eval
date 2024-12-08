fn uu_fold::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x438]
    let v1: i64;  // [sp-0x428]
    let v2: i192;  // [sp-0x418], Other Possible Types: struct24
    let v3: i8;  // [bp-0x400], Other Possible Types: struct64, Result<struct8, struct1>
    let v4: i8;  // [bp-0x3f8]
    let v5: i8;  // [bp-0x3f0]
    let v6: i8;  // [bp-0x3e0]
    let v7: i8;  // [bp-0x3d0]
    let v8: i64;  // [sp-0x3c0]
    let v9: i64;  // [sp-0x3b8]
    let v10: i128;  // [sp-0x3b0]
    let v11: i128;  // [sp-0x3a0]
    let v12: i64;  // [sp-0x390]
    let v13: i128;  // [sp-0x388]
    let v14: i64;  // [sp-0x378]
    let v15: i128;  // [bp-0x368], Other Possible Types: struct24
    let v16: i64;  // [sp-0x358]
    let v17: i128;  // [sp-0x348]
    let v18: struct64;  // [bp-0x338]
    let v19: i320;  // [sp-0x2f8], Other Possible Types: struct24, struct48, struct712, Result<struct40, struct16>, struct56
    let v21: i64;  // rsi
    let v22: i64;  // rdx
    let v23: i64;  // rcx
    let v28: i64;  // r15
    let v29: i64;  // rax
    let v30: i64;  // r14
    let v31: i8;  // r12b
    let v32: i64;  // r12
    let v33: i64;  // rbx
    let v34: i64;  // r15

    v2 = uucore::Args::collect_lossy(a0, a1);
    v19 = uu_fold::handle_obsolete(*((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
    v14 = *((&v19 as &char + 16) as &i64);
    v13 = v19;
    v1 = *((&v19 as &char + 40) as &i64);
    v0 = *((&v19 as &char + 24) as &i128);
    v19 = uu_fold::uu_app(v21, v22);
    v15 = struct24 {
        field_0: v13
        field_16: v14
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v19, &v15, v23);
    if v8 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
    } else {
        v12 = v7;
        v11 = v6;
        v10 = v5;
        v8 = v3;
        v9 = v4;
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8);
        v28 = clap_builder::parser::error::MatchesError::unwrap("width", &v19);
        if v28 {
            v19 = <alloc::string::String as core::clone::Clone>::clone(v28);
            v17 = v19.field_8;
            v31 = v32 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
        } else {
            v29 = v0;
            v17 = *((&v0 as &char + 8) as &i128);
            v30 = 80;
            v31 = 0;
            if v29 == 0x8000000000000000 {
                goto LABEL_4652fb;
            }
        }
        v19 = v29;
        v19.field_8 = vvar_365{stack -840};
        v3 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v19 as &char + 8) as &i64), *((&v19 as &char + 16) as &i64));
        match v3 {
            Err(_) => {
                v33 = uu_fold::uumain::uumain::{{closure}}(*((&v19 as &char + 8) as &i64), *((&v19 as &char + 16) as &i64));
                return v33;
            },
            Ok(_) => {
                v30 = v4;
            },
        }
LABEL_4652fb:
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8);
        v3 = clap_builder::parser::error::MatchesError::unwrap("file", &v19);
        if v3 {
            v18 = struct64 {
                field_0: v3
                field_16: *((&v3 as &char + 16) as &i128)
                field_32: *((&v3 as &char + 32) as &i128)
                field_48: *((&v3 as &char + 48) as &i128)
            };
            v19 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18, v22);
        } else {
            v34 = alloc::alloc::Global::alloc_impl(24);
            v19 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v16 = *((&v19 as &char + 16) as &i64);
            v15 = v19;
            *((v34 + 16) as &i64) = v16;
            *(v34 as &i128) = v15;
            v19 = alloc::slice::hack::into_vec(v34, 1);
        }
        v33 = uu_fold::fold(*((&v19 as &char + 8) as &i64), *((&v19 as &char + 16) as &i64), clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "bytes") as i32, clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "spaces") as i32, v30);
        if !v31 {
            return v33;
        }
        return v33;
    }
}
