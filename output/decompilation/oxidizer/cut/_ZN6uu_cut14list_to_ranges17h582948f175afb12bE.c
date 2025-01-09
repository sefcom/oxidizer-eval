fn uu_cut::list_to_ranges(a0: &Option<struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x48]
    let v1: struct8;  // [sp-0x30], Other Possible Types: i64
    let v2: i8;  // [bp-0x28]
    let v3: i8;  // [bp-0x18]

    if !a3 {
        uucore::features::ranges::Range::from_list(a0, a1, a2);
    } else {
        v1 = uucore::features::ranges::Range::from_list(a1, a2);
        if v1 {
            *((a0 + 24) as &i8) = v3;
            *((a0 + 8) as &i8) = v2;
        } else {
            v0 = v2;
            uu_cut::list_to_ranges::{{closure}}(a0 + 8, &v0);
        }
        return struct8 {
            field_0: v5
        };
    }
}
