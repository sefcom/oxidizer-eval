fn uu_numfmt::format::transform_from(a1: i64, a2: i64, a3: i32, a4: i32) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v2: u8;  // [bp-0x28]
    let v3: u8;  // [bp-0x27]
    let v4: u32;  // [bp-0x26]
    let v5: i8;  // [bp-0x22]
    let v7: u8;  // bpl
    let v8: core::option::Option<u32>;  // rax
    let v9: struct16;  // rax
    let v10: u256;  // ymm1
    let v11: u256;  // ymm1
    let v12: u64;  // rax
    let v13: u64;  // xmm0lq

    v7 = a4;
    uu_numfmt::format::parse_suffix(a1, a2, a3);
    v8 = v3;
    if v0 != 0x8000000000000000 {
        return struct32 {
            field_0: v0
            field_8: v1
            field_16: v2
            field_17: v8 as u8
            field_18: <UNKNOWN>
            field_22: <UNKNOWN>
        };
    }
    v9 = uu_numfmt::format::remove_suffix(v2, v8 & 255, v7, a4) as u64;
    if v0 != 0x8000000000000000 {
        v12 = *(&v2 as &i64);
        return Ok(struct24 {
            field_0: *(&v0 as &i128)
            field_16: v12
        });
    }
    v11 = (((v10 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | a3) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp InterleaveLOV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp InterleaveLOV - 0x45300000000000004330000000000000) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v1;
    if v7 == 5 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v13
        };
    }
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
        v9 = ceil(v11 & 9223372036854775807);
    } else {
        v9 = ceil(v11);
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v13
    };
}
