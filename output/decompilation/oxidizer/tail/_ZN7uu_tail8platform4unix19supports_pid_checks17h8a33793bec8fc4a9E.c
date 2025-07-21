fn uu_tail::platform::unix::supports_pid_checks(a0: i32) -> char {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    if !kill(a0, 0) {
        return 1;
    }
    return uu_tail::platform::unix::get_errno() as i32 != 38;
}
