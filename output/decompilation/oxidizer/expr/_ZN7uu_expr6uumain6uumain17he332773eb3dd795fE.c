fn uu_expr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3f0]
    let v1: i64;  // [sp-0x3e8], Other Possible Types: int
    let v2: i64;  // [sp-0x3e0]
    let v3: iNone;  // [sp-0x3d8], Other Possible Types: struct24
    let v4: iNone;  // [sp-0x3c8]
    let v5: i64;  // [bp-0x3b8], Other Possible Types: char, struct64
    let v6: iNone;  // [sp-0x378]
    let v7: struct24;  // [sp-0x358]
    let v8: iNone;  // [sp-0x340], Other Possible Types: unsigned long
    let v9: i64;  // [sp-0x338]
    let v10: iNone;  // [sp-0x308]
    let v11: iNone;  // [sp-0x2f8]
    let v12: struct712;  // [sp-0x2e8], Other Possible Types: struct56, int, struct64
    let v13: i64;  // [sp-0x2e8], Other Possible Types: int
    let v14: struct24;  // [sp-0x2e0]
    let v15: iNone;  // [bp-0x2d8]
    let v17: i64;  // rbx
    let v20: i64;  // rsi
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i64;  // 4098
    let v24: i64;  // 4098

    v12 = uu_expr::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v12, a0, a1);
    if v8 == 0x8000000000000000 {
        v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v17;
    }
    v8 = *(&v5 as &i448);
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, "expression");
    v5 = clap_builder::parser::error::MatchesError::unwrap("expression", &v12);
    if !v5 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v20 = 8;
        v21 = 0;
    } else {
        v12 = struct64 {
            field_0: v18
            field_16: v19
            field_32: v5.field_32
            field_48: v5.field_48
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12);
        v22 = v3.field_0;
        *(&v1 as &i128) = *(&v3.field_8 as &i128);
        v0 = v22;
        v20 = v1;
        v21 = v2;
    }
    uu_expr::syntax_tree::AstNode::parse(&v13, v20, v21);
    v23 = v13;
    v3 = (&v12)[8] as i128;
    v4 = (&v12)[24] as i128;
    if v23 {
        v15 = v4;
        v13 = v3;
        v17 = alloc::boxed::Box<T>::new(&v13);
    } else {
        uu_expr::syntax_tree::AstNode::eval(&v5, &v6);
        v24 = v5;
        v10 = *((&v5.field_0 as &char + 8) as &i128);
        v11 = *((&v5.field_16 as &char + 8) as &i128);
        if v24 {
            v15 = v11;
            v13 = v10;
        } else {
            v7 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v10);
            println!("{}", &v7);
            v14 = v7;
            v13 = 0x8000000000000000;
            if uu_expr::syntax_tree::is_truthy(&v13) as i8 {
                return 0;
            }
            v17 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            return v17;
        }
    }
    return v17;
}
