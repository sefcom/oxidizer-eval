fn uu_chroot::set_supplemental_gids(a0: u64, a1: u64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    if !setgroups(a1, a0) {
        return 0;
    }
    return *(__errno_location() as &i32) * 0x100000000 | 2;
}
