fn uu_dd::parseargs::parse_bytes_no_x(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: Option<struct8>;  // [sp-0xa0], Other Possible Types: i64
    let v1: i8;  // [bp-0x98]
    let v2: i8;  // [bp-0x90]
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x60]
    let v5: i16;  // [sp-0x50]
    let v6: i8;  // [sp-0x4e]
    let v7: struct24;  // [sp-0x48], Other Possible Types: i192
    let v9: i64;  // r15
    let v10: i64;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rcx
    let v13: i64;  // rax
    let v14: i64;  // rbx
    let v15: i64;  // rdx
    let v16: i64;  // rdx
    let v17: i64;  // rcx
    let v18: i64;  // rcx
    let v19: i64;  // r14
    let v20: i64;  // rcx
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i64;  // cc_ndep
    let v24: i64;  // rax
    let v25: i64;  // cc_ndep
    let v26: i64;  // rax
    let v27: i64;  // cc_ndep

    v5 = 257;
    v6 = 0;
    v3 = 0;
    v4 = 0;
    v9 = core::str::<impl str>::rfind(a3, a4);
    v10 = core::str::<impl str>::rfind(a3, a4);
    if !core::str::<impl str>::find(a3, a4) {
        if !v9 {
            if !v10 {
                v0 = uucore::parser::parse_size::Parser::parse_u64(&v3, a3, a4);
                v20 = v0;
                v19 = a0;
                if v20 < 2 {
                    v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                    *((v19 + 24) as &i64) = *((&v7 as &char + 16) as &i64);
                    *((v19 + 8) as &i192) = v7;
                    *(v19 as &i64) = 13;
                    return v13;
                }
                v24 = -1;
                if v20 != 2 {
                    v24 = *((&v0 as &char + 8) as &i64);
                }
                v26 = v24;
                v22 = v26 * 1;
                if amd64g_calculate_condition(0, 48, v26, 1, v27) as char {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(v19 + 8, a1, a2);
                    *(v19 as &i64) = 8;
                    return 8;
                }
            } else {
                v0 = uu_dd::parseargs::parse_bytes_only(a3, a4, v16);
                v18 = v0;
                v13 = v1;
                v19 = a0;
                match v0 {
                    None => {
                        *((v19 + 16) as &i8) = v2;
                        *(v19 as &i64) = v18;
                        *((v19 + 8) as &i64) = v13;
                        return v13;
                    },
                    Some(_) => {
                        v22 = (v13 * 0x200) as i64;
                        if amd64g_calculate_condition(0, 48, v13, 0x200, v23) as char {
                            <T as alloc::slice::hack::ConvertVec>::to_vec(v19 + 8, a1, a2);
                            *(v19 as &i64) = 8;
                            return 8;
                        }
                    },
                }
            }
            *((v19 + 8) as &i64) = v22;
            *(v19 as &i64) = 14;
            return 8;
        }
        if v10 {
            v14 = a0;
            v13 = <T as alloc::slice::hack::ConvertVec>::to_vec(v14 + 8, a1, a2);
            *(v14 as &i64) = 7;
            return v13;
        }
        v0 = uu_dd::parseargs::parse_bytes_only(a3, a4, v15);
        v12 = v0;
        v13 = v1;
        match v0 {
            None => {
                vvar_327{reg 32} = a0;
                *((v21 + 16) as &i8) = v2;
                *(v21 as &i64) = v12;
                *((v21 + 8) as &i64) = v13;
                return v13;
            },
            Some(_) => {
                v17 = 2;
            },
        }
    } else {
        if !(!v9) || !(!v10) {
            <T as alloc::slice::hack::ConvertVec>::to_vec(v14 + 8, a1, a2);
            return struct8 {
                field_0: 7
            };
        }
        v0 = uu_dd::parseargs::parse_bytes_only(a3, a4, v11);
        v12 = v0;
        v13 = v1;
        match v0 {
            None => {
                v21 = a0;
                *((v21 + 16) as &i8) = v2;
                *(v21 as &i64) = v12;
                *((v21 + 8) as &i64) = v13;
                return v13;
            },
            Some(_) => {
                v17 = 1;
            },
        }
    }
    v19 = a0;
    v22 = v13 * v17;
    if amd64g_calculate_condition(0, 48, v13, v17, v25) as char {
        <T as alloc::slice::hack::ConvertVec>::to_vec(v19 + 8, a1, a2);
        *(v19 as &i64) = 8;
        return 8;
    }
    *((v19 + 8) as &i64) = v22;
    *(v19 as &i64) = 14;
    return 8;
}
