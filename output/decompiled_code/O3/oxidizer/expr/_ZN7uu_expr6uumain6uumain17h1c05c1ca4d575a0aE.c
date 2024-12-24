fn uu_expr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x3f8]
    let v1: i64;  // [sp-0x3f0]
    let v2: i64;  // [sp-0x3e8]
    let v3: i128;  // [sp-0x3d8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x3b8], Other Possible Types: struct64, Result<struct56, struct16>
    let v5: i256;  // [bp-0x378]
    let v6: i192;  // [sp-0x358], Other Possible Types: struct24
    let v7: i64;  // [sp-0x340]
    let v8: i64;  // [sp-0x338]
    let v9: i128;  // [sp-0x308]
    let v10: i128;  // [sp-0x2f8]
    let v11: i256;  // [sp-0x2e8], Other Possible Types: struct64, struct56, struct712
    let v12: i192;  // [bp-0x2e0]
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v19: i64;  // rdx
    let v20: i64;  // 4098
    let v21: i64;  // 4098

    v11 = uu_expr::uu_app(a1, v14);
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v11, a0, a1);
    if v7 == 0x8000000000000000 {
        v15 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v15;
    }
    v7 = v4;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, "expression");
    v4 = clap_builder::parser::error::MatchesError::unwrap("expression", &v11);
    if !v4 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v19 = 0;
    } else {
        v11 = struct64 {
            field_0: v16
            field_16: v17
            field_32: *((&v4 as &char + 32) as &i128)
            field_48: *((&v4 as &char + 48) as &i128)
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v11, v14);
        v0 = v3;
        v19 = *((&v3 as &char + 16) as &i64);
        v2 = v19;
    }
    uu_expr::syntax_tree::AstNode::parse(&v11, 8, v19);
    v20 = v11;
    v3 = *((&v11 as &char + 8) as &i128);
    v3.field_16 = (stack_base)[720] as i128;
    if v20 {
        v11 = v3;
        v15 = alloc::boxed::Box<T>::new(&v11);
        goto LABEL_4bca22;
    } else {
        v5 = v3;
        uu_expr::syntax_tree::AstNode::eval(&v4, &v5);
        v21 = v4;
        v9 = *((&v4 as &char + 8) as &i128);
        v10 = *((&v4 as &char + 24) as &i128);
        if !v21 {
            v6 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v9);
            println!("{:?}", &v6);
            v12 = v6;
            v11 = 0x8000000000000000;
            if uu_expr::syntax_tree::is_truthy(&v11) as i8 {
                return 0;
            }
            v15 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        } else {
            v11 = v9;
            v15 = alloc::boxed::Box<T>::new(&v11);
LABEL_4bca22:
        }
        return v15;
    }
}
