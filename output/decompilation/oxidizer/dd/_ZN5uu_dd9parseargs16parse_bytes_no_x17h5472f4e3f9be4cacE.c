fn uu_dd::parseargs::parse_bytes_no_x(a0: i64, a1: i64, a2: i32, a3: i64, a4: i64) {
    let v0: void*;  // [bp-0xa8]
    let v1: struct32;  // [bp-0xa0], Other Possible Types: struct16
    let v2: u64;  // [bp-0xa0]
    let v3: i64;  // [bp-0x98]
    let v4: u128;  // [bp-0x90]
    let v5: u64;  // [bp-0x78]
    let v6: void*;  // [bp-0x70]
    let v7: void*;  // [bp-0x60]
    let v8: u16;  // [bp-0x50]
    let v9: u8;  // [bp-0x4e]
    let v10: struct24;  // [bp-0x48]
    let v12: u8;  // al
    let v13: u8;  // r15b
    let v14: u8;  // al
    let v15: u64;  // rdx
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v18: u64;  // cc_ndep
    let v20: u64;  // rdx
    let v21: u64;  // cc_ndep
    let v22: u64;  // rdx
    let v23: u64;  // cc_ndep
    let v25: u64;  // rbx
    let v27: u64;  // cc_ndep
    let v30: u64;  // rax
    let v33: void*;  // r14

    v5 = a2;
    v8 = 257;
    v9 = 0;
    v6 = 0;
    v7 = 0;
    v12 = core::str::<impl str>::find(a3, a4);
    v13 = core::str::<impl str>::rfind(a3, a4, 119);
    v14 = core::str::<impl str>::rfind(a3, a4, 98);
    if (v12 & 1) {
        if (v13 & 1) {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v0 + 8, a1, v5);
            *(v0 as &i64) = 7;
            return;
        } else if !(v14 & 1) {
            v1 = uu_dd::parseargs::parse_bytes_only(a3, a4, v15);
            v16 = v3;
            if v1.field_0 != 14 {
                *(&v0[16] as &u128) = v4;
                *(v0 as &u64) = v2;
                *(&v0[8] as &unsigned long) = v16;
                return;
            }
            v33 = a0;
            if _ccall(0, 48, v16, 1, v18) as char {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v33 + 8, a1, v5);
                *(v33 as &u64) = v30;
                return;
            }
        } else {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v0 + 8, a1, v5);
            *(v0 as &i64) = 7;
            return;
        }
    } else {
        if (v13 & 1) {
            if (v14 & 1) {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v0 + 8, a1, v5);
                *(v0 as &i64) = 7;
                return;
            }
            v1 = uu_dd::parseargs::parse_bytes_only(a3, a4, v20);
            v16 = v3;
            if v1.field_0 != 14 {
                *(&v0[16] as &u128) = v4;
                *(v0 as &u64) = v2;
                *(&v0[8] as &unsigned long) = v16;
                return;
            }
            v33 = a0;
            if _ccall(0, 48, v16, 2, v21) as char {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v33 + 8, a1, v5);
                *(v33 as &u64) = v30;
                return;
            }
        } else {
            if (v14 & 1) {
                v1 = uu_dd::parseargs::parse_bytes_only(a3, a4, v22);
                v16 = v3;
                if v1.field_0 != 14 {
                    *(&v0[16] as &u128) = v4;
                    *(v0 as &u64) = v2;
                    *(&v0[8] as &unsigned long) = v16;
                    return;
                }
                v33 = a0;
                if _ccall(0, 48, v16, 0x200, v23) as char {
                    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v33 + 8, a1, v5);
                    *(v33 as &u64) = v30;
                    return;
                }
            } else {
                v1 = uucore::features::parser::parse_size::Parser::parse_u64(&v6, a3, a4);
                if v1.field_0 as i64 == 2 {
                    v33 = a0;
                } else if v1.field_0 as i32 == 4 {
                    v33 = v0;
                } else {
                    v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, v5);
                    *(&v0[24] as &u64) = v10.field_16;
                    *(&v0[8] as &i128) = *(&v10.field_0 as &i128);
                    *(v0 as &i64) = 13;
                    return;
                }
                if _ccall(0, 48, v25, 1, v27) as char {
                    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v33 + 8, a1, v5);
                    *(v33 as &u64) = v30;
                    return;
                }
            }
        }
    }
    *(&v33[8] as &unsigned long) = v17;
    *(v33 as &u64) = v30;
    return;
}
