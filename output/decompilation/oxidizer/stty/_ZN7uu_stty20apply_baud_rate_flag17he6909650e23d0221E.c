fn uu_stty::apply_baud_rate_flag(a0: i64, a1: i64, a2: i64) -> u8 {
    let v1: core::fmt::Arguments;  // rax

    if ... {
        return 2;
    }
    core::result::Result<T,E>::expect(nix::sys::termios::cfsetospeed(a0, *((v1 + 16) as &i32)), "Failed to set baud rate", "src/uu/stty/src/stty.rs");
    return 1;
}
