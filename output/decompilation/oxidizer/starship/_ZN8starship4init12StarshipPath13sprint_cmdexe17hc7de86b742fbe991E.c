fn starship::init::StarshipPath::sprint_cmdexe(a0: u32, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0x68]
    let v1: struct24;  // [bp-0x60], Other Possible Types: unsigned long
    let v2: u64;  // [bp-0x58]
    let v3: i64;  // [bp-0x50]
    let v4: i64;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v6: Result<struct24, struct24>;  // [bp-0x38]
    let v7: struct24;  // [bp-0x30]
    let v8: Result<struct72, struct24>;  // [bp-0x28]
    let v9: struct168;  // [bp-0x20]
    let v10: struct16;  // [bp-0x18]

    v0 = starship::init::StarshipPath::str_path(a1, a2);
    if !v0.field_0 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v1
        };
    }
    v2 = v0.field_0;
    v3 = v1;
    v4 = &v2;
    v5 = <&T as core::fmt::Display>::fmt;
    v6 = "\"";
    v7 = 2;
    v10 = 0;
    v8 = &v4;
    v9 = 1;
    return core::option::Option<T>::map_or_else(a0, 0, a2, &v6);
}
