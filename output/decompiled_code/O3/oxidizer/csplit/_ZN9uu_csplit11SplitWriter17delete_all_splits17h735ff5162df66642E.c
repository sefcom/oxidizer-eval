fn uu_csplit::SplitWriter::delete_all_splits(a0: &u64) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: struct24;  // [sp-0x48], Other Possible Types: i192
    let v3: i64;  // r15
    let v5: i64;  // r14
    let v6: i64;  // r12
    let v7: i64;  // r13
    let v9: i64;  // r13

    v0 = 0;
    v3 = *((a0 + 40) as &i64);
    if !v3 {
        return 0;
    }
    v5 = 0;
    v6 = 0;
    do {
        v1 = uu_csplit::split_name::SplitName::get(*((a0 + 32) as &i64), v5);
        v9 = std::sys::pal::unix::fs::unlink(*((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
        if v9 {
            v0 = v9;
        }
        v5 += 1;
    } while (v3 != v5);
    return v7;
}
