fn starship::formatter::string_formatter::StringFormatter::map_variables_to_segments(a0: i64, a1: i64, a2: i256, a3: u64) -> long long {
    let v0: struct19;  // [bp-0x58]
    let v1: u64;  // [bp-0x50]
    let v2: struct24;  // [bp-0x48]
    let v3: Result<struct24, struct24>;  // [bp-0x28]
    let v4: u192;  // [bp-0x28]
    let v6: u64;  // rax
    let v7: u128;  // xmm0
    let v8: struct56;  // xmm1
    let v9: struct56;  // xmm2

    v0 = a2;
    v1 = a3;
    v3 = rayon::collections::btree_map::<impl rayon::iter::IntoParallelIterator for &mut alloc::collections::btree::map::BTreeMap<K,V>>::into_par_iter(a1 + 24);
    v2 = v4;
    rayon::iter::ParallelIterator::for_each(&v2, &v0);
    v6 = *((a1 + 64) as &i64);
    v7 = *(a1 as &i128);
    v8 = *((a1 + 16) as &i128);
    v9 = *((a1 + 32) as &i128);
    return struct72 {
        field_0: v7
        field_16: v8
        field_32: v9
        field_48: *((a1 + 48) as &i128)
        field_64: v6
    };
}
