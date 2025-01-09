fn uu_sync::fdatasync(a0: &struct24) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    uu_sync::platform::do_fdatasync(a0);
    return 0;
}
