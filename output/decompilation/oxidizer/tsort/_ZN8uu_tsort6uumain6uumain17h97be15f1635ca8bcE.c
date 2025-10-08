fn uu_tsort::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: core::fmt::Arguments;  // [bp-0x3c0]
    let v1: struct16;  // [bp-0x3b8], Other Possible Types: alloc::string::String, u64
    let v2: struct16;  // [bp-0x3b8], Other Possible Types: struct56, u64
    let v3: u128;  // [bp-0x3b0]
    let v4: struct40;  // [bp-0x3a8], Other Possible Types: u64
    let v5: u64;  // [bp-0x3a0]
    let v6: u16;  // [bp-0x380]
    let v7: u8;  // [bp-0x378]
    let v8: u64;  // [bp-0x370]
    let v9: u64;  // [bp-0x368]
    let v10: struct24;  // [bp-0x360]
    let v11: struct56;  // [bp-0x348]
    let v12: u64;  // [bp-0x340]
    let v13: alloc::string::String;  // [bp-0x310]
    let v14: u64;  // [bp-0x300]
    let v15: void*;  // [bp-0x2f8], Other Possible Types: struct712, struct72
    let v16: Result<struct24, struct16>;  // [bp-0x2f8]
    let v17: Result<struct40, struct16>;  // [bp-0x2f8]
    let v18: u128;  // [bp-0x2f0]
    let v19: u64;  // [bp-0x2e8]
    let v20: u64;  // [bp-0x2e0]
    let v22: void*;  // r15
    let v23: u64;  // rbx
    let v24: u64;  // r14
    let v26: core::fmt::Arguments;  // rbx
    let v27: core::fmt::Arguments;  // rax
    let v28: core::fmt::rt::Argument;  // r15
    let v29: core::option::Option<&[usize]>;  // rax
    let v30: u64;  // rdx

    v15 = uu_tsort::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    }
    v11 = v2;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11);
    v22 = clap_builder::parser::error::MatchesError::unwrap(&v17);
    if !v22 {
        core::option::expect_failed("Value is required by clap"); /* do not return */
    }
    v23 = v22[8] as i64;
    v24 = v22[16] as i64;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v24, "-") {
        v16 = std::io::read_to_string(std::io::stdio::stdin());
        v26 = *((&v16 as &char + 8) as &i64);
        if let Ok(_) = v16 {
            goto LABEL_457b7c;
        }
        v27 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v16 as &char + 8) as &i64));
        goto LABEL_457b71;
    } else if std::path::Path::is_dir(v23, v24) {
        v1 = <alloc::string::String as core::clone::Clone>::clone(v22);
        v20 = v4;
        v18 = *(&v1.vec.buf.inner.cap as &i128);
        v15 = 0;
        v28 = alloc::boxed::Box<T>::new(&v15) as u64;
    } else {
        v16 = std::fs::read_to_string(v23, v24);
        v26 = *((&v16 as &char + 8) as &i64);
        match v16 {
            Err(_) => {
                v27 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v16 as &char + 8) as &i64));
LABEL_457b71:
                v28 = v27;
            },
            Ok(_) => {
LABEL_457b7c:
                v0 = v26;
                v1 = <alloc::string::String as core::clone::Clone>::clone(v22);
                v15 = uu_tsort::Graph::new(&v1);
                v4 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v26, v19);
                v2 = struct16 {
                    field_0: 0
                    field_8: v19
                };
                v6 = 1;
                core::iter::traits::iterator::Iterator::collect(&v7, &v2);
                v10 = struct24 {
                    field_0: v8
                    field_8: v9
                    field_16: 2
                };
                loop {
                    v29 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v10) as u64;
                    if let None = v29 {
                        uu_tsort::Graph::run_tsort(&v15);
                        return 0;
                    }
                    if v30 != 2 {
                        break;
                    }
                    uu_tsort::Graph::add_edge(&v15, *(v29 as &i64), *((v29 + 8) as &i64), *((v29 + 16) as &i64), *((v29 + 24) as &i64));
                }
                v13 = <alloc::string::String as core::clone::Clone>::clone(v22);
                v5 = v14;
                v3 = *(&v13.vec.buf.inner.cap as &i128) as u128;
                v1 = 1;
                v28 = alloc::boxed::Box<T>::new(&v1) as u64;
            },
        }
    }
    return v28;
}
