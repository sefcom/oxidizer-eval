fn uu_uniq::Uniq::cmp_keys(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u192;  // [bp-0x18]

    v0 = struct24 {
        field_0: a0
        field_8: a3
        field_16: a4
    };
    return uu_uniq::Uniq::cmp_key(a0, a1, a2, &v0);
}
