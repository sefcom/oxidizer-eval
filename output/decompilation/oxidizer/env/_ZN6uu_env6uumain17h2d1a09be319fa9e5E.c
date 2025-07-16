fn uu_env::uumain(a1: i64) -> : struct80 {
    let a0: u64;  // rdi
    let v0: struct80;  // [bp-0xa8]
    let v1: u16;  // [bp-0x98]
    let v2: u8;  // [bp-0x96]
    let v3: u64;  // [bp-0x68]
    let v4: i64;  // [bp-0x60]
    let v5: u8;  // [bp-0x48]
    let v6: u64;  // [bp-0x38]
    let v7: alloc::string::String;  // [bp-0x28]
    let v10: u64;  // rcx
    let v11: struct80;  // rax
    let v12: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v1 = 0;
    v2 = 2;
    v11 = uu_env::EnvAppData::run_env(a0, a1, v10) as u64;
    if !v11 {
        return uucore::mods::error::get_exit_code() as i32;
    }
    v0 = v11;
    v7 = format!("{}", &v0);
    memcpy(&v5, &v7, 16);
    v6 = v7.vec.len;
    if v7.vec.len == <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt {
        v3 = uucore::util_name();
        v4 = v12;
        eprint!("{}: ", &v3);
        eprintln!("{}", &v5 as u128);
    }
    if !*((v12 + 104) as &i64)(v0) as i8 {
        return *((v12 + 96) as &i64)(v0) as u32;
    }
    v3 = uucore::execution_phrase();
    v4 = v12;
    eprintln!("Try '{} --help' for more information.", &v3);
    return *((v12 + 96) as &i64)(v0) as u32;
}
