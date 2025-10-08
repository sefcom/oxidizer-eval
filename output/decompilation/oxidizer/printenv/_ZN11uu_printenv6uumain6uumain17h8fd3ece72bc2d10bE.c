fn uu_printenv::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: iNone;  // [bp-0x478], Other Possible Types: u128
    let v1: u64;  // [bp-0x468]
    let v2: Option<struct24>;  // [bp-0x458], Other Possible Types: u128
    let v3: u64;  // [bp-0x450]
    let v4: u64;  // [bp-0x448]
    let v5: u64;  // [bp-0x440]
    let v6: u128;  // [bp-0x438]
    let v7: void*;  // [bp-0x430]
    let v8: struct32;  // [bp-0x428]
    let v9: u128;  // [bp-0x408]
    let v10: struct16;  // [bp-0x3d0]
    let v11: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x3c0]
    let v12: u64;  // [bp-0x3b0]
    let v13: u64;  // [bp-0x398]
    let v14: std::env::Vars;  // [bp-0x390]
    let v15: struct32;  // [bp-0x390]
    let v16: struct56;  // [bp-0x370]
    let v17: struct64;  // [bp-0x338]
    let v18: struct712;  // [bp-0x2f8], Other Possible Types: u64
    let v19: struct56;  // [bp-0x2f8]
    let v20: u64;  // [bp-0x2f0]
    let v21: u64;  // [bp-0x2e8]
    let v24: u64;  // r13
    let v25: u8;  // r12b
    let v26: u64;  // rdx
    let v27: void*;  // rbx
    let v28: core::option::Option<(alloc::string::String, alloc::string::String)>;  // [bp-0x3c0]
    let v29: u64;  // [bp-0x3b8]
    let v30: iNone;  // [bp-0x3a8]

    v18 = uu_printenv::uu_app();
    v16 = clap_builder::builder::command::Command::get_matches_from(&v18, a0, a1);
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, _ZN11uu_printenv13ARG_VARIABLES17h20ba644c57b19753E.field_0, g_4d4470.field_0);
    v17 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_printenv13ARG_VARIABLES17h20ba644c57b19753E.field_0, g_4d4470.field_0, &v19);
    if v17.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v19, &v17);
        v9 = *((&v19.field_0 as &char + 8) as &i128);
        if v19.field_0 as i64 != 0x8000000000000000 {
            v6 = v9;
            v5 = v19.field_0;
        }
    }
    v10 = struct16 {
        field_0: (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN11uu_printenv8OPT_NULL17h717858802ed57abbE.field_0, g_4d4460.field_0) as u8 ? &g_416130 : &g_415f62)
        field_8: 1
    };
    if v7 {
        v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
        v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
        v24 = v2 as i64;
        if v24 != 0x8000000000000000 {
            do {
                if !<char as core::str::pattern::Pattern>::is_contained_in(v3, v4, v26) {
                    v18 = v24;
                    v20 = v3;
                    v21 = v4;
                    v11 = std::env::var(&v18, v26);
                    if let Ok(_) = v11 {
                        v1 = *((&v11 as &char + 24) as &i64);
                        v0 = *(&v29 as &i128) as u128;
                        print!("{}{}", &v0 as u8, &v10);
                    }
                }
                v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
                v24 = v2 as i64;
            } while (v24 != 0x8000000000000000);
        }
        if (v25 & 1) {
            v27 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        }
    } else {
        v14 = std::env::vars();
        v8 = v15;
        loop {
            v28 = <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v8);
            if let None = v28 {
                break;
            }
            v4 = v12;
            v2 = v28 as i128;
            v1 = v13;
            v0 = v30;
            print!("{}={}{}", &v2 as u8, &v0 as u8, &v10);
        }
    }
    return v27;
}
