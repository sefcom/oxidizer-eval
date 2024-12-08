fn uu_false::uumain(a0: u64, a1: u64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // rcx
    let v5: u64;  // r8
    let v6: u64;  // r9

    v0 = v2;
    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    uu_false::uumain::uumain(a0, a1, v3, v4, v5, v6);
    return uucore::mods::error::get_exit_code();
}
