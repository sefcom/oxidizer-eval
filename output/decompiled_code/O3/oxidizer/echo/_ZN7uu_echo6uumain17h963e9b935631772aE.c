fn uu_echo::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x3d8]
    let v1: i64;  // [sp-0x3d0]
    let v2: i64;  // [sp-0x3c8]
    let v3: i64;  // [sp-0x3c0]
    let v4: i128;  // [bp-0x3b8], Other Possible Types: struct32
    let v5: i64;  // [sp-0x3b0]
    let v6: i128;  // [bp-0x3a8]
    let v7: i64;  // [sp-0x3a0]
    let v8: i64;  // [bp-0x398]
    let v9: i64;  // [sp-0x388]
    let v10: i192;  // [bp-0x378], Other Possible Types: struct24
    let v11: i64;  // [sp-0x370]
    let v12: i128;  // [sp-0x368]
    let v13: i64;  // [sp-0x358]
    let v14: i448;  // [sp-0x350], Other Possible Types: struct56
    let v15: i64;  // [sp-0x348]
    let v16: i64;  // [sp-0x318]
    let v17: i64;  // [sp-0x310]
    let v18: i192;  // [sp-0x308], Other Possible Types: String
    let v19: i64;  // [sp-0x2f0], Other Possible Types: Enum, struct712
    let v20: i128;  // [bp-0x2e8]
    let v21: i64;  // [sp-0x2e0]
    let v22: i64;  // [bp-0x2d8]
    let v23: i64;  // [sp-0x2d0]
    let v24: i128;  // [sp-0x2c8]
    let v25: i64;  // [sp-0x2b8]
    let v28: i32;  // eax
    let v29: i128;  // xmm0
    let v30: i64;  // rax
    let v31: i64;  // rdx
    let v32: i64;  // rcx
    let v33: i64;  // rsi
    let v34: i64;  // rdi
    let v35: i64;  // r15
    let v36: i64;  // rdx
    let v37: i32;  // eax
    let v38: i64;  // r15
    let v39: i64;  // rax

    v19 = uu_echo::uu_app();
    v14 = clap_builder::builder::command::Command::get_matches_from(&v19, a0, a1);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, &g_40f6e1, 23) as i32;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, &g_40f6f8, 6);
    v16 = &g_40f6f8;
    v17 = 6;
    if v19 {
        v13 = *((&v19 as &char + 40) as &i64);
        v12 = *((&v19 as &char + 24) as &i128);
        v10 = *((&v19 as &char + 8) as &i128);
        v0 = &v16;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v10;
        v3 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v4 = "Mismatch between definition and access of `";
        v5 = 2;
        v8 = 0;
        v6 = &v0;
        v7 = 2;
        v4 = core::panicking::panic_fmt();
    }
    v4 = *((&v19 as &char + 16) as &i128);
    v6 = *((&v19 as &char + 32) as &i128);
    v8 = *((&v19 as &char + 48) as &i128);
    v9 = *((&v19 as &char + 64) as &i64);
    if v19 {
        v25 = v9;
        v29 = v4;
        v24 = v8;
        v22 = v6;
        v20 = v29;
        v19 = v20;
        v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19);
    } else {
        v30 = __rust_alloc(24, 8);
        *(v30 as &i64) = 0;
        *((v30 + 8) as &i64) = 1;
        *((v30 + 16) as &i64) = 0;
        v10 = alloc::slice::hack::into_vec(v30, 1);
    }
    v31 = v11;
    v32 = *((&v10 as &char + 16) as &i64);
    v33 = v28;
    v34 = uu_echo::execute(clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, &g_40f6d7, 10) as i32, v28, v11, *((&v10 as &char + 16) as &i64));
    v35 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v34);
    if !v35 {
        v37 = uucore::mods::error::get_exit_code() as i32;
        return v37;
    }
    v0 = v35;
    v1 = v36;
    v4 = &v0;
    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v19 = &g_40f510;
    v20 = 1;
    v23 = 0;
    v21 = &v4;
    v22 = 1;
    v18 = alloc::fmt::format::format_inner(&v19);
    v4 = v18;
    v6 = *((&v18 as &char + 16) as &i64);
    if v6 {
        v14 = uucore::util_name();
        v15 = v36;
        v10 = &v14;
        v11 = <&T as core::fmt::Display>::fmt;
        v19 = &g_4d5690;
        v20 = 2;
        v23 = 0;
        v21 = &v10;
        v22 = 1;
        std::io::stdio::_eprint(&v19);
        v14 = &v4;
        v15 = <alloc::string::String as core::fmt::Display>::fmt;
        v19 = &g_4d56b0;
        v20 = 2;
        v23 = 0;
        v21 = &v14;
        v22 = 1;
        std::io::stdio::_eprint(&v19);
    }
    if *((v1 + 104) as &i64)() {
        v14 = uucore::execution_phrase();
        v15 = v36;
        v10 = &v14;
        v11 = <&T as core::fmt::Display>::fmt;
        v19 = "Try '";
        v20 = 2;
        v23 = 0;
        v21 = &v10;
        v22 = 1;
        std::io::stdio::_eprint(&v19);
    }
    v37 = *((v1 + 96) as &i64)();
    v38 = v1;
    if *(v38 as &i64) {
        v39();
    }
    if *((v38 + 8) as &i64) {
        return v37;
    }
    return v37;
}
