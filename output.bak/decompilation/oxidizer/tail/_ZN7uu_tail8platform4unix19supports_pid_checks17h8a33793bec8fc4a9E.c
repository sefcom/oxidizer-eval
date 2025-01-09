fn uu_tail::platform::unix::supports_pid_checks(a0: u32) -> u8 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    if kill(a0, 0) {
        return uu_tail::platform::unix::get_errno() as i32 != 38;
    }
    return 1;
}
