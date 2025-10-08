fn uu_sync::sync() -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    uu_sync::platform::do_sync();
    return 0;
}
