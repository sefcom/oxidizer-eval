fn uu_uniq::uumain(a1: i64) -> : struct56 {
    let a0: u64;  // rdi
    let v0: struct56;  // [bp-0xa8]
    let v1: struct24;  // [bp-0x98], Other Possible Types: u64
    let v2: u64;  // [bp-0x90]
    let v3: i64;  // [bp-0x88]
    let v4: u64;  // [bp-0x80]
    let v5: void*;  // [bp-0x78]
    let v6: u64;  // [bp-0x68]
    let v7: i64;  // [bp-0x60]
    let v8: u64;  // [bp-0x48]
    let v9: i64;  // [bp-0x48]
    let v10: u64;  // [bp-0x40]
    let v11: u64;  // [bp-0x38]
    let v12: u128;  // [bp-0x28]
    let v13: i8;  // [bp-0x18]
    let v16: struct56;  // rax
    let v17: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v16 = uu_uniq::uumain::uumain(a0, a1) as u64;
    if !v16 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v16;
    v9 = &v0;
    v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = &g_416610;
    v2 = 1;
    v5 = 0;
    v3 = &v9;
    v4 = 1;
    v1 = core::option::Option<T>::map_or_else(v17);
    v8 = v12;
    v11 = *(&v13 as &i64);
    if *(&v13 as &i64) == <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt {
        v6 = uucore::util_name();
        v7 = v17;
        eprint!("{}: ", &v6);
        eprintln!("{}", &v9);
    }
    if !*((v17 + 104) as &i64)(v0) as i8 {
        return *((v17 + 96) as &i64)(v0) as u32;
    }
    v6 = uucore::execution_phrase();
    v7 = v17;
    eprintln!("Try '{} --help' for more information.", &v6);
    return *((v17 + 96) as &i64)(v0) as u32;
}
