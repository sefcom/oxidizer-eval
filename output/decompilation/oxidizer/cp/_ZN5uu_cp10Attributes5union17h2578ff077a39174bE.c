fn uu_cp::Attributes::union(a1: i64, a2: i64) -> : struct12 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [bp-0x34]
    let v2: u8;  // [bp-0x33]
    let v4: u64;  // rax
    let v5: u8;  // al
    let v6: u8;  // al
    let v7: u8;  // al
    let v9: u8;  // dl

    v0 = v4;
    v2 = core::cmp::max_by(*(a1 as &i8), *((a1 + 1) as &i8), *(a2 as &i8), *((a2 + 1) as &i8)) as i8;
    v1 = core::cmp::max_by(*((a1 + 6) as &i8), *((a1 + 7) as &i8), *((a2 + 6) as &i8), *((a2 + 7) as &i8)) as i8;
    v5 = core::cmp::max_by(*((a1 + 4) as &i8), *((a1 + 5) as &i8), *((a2 + 4) as &i8), *((a2 + 5) as &i8)) as i32;
    v6 = core::cmp::max_by(*((a1 + 2) as &i8), *((a1 + 3) as &i8), *((a2 + 2) as &i8), *((a2 + 3) as &i8)) as i32;
    v7 = core::cmp::max_by(*((a1 + 8) as &i8), *((a1 + 9) as &i8), *((a2 + 8) as &i8), *((a2 + 9) as &i8)) as i32;
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
        field_10: core::cmp::max_by(*((a1 + 10) as &i8) as u8 as u64, *((a1 + 11) as &i8) as u8 as u64, *((a2 + 10) as &i8) as u8 as u64, *((a2 + 11) as &i8) as u8 as u64) as i8 & 1
        field_11: v9
    };
}
