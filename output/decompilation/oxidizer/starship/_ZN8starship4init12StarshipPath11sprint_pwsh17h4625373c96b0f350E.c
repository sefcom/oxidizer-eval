fn starship::init::StarshipPath::sprint_pwsh(a0: u32, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0x30]
    let v1: u32;  // [bp-0x28], Other Possible Types: unsigned long
    let v2: struct16;  // [bp-0x20], Other Possible Types: struct24

    v0 = starship::init::StarshipPath::str_path(a1, a2);
    if !v0.field_0 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v1
        };
    }
    v2 = alloc::str::<impl str>::replace(v0.field_0, v1, 39, "''");
    v2 = v2.field_0;
    return starship::init::StarshipPath::sprint_pwsh::{{closure}}(a0, &v2, a2) as u64;
}
