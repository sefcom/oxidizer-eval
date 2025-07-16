fn uu_cp::Attributes::union(a1: &struct16) -> : struct12 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [bp-0x33]
    let v3: u64;  // rax
    let v4: u8;  // al
    let v5: u8;  // al
    let v6: u8;  // al
    let v7: u8;  // al
    let v8: u8;  // al
    let v9: i64;  // rdi
    let v10: u8;  // dl

    v0 = v3;
    v4 = core::cmp::max_by(*(a0 as &i8), *((a0 + 1) as &i8), 1, 1) as i32;
    v1 = core::cmp::max_by(*((a0 + 6) as &i8), *((a0 + 7) as &i8), 0, 0) as i8;
    v5 = core::cmp::max_by(*((a0 + 4) as &i8), *((a0 + 5) as &i8), 1, 1) as i32;
    v6 = core::cmp::max_by(*((a0 + 2) as &i8), *((a0 + 3) as &i8), 1, 1) as i32;
    v7 = core::cmp::max_by(*((a0 + 8) as &i8), *((a0 + 9) as &i8), 0, 0) as i32;
    v8 = core::cmp::max_by(*((a0 + 10) as &i8), *((a0 + 11) as &i8), 1, 1) as i8;
    *(v9 as &u8) = v4 & 1;
    *((v9 + 1) as &u8) = v10;
    *((v9 + 2) as &u8) = v6 & 1;
    *((v9 + 3) as &u8) = v10;
    *((v9 + 4) as &u8) = v5 & 1;
    *((v9 + 5) as &u8) = v10;
    *((v9 + 6) as &u8) = v1 & 1;
    *((v9 + 7) as &u8) = v10;
    *((v9 + 8) as &u8) = v7 & 1;
    *((v9 + 9) as &u8) = v10;
    *((v9 + 10) as &u8) = v8 & 1;
    *((v9 + 11) as &u8) = v10;
    return;
}
