fn uu_chroot::set_uid(a0: u32) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    if !setuid(a0) {
        return 0;
    }
    return *(__errno_location() as &i32) * 0x100000000 | 2;
}
