fn just::error::Error::context(a0: void*, a1: i64) -> long long {
    let v2: core::option::Option<&str>;  // rax
    let v4: &mut [u8];  // rax
    let v5: u128;  // xmm0
    let v6: iNone;  // xmm1
    let v7: std::env::ArgsOs;  // xmm2
    let v8: struct72;  // xmm3
    let v9: u128;  // xmm3
    let v10: u128;  // xmm2
    let v11: u128;  // xmm1
    let v12: u128;  // xmm0
    let v14: iNone;  // xmm0
    let v15: iNone;  // xmm1
    let v16: iNone;  // xmm2
    let v17: iNone;  // xmm3

    v2 = *(a1 as &i8);
    match (v2) {
        0 | 3 | 25 | 33 | 34 => {
            v4 = *((a1 + 72) as &i64);
            v5 = *((a1 + 8) as &i128);
            v6 = *((a1 + 24) as &i128);
            v7 = *((a1 + 40) as &i128);
            v8 = *((a1 + 56) as &i128);
            return struct72 {
                field_0: v12
                field_16: v11
                field_32: v10
                field_48: v9
                field_64: v4
            };
        }
        12 => {
            *(&a0[64] as &i64) = *((a1 + 80) as &i64);
            v14 = *((a1 + 16) as &i128);
            v15 = *((a1 + 32) as &i128);
            v16 = *((a1 + 48) as &i128);
            v17 = *((a1 + 64) as &i128);
        }
        _ => {
            *(&a0[64] as &i8) = 37;
            return v2;
        }
    }
}
