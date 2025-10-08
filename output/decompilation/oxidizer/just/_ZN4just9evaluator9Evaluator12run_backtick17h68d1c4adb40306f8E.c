fn just::evaluator::Evaluator::run_backtick(a0: i64, a1: void*, a2: u64, a3: u64, a4: i64) -> long long {
    let v0: struct24;  // [bp-0x80]
    let v1: u64;  // [bp-0x80]
    let v2: i8;  // [bp-0x67]
    let v3: struct72;  // [bp-0x60]
    let v4: u128;  // [bp-0x50]
    let v5: u128;  // [bp-0x40]
    let v6: u128;  // [bp-0x30]
    let v7: u64;  // [bp-0x28]
    let v8: u64;  // [bp-0x20]
    let v10: struct72;  // xmm0
    let v11: u128;  // xmm1
    let v12: u128;  // xmm2
    let v13: u8;  // al
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: u8;  // al
    let v17: u64;  // rax
    let v18: u8;  // al

    v0 = just::evaluator::Evaluator::run_command(a1, a2, a3, 8, 0);
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        v15 = *((&v0.field_8 as &char + 8) as &i64);
        v16 = 56;
        v17 = v15 & -0x100 | 56;
        return struct32 {
            field_0: v18
            padding_1: <UNKNOWN>
            field_8: *(&v0.field_0 as &i128)
            field_24: v15
        };
    }
    *((a0 + 80) as &u128) = v0.field_8;
    v8 = *((a4 + 64) as &i64);
    v10 = *(a4 as &i128);
    v11 = *((a4 + 16) as &i128);
    v12 = *((a4 + 32) as &i128);
    v6 = *((a4 + 48) as &i128);
    v5 = v12;
    v4 = v11;
    v3 = v10;
    *((a0 + 64) as &u64) = v7;
    *((a0 + 72) as &u64) = v8;
    *((a0 + 49) as &i128) = *((&v5 as &char + 9) as &i128);
    *((a0 + 33) as &i128) = *((&v4 as &char + 9) as &i128);
    *((a0 + 17) as &i128) = *((&v3.field_8 as &char + 1) as &i128);
    *((a0 + 1) as &i128) = *(&v2 as &i128);
    v13 = 3;
    v14 = v8 & -0x100 | 3;
}
