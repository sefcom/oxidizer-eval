fn uu_expr::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x3f0]
    let v1: i128;  // [sp-0x3e8]
    let v2: i64;  // [sp-0x3e0]
    let v3: i128;  // [sp-0x3d8], Other Possible Types: struct24
    let v4: i128;  // [sp-0x3c8]
    let v5: i448;  // [sp-0x3b8], Other Possible Types: Result<struct56, struct16>, struct64
    let v6: i256;  // [bp-0x378]
    let v7: i192;  // [sp-0x358], Other Possible Types: struct24
    let v8: i64;  // [sp-0x340]
    let v9: i64;  // [sp-0x338]
    let v10: i128;  // [sp-0x308]
    let v11: i128;  // [sp-0x2f8]
    let v12: i64;  // [sp-0x2e8], Other Possible Types: struct712, struct64, struct56
    let v13: i192;  // [bp-0x2e0]
    let v15: i64;  // r8
    let v16: i64;  // r9
    let v17: i64;  // rax
    let v20: i64;  // rdx
    let v23: i64;  // rax
    let v24: i64;  // 4098
    let v25: i64;  // 4098

    v12 = uu_expr::uu_app(a1, a2);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1, v15, v16);
    if v8 == 0x8000000000000000 {
        v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v17;
    }
    v8 = v5;
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, "expression");
    v5 = clap_builder::parser::error::MatchesError::unwrap("expression", &v12);
    if !v5 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v12 = struct64 {
            field_0: v18
            field_16: v19
            field_32: *((&v5 as &char + 32) as &i128)
            field_48: *((&v5 as &char + 48) as &i128)
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12, v20);
        v23 = v3;
        v1 = *((&v3 as &char + 8) as &i128);
        v0 = v23;
    }
    uu_expr::syntax_tree::AstNode::parse(&v12, 8, 0);
    v24 = v12;
    v3 = *((&v12 as &char + 8) as &i128);
    v4 = *((&v12 as &char + 24) as &i128);
    if v24 {
        v12 = v3;
        v17 = alloc::boxed::Box<T>::new(&v12);
        goto LABEL_4b93b9;
    } else {
        v6 = v3;
        uu_expr::syntax_tree::AstNode::eval(&v5, &v6);
        v25 = v5;
        v10 = *((&v5 as &char + 8) as &i128);
        v11 = *((&v5 as &char + 24) as &i128);
        if !v25 {
            v7 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v10);
            println!("{:?}", &v7);
            v13 = v7;
            v12 = 0x8000000000000000;
            if uu_expr::syntax_tree::is_truthy(&v12) as i8 {
                return 0;
            }
            v17 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        } else {
            v12 = v10;
            v17 = alloc::boxed::Box<T>::new(&v12);
LABEL_4b93b9:
        }
        return v17;
    }
}
