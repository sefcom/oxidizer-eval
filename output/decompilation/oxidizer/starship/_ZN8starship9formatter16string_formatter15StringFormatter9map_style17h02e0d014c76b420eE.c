fn starship::formatter::string_formatter::StringFormatter::map_style(a0: i64, a1: i64, a2: i128) -> long long {
    let v0: struct16;  // [bp-0x50]
    let v1: struct24;  // [bp-0x48]
    let v2: Result<struct24, struct24>;  // [bp-0x28]
    let v3: iNone;  // [bp-0x28]
    let v5: struct16;  // rax
    let v6: u128;  // xmm0
    let v7: iNone;  // xmm1
    let v8: iNone;  // xmm2

    v0 = a2;
    v2 = rayon::collections::btree_map::<impl rayon::iter::IntoParallelIterator for &mut alloc::collections::btree::map::BTreeMap<K,V>>::into_par_iter(a1 + 48);
    v1 = v3;
    rayon::iter::ParallelIterator::for_each(&v1, &v0);
    v5 = *((a1 + 64) as &i64);
    v6 = *(a1 as &i128);
    v7 = *((a1 + 16) as &i128);
    v8 = *((a1 + 32) as &i128);
    return struct72 {
        field_0: v6
        field_16: v7
        field_32: v8
        field_48: *((a1 + 48) as &i128)
        field_64: v5
    };
}
