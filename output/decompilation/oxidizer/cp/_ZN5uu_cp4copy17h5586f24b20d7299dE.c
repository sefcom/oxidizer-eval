fn uu_cp::copy(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i8;  // [bp-0x358]
    let v1: i8;  // [bp-0x338]
    let v2: i8;  // [bp-0x330]
    let v3: i8;  // [sp-0x31b]
    let v4: i8;  // [sp-0x31a]
    let v5: struct1;  // [bp-0x319]
    let v6: struct24;  // [sp-0x318], Other Possible Types: unsigned long
    let v7: i64;  // [sp-0x310]
    let v8: iNone;  // [sp-0x308], Other Possible Types: unsigned long, struct24
    let v9: i64;  // [sp-0x2f8]
    let v10: i8;  // [bp-0x2f0], Other Possible Types: unsigned long
    let v11: struct24;  // [sp-0x2e8], Other Possible Types: unsigned long
    let v12: i64;  // [sp-0x2e0]
    let v13: struct24;  // [sp-0x2b0]
    let v14: Result<struct136, struct5>;  // [bp-0x298], Other Possible Types: struct32, Option<struct16>, struct24, int, struct8, struct48, struct64
    let v15: i64;  // [sp-0x290], Other Possible Types: char
    let v16: i8;  // [bp-0x280]
    let v17: iNone;  // [bp-0x278], Other Possible Types: char
    let v18: i8;  // [bp-0x270]
    let v19: iNone;  // [sp-0x268]
    let v20: i8;  // [bp-0x260]
    let v22: iNone;  // [bp-0x1e8], Other Possible Types: unsigned long
    let v23: i64;  // [sp-0x1d8]
    let v24: i64;  // [sp-0x1c8]
    let v25: i64;  // [sp-0x1c0]
    let v26: i64;  // [sp-0x1b8]
    let v27: struct16;  // [bp-0x1b0]
    let v28: Option<Result<struct64, struct24>>;  // [sp-0x1a0], Other Possible Types: unsigned long, struct136, struct64
    let v29: i64;  // [sp-0x198]
    let v30: i64;  // [sp-0x190]
    let v31: i8;  // [bp-0x188]
    let v32: struct16;  // [sp-0x118], Other Possible Types: int
    let v33: iNone;  // [sp-0x108]
    let v34: iNone;  // [sp-0xf8]
    let v35: struct16;  // [sp-0xe8], Other Possible Types: int
    let v36: iNone;  // [sp-0xd8]
    let v37: iNone;  // [sp-0xc8]
    let v38: iNone;  // [sp-0xb8]
    let v39: iNone;  // [sp-0xa8]
    let v40: iNone;  // [sp-0x98]
    let v41: iNone;  // [sp-0x88]
    let v42: iNone;  // [sp-0x78]
    let v43: iNone;  // [sp-0x68]
    let v44: String;  // [sp-0x58]
    let v45: iNone;  // [sp-0x40]
    let v47: i64;  // r12
    let v50: struct8;  // rax
    let v51: iNone;  // xmm0
    let v52: iNone;  // xmm1
    let v53: i64;  // r15
    let v54: i64;  // rdx
    let v55: iNone;  // xmm0
    let v56: iNone;  // xmm0
    let v57: iNone;  // xmm0
    let v58: iNone;  // xmm0
    let v59: iNone;  // ymm0
    let v60: iNone;  // ymm0
    let v61: i64;  // r15
    let v63: iNone;  // xmm0
    let v64: i64;  // rax
    let v65: i64;  // r14
    let v66: i64;  // rbx
    let v67: i64;  // r13
    let v70: i32;  // eax
    let v72: i64;  // r12
    let v73: iNone;  // ymm0
    let v75: i64;  // rbx
    let v76: iNone;  // xmm0
    let v77: iNone;  // xmm1
    let v80: i64;  // r15
    let v83: i64;  // r15
    let v85: i64;  // r15
    let v89: iNone;  // [sp-0x288]

    v47 = a5;
    *(&v10 as &i8) = uu_cp::TargetType::determine(a2, a3, a4) as i8;
    v5 = struct1 {
        field_0: v49
    };
    v14 = uu_cp::verify_target_type(a3, a4, &v5);
    v50 = v14;
    if v50 != 13 {
        *((a0 + 56) as &i64) = *(&v20 as &i64);
        v51 = *(&v15 as &i128);
        v52 = *(&v16 as &i128);
        *((a0 + 40) as &i128) = *(&v18 as &i128);
        *((a0 + 24) as void*) = v52;
        *((a0 + 8) as void*) = v51;
        *(a0 as &struct8) = v50;
        v53 = a0;
        return v53;
    }
    v14 = std::thread::local::LocalKey<T>::try_with();
    v14 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a2, core::result::Result<T,E>::expect(&v14), v54);
    v55 = v14.field_0;
    v37 = *(&v17 as &i128);
    v36 = v14.field_16;
    v35 = v55;
    v14 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v56 = v14.field_0;
    v40 = *(&v14.field_32 as &i128);
    v39 = v14.field_16;
    v38 = v56;
    v14 = std::thread::local::LocalKey<T>::try_with();
    v14 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a2, core::result::Result<T,E>::expect(&v14), v54);
    v57 = v14.field_0;
    v43 = *(&v14.field_32 as &i128);
    v42 = v14.field_16;
    v41 = v57;
    v14 = std::thread::local::LocalKey<T>::try_with();
    v14 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a2, core::result::Result<T,E>::expect(&v14), v54);
    v58 = v14.field_0;
    v60 = (((v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 as u256;
    v34 = *(&v14.field_32 as &i128);
    v33 = v14.field_16;
    v32 = v58;
    if !*((a5 + 73) as &i8) {
        *(&v22 as &i64) = 0;
    } else if !uu_cp::disk_usage(a1, a2, *((a5 + 70) as &i8)) {
        v11 = indicatif::progress_bar::ProgressBar::new(v54);
        v14 = indicatif::style::ProgressStyle::with_template(&g_42d0a4);
        v28 = core::result::Result<T,E>::unwrap(&v14);
        v6 = indicatif::progress_bar::ProgressBar::with_style(&v11, &v28);
        v13 = indicatif::progress_bar::ProgressBar::with_message(&v6, uucore::util_name(), v54);
        indicatif::progress_bar::ProgressBar::tick(&v13);
        v23 = v13.field_16;
        v63 = *(&v13.field_0 as &i128);
        v60 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u256;
        v22 = v63;
    } else {
        *(a0 as &i64) = 2;
        *((a0 + 8) as &unsigned long) = v54;
        return v53;
    }
    v27 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 24
    };
    v64 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27);
    if v64 {
        v65 = v64;
        v9 = a0;
        v4 = *((a5 + 76) as &i8);
        v3 = *((a5 + 78) as &i8);
        *(&v10 as &u64) = v10;
        v26 = *((a5 + 68) as &i8);
        v25 = *((a5 + 66) as &i8);
        v24 = a5;
        do {
            v66 = *((v65 + 8) as &i64);
            v67 = *((v65 + 16) as &i64);
            v13 = uucore::features::fs::normalize_path(v66, v67);
            if !v4 && hashbrown::map::HashMap<K,V,S,A>::get_inner(&v35, &v13) {
                v14 = std::fs::symlink_metadata(v66, v67);
                match v14 {
                    Err(_) => {
                        v83 = v9;
                        *(v83 as &i64) = 2;
                        *((v83 + 8) as &unsigned long) = v15;
                        v53 = v61;
                        return v53;
                    },
                    Ok(_) => {
                        v70 = *((&v14 as &char + 56) as &i32) & 0xf000;
                        v6 = (v70 == 0x4000 ? &g_42d0e4 : &g_41e2c8);
                        v7 = (v70 == 0x4000) as u8 as u64 * 5 + 4;
                        v29 = v54;
                        v28 = 1;
                        v29 = v66;
                        v30 = v67;
                        *(&v31 as &i8) = 1;
                        show_warning!("source {} {} specified more than once", &v6, &v28);
                        v15 = v15;
                    },
                }
                continue;
            }
            v28 = uu_cp::construct_dest_path(v66, v67, a3, a4, v10, v1, v2);
            if v28 as i32 != 13 {
                v14 = struct64 {
                    field_0: v68
                    field_16: v69
                    field_32: *((&v28 as &char + 32) as &i128)
                    field_48: *((&v28 as &char + 48) as &i128)
                };
                v8 = uu_cp::copy::{{closure}}(a3, a4, &v14);
            } else {
                v8 = *((&v28 as &char + 24) as &i64);
                *(&v8 as &i128) = *((&v28 as &char + 8) as &i128);
            }
            v14 = std::fs::metadata(&v8);
            match v14 {
                Ok(_) => {
                    v14 = std::fs::symlink_metadata(&v8);
                    match v14 {
                        Err(_) => {
                            vvar_1278{reg 136} = v9;
                            *(v80 as &i64) = 2;
                            *((v80 + 8) as &unsigned long) = v15;
                            return v53;
                        },
                        Ok(_) => {
                            if !((*((&v14 as &char + 56) as &i32) & 0xf000) == 0xa000) {
                                goto LABEL_5038bb;
                            }
                        },
                    }
                },
                Err(_) => {
                    v14 = std::fs::metadata(v65);
                },
            }
            match v14 {
                Ok(_) => {
                    v14 = std::fs::symlink_metadata(v65);
                    match v14 {
                        Err(_) => {
                            v80 = v9;
                            *(v80 as &i64) = 2;
                            *((v80 + 8) as &unsigned long) = v15;
                            return v53;
                        },
                        Ok(_) => {
                            if (*((&v14 as &char + 56) as &i32) & 0xf000) == 0xa000 {
                                goto LABEL_5038bb;
                            }
                        },
                    }
                },
                Err(_) => {
                    if !(v3 == 1) {
                        goto LABEL_5038dd;
                    }
                },
            }
LABEL_5038bb:
            if v4 != 2 && hashbrown::map::HashMap<K,V,S,A>::get_inner(&v32, &v8) {
                v45 = (&v8)[8] as i128;
                v11 = v66;
                v12 = v67;
                v44 = format!("will not overwrite just-created '{}' with '{}'", &v45, &v11);
                v85 = v9;
                *((v85 + 24) as &u64) = v44.len;
                *((v85 + 8) as &i128) = *(&v44.ptr as &i128);
                *(v85 as &i64) = 4;
                return v53;
            }
LABEL_5038dd:
            v28 = uu_cp::copy_source(&v22, v66, v67, a3, a4, v0, v47, &v38, &v32, &v41);
            v75 = v28;
            if v75 == 13 {
                v14 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v8);
                v11 = v14;
                v32 = hashbrown::map::HashMap<K,V,S,A>::insert(&v11);
            } else {
                v76 = v28.field_0;
                v77 = v28.field_16;
                v19 = v28.field_48;
                *(&v17 as &u128) = v28.field_32;
                v89 = v77;
                v14 = v76;
                uu_cp::show_error_if_needed(&v14);
            }
            v15 = v15;
            v72 = v24;
            if v75 as u32 == 13 {
                v15 = v15;
                v24 = v24;
            }
            v15 = v15;
            v60 = v73 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v13.field_0 as &i128);
            *(&v14.field_0 as &struct24) = struct24 {
                field_0: v79
                field_16: v13.field_16
            };
            v35 = hashbrown::map::HashMap<K,V,S,A>::insert(&v14);
            v65 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27);
        } while (v65);
        if v22 as i64 {
LABEL_503aa9:
            v14 = v22 as i192;
            indicatif::progress_bar::ProgressBar::finish(&v14);
        }
    } else if !(!v22 as i64) {
        goto LABEL_503aa9;
    }
    return v53;
}
