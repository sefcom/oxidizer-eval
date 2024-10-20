fn uu_cut::list_to_ranges(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u8;  // [bp-0x50]
    let v1: u8;  // [bp-0x48]
    let v2: u8;  // [bp-0x40]
    let v3: u8;  // [bp-0x38]
    let v4: u8;  // [bp-0x30]
    let v5: i8;  // [bp-0x20]

    if !a3 {
        uucore::features::ranges::Range::from_list(a0, a1, a2, a3, a4, a5);
        return a0;
    }
    uucore::features::ranges::Range::from_list(&v0, a1, a2, a3, a4, a5);
    if *(&v0 as &i64) {
        *((&a0->field_8 as &char + 8) as &i64) = *(&v3 as &i64);
        *(&(&a0->field_0)[1] as &i128) = *(&v1 as &i128);
        a0->field_0 = 1;
        return a0;
    }
    uucore::features::ranges::complement(&v4, *(&v2 as &i64), *(&v3 as &i64));
    *((&a0->field_8 as &char + 8) as &i8) = v5;
    *(&(&a0->field_0)[1] as &i128) = *(&v4 as &i128);
    a0->field_0 = 0;
    return a0;
}
