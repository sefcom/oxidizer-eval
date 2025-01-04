fn uu_cut::list_to_ranges(a0: &Option<struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [bp-0x48]
    let v1: Option<struct24>;  // [sp-0x30], Other Possible Types: i192
    let v2: i8;  // [bp-0x18]
    let v4: i64;  // rax

    if !a3 {
        uucore::features::ranges::Range::from_list(a0, a1, a2);
        return struct8 {
            field_0: v4
        };
    }
    v1 = uucore::features::ranges::Range::from_list(a1, a2);
    match v1 {
        Some(_) => {
            *((a0 + 24) as &i8) = v2;
            *((a0 + 8) as &i128) = *((&v1 as &char + 8) as &i128);
            v4 = 1;
        },
        None => {
            v0 = v1;
            uu_cut::list_to_ranges::{{closure}}(a0 + 8, &v0);
            v4 = 0;
        },
    }
    return struct8 {
        field_0: v4
    };
}
