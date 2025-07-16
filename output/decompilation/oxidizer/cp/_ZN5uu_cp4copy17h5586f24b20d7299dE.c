fn uu_cp::copy(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct64 {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x31b]
    let v1: u8;  // [bp-0x31a]
    let v2: u64;  // [bp-0x319]
    let v3: struct24;  // [bp-0x318], Other Possible Types: u64
    let v4: struct24;  // [bp-0x318], Other Possible Types: u64
    let v5: struct24;  // [bp-0x318]
    let v6: u64;  // [bp-0x310]
    let v7: u64;  // [bp-0x308]
    let v8: i64;  // [bp-0x2f8]
    let v9: u64;  // [bp-0x2f0]
    let v10: u8;  // [bp-0x2f0]
    let v11: u64;  // [bp-0x2e8], Other Possible Types: struct24
    let v12: u64;  // [bp-0x2e8]
    let v13: u64;  // [bp-0x2e8]
    let v14: u64;  // [bp-0x2e0]
    let v15: u64;  // [bp-0x2d8]
    let v16: struct24;  // [bp-0x2b0]
    let v17: u64;  // [bp-0x2b0]
    let v18: u64;  // [bp-0x2a0]
    let v19: struct24;  // [bp-0x298], Other Possible Types: u128, struct32, Result<struct136, struct13>, struct48, struct8
    let v20: u64;  // [bp-0x298]
    let v21: u512;  // [bp-0x298]
    let v23: u64;  // [bp-0x298]
    let v25: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x298]
    let v26: u64;  // [bp-0x290], Other Possible Types: char
    let v27: u64;  // [bp-0x290]
    let v28: u64;  // [bp-0x290]
    let v29: i64;  // [bp-0x288], Other Possible Types: u64
    let v30: u64;  // [bp-0x280], Other Possible Types: char
    let v31: u8;  // [bp-0x278], Other Possible Types: void*
    let v32: i8;  // [bp-0x270]
    let v33: u128;  // [bp-0x268]
    let v34: i8;  // [bp-0x260], Other Possible Types: u960
    let v35: u192;  // [bp-0x1e8]
    let v37: u128;  // [bp-0x1e8]
    let v38: u64;  // [bp-0x1e8]
    let v40: i64;  // [bp-0x1c8]
    let v41: u64;  // [bp-0x1c0]
    let v42: u64;  // [bp-0x1b8]
    let v43: u64;  // [bp-0x1b0]
    let v44: u64;  // [bp-0x1a8]
    let v45: u64;  // [bp-0x1a0], Other Possible Types: struct_3 *
    let v46: struct64;  // [bp-0x1a0]
    let v47: struct64;  // [bp-0x1a0]
    let v48: u64;  // [sp-0x198]
    let v49: i64;  // [sp-0x190], Other Possible Types: u64
    let v50: u8;  // [sp-0x188]
    let v51: u64;  // [bp-0x188]
    let v52: u128;  // [bp-0x180]
    let v53: u8;  // [bp-0x118]
    let v54: u8;  // [bp-0x108]
    let v55: u8;  // [bp-0xf8]
    let v56: u8;  // [bp-0xe8]
    let v57: u8;  // [bp-0xd8]
    let v58: u8;  // [bp-0xc8]
    let v59: u8;  // [bp-0xb8]
    let v60: u8;  // [bp-0xa8]
    let v61: u8;  // [bp-0x98]
    let v62: u8;  // [bp-0x88]
    let v63: u8;  // [bp-0x78]
    let v64: u8;  // [bp-0x68]
    let v65: u128;  // [bp-0x58]
    let v66: u64;  // [bp-0x48]
    let v67: u8;  // [bp-0x40]
    let v68: i64;  // r12
    let v69: i64;  // rdi
    let v72: u128;  // xmm0
    let v73: u128;  // xmm1
    let v75: u64;  // rdx
    let v79: i64;  // rax
    let v80: i64;  // r14
    let v82: u64;  // rbx
    let v83: u64;  // rbx
    let v84: u64;  // r13
    let v88: u64;  // rdx
    let v89: i64;  // r12
    let v90: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // rax
    let v91: u128;  // xmm0
    let v94: u64;  // rdx
    let v95: u8;  // cl
    let v106: u704;  // [bp-0x170]

    v68 = a4;
    v9 = uu_cp::TargetType::determine(a1, a2, a3) as i8;
    v2 = uu_cp::TargetType::determine(a1, a2, a3) as i8;
    v19 = uu_cp::verify_target_type(a2, a3, &v2);
    if v19 != 13 {
        *((v69 + 56) as &i64) = *(&v34 as &i64);
        v72 = *(&v26 as &i128);
        v73 = *(&v30 as &i128);
        *((v69 + 40) as &i128) = *(&v32 as &i128);
        *((v69 + 24) as &u128) = v73;
        *((v69 + 8) as &u128) = v72;
        *(v69 as &struct8) = v19;
        return;
    }
    v19 = std::thread::local::LocalKey<T>::try_with();
    v19 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v19), v75);
    memcpy(&v58, &v31, 16);
    memcpy(&v57, &v19, 16);
    memcpy(&v56, &v19, 16);
    v19 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    memcpy(&v61, &v19, 16);
    memcpy(&v60, &v19, 16);
    memcpy(&v59, &v19, 16);
    v19 = std::thread::local::LocalKey<T>::try_with();
    v19 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v19), v75);
    memcpy(&v64, &v19, 16);
    memcpy(&v63, &v19, 16);
    memcpy(&v62, &v19, 16);
    v19 = std::thread::local::LocalKey<T>::try_with();
    v19 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v19), v75);
    memcpy(&v55, &v19, 16);
    memcpy(&v54, &v19, 16);
    memcpy(&v53, &v19, 16);
    if *((a4 + 73) as &i8) {
        if uu_cp::disk_usage(a0, a1, *((a4 + 70) as &i8)) {
            *(v69 as &i64) = 2;
            *((v69 + 8) as &u64) = v75;
            return;
        }
        v11 = indicatif::progress_bar::ProgressBar::new(v75);
        v19 = indicatif::style::ProgressStyle::with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}");
        core::result::Result<T,E>::unwrap(&v45, &v19);
        v3 = indicatif::progress_bar::ProgressBar::with_style(&v11, &v45);
        v16 = indicatif::progress_bar::ProgressBar::with_message(&v3, uucore::util_name(), v75);
        indicatif::progress_bar::ProgressBar::tick(&v16);
    }
    v43 = a0;
    v44 = a0 + a1 * 24;
    v79 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v43);
    if v79 {
        v80 = v79;
        v8 = v69;
        v1 = *((a4 + 76) as &i8);
        v0 = *((a4 + 78) as &i8);
        v9 = v10;
        v42 = *((a4 + 68) as &i8);
        v41 = *((a4 + 66) as &i8);
        v40 = a4;
        do {
            v83 = *((v80 + 8) as &i64);
            v84 = *((v80 + 16) as &i64);
            uucore::features::fs::normalize_path(&v17, v83, v84);
            if !v1 && hashbrown::map::HashMap<K,V,S,A>::get_inner(&v56, &v17, a1) {
                v37 = std::fs::symlink_metadata(v83, v84);
                match v37 as u1536 {
                    Err(_) => {
                        *(v8 as &i64) = 2;
                        *((v8 + 8) as &u64) = v27;
                        return;
                    },
                    Ok(_) => {
                        v45 = uucore::util_name();
                        v48 = v75;
                        eprint!("{}: warning: ", &v45);
                        v45 = 1;
                        v48 = v83;
                        v49 = v84;
                        v50 = 1;
                        v50 = v51 & -0x100 | 1;
                        eprintln!("source {} {} specified more than once", &v3, &v45);
                        v21 = v23;
                        v28 = v26;
                        v13 = v12;
                        v89 = v68;
                    },
                }
                continue;
            }
            v46 = uu_cp::construct_dest_path(v83, v84, a2, a3, v9, v41, v42);
            if v46.field_0 as i32 == 13 {
                v7 = v50;
                *(&v4 as &i128) = *(&v48 as &i128);
            } else {
                v21 = struct64 {
                    field_0: *(&v46.field_0 as &i128)
                    field_16: v46.field_8
                    field_32: v52
                    field_48: v46.field_32
                };
                v5 = uu_cp::copy::{{closure}}(a2, a3, &v21);
            }
            v37 = std::fs::metadata(&v3, v88);
            if let Ok(_) = v37 as u1536 {
                v37 as u1536 = std::fs::symlink_metadata(&v3, a1);
                if let Err(_) = v37 as u1536 {
                    *(v8 as &i64) = 2;
                    *((v8 + 8) as &u64) = v27;
                    return;
                }
                if !((v34 as i32 & 0xf000) == 0xa000) {
                    goto LABEL_5038bb;
                }
            }
            v37 = std::fs::metadata(v80, a1);
            if let Ok(_) = v37 as u1536 {
                v37 as u1536 = std::fs::symlink_metadata(v80, a1);
                if let Err(_) = v37 as u1536 {
                    *(v8 as &i64) = 2;
                    *((v8 + 8) as &u64) = v27;
                    return;
                }
                if (v34 as i32 & 0xf000) == 0xa000 {
                    goto LABEL_5038bb;
                }
            }
            if !(v0 == 1) {
                goto LABEL_5038dd;
            }
LABEL_5038bb:
            v90 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v53, &v3, a1);
            if v1 != 2 && v90 {
                memcpy(&v67, &v6, 16);
                v11 = v83;
                v14 = v84;
                v45 = &v67;
                v48 = <std::path::Display as core::fmt::Display>::fmt;
                v49 = &v11;
                v50 = <std::path::Display as core::fmt::Display>::fmt;
                v19 = "will not overwrite just-created '";
                v26 = 3;
                v31 = 0;
                v29 = &v45;
                v30 = 2;
                v19 = core::option::Option<T>::map_or_else(a1);
                *((v8 + 24) as &u64) = v66;
                *((v8 + 8) as &u128) = v65;
                *(v8 as &i64) = 4;
                return;
            }
LABEL_5038dd:
            v47 = uu_cp::copy_source(&v38, v83, v84, a2, a3, v9, v68, &v59, &v53, &v62);
            if v47.field_0 != 13 {
                v91 = *(&v47.field_0 as &i128);
                v33 = v106;
                v31 = v52;
                v21 = struct32 {
                    field_0: v91
                    field_8: <UNKNOWN>
                    field_24: <UNKNOWN>
                };
                uu_cp::show_error_if_needed(&v21);
            } else {
                v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
                v15 = v29;
                v13 = v25 as i128;
                hashbrown::map::HashMap<K,V,S,A>::insert(&v53, &v11, a1, a2);
            }
            v21 = v20;
            v28 = v27;
            v13 = v11;
            v89 = v40;
            if v47.field_0 == 13 {
                v21 = v20;
                v28 = v27;
                v13 = v11;
                v89 = v40;
            }
            v68 = v89;
            v11 = v13;
            v27 = v28;
            v19 = v21;
            v29 = v18;
            v19 = v17;
            hashbrown::map::HashMap<K,V,S,A>::insert(&v56, &v19, v94, v95);
            <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v43);
        } while (v80);
        if !(!v38) {
            goto LABEL_503aa9;
        }
    } else if v38 {
LABEL_503aa9:
        v19 = v35;
        indicatif::progress_bar::ProgressBar::finish(&v19);
    }
    *(v69 as &u64) = v82;
    return;
}
