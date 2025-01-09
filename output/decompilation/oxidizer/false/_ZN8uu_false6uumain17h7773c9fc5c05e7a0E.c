fn uu_false::uumain(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    core::result::Result<T,E>::expect(uucore::disable_rust_signal_handlers() as i32);
    uu_false::uumain::uumain(a0, a1);
    return uucore::mods::error::get_exit_code();
}
