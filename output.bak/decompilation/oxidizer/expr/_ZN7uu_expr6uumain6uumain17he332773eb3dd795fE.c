fn uu_expr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3f0]
    let v1: i64;  // [sp-0x3e8]
    let v2: i64;  // [sp-0x3e0]
    let v3: i192;  // [sp-0x3d8], Other Possible Types: struct24
    let v4: i128;  // [sp-0x3c8]
    let v5: i512;  // [sp-0x3b8], Other Possible Types: Result<struct56, struct8>, struct64
    let v7: struct32;  // [bp-0x378]
    let v8: struct24;  // [sp-0x358]
    let v9: i64;  // [sp-0x340], Other Possible Types: struct56
    let v10: i64;  // [sp-0x338]
    let v11: i128;  // [sp-0x308]
    let v12: i128;  // [sp-0x2f8]
    let v13: i448;  // [sp-0x2e8], Other Possible Types: struct32, struct64, struct56, struct712
    let v16: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // 4098
    let v23: i64;  // 4098

    v13 = uu_expr::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    if v9 == 0x8000000000000000 {
        v16 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        return v16;
    }
    v9 = struct56 {
        field_0: v5
        field_8: v6
        field_16: *((&v5 as &char + 16) as &i128)
        field_32: *((&v5 as &char + 32) as &i128)
        field_48: *((&v5 as &char + 48) as &i64)
    };
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, "expression");
    v5 = clap_builder::parser::error::MatchesError::unwrap("expression", &v13);
    if !v5 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v13 = struct64 {
            field_0: v17
            field_16: v18
            field_32: *((&v5 as &char + 32) as &i128)
            field_48: *((&v5 as &char + 48) as &i128)
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v13);
        v21 = v3;
        v1 = *((&v3 as &char + 8) as &i128);
        v0 = v21;
    }
    uu_expr::syntax_tree::AstNode::parse(&v13, 8, 0);
    v22 = v13;
    v3 = *((&v13 as &char + 8) as &i128);
    v4 = *((&v13 as &char + 24) as &i128);
    if v22 {
        v13 = struct32 {
            field_0: v3
            field_16: v4
        };
        v16 = alloc::boxed::Box<T>::new(&v13);
        goto LABEL_4b93b9;
    } else {
        v7 = struct32 {
            field_0: v3
            field_16: v4
        };
        uu_expr::syntax_tree::AstNode::eval(&v5, &v7);
        v23 = v5;
        v11 = *((&v5 as &char + 8) as &i128);
        v12 = *((&v5 as &char + 24) as &i128);
        if !v23 {
            v8 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v11);
            println!("{:?}", &v8);
            v13 = 0x8000000000000000;
            if uu_expr::syntax_tree::is_truthy(&v13) as i8 {
                return 0;
            }
            v16 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
        } else {
            v13 = struct32 {
                field_0: v11
                field_16: v12
            };
            v16 = alloc::boxed::Box<T>::new(&v13);
LABEL_4b93b9:
        }
        return v16;
    }
}
