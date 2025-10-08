fn uu_csplit::SplitWriter::delete_all_splits(a0: i64) -> u64 {
    let v0: void*;  // [bp-0x58], Other Possible Types: core::fmt::Arguments
    let v1: struct24;  // [bp-0x48]
    let v3: u64;  // r13
    let v4: void*;  // r14
    let v6: core::fmt::rt::Argument;  // rbp

    v0 = 0;
    if !*((a0 + 40) as &i64) {
        return 0;
    }
    loop {
        v1 = uu_csplit::split_name::SplitName::get(*((a0 + 32) as &i64), v4);
        v6 = std::fs::remove_file(&v1);
        if !v6 {
            v4 += 1;
            if v3 == v4 {
                return v6;
            }
        } else {
            v0 = v6;
            v4 += 1;
            if v3 == v4 {
                return v6;
            }
        }
    }
}
