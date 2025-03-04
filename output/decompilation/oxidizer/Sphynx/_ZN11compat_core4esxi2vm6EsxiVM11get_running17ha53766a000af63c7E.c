fn compat_core::esxi::vm::EsxiVM::get_running(a0: &Result<struct32, struct16>) -> u64 {
    let v0: i64;  // [sp-0x198], Other Possible Types: int, struct16
    let v1: i64;  // [sp-0x188]
    let v2: i64;  // [sp-0x180]
    let v3: i64;  // [sp-0x178]
    let v4: i64;  // [sp-0x170]
    let v5: i64;  // [sp-0x168]
    let v6: i64;  // [sp-0x160]
    let v7: i64;  // [sp-0x158]
    let v8: i64;  // [sp-0x150]
    let v9: i64;  // [sp-0x148], Other Possible Types: struct122, Result<struct24, struct16>, struct24
    let v10: i64;  // [sp-0x140]
    let v11: i64;  // [bp-0x138]
    let v12: struct104;  // [sp-0xc8], Other Possible Types: Result<struct8, struct1>
    let v13: struct24;  // [sp-0x60]
    let v14: struct24;  // [sp-0x48]
    let v25: iNone;  // ymm1
    let v26: iNone;  // ymm1
    let v28: iNone;  // ymm2
    let v29: iNone;  // ymm2
    let v31: iNone;  // ymm3
    let v32: iNone;  // ymm3
    let v35: iNone;  // ymm0
    let v36: iNone;  // ymm0
    let v37: i64;  // r13
    let v38: i64;  // r12
    let v39: i64;  // r13
    let v40: i64;  // r14
    let v42: i64;  // rsi
    let v43: i64;  // rbp
    let v50: i64;  // r15
    let v51: i64;  // rsi
    let v52: i64;  // r13
    let v53: i64;  // rbp
    let v56: i64;  // r14
    let v57: i64;  // rsi
    let v58: i64;  // rax
    let v59: i64;  // rsi
    let v60: iNone;  // xmm0

    v9 = compat_core::esxi::utils::esxi_run_command_with_output("esxcli --formatter=csv --format-param=fields=="WorldID,DisplayName" vm process list");
    if v9 == 1 {
        return Err(struct16 {
            field_0: v4
            field_8: v6
        });
    }
    v6 = *((&v9 as &char + 16) as &i64);
    v7 = a0;
    v4 = v10;
    v12 = core::str::pattern::StrSearcher::new(v4, v10, "
");
    v9 = struct122 {
        field_0: 0
        field_8: v18
        field_16: v19
        field_32: v20
        field_48: v21
        field_64: v22
        field_80: v19
        field_96: v19
        field_112: v12.field_96
        field_120: 1
    };
    v26 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_16 as &i128);
    v29 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_32 as &i128);
    v32 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_48 as &i128);
    v13 = <alloc::vec::Vec<T> as alloc::vec::SpecExtend<T,I>>::from_iter(&v9);
    v0 = &g_8;
    v36 = (((v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_0 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_80 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *(&v0 as &i128) = 0;
    v2 = v13.field_0;
    v5 = v13.field_8 as i64;
    v37 = *((&v13.field_8 as &char + 8) as &i64);
    if !v37 {
        return Ok(struct32 {
            field_0: 0
            field_8: v0 as i128
            field_24: v1
        });
    }
    v38 = v2;
    v39 = v37 * &g_10 + v38;
    v40 = &g_59b383;
    v3 = v39;
    loop {
        v42 = *(v38 as &i64);
        if !v42 {
            break;
        }
        v43 = *((v38 + &g_8 as &u8) as &i64);
        if !(v43 >= 7) || !(v42 == 5878652) && (!(!(*((v42 + 3) as &i32) ^ 1682531436)) || !(!(*(v42 as &i32) ^ 1819438935))) {
            v12 = core::str::pattern::StrSearcher::new(v42, v43, v40, 1);
            v9 = struct122 {
                field_0: 0
                field_8: v43
                field_16: v35 as u128
                field_32: v25 as u128
                field_48: v28 as u128
                field_64: v31 as u128
                field_80: v45
                field_96: v35 as u128
                field_112: v12.field_96
                field_120: 1
            };
            v36 = ((v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_80 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_0 as &i128);
            v26 = v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_16 as &i128);
            v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_32 as &i128);
            v32 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12.field_48 as &i128);
            v14 = <alloc::vec::Vec<T> as alloc::vec::SpecExtend<T,I>>::from_iter(&v9);
            v50 = v14.field_0;
            v12 = core::num::<impl core::str::FromStr for u64>::from_str(*(v50 as &i64), *((v50 + &g_8 as &u8) as &i64));
            match v12 {
                Err(_) => {
                    v51 = v14.field_8 as i64;
                    if !v51 {
                        goto LABEL_44cf10;
                    }
                },
                Ok(_) => {
                    v52 = *((v50 + &g_10 as &u8) as &i64);
                    v53 = *((v50 + &g_10 as &u8) as &i64);
                    v8 = v12.field_8;
                    if v53 && !__rust_alloc(v53, 1) {
                        alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(); /* do not return */
                    }
                    *(&v9.field_0 as &struct24) = struct24 {
                        field_0: v54
                        field_8: v55
                        field_16: 0
                    };
                    alloc::raw_vec::RawVec<T,A>::reserve(&v9, 0, v53);
                    v56 = *((&v9.field_8 as &char + 8) as &i64);
                    core::slice::<impl [T]>::copy_from_slice(v9 + v56, v53, v52, v53);
                    v11 = v56 + v53;
                    v57 = v1;
                    if v57 == v0 as i64 {
                        v0 = alloc::raw_vec::RawVec<T,A>::reserve(v57, 1);
                        v57 = v1;
                    }
                    v39 = v3;
                    v40 = &g_59b383;
                    v58 = v0;
                    v59 = v57 * &g_20;
                    *((v58 + v59) as &unsigned long) = v8;
                    v60 = *(&v9.field_0 as &i128);
                    v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 as u256;
                    *((v58 + v59 + &g_8 as &u8) as void*) = v60;
                    *((v58 + v59 + &g_10 as &u8) as &unsigned long) = v11;
                    v1 += 1;
                    v51 = v14.field_8 as i64;
                    if !v51 {
                        goto LABEL_44cf10;
                    }
                },
            }
        }
LABEL_44cf10:
        v38 = (v38 + &g_10 as &u8) as &i64;
        if v38 == v39 {
            break;
        }
    }
}
