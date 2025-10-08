fn bat::assets::build_assets::acknowledgements::license_contains_marker(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct16;  // [bp-0x40]
    let v1: struct24;  // [bp-0x30]

    v1 = bat::assets::build_assets::acknowledgements::normalize_license_text(a0, a1);
    v0 = struct16 {
        field_0: a2
        field_8: a3 * 16 + a2
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0, &v1);
}
