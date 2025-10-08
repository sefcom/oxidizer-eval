fn uu_dirname::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x641]
    let v1: u64;  // [bp-0x640]
    let v2: struct16;  // [bp-0x638]
    let v3: u64;  // [bp-0x638]
    let v4: u64;  // [bp-0x630]
    let v5: iNone;  // [bp-0x628]
    let v6: iNone;  // [bp-0x618]
    let v7: u64;  // [bp-0x608]
    let v8: u64;  // [bp-0x600]
    let v9: u64;  // [bp-0x5f8]
    let v10: iNone;  // [bp-0x5f0]
    let v11: iNone;  // [sp-0x5e0]
    let v12: u64;  // [bp-0x5d0]
    let v13: struct28;  // [bp-0x5c8], Other Possible Types: struct56, struct64, struct712, u64
    let v14: u64;  // [bp-0x5c8]
    let v15: u64;  // [bp-0x5c8]
    let v16: u64;  // [bp-0x5b0]
    let v17: u64;  // [bp-0x5b0]
    let v18: core::option::Option<std::path::Component>;  // [bp-0x2f8], Other Possible Types: struct24, struct64
    let v19: struct712;  // [bp-0x2f8]
    let v20: iNone;  // [bp-0x2e8]
    let v21: iNone;  // [bp-0x2e8]
    let v22: u64;  // [bp-0x2c8]
    let v25: u64;  // rdx
    let v26: u128;  // xmm0
    let v27: u64;  // rcx
    let v28: u64;  // rax
    let v29: void*;  // r14
    let v30: core::fmt::Arguments;  // r12
    let v31: u64;  // rdx

    v13 = uu_dirname::uu_app();
    v19 = clap_builder::builder::command::Command::after_help(&v13);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    if (((0 ^ v2.field_0) & (0 ^ -(v3))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
    }
    v12 = v7;
    v11 = v6;
    v10 = v5;
    v8 = v2.field_0;
    v9 = v4;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "zero") ? 0 : 10);
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8);
    v18 = clap_builder::parser::error::MatchesError::unwrap(&v13);
    if v18.field_0 as i64 {
        v25 = *((&v18.field_48 as &char + 8) as &i64);
        v21 = v20;
    } else {
        v26 = 0;
        v27 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE;
        v28 = core::ops::function::FnOnce::call_once;
        v25 = 0;
        v20 = v11;
    }
    v13 = struct64 {
        field_0: v28
        field_8: v27
        field_16: v20
        field_32: v26
        field_48: v22
        field_56: v25
    };
    core::iter::traits::iterator::Iterator::collect(&v2, &v13);
    if !v5 as i64 {
        v18 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
        v13 = struct28 {
            field_0: *(&v18.field_0 as &i128)
            field_16: v18.field_16
            field_24: 1
        };
        return alloc::boxed::Box<T>::new(&v13) as u64;
    }
    v1 = v5 as i64 * 24;
    v29 = 0;
    do {
        v13 = v14;
        v30 = std::path::Path::parent(*((8 + v4 + v29 as &u8) as &i64), *((16 + v4 + v29 as &u8) as &i64));
        if v30 {
            std::path::Path::components(&v13, v30, v31);
            v18 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v13);
            if &v18 == "\n" {
                print!(".");
            } else {
                core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(v30, v31));
            }
        } else if std::path::Path::is_absolute(*((8 + v4 + v29 as &u8) as &i64), *((16 + v4 + v29 as &u8) as &i64)) || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((8 + v4 + v29 as &u8) as &i64), *((16 + v4 + v29 as &u8) as &i64), "/") {
            print!("/");
        } else {
            print!(".");
        }
        print!("{}", &v0);
        v29 += 24;
        v14 = v15;
        v16 = v17;
    } while (v1 != v29);
    return 0;
}
