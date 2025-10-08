fn uu_cut::list_to_ranges(a1: i64, a2: i64, a3: i32) -> Option<struct32> {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: i8;  // [bp-0x18]
    let v4: iNone;  // xmm0

    if !a3 {
        uucore::features::ranges::Range::from_list(a0, a1, a2);
        return;
    }
    uucore::features::ranges::Range::from_list(&v0, a1, a2);
    if !(v0 & 1) {
        uu_cut::list_to_ranges::{{closure}}(a0 + 8, &v1);
        return struct8 {
            field_0: 0
        };
    }
    v4 = *(&v0 as &i128);
    return Some(struct32 {
        field_0: v4
        field_16: *(&v2 as &i128)
    });
}
