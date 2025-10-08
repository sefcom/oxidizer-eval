fn uu_dd::numbers::SuffixType::base_and_suffix(a0: i64, a1: i8, a2: i64, a3: i64) -> double {
    let v1: core::fmt::Arguments;  // [sp-0xd0], Other Possible Types: u64
    let v2: u64;  // [bp-0xc8]
    let v3: u8;  // [bp-0xc0]
    let v4: u8;  // [bp-0xb0]
    let v5: u8;  // [bp-0xa0]
    let v6: u8;  // [bp-0x90]
    let v7: u8;  // [bp-0x80]
    let v8: u8;  // [bp-0x70]
    let v9: u8;  // [bp-0x60]
    let v10: u8;  // [bp-0x50]
    let v11: u8;  // [bp-0x40]
    let v14: u64;  // rdi
    let v15: u64;  // r11
    let v16: u64;  // r9
    let v17: u64;  // r10
    let v18: u64;  // r13
    let v19: u64;  // rbp
    let v20: u64;  // rsi
    let v21: u64;  // rcx
    let v22: void*;  // r8
    let v23: alloc::string::String;  // rdx
    let v24: u64;  // rdi

    if (a1 & 1) {
        memcpy(&v3, "B", 144);
    } else {
        memcpy(&v3, "B", 144);
    }
    if !(_ccall(2, 16, -1 + ((v21 + -1 <= v21 ? 1 : 0) & 1), a3 ^ (v21 - 1 < a2) as u8 as u64, (v21 - 1 < a2) as u8 as u64) as char) {
        return struct32 {
            field_0: v24
            field_8: v1
            field_16: *(v23 as &i128)
        };
    }
    if !(_ccall(2, 16, -((v20 < v21) as u8 as u64), a3 ^ (v20 - v21 < a2) as u8 as u64, (v20 - v21 < a2) as u8 as u64) as char) {
        v23 = &v4;
        v24 = v21;
        v1 = v22;
    } else if !(_ccall(2, 16, -((v19 < v20) as u8 as u64), a3 ^ (v19 - v20 < a2) as u8 as u64, (v19 - v20 < a2) as u8 as u64) as char) {
        v23 = &v5;
        v24 = v20;
        v1 = v22;
    } else if !(_ccall(2, 16, -((v18 < v19) as u8 as u64), a3 ^ (v18 - v19 < a2) as u8 as u64, (v18 - v19 < a2) as u8 as u64) as char) {
        v23 = &v6;
        v24 = v19;
        v1 = v22;
    } else if !(_ccall(2, 16, -((v17 < v18) as u8 as u64), a3 ^ (v17 - v18 < a2) as u8 as u64, (v17 - v18 < a2) as u8 as u64) as char) {
        v23 = &v7;
        v24 = v18;
        v1 = v22;
    } else if !(_ccall(2, 16, -((v16 < v17) as u8 as u64), a3 ^ (v16 - v17 < a2) as u8 as u64, (v16 - v17 < a2) as u8 as u64) as char) {
        v23 = &v8;
        v24 = v17;
        v1 = v22;
    } else if !(_ccall(2, 16, v2 - 0 - (v15 < v16) as u8 as u64, a3 ^ (v15 - v16 < a2) as u8 as u64, (v15 - v16 < a2) as u8 as u64) as char) {
        v23 = &v9;
        v24 = v16;
        v1 = v22;
    } else if _ccall(2, 16, v1 - v2 - (v14 < v15) as u8 as u64, a3 ^ (v14 - v15 < a2) as u8 as u64, (v14 - v15 < a2) as u8 as u64) as char {
        v23 = &v11;
        v24 = v14;
    } else {
        v23 = &v10;
        v24 = v15;
        v1 = v2;
    }
    return struct32 {
        field_0: v24
        field_8: v1
        field_16: *(v23 as &i128)
    };
}
