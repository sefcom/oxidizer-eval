fn uu_sync::syncfs(a0: &struct24) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    uu_sync::platform::do_syncfs(a0);
    return 0;
}
