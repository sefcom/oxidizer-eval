fn uu_df::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: i64;  // [sp-0x68]
    let v2: i64;  // [sp-0x60]
    let v3: String;  // [sp-0x48]
    let v4: String;  // [sp-0x28]
    let v6: i64;  // rax
    let v7: i64;  // rdx

    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    v6 = uu_df::uumain::uumain(a0, a1);
    if !v6 {
        return uucore::mods::error::get_exit_code();
    }
    v0 = v6;
    v4 = format!("{}", &v0);
    v3 = v4;
    if v3 == "" {
        v2 = v7;
        show_error!("{}", &v3);
    }
    if !*((v7 + 104) as &i64)() {
        return *((v7 + 96) as &i64)();
    }
    v1 = uucore::execution_phrase();
    v2 = v7;
    eprintln!("Try '{} --help' for more information.", &v1);
}
