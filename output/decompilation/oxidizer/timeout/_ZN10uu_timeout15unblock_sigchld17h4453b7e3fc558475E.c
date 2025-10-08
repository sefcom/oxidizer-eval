fn uu_timeout::unblock_sigchld(a0: i64, a1: i64, a2: i64, a3: i64) -> void {
    let v0: struct16;  // [bp-0x18]

    v0 = nix::sys::signal::signal(0x11, 0, a3);
    core::result::Result<T,E>::unwrap(&v0);
    return;
}
