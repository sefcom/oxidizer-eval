fn uu_df::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0xa8]
    let v1: struct24;  // [bp-0x98], Other Possible Types: u64
    let v2: u64;  // [bp-0x90]
    let v3: i64;  // [bp-0x88]
    let v4: u64;  // [bp-0x80]
    let v5: void*;  // [bp-0x78]
    let v6: u64;  // [bp-0x68]
    let v7: i64;  // [bp-0x60]
    let v8: i64;  // [bp-0x48]
    let v9: u64;  // [bp-0x40]
    let v10: u64;  // [bp-0x38]
    let v11: u8;  // [bp-0x28]
    let v12: i8;  // [bp-0x18]
    let v15: u64;  // rax
    let v16: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v15 = uu_df::uumain::uumain(a0, a1);
    if !v15 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v15;
    v8 = &v0;
    v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = &g_40ba30;
    v2 = 1;
    v5 = 0;
    v3 = &v8;
    v4 = 1;
    v1 = core::option::Option<T>::map_or_else(v16);
    memcpy(&v8, &v11, 16);
    v10 = *(&v12 as &i64);
    if *(&v12 as &i64) == <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt {
        v6 = uucore::util_name();
        v7 = v16;
        eprint!("{}: ", &v6);
        eprintln!("{}", &v8);
    }
    if !*((v16 + 104) as &i64)(v0) as i8 {
        return *((v16 + 96) as &i64)(v0) as u32;
    }
    v6 = uucore::execution_phrase();
    v7 = v16;
    eprintln!("Try '{} --help' for more information.", &v6);
    return *((v16 + 96) as &i64)(v0) as u32;
}
