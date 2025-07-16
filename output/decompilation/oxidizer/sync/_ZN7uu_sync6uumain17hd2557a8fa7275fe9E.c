fn uu_sync::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0xa8]
    let v1: u64;  // [bp-0x68]
    let v2: i64;  // [bp-0x60]
    let v3: u8;  // [bp-0x48]
    let v4: u64;  // [bp-0x38]
    let v5: alloc::string::String;  // [bp-0x28]
    let v8: u64;  // rax
    let v9: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v8 = uu_sync::uumain::uumain(a0, a1);
    if !v8 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v8;
    v5 = format!("{}", &v0);
    memcpy(&v3, &v5, 16);
    v4 = v5.vec.len;
    if v5.vec.len == <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt {
        v1 = uucore::util_name();
        v2 = v9;
        eprint!("{}: ", &v1);
        eprintln!("{}", &v3 as u128);
    }
    if !*((v9 + 104) as &i64)(v0) as i8 {
        return *((v9 + 96) as &i64)(v0) as u32;
    }
    v1 = uucore::execution_phrase();
    v2 = v9;
    eprintln!("Try '{} --help' for more information.", &v1);
    return *((v9 + 96) as &i64)(v0) as u32;
}
