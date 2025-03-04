fn uu_test::path(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct176, struct8>;  // [sp-0x188]
    let v1: Result<struct176, struct8>;  // [sp-0xd8]

    if a2 as u8 != 8 {
        v0 = std::fs::metadata(a0, a1);
        if v0 as i32 == 2 {
            return 0;
        }
    } else {
        v0 = std::fs::symlink_metadata(a0, a1);
        if v0 as i32 == 2 {
            return 0;
        }
    }
    v1 = v0;
    goto *((4309848 + a2 as u64 * 4) as &i32) + 4309848;
}
