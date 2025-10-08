fn uu_cp::Attributes::union(a0: i64, a1: i64, a2: i64) -> char {
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [bp-0x34]
    let v2: u8;  // [bp-0x33]
    let v4: u64;  // rax
    let v5: u8;  // al
    let v6: u8;  // al
    let v7: u8;  // al
    let v9: u8;  // dl

    v0 = v4;
    v2 = core::cmp::Ord::max(*(a1 as &i8), *((a1 + 1) as &i8));
    v1 = core::cmp::Ord::max(*((a1 + 6) as &i8), *((a1 + 7) as &i8));
    v5 = core::cmp::Ord::max(*((a1 + 4) as &i8), *((a1 + 5) as &i8));
    v6 = core::cmp::Ord::max(*((a1 + 2) as &i8), *((a1 + 3) as &i8));
    v7 = core::cmp::Ord::max(*((a1 + 8) as &i8), *((a1 + 9) as &i8));
    return struct12 {
        field_0: v2 & 1
        field_1: v9
        field_2: v6 & 1
        field_3: v9
        field_4: v5 & 1
        field_5: v9
        field_6: v1 & 1
        field_7: v9
        field_8: v7 & 1
        field_9: v9
        field_10: core::cmp::Ord::max(*((a1 + 10) as &i8) as u8 as u64, *((a1 + 11) as &i8) as u8 as u64) as u8 & 1
        field_11: v9
    };
}
