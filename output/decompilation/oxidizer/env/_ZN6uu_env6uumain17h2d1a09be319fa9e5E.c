fn uu_env::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: i16;  // [sp-0x98]
    let v2: i8;  // [sp-0x96]
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: String;  // [sp-0x48]
    let v6: String;  // [sp-0x28]
    let v8: i64;  // rax
    let v9: i32;  // ebx
    let v10: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v1 = 0;
    v2 = 2;
    v8 = uu_env::EnvAppData::run_env(&v1, a0, a1);
    if !v8 {
        v9 = uucore::mods::error::get_exit_code() as i32;
        return v9 as u64;
    }
    v0 = v8;
    v6 = format!("{}", &v0);
    v5 = v6;
    if v5 == "" {
        v4 = v10;
        show_error!("{}", &v5);
    }
    if !*((v10 + 104) as &i64)() {
        return v9 as u64;
    }
    v3 = uucore::execution_phrase();
    v4 = v10;
    eprintln!("Try '{} --help' for more information.", &v3);
}
