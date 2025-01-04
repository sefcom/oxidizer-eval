fn uu_tail::platform::unix::supports_pid_checks(a0: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax

    v0 = v2;
    v3 = kill(a0, 0);
    if v3 {
        v4 = uu_tail::platform::unix::get_errno();
        return v4 | -0x100 | v4 != 38;
    }
    return v3 | -0x100 | 1;
}
