fn uu_expr::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct40;  // [bp-0x3c0], Other Possible Types: u64
    let v1: u64;  // [bp-0x3b8]
    let v2: u8;  // [bp-0x398]
    let v3: i64;  // [bp-0x390]
    let v4: u64;  // [bp-0x388]
    let v5: struct24;  // [bp-0x380]
    let v6: u64;  // [bp-0x370]
    let v7: u8;  // [bp-0x368]
    let v8: struct32;  // [bp-0x360]
    let v9: struct24;  // [bp-0x340]
    let v10: iNone;  // [bp-0x328]
    let v11: iNone;  // [bp-0x318]
    let v12: struct32;  // [bp-0x308]
    let v13: core::iter::adapters::skip::Skip<core::iter::adapters::zip::Zip<core::slice::iter::Iter<u16>, core::slice::iter::IterMut<u32>>>;  // [bp-0x2e8], Other Possible Types: struct32, struct712
    let v14: struct40;  // [bp-0x2e8]
    let v16: i64;  // r12
    let v17: u64;  // r15
    let v18: u64;  // rbx
    let v19: u64;  // r14
    let v20: u64;  // rax
    let v21: u64;  // rdx
    let v22: core::fmt::Arguments;  // rbx

    v13 = core::iter::traits::iterator::Iterator::skip(a0, a1);
    core::iter::traits::iterator::Iterator::collect(&v2, &v13);
    v16 = v3;
    v17 = v4;
    if v17 && v17 == 1 {
        v18 = *((v16 + 8) as &i64);
        v19 = *((v16 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "--help") {
            v13 = uu_expr::uu_app();
            v20 = clap_builder::builder::command::Command::print_help(&v13);
        } else {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "--version") {
                goto LABEL_49c67a;
            }
            v0 = uucore::util_name();
            v1 = v21;
            println!("{} (uutils coreutils) 0.0.30", &v0);
        }
    } else {
LABEL_49c67a:
        v9 = struct24 {
            field_0: v16
            field_8: v17
            field_16: 0
        };
        v14 = uu_expr::syntax_tree::Parser<S>::parse(&v9);
        v10 = *(&v14.field_8 as &i128);
        v11 = *((&v14.field_16 as &char + 8) as &i128);
        if v14.field_0 == 9223372036854775813 {
            v22 = alloc::boxed::Box<T>::new(&v10) as u64;
        } else {
            v0 = struct40 {
                field_0: v14.field_0
                field_8: v10
                field_24: v11
            };
            uu_expr::syntax_tree::AstNode::eval(&v7, &v0);
            v12 = v8;
            if *(&v7 as &i32) == 1 {
                v22 = alloc::boxed::Box<T>::new(&v12) as u64;
            } else {
                v5 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v12);
                println!("{}", &v5);
                v13 = struct32 {
                    field_0: 0x8000000000000000
                    field_8: *(&v5.field_0 as &i128)
                    field_24: v6
                };
                if !uu_expr::syntax_tree::is_truthy(&v13) {
                    v22 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                }
            }
        }
    }
    return v22;
}
