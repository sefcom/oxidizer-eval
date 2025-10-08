fn linera_summary::ci_runtime_comparison::CiRuntimeComparison::from_jobs(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0xa8]
    let v1: struct24;  // [bp-0x90]
    let v2: Result<struct24, struct16>;  // [bp-0x78]
    let v3: u64;  // [bp-0x68]
    let v4: Result<struct16, struct64>;  // [bp-0x60], Other Possible Types: u8
    let v5: struct24;  // [bp-0x58], Other Possible Types: u64
    let v6: i64;  // [bp-0x18]

    linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes(&v4, a1);
    if *(&v4 as &i32) == 1 {
        return struct16 {
            field_0: 1
            field_8: v5
        };
    }
    v0 = v5;
    linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes(&v4, a2);
    if *(&v4 as &i32) != 1 {
        v1 = v5;
        v4 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
        v6 = &v0;
        v2 = core::iter::traits::iterator::Iterator::collect(&v4);
        return struct32 {
            field_0: 0
            field_8: v2 as i128
            field_24: v3
        };
    }
    return struct16 {
        field_0: 1
        field_8: v5
    };
}
