fn compat_core::linux::search::default(a0: &u64, a1: u32, a2: u32, a3: u32, a4: &u64) -> u64 {
    let v0: iNone;  // [bp-0x118], Other Possible Types: struct24, unsigned long
    let v1: i64;  // [sp-0x110]
    let v2: i64;  // [bp-0x108]
    let v3: iNone;  // [bp-0x108]
    let v4: i64;  // [sp-0xf8]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0], Other Possible Types: struct16
    let v7: iNone;  // [bp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: i64;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc0]
    let v11: i64;  // [sp-0xb8]
    let v12: i64;  // [sp-0xb0]
    let v13: i64;  // [sp-0xa8]
    let v14: i64;  // [sp-0x98], Other Possible Types: struct24
    let v15: iNone;  // [sp-0x90]
    let v16: struct33;  // [sp-0x80]
    let v17: iNone;  // [sp-0x58]
    let v18: struct24;  // [sp-0x48]
    let v24: i64;  // rbp
    let v25: iNone;  // xmm0
    let v26: i64;  // rax
    let v27: iNone;  // xmm0
    let v28: iNone;  // ymm0
    let v29: iNone;  // ymm0
    let v30: i64;  // 4105
    let v31: i64;  // rax
    let v32: i64;  // r12
    let v33: i64;  // rbp
    let v34: i64;  // r15
    let v37: i64;  // rbx
    let v38: i64;  // rbx
    let v39: iNone;  // xmm0
    let v40: i64;  // rbx
    let v41: i64;  // r15
    let v42: i64;  // r13
    let v43: i64;  // r13
    let v44: i64;  // cc_ndep
    let v45: iNone;  // ymm1
    let v47: iNone;  // xmm0
    let v48: iNone;  // xmm0
    let v49: i64;  // rcx
    let v50: i64;  // 4099
    let v51: iNone;  // xmm0
    let v52: iNone;  // xmm1
    let v53: i64;  // 4104
    let v54: i64;  // 4098
    let v56: i64;  // rax
    let v57: i64;  // 4099

    v6 = 8;
    *(&v7 as &i128) = 0;
    if compat_core::unix::filters::exclude_self(&v6) as i32 {
        return vvar_6{reg 56};
    }
    v24 = *((a4 + 16) as &i64);
    v6 = alloc::raw_vec::RawVec<T,A>::reserve(v8, v24);
    memcpy(v8 * 32 + v6, *(a4 as &i64), v24 * 32);
    v8 += v24;
    *((a4 + 16) as &i64) = 0;
    v2 = v8;
    v25 = *(&v6.field_0 as &i128);
    v0 = v25;
    v26 = __rust_alloc(40, 8);
    if v26 {
        *(v26 as &i128) = 18446744073709551617;
        v27 = v0 as i128;
        v29 = ((v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 18446744073709551617) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u256;
        *((v26 + 16) as void*) = v27;
        *((v26 + 32) as &unsigned long) = v2;
        v5 = v26;
        v30 = *(a0 as &i64);
        v13 = a4;
        if v30 {
            v14 = <alloc::vec::Vec<T> as core::clone::Clone>::clone(a0);
            v32 = v14;
            v10 = v14.field_8;
            v33 = v14.field_16;
        } else {
            v31 = __rust_alloc(24, 8);
            if v31 {
                v34 = v31;
                v33 = 1;
                if a3 && !__rust_alloc(a3, 1) {
                    alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(); /* do not return */
                }
                v0 = struct24 {
                    field_0: v35
                    field_8: v36
                    field_16: 0
                };
                alloc::raw_vec::RawVec<T,A>::reserve(&v0, 0, a3);
                v37 = v0.field_16;
                core::slice::<impl [T]>::copy_from_slice(v0 + v37, a3, a2, a3);
                v38 = v37 + a3;
                v2 = v38;
                v32 = v34;
                *((v34 + 16) as &unsigned long) = v38;
                v39 = *(&v0.field_0 as &i128);
                *(v34 as void*) = v39;
                v14 = v34;
                v29 = (v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 18446744073709551617;
                v15 = 18446744073709551617;
                v10 = 1;
            }
        }
        compat_kernel::core::request::RequestHandle::new(&v0);
        v40 = v0;
        v12 = v1;
        v11 = v2;
        v41 = v32 + v33 * 24;
        if !v33 {
LABEL_4424fc:
        } else {
            v9 = v32;
            v42 = v32 + 24;
            do {
                v43 = v42;
                v47 = *((v43 - 16) as &i128);
                v0 = v47;
                if !v0 {
                    goto LABEL_4424fc;
                }
                v48 = v0 as i128;
                v17 = v48;
                *(&v0.field_0 as &struct24) = struct24 {
                    field_0: v46
                    field_8: v17
                };
                v18 = <std::path::PathBuf as core::convert::From<alloc::string::String>>::from(&v0);
                v49 = v5;
                v50 = *(v49 as &i64);
                *(v49 as &unsigned long) = v50 + 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x44246f;
                }
                if amd64g_calculate_condition(14, 4, v50, 1, v44) as char {
LABEL_4425a6:
                    [D] Unsupported jumpkind Ijk_NoDecode at address 4466086()
                }
                v16 = compat_file_search::query::QueryInput::new(&v18, 1, v49);
                v4 = *(&v16.field_32 as &i64);
                v51 = v16.field_0;
                v29 = ((v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 as u256;
                v52 = *(&v16.field_16 as &i128);
                v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256;
                v3 = v52;
                v0 = v51;
                v53 = *((v40 + 16) as &i64);
                *((v40 + 16) as &unsigned long) = v53 + 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x4424b6;
                }
                if amd64g_calculate_condition(14, 4, v53, 1, v44) as char {
                    goto LABEL_4425a6;
                }
LABEL_4424c2:
                v54 = *(v40 as &i64);
                *(v40 as &unsigned long) = v54 + 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_4424c2;
                }
                if amd64g_calculate_condition(14, 4, v54, 1, v44) as char {
                    goto LABEL_4425a6;
                }
                compat_kernel::core::server::Server::send_query(a1, &v0, v40);
                v42 = v43 + 24;
            } while (v43 != v41);
        }
        compat_kernel::frontend::console::start(v12, v11, v40);
        v56 = v5;
        v57 = *(v56 as &i64);
        *(v56 as &unsigned long) = v57 - 1;
        if BinaryOp CasCmpNE {
            goto LABEL_0x442570;
        }
        if v57 != 1 {
            return vvar_6{reg 56};
        }
        alloc::sync::Arc<T>::drop_slow(&v5);
    }
}
