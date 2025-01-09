fn uu_dd::numbers::SuffixType::base_and_suffix(a0: &struct32, a1: u64, a2: u64, a3: u64) -> int {
    let v0: u64;  // [sp-0xe0]
    let v1: u64;  // [sp-0xd8]
    let v2: void*;  // [sp-0xd0], Other Possible Types: u64
    let v3: u64;  // [sp-0xc8]
    let v4: u8;  // [bp-0xc0]
    let v6: u64;  // rdx
    let v7: u64;  // r8
    let v8: u64;  // r10
    let v9: u64;  // r9
    let v10: u64;  // r11
    let v11: u64;  // r13
    let v12: u64;  // rbp
    let v13: u64;  // rax
    let v14: u64;  // r12
    let v17: void*;  // rdi

    if !a1 {
        memcpy(&v4, "B", 144);
        v6 = 0x4000000;
        v0 = 0x10000;
        v1 = 64;
        v9 = 0x1000000000000000;
        v10 = 0x4000000000000;
        v11 = 0x10000000000;
        v12 = 0x40000000;
        v13 = 0x100000;
        v14 = 0x400;
        v8 = 0;
        v7 = 0;
        v2 = 0;
    } else {
        memcpy(&v4, "B", 144);
        v6 = 54210108;
        v2 = 0x9fd0803ce8000000;
        v0 = 54210;
        v7 = 0x1bcecceda1000000;
        v1 = 54;
        v8 = 0x35c9adc5dea00000;
        v9 = 0xde0b6b3a7640000;
        v10 = 0x38d7ea4c68000;
        v11 = 0xe8d4a51000;
        v12 = 0x3b9aca00;
        v13 = 1000000;
        v14 = 1000;
    }
    if amd64g_calculate_condition(2, 16, -1 + ((v14 + -1 <= v14 ? 1 : 0) & 1), a3 ^ (v14 - 1 < a2) as u8 as u64, (v14 - 1 < a2) as u8 as u64) as char {
        v3 = v6;
        if amd64g_calculate_condition(2, 16, -((v13 < v14) as u8 as u64), a3 ^ (v13 - v14 < a2) as u8 as u64, (v13 - v14 < a2) as u8 as u64) as char && amd64g_calculate_condition(2, 16, -((v12 < v13) as u8 as u64), a3 ^ (v12 - v13 < a2) as u8 as u64, (v12 - v13 < a2) as u8 as u64) as char && amd64g_calculate_condition(2, 16, -((v11 < v12) as u8 as u64), a3 ^ (v11 - v12 < a2) as u8 as u64, (v11 - v12 < a2) as u8 as u64) as char && amd64g_calculate_condition(2, 16, -((v10 < v11) as u8 as u64), a3 ^ (v10 - v11 < a2) as u8 as u64, (v10 - v11 < a2) as u8 as u64) as char && amd64g_calculate_condition(2, 16, -((v9 < v10) as u8 as u64), a3 ^ (v9 - v10 < a2) as u8 as u64, (v9 - v10 < a2) as u8 as u64) as char && amd64g_calculate_condition(2, 16, v1 - 0 - (v8 < v9) as u8 as u64, a3 ^ (v8 - v9 < a2) as u8 as u64, (v8 - v9 < a2) as u8 as u64) as char && amd64g_calculate_condition(2, 16, v0 - v1 - (v7 < v8) as u8 as u64, a3 ^ (v7 - v8 < a2) as u8 as u64, (v7 - v8 < a2) as u8 as u64) as char {
            v17 = v0;
        }
    }
    return struct32 {
        field_0: v18
        field_8: v17
        field_16: v20
    };
}
