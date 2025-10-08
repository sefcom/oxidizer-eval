fn just::evaluator::Evaluator::evaluate_parameters(a0: i64, a1: i64, a2: i128, a3: i64, a4: i256, a5: i64, a6: u64, a7: i64) -> int {
    let v0: alloc::string::String;  // [bp-0x178]
    let v1: u128;  // [bp-0x178]
    let v2: alloc::string::String;  // [bp-0x171], Other Possible Types: u128
    let v3: Option<struct25>;  // [bp-0x170]
    let v4: u128;  // [bp-0x169]
    let v5: Option<struct1>;  // [bp-0x168]
    let v6: u64;  // [bp-0x161]
    let v7: void*;  // [bp-0x158]
    let v8: struct16;  // [bp-0x150]
    let v9: struct16;  // [bp-0x150]
    let v10: struct16;  // [bp-0x150]
    let v11: struct104;  // [bp-0x150]
    let v12: struct112;  // [bp-0x148]
    let v13: struct44;  // [bp-0x140]
    let v14: struct32;  // [bp-0x138], Other Possible Types: alloc::string::String
    let v15: struct24;  // [bp-0x138]
    let v16: struct103;  // [bp-0x138]
    let v17: struct24;  // [bp-0x138]
    let v18: iNone;  // [bp-0x137]
    let v19: iNone;  // [bp-0x137]
    let v20: u128;  // [bp-0x131]
    let v21: u8;  // [bp-0x129]
    let v22: u8;  // [bp-0x129]
    let v23: struct25;  // [bp-0x128]
    let v24: u64;  // [bp-0x121]
    let v25: i8;  // [bp-0x120]
    let v26: struct24;  // [bp-0x118]
    let v27: u32;  // [bp-0xd8]
    let v28: u32;  // [bp-0xd8]
    let v29: alloc::string::String;  // [bp-0xc8]
    let v32: struct24;  // [bp-0xb0]
    let v33: struct24;  // [bp-0xa8]
    let v34: i64;  // [bp-0xa0]
    let v35: u128;  // [bp-0x98]
    let v36: u128;  // [bp-0x88]
    let v37: void*;  // [bp-0x78]
    let v38: struct712;  // [bp-0x70]
    let v39: struct20;  // [bp-0x60]
    let v40: struct8;  // [bp-0x58]
    let v41: struct16;  // [bp-0x50]
    let v42: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // r13
    let v43: struct32;  // rbx
    let v45: u64;  // rbp
    let v47: struct40;  // r14
    let v48: void*;  // r14
    let v49: u8;  // al
    let v54: u64;  // rax
    let v55: u64;  // rax
    let v56: &mut [u8];  // rcx
    let v57: iNone;  // xmm0
    let v58: iNone;  // xmm2
    let v59: iNone;  // xmm3
    let v60: struct32;  // xmm0
    let v61: struct25;  // xmm1
    let v62: struct24;  // xmm2
    let v63: void*;  // [bp-0x108]
    let v64: u64;  // [bp-0xf8]
    let v65: u64;  // [bp-0xe8]

    v42 = a3;
    v37 = 0;
    v35 = *(a1 as &i128);
    v36 = *((a1 + 16) as &i128);
    v41 = a2;
    v38 = 0;
    v39 = 0;
    v40 = a7;
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if a6 {
        v43 = a4;
        v33 = a6 * 208 + a5;
        loop {
            v34 = a5;
            if v43 {
                if *((a5 + 201) as &i8) == 1 {
                    v0 = <alloc::string::String as core::clone::Clone>::clone(v42);
                    v14 = <alloc::string::String as core::clone::Clone>::clone(&v0);
                    v8 = alloc::vec::Vec<T,A>::push(&v14, "src/evaluator.rs");
                } else {
                    v32 = v43;
                    do {
                        v14 = <alloc::string::String as core::clone::Clone>::clone(v48 + v42);
                        v9 = alloc::vec::Vec<T,A>::push(&v14, "src/evaluator.rs");
                    } while (v43 * 24 != v48);
                    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v0, v42, v32);
                    v15 = alloc::str::join_generic_copy(v3 as i64, *(&v5 as &i64), " ");
                }
            } else {
                if *(a5 as &i32) != 18 {
                    just::evaluator::Evaluator::evaluate_expression(&v16, &v35, a5);
                    v49 = v15.field_0;
                    if v49 != 56 {
                        v57 = *((&v16.field_0 as &char + 1) as &i128);
                        v58 = *((&v16.field_24 as &char + 8) as &i128);
                        v59 = *((&v16.field_40 as &char + 8) as &i128);
                        v4 = *(&v16.field_16 as &i128);
                        *(&v1 as void*) = v57;
                        *(&v7[96] as &i64) = *(&v16.field_96 as &i64);
                        *(&v7[80] as &i128) = *(&v65 as &i128);
                        *(&v7[64] as &i128) = *(&v64 as &i128);
                        v7[48] = v59;
                        v7[32] = v58;
                        *(&v7[16] as &i128) = *((&v1 as &char + 15) as &i128);
                        *(&v7[1] as &u128) = v1;
                        *(v7 as &u8) = v49;
                        return;
                    }
                    v6 = *(&v25 as &i64);
                    v2 = *((&v16.field_0 as &char + 8) as &i128);
                    v29 = v2;
                    v14 = <alloc::string::String as core::clone::Clone>::clone(&v29);
                    v10 = alloc::vec::Vec<T,A>::push(&v14, "src/evaluator.rs");
                } else if *((a5 + 201) as &i8) != 2 {
                    v17 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing parameter without default");
                    v54 = *(&v17.field_16 as &i64);
                    v20 = v17.field_0;
                    v24 = v54;
                    *(v7 as &i8) = 29;
                    v55 = *((&v20 as &char + 8) as &i64);
                    v56 = v24;
                    *(&v7[1] as &u128) = v17.field_0;
                    *(&v7[16] as &u64) = v55;
                    *(&v7[24] as &&mut [u8]) = v56;
                    return;
                }
            }
            v16 = struct103 {
                field_0: v45
                field_16: v47
                field_24: *((a5 + 128) as &i128)
                field_40: *((a5 + 144) as &i128)
                field_56: *((a5 + 160) as &i128)
                field_72: *((a5 + 176) as &i128)
                field_88: *((a5 + 192) as &i64)
                field_96: 0
                field_100: 0
                field_101: *((a5 + 200) as &i8)
                field_102: 0
            };
            just::scope::Scope::bind(&v38, &v16);
            a5 = v34;
            if a5 == v33 {
                v18 = v19;
                v21 = v22;
                v27 = v28;
                if a5 == v33 {
                    break;
                }
            } else {
                v18 = v19;
                v21 = v22;
                v27 = v28;
                if a5 == v33 {
                    break;
                }
            }
        }
    }
    v60 = *(&v38 as &i128);
    v61 = v39.field_0;
    v23 = v61;
    v14 = v60;
    v62 = *(&v10.field_0 as &i128);
    v26 = v62;
    v63 = 0;
    *(&v7[56] as &i64) = 0;
    *(&v7[40] as &struct24) = v62;
    *(&v7[24] as &struct25) = v61;
    *(&v7[8] as &struct32) = v60;
    *(v7 as &i8) = 56;
    return;
}
