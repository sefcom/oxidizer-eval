fn uu_nohup::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct64;  // [bp-0x360], Other Possible Types: u64
    let v1: struct64;  // [bp-0x360]
    let v2: struct16;  // [bp-0x360]
    let v3: u32;  // [bp-0x358]
    let v4: u32;  // [bp-0x350]
    let v5: i8;  // [bp-0x34c]
    let v6: i8;  // [bp-0x33c]
    let v7: i8;  // [bp-0x32c]
    let v8: core::fmt::rt::Argument;  // [bp-0x320]
    let v9: u32;  // [bp-0x318]
    let v10: u32;  // [bp-0x310]
    let v11: iNone;  // [bp-0x30c]
    let v12: core::fmt::rt::Argument;  // [bp-0x2fc]
    let v13: core::fmt::Arguments;  // [bp-0x2ec]
    let v14: struct16;  // [bp-0x2e8], Other Possible Types: struct56, struct64, struct700
    let v15: i64;  // [bp-0x2e0]
    let v17: u64;  // rax

    v14 = uu_nohup::uu_app();
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    if (((0 ^ v2.field_0) & (0 ^ -(v0))) >> 63) as char {
        return alloc::boxed::Box<T>::new(v9);
    }
    v11 = *(&v5 as &i128);
    v12 = *(&v6 as &i128);
    v13 = *(&v7 as &i32);
    v8 = v2.field_0;
    v9 = v3;
    v10 = v4;
    v17 = uu_nohup::replace_fds();
    if v17 {
        return v17;
    }
    signal(1, 1);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8);
    v0 = clap_builder::parser::error::MatchesError::unwrap(&v14);
    core::option::unwrap(v0);
    v14 = v1;
    core::iter::traits::iterator::Iterator::collect(&v0, &v14);
    core::iter::traits::iterator::Iterator::collect(&v14, v3, v0.field_16 as i64 * 16 + v3);
    v14 = alloc::vec::Vec<T,A>::push();
    uucore::mods::error::set_exit_code(execvp(*(v15 as &i64), v15) == 2 | 126);
    return 0;
}
