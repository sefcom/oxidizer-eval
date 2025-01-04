fn uu_test::path() -> u32 {
    let v0: i1408;  // [sp-0x188], Other Possible Types: Result<struct176, struct16>
    let v1: i1408;  // [bp-0xd8]
    let v3: i32;  // edx
    let v4: i64;  // rdi
    let v5: i64;  // rsi
    let v6: i64;  // rdi
    let v7: i64;  // rsi

    if v3 != 8 {
        v0 = std::fs::metadata(v6, v7);
        if v0 != 2 {
            v1 = v0;
            goto *((4309848 + v3 * 4) as &i32) + 4309848;
        }
    } else {
        v0 = std::fs::symlink_metadata(v4, v5);
        if v0 != 2 {
            v1 = v0;
            goto *((4309848 + v3 * 4) as &i32) + 4309848;
        }
    }
    return;
}
