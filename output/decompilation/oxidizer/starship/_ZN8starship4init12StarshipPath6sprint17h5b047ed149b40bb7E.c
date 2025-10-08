fn starship::init::StarshipPath::sprint(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0x50]
    let v1: struct32;  // [bp-0x48], Other Possible Types: unsigned long
    let v2: struct24;  // [bp-0x40]
    let v3: void*;  // [bp-0x38]
    let v4: u32;  // [bp-0x30]
    let v5: struct24;  // [bp-0x28]

    v0 = starship::init::StarshipPath::str_path(a1, a2);
    if !v0.field_0 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v1
        };
    }
    v2 = shell_words::quote(v0.field_0, v1);
    if v2.field_0 as i64 != 0x8000000000000000 {
        return v5;
    }
    v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v3, v4);
    return v5;
}
