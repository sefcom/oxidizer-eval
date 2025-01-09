fn uu_csplit::SplitWriter::delete_all_splits(a0: &u64) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: struct24;  // [sp-0x48], Other Possible Types: i192
    let v3: i64;  // r15
    let v5: i64;  // r12
    let v6: i64;  // rbp
    let v7: i64;  // rbp
    let v8: i64;  // r13
    let v10: i64;  // r12

    v0 = 0;
    v3 = *((a0 + 40) as &i64);
    if !v3 {
        return 0;
    }
    v5 = 0;
    v6 = 0;
    do {
        v7 = v6;
        v8 = <usize as core::iter::range::Step>::forward_unchecked(v7);
        v1 = uu_csplit::split_name::SplitName::get(*((a0 + 32) as &i64), v7);
        v10 = v5;
        if v0 {
            v0 = std::fs::remove_file(&v1);
            v10 = v0;
        }
    } while ((v5 = v10, v6 = v8, v8 < v3));
    return v5;
}
