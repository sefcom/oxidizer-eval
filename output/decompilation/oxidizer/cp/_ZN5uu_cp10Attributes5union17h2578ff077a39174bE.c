fn uu_cp::Attributes::union(a0: &struct12, a1: &u64, a2: &u64) -> u8 {
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [sp-0x34]
    let v2: u8;  // [sp-0x33]
    let v4: u64;  // rax

    v0 = v4;
    v2 = core::cmp::max_by(*(a1 as &i8), *((a1 as &char + 1) as &i8), *(a2 as &i8), *((a2 as &char + 1) as &i8)) as i8;
    v1 = core::cmp::max_by(*((a1 as &char + 6) as &i8), *((a1 as &char + 7) as &i8), *((a2 as &char + 6) as &i8), *((a2 as &char + 7) as &i8)) as i8;
    return struct12 {
        field_0: v2 & 1
        field_1: v5
        field_2: core::cmp::max_by(*((a1 as &char + 2) as &i8) as u8 as u64, *((a1 as &char + 3) as &i8) as u8 as u64, *((a2 as &char + 2) as &i8) as u8 as u64, *((a2 as &char + 3) as &i8) as u8 as u64) as i32 as i8 & 1
        field_3: v5
        field_4: core::cmp::max_by(*((a1 as &char + 4) as &i8) as u8 as u64, *((a1 as &char + 5) as &i8) as u8 as u64, *((a2 as &char + 4) as &i8) as u8 as u64, *((a2 as &char + 5) as &i8) as u8 as u64) as i32 as i8 & 1
        field_5: v5
        field_6: v1 & 1
        field_7: v5
        field_8: core::cmp::max_by(a1[1] as i8 as u8 as u64, *((&a1[1] as &char + 1) as &i8) as u8 as u64, a2[1] as i8 as u8 as u64, *((&a2[1] as &char + 1) as &i8) as u8 as u64) as i32 as i8 & 1
        field_9: v5
        field_10: core::cmp::max_by(*((&a1[1] as &char + 2) as &i8) as u8 as u64, *((&a1[1] as &char + 3) as &i8) as u8 as u64, *((&a2[1] as &char + 2) as &i8) as u8 as u64, *((&a2[1] as &char + 3) as &i8) as u8 as u64) as i8 & 1
        field_11: v5
    };
}
