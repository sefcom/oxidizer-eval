fn uu_join::parse_field_number_option(a1: i64, a2: i32) -> : struct24 {
    let a0: u64;  // rsi
    let v0: struct8;  // [bp-0x18]
    let v1: i8;  // [bp-0x10]
    let v3: i64;  // rdi
    let v4: u64;  // rcx
    let v5: i64;  // rdi
    let v6: u64;  // rax
    let v7: i64;  // rdi

    if !a0 {
        *(v3 as &i128) = 0;
        return;
    }
    uu_join::parse_field_number(a0, a1, a2);
    if !v0 {
        v6 = *(&v1 as &i64);
        *((v7 + 8) as &i64) = 1;
        *((v7 + 16) as &u64) = v6;
        *(v7 as &i64) = 0;
        return;
    }
    v4 = *(&v1 as &i64);
    *((v5 + 8) as &struct8) = v0;
    *((v5 + 16) as &u64) = v4;
    *(v5 as &i64) = 1;
    return;
}
