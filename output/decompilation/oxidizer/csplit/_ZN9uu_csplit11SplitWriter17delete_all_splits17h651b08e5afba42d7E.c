fn uu_csplit::SplitWriter::delete_all_splits(a0: i64) -> long long {
    let v0: void*;  // [bp-0x50], Other Possible Types: u64
    let v1: u8;  // [bp-0x48]
    let v3: u64;  // r12
    let v4: u64;  // rbp
    let v5: u64;  // rsi
    let v6: u64;  // rbp
    let v7: core::fmt::rt::Argument;  // r13
    let v8: u64;  // rsi
    let v9: core::result::Result<(), std::io::error::Error>;  // rbp

    v0 = 0;
    if !*((a0 + 40) as &i64) {
        return 0;
    }
    do {
        v6 = v4;
        v7 = <usize as core::iter::range::Step>::forward_unchecked(v6, v5);
        uu_csplit::split_name::SplitName::get(&v1, *((a0 + 32) as &i64), v6);
        v9 = std::fs::remove_file(&v1, v8);
        if let Err(_) = v9 {
            v0 = v9;
            v3 = v9;
        }
        v4 = v7;
    } while (v4 < *((a0 + 40) as &i64));
    return v3;
}
