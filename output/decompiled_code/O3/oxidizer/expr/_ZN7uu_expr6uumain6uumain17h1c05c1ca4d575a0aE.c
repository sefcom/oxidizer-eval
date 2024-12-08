fn uu_expr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x3f8]
    let v1: i64;  // [sp-0x3f0]
    let v2: i64;  // [sp-0x3e8]
    let v3: i192;  // [sp-0x3d8], Other Possible Types: struct24
    let v5: i64;  // [bp-0x3b8], Other Possible Types: struct64
    let v10: struct32;  // [bp-0x378]
    let v11: struct24;  // [sp-0x358], Other Possible Types: i192
    let v12: i64;  // [sp-0x340], Other Possible Types: struct56
    let v13: i64;  // [sp-0x338]
    let v14: i128;  // [sp-0x308]
    let v15: i128;  // [sp-0x2f8]
    let v16: i64;  // [sp-0x2e8], Other Possible Types: struct32, struct56, struct712, struct64
    let v17: i128;  // [bp-0x2e0]
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v24: i64;  // rdx
    let v25: i64;  // 4098
    let v26: i64;  // 4098

    v16 = uu_expr::uu_app(a1, v19);
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v16, a0, a1);
    if v12 == 0x8000000000000000 {
        v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v20;
    }
    v12 = struct56 {
        field_0: v5
        field_8: v6
        field_16: v7
        field_32: v8
        field_48: v9
    };
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, "expression");
    v5 = clap_builder::parser::error::MatchesError::unwrap("expression", &v16);
    if !v5 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v24 = 0;
    } else {
        v16 = struct64 {
            field_0: v21
            field_16: v22
            field_32: *((&v5 as &char + 32) as &i128)
            field_48: *((&v5 as &char + 48) as &i128)
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v16, v19);
        v0 = v3;
        v24 = *((&v3 as &char + 16) as &i64);
        v2 = v24;
    }
    uu_expr::syntax_tree::AstNode::parse(&v16, 8, v24);
    v25 = v16;
    v3 = *((&v16 as &char + 8) as &i128);
    v3.field_16 = (stack_base)[720] as i128;
    if v25 {
        v16 = struct32 {
            field_0: v3
            field_16: v4
        };
        v20 = alloc::boxed::Box<T>::new(&v16);
        goto LABEL_4bca22;
    } else {
        v10 = struct32 {
            field_0: v3
            field_16: v4
        };
        uu_expr::syntax_tree::AstNode::eval(&v5, &v10);
        v26 = v5;
        v14 = *((&v5 as &char + 8) as &i128);
        v15 = *((&v5 as &char + 24) as &i128);
        if !v26 {
            v11 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v14);
            println!("{:?}", &v11);
            v16.field_24 = (stack_base)[840] as i64;
            v17 = v11;
            v16 = 0x8000000000000000;
            if uu_expr::syntax_tree::is_truthy(&v16) as i8 {
                return 0;
            }
            v20 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        } else {
            v16 = struct32 {
                field_0: v14
                field_16: v15
            };
            v20 = alloc::boxed::Box<T>::new(&v16);
LABEL_4bca22:
        }
        return v20;
    }
}
