fn uu_touch::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x459]
    let v1: struct16;  // [bp-0x458], Other Possible Types: u64
    let v2: u64;  // [bp-0x458]
    let v3: void*;  // [bp-0x450]
    let v4: u64;  // [bp-0x448]
    let v5: u64;  // [bp-0x440]
    let v6: u64;  // [bp-0x438]
    let v7: i64;  // [bp-0x430]
    let v8: &void*;  // [bp-0x428], Other Possible Types: u64
    let v9: u128;  // [bp-0x418]
    let v13: &void*;  // [bp-0x408]
    let v15: u64;  // [bp-0x400]
    let v16: u8;  // [bp-0x3f8]
    let v17: u64;  // [bp-0x3f0]
    let v18: u64;  // [bp-0x3e8]
    let v19: struct56;  // [bp-0x3e0]
    let v20: struct16;  // [bp-0x3a8], Other Possible Types: struct48, struct64
    let v21: struct56;  // [bp-0x3a8], Other Possible Types: struct64, u64
    let v22: struct48;  // [bp-0x368], Other Possible Types: u64
    let v23: struct64;  // [bp-0x338]
    let v24: struct32;  // [bp-0x2f8], Other Possible Types: struct52, struct56, struct712, Result<struct12, struct16>, alloc::string::String, struct24
    let v25: struct40;  // [bp-0x2f8]
    let v26: alloc::string::String;  // [bp-0x2f8], Other Possible Types: struct24
    let v27: void*;  // [bp-0x2f0]
    let v28: void*;  // [bp-0x2f0]
    let v29: &void*;  // [bp-0x2e8], Other Possible Types: u64
    let v30: &void*;  // [bp-0x2e8]
    let v32: u64;  // r15
    let v33: i64;  // rbp
    let v34: u64;  // rax
    let v36: u64;  // r15
    let v39: u64;  // rax
    let v40: u64;  // rdi
    let v41: void*;  // rdx
    let v42: &void*;  // rbx
    let v43: u64;  // r12
    let v44: void*;  // r15
    let v45: void*;  // rbx
    let v46: u8;  // al
    let v47: u8;  // al

    v24 = uu_touch::uu_app();
    v20 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1);
    if (((0 ^ v20.field_0) & (0 ^ -(v21))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20.field_8);
    }
    v19 = v21;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, _ZN8uu_touch9ARG_FILES17hfed196c0e0c7c01dE.field_0, g_679d08.field_0);
    v20 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch9ARG_FILES17hfed196c0e0c7c01dE.field_0, g_679d08.field_0, &v24);
    if !v20.field_0 as i64 {
        uu_touch::uumain::uumain::{{closure}}();
        return v45;
    }
    v23 = v21;
    core::iter::traits::iterator::Iterator::collect(&v6, &v23);
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN8uu_touch7options8NO_DEREF17he84667771222874eE.field_0, g_679cf8.field_0);
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, _ZN8uu_touch7options7sources9REFERENCE17hab2eabe5f66d3372E.field_0, g_679cc8.field_0);
    v33 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9REFERENCE17hab2eabe5f66d3372E.field_0, g_679cc8.field_0, &v24);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, &v19, _ZN8uu_touch7options7sources4DATE17hb220f2e2c613f32cE.field_0, g_679cb8.field_0);
    v34 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources4DATE17hb220f2e2c613f32cE.field_0, g_679cb8.field_0, &v24);
    v0 = v32;
    if v34 {
        v24 = <alloc::string::String as core::clone::Clone>::clone(v34);
        v15 = v29;
    }
    vvar_792{stack -760} = struct40 OrderedDict([(0, 𝜙@64b [((5416906, None), None), ((5416943, None), vvar_696{stack -760})]), (8, 𝜙@64b [((5416906, None), None), ((5416943, None), vvar_697{stack -752})]), (16, 𝜙@64b [((5416906, None), None), ((5416943, None), vvar_698{stack -744})])])
    v5 = v32;
    v4 = 0x8000000000000000;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, &v19, _ZN8uu_touch7options7sources9TIMESTAMP17hb05dc1a3112e150dE.field_0, g_679cd8.field_0);
    v39 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9TIMESTAMP17hb05dc1a3112e150dE.field_0, g_679cd8.field_0, &v25);
    if v39 {
        v24 = <alloc::string::String as core::clone::Clone>::clone(v39);
        v30 = v29;
        v28 = v27;
    } else {
        v30 = _ZN8uu_touch7options7sources9TIMESTAMP17hb05dc1a3112e150dE.field_0;
    }
    v41 = v28;
    v1 = v40;
    v3 = v41;
    if uu_touch::is_first_filename_timestamp(v33, v36, v15, v41, v42, v7, v8) {
        if *((*(v7 as &i64) + 16) as &i64) == 10 {
            v26 = uu_touch::shr2(*((*(v7 as &i64) + 8) as &i64), 10);
        } else {
            v26 = <alloc::string::String as core::clone::Clone>::clone(*(v7 as &i64));
        }
        v44 = v27;
        v3 = v44;
        v1 = v43;
        v24 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7 + 8, v8 - 1);
        v8 = v29;
        v6 = v24.field_0;
        v3 = v44;
        v2 = v43;
        if !v33 {
            goto LABEL_52aa02;
        }
LABEL_52a93b:
        v24 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v33 + 8) as &i64), *((v33 + 16) as &i64));
        v13 = v29;
        v9 = v24.field_0;
    } else {
        v44 = v3;
        v43 = v1;
        v1 = struct16 {
            field_0: v43
            field_8: v44
        };
        if v33 {
            goto LABEL_52a93b;
        }
LABEL_52aa02:
        if v43 != 0x8000000000000000 {
            v24 = uu_touch::parse_timestamp(v44, v29);
            v45 = v27;
            if let Err(_) = v24 {
                return v45;
            }
        }
    }
    v24 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    core::iter::traits::iterator::Iterator::collect(&v16, &v24);
    v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, _ZN8uu_touch7options9NO_CREATE17h76be8c25dbc74278E.field_0, g_679ce8.field_0);
    v47 = uu_touch::determine_atime_mtime_change(&v19);
    v24 = struct52 {
        field_0: 0x8000000000000000
        field_8: v5
        field_16: v15
        field_24: v9
        field_40: v13
        field_48: v46
        field_49: v0
        field_50: 0
        field_51: v47
    };
    uu_touch::touch(&v22, v17, v18, &v24);
    if v22 == 9223372036854775812 {
        return 0;
    }
    v20 = v22;
    alloc::boxed::Box<T>::new(&v20);
    return v45;
}
