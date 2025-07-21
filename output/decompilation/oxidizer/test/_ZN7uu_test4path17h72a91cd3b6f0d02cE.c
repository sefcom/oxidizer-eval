fn uu_test::path(a0: i64, a1: i64, a2: i32) -> long long {
    let v0: u64;  // [bp-0x188]
    let v33: i64;  // rdi

    v33 = &v0;
    if a2 == 8 {
        std::fs::symlink_metadata(v33, a0, a1);
    } else {
        std::fs::metadata(v33, a0, a1);
    }
    return 0;
}
