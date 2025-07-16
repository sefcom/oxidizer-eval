fn uu_dd::numbers::SuffixType::base_and_suffix(a0: i64, a1: u8, a2: u64, a3: u64) -> : struct32 {
    let v0: u64;  // [bp-0xe0]
    let v1: u64;  // [bp-0xd8]
    let v3: u64;  // [bp-0xc8]
    let v4: u8;  // [bp-0xc0]
    let v6: u64;  // rdx
    let v7: Result<struct216, struct40>;  // r8
    let v8: u64;  // r10
    let v9: std::sys::os_str::bytes::Buf;  // r9
    let v10: u64;  // r11
    let v11: struct16;  // r13
    let v12: u64;  // rbp
    let v13: core::result::Result<u64, std::io::error::Error>;  // rax
    let v14: core::option::Option<&[usize]>;  // r12
    let v15: void*;  // rdi
    let v16: u64;  // cc_ndep
    let v17: Result<struct4, struct8>;  // ecx
    let v18: Result<struct24, struct24>;  // r12
    let v19: u64;  // rdi

    if a1 {
        memcpy(&v4, "B", 144);
    } else {
        memcpy(&v4, "B", 144);
    }
    if !(amd64g_calculate_condition(2, 16, -1 + (amd64g_calculate_rflags_c(4, v14, -1, v16) & 1), a3 ^ (v14 - 1 < a2) as u8 as u64, (v14 - 1 < a2) as u8 as u64) as char) {
        return struct32 {
            field_0: v18
            field_8: v19
            field_16: *(&(&v4)[16 * v17] as &i128)
        };
    }
    v3 = v6;
    v17 = 1;
    v18 = v14;
    v19 = v15;
    if amd64g_calculate_condition(2, 16, -((v13 < v18) as u8 as u64), a3 ^ (v13 - v18 < a2) as u8 as u64, (v13 - v18 < a2) as u8 as u64) as char {
        v17 = 2;
        v18 = v13;
        v19 = v15;
        if amd64g_calculate_condition(2, 16, -((v12 < v18) as u8 as u64), a3 ^ (v12 - v18 < a2) as u8 as u64, (v12 - v18 < a2) as u8 as u64) as char {
            v17 = 3;
            v18 = v12;
            v19 = v15;
            if amd64g_calculate_condition(2, 16, -((v11 < v18) as u8 as u64), a3 ^ (v11 - v18 < a2) as u8 as u64, (v11 - v18 < a2) as u8 as u64) as char {
                v17 = 4;
                v18 = v11;
                v19 = v15;
                if amd64g_calculate_condition(2, 16, -((v10 < v18) as u8 as u64), a3 ^ (v10 - v18 < a2) as u8 as u64, (v10 - v18 < a2) as u8 as u64) as char {
                    v17 = 5;
                    v18 = v10;
                    v19 = v15;
                    if amd64g_calculate_condition(2, 16, -((v9 < v18) as u8 as u64), a3 ^ (v9 - v18 < a2) as u8 as u64, (v9 - v18 < a2) as u8 as u64) as char {
                        v17 = 6;
                        v18 = v9;
                        v19 = v15;
                        if amd64g_calculate_condition(2, 16, v1 - 0 - (v8 < v18) as u8 as u64, a3 ^ (v8 - v18 < a2) as u8 as u64, (v8 - v18 < a2) as u8 as u64) as char {
                            v17 = 7;
                            v18 = v8;
                            v19 = v1;
                            if amd64g_calculate_condition(2, 16, v0 - v19 - (v7 < v18) as u8 as u64, a3 ^ (v7 - v18 < a2) as u8 as u64, (v7 - v18 < a2) as u8 as u64) as char {
                                v17 = 8;
                                v18 = v7;
                                v19 = v0;
                            }
                        }
                    }
                }
            }
        }
    }
    return struct32 {
        field_0: v18
        field_8: v19
        field_16: *(&(&v4)[16 * v17] as &i128)
    };
}
