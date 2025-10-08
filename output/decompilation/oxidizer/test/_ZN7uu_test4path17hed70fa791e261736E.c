fn uu_test::path(a0: u64, a1: u64, a2: u32) -> long long {
    let v0: u8;  // [bp-0x170]
    let v1: u8;  // [bp-0xc0]
    let v3: i64;  // rdi

    v3 = &v0;
    if a2 == 8 {
        std::fs::symlink_metadata(v3, a0, a1);
        if *(&v0 as &i32) == 2 {
            return 0;
        }
    } else {
        std::fs::metadata(v3, a0, a1);
        if *(&v0 as &i32) == 2 {
            return 0;
        }
    }
    memcpy(&v1, &v0, 176);
}
