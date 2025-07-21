fn uu_env::uumain(a1: i64) -> : struct80 {
    let a0: u64;  // rdi
    let v0: struct80;  // [bp-0xa8]
    let v1: struct4;  // [bp-0x98]
    let v2: u64;  // [bp-0x68]
    let v3: i64;  // [bp-0x60]
    let v4: u128;  // [bp-0x48]
    let v5: u64;  // [bp-0x38]
    let v6: alloc::string::String;  // [bp-0x28]
    let v9: u64;  // rcx
    let v10: struct80;  // rax
    let v11: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v1 = struct4 {
        field_0: 0
        field_2: 2
    };
    v10 = uu_env::EnvAppData::run_env(a0, a1, v9) as u64;
    if !v10 {
        return uucore::mods::error::get_exit_code() as i32;
    }
    v0 = v10;
    v6 = format!("{}", &v0);
    v4 = *(&v6.vec.buf.cap as &i128);
    v5 = v6.vec.len;
    if v6.vec.len == <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt {
        v2 = uucore::util_name();
        v3 = v11;
        eprint!("{}: ", &v2);
        eprintln!("{}", &v4);
    }
    if !*((v11 + 104) as &i64)(v0) as i8 {
        return *((v11 + 96) as &i64)(v0) as u32;
    }
    v2 = uucore::execution_phrase();
    v3 = v11;
    eprintln!("Try '{} --help' for more information.", &v2);
    return *((v11 + 96) as &i64)(v0) as u32;
}
