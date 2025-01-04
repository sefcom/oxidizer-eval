fn uu_csplit::SplitWriter::delete_all_splits(a0: &u64) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: struct24;  // [sp-0x48], Other Possible Types: i192
    let v3: i64;  // r15
    let v6: i64;  // rbp
    let v7: i64;  // r12
    let v8: i64;  // rbp
    let v9: i64;  // r13
    let v10: i64;  // rsi
    let v11: i64;  // rdx
    let v12: i64;  // rbp

    v0 = 0;
    v3 = *((a0 + 40) as &i64);
    if !v3 {
        return 0;
    }
    v6 = 0;
    do {
        v8 = v6;
        v9 = <usize as core::iter::range::Step>::forward_unchecked(v8);
        v1 = uu_csplit::split_name::SplitName::get(*((a0 + 32) as &i64), v8);
        v12 = std::fs::remove_file(&v1, v10, v11);
        v7 = 0;
        if v12 {
            v0 = v12;
            v7 = v12;
        }
    } while ((v6 = v9, v9 < v3));
    return v7;
}
