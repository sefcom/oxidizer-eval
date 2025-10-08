fn uu_tee::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x3a8]
    let v1: u64;  // [bp-0x3a0]
    let v2: iNone;  // [bp-0x398]
    let v3: iNone;  // [bp-0x388]
    let v4: u64;  // [bp-0x378]
    let v5: struct16;  // [bp-0x370]
    let v6: u64;  // [bp-0x370]
    let v7: u64;  // [bp-0x368]
    let v8: iNone;  // [bp-0x360]
    let v9: iNone;  // [bp-0x350]
    let v10: u64;  // [bp-0x340]
    let v11: struct64;  // [bp-0x338]
    let v12: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: struct28, struct56, struct712
    let v14: u64;  // rdi
    let v15: u8;  // al
    let v16: u8;  // al
    let v17: u8;  // al
    let v18: void*;  // rax
    let v19: u8;  // r13b
    let v20: void*;  // r15
    let v21: u64;  // r12
    let v22: u64;  // rax
    let v23: void*;  // rcx
    let v24: void*;  // rdx
    let v25: u64;  // rsi
    let v26: u64;  // rax

    v12 = uu_tee::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1);
    v14 = v7;
    if (((0 ^ v5.field_0) & (0 ^ -(v6))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v4 = v10;
    v3 = v9;
    v2 = v8;
    v0 = v5.field_0;
    v1 = v7;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "append");
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "ignore-interrupts");
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "ignore-pipe-errors");
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, "output-error") {
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v0);
        v18 = clap_builder::parser::error::MatchesError::unwrap(&v12);
        v19 = 1;
        if v18 {
            v20 = v18[8] as i64;
            v21 = v18[16] as i64;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, "warn") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, "warn-nopipe") {
                v19 = 2;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, "exit") {
                    v19 = 3;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, "exit-nopipe") {
                        core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                    }
                }
            }
        }
    }
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0);
    v11 = clap_builder::parser::error::MatchesError::unwrap(&v12);
    if v11.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v12, &v11);
    }
    v12 = struct28 {
        field_0: v23
        field_8: v22
        field_16: v24
        field_24: v15
        field_25: v16
        field_26: v17
        field_27: v19
    };
    v26 = uu_tee::tee(&v12, v25, v24);
    return (!v26 ? 0 : uu_tee::uumain::uumain::{{closure}}(v26));
}
