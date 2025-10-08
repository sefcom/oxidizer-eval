fn meilitool::upgrade::v1_12::convert_update_files(a0: i64, a1: i64) -> u64 {
    let v0: u32;  // [bp-0x568]
    let v1: u16;  // [bp-0x562]
    let v2: u32;  // [bp-0x560]
    let v3: u32;  // [bp-0x55d]
    let v4: struct32;  // [bp-0x55c]
    let v5: struct12;  // [bp-0x55a]
    let v6: u64;  // [bp-0x559]
    let v7: u8;  // [bp-0x551]
    let v8: struct24;  // [sp-0x550]
    let v9: struct16;  // [bp-0x538]
    let v10: u32;  // [bp-0x528]
    let v11: struct32;  // [bp-0x524]
    let v12: struct12;  // [bp-0x522]
    let v13: u64;  // [bp-0x521]
    let v14: u8;  // [bp-0x519]
    let v15: struct24;  // [bp-0x510]
    let v16: struct16;  // [bp-0x4f8], Other Possible Types: u64
    let v17: u64;  // [bp-0x4f8]
    let v18: struct24;  // [bp-0x4f8]
    let v19: u64;  // [bp-0x4f0]
    let v20: u64;  // [bp-0x4f0]
    let v21: iNone;  // [bp-0x4e8]
    let v22: Result<struct16, struct16>;  // [bp-0x4d8], Other Possible Types: struct32, u8
    let v23: struct24;  // [bp-0x4d8]
    let v24: Result<struct72, struct40>;  // [bp-0x4d8]
    let v25: Result<struct4, struct8>;  // [bp-0x4d8]
    let v26: u64;  // [bp-0x4d0], Other Possible Types: unsigned long
    let v27: u64;  // [bp-0x4d0]
    let v28: u64;  // [bp-0x4d0]
    let v30: iNone;  // [bp-0x4b8]
    let v31: iNone;  // [bp-0x4a8]
    let v32: u64;  // [bp-0x498]
    let v33: struct32;  // [bp-0x490]
    let v34: u64;  // [bp-0x490]
    let v35: u64;  // [bp-0x488]
    let v36: void*;  // [bp-0x480]
    let v37: struct24;  // [bp-0x470]
    let v38: Result<struct16, struct16>;  // [bp-0x458]
    let v39: u64;  // [bp-0x450]
    let v40: Option<struct48>;  // [bp-0x448], Other Possible Types: struct152, struct17, struct24, struct248, struct36, struct8, u128
    let v41: Result<struct16, struct8>;  // [bp-0x448], Other Possible Types: struct64
    let v42: struct48;  // [bp-0x448]
    let v43: u32;  // [bp-0x448]
    let v44: struct57;  // [bp-0x448]
    let v45: u24;  // [bp-0x447]
    let v46: u24;  // [bp-0x447]
    let v47: u32;  // [bp-0x444]
    let v48: u32;  // [bp-0x444]
    let v49: &str;  // [bp-0x440], Other Possible Types: u64
    let v50: u64;  // [bp-0x440]
    let v51: u128;  // [bp-0x438]
    let v52: u64;  // [bp-0x438]
    let v53: u64;  // [bp-0x430]
    let v54: u64;  // [bp-0x430]
    let v55: void*;  // [bp-0x428], Other Possible Types: u128
    let v56: u64;  // [bp-0x420]
    let v58: iNone;  // [bp-0x418], Other Possible Types: u16
    let v59: iNone;  // [bp-0x418]
    let v60: u64;  // [bp-0x408]
    let v61: u128;  // [bp-0x3b0]
    let v62: iNone;  // [bp-0x3a0]
    let v63: iNone;  // [bp-0x390]
    let v64: iNone;  // [bp-0x380]
    let v65: iNone;  // [bp-0x370]
    let v66: core::fmt::rt::Argument;  // [bp-0x360]
    let v67: u64;  // [bp-0x348]
    let v68: u64;  // [bp-0x340]
    let v69: iNone;  // [bp-0x338]
    let v70: iNone;  // [bp-0x328]
    let v71: iNone;  // [bp-0x318]
    let v72: struct25;  // [bp-0x308]
    let v73: u128;  // [bp-0x2e8]
    let v74: Result<struct64, struct16>;  // [bp-0x2e8]
    let v75: u64;  // [bp-0x2e0]
    let v76: struct24;  // [bp-0x2d8]
    let v77: iNone;  // [bp-0x2c8]
    let v78: iNone;  // [bp-0x2b8]
    let v79: iNone;  // [bp-0x2a8]
    let v80: iNone;  // [bp-0x298]
    let v81: struct32;  // [bp-0x288]
    let v82: Result<struct24, struct16>;  // [bp-0x268]
    let v83: struct9;  // [bp-0x268]
    let v84: u64;  // [bp-0x268]
    let v85: u128;  // [bp-0x268]
    let v86: Result<struct248, struct16>;  // [bp-0x268]
    let v87: u32;  // [bp-0x264]
    let v88: u32;  // [bp-0x264]
    let v89: u64;  // [bp-0x260]
    let v90: u128;  // [bp-0x258]
    let v91: iNone;  // [bp-0x248]
    let v92: iNone;  // [bp-0x238]
    let v93: struct48;  // [bp-0x170]
    let v94: alloc::string::String;  // [bp-0x140]
    let v95: struct16;  // [bp-0x128]
    let v96: u8;  // [bp-0x118]
    let v98: u64;  // r14
    let v99: i64;  // rsi
    let v102: u32;  // eax
    let v109: u64;  // rdx
    let v113: u64;  // rax
    let v118: u128;  // xmm0
    let v119: iNone;  // xmm1
    let v121: Option<struct160>;  // rax
    let v128: struct24;  // [bp-0x278]

    v37 = std::path::Path::join(a0, a1, "update_files");
    v40 = file_store::FileStore::new(&v37);
    v82 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v40, &v37);
    v98 = v89;
    if (((0 ^ v82 as i64) & (0 ^ -(v82 as i64))) >> 63) as char {
        return v98;
    }
    v15 = struct24 {
        field_0: v82 as i64
        field_8: v98
        field_16: *((&v82 as &char + 16) as &i64)
    };
    v40 = file_store::FileStore::all_uuids(&v15);
    v83 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v40);
    if v89 as i8 != 2 {
        v9 = struct16 {
            field_0: v83.field_0
            field_8: v83.field_8
        };
        loop {
LABEL_7582f4:
            v28 = v26;
            v88 = v87;
            v40 = core::iter::traits::iterator::Iterator::try_fold(v99);
            if let None = v40 {
                break;
            }
            v93 = v42;
            v41 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v93);
            match v41 {
                Ok(_) => {
                    v102 = *((&v41 as &char + 1) as &i32);
                    v3 = v47;
                    v2 = v102;
                    v6 = v49;
                    v7 = *((&v41 as &char + 16) as &i8);
                    v10 = v2;
                    v11 = v4;
                    v12 = v5;
                    v13 = v6;
                    v14 = v7;
                    v8 = file_store::FileStore::get_update_path(&v15, &v2 as u8);
                    v43 as u128 = file_store::FileStore::get_update(&v15, &v2 as u8);
                    v85 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v43 as u128, &v10);
                    match v85 {
                        Ok(_) => {
                            v56 = 6;
                            v49 = ".tmp";
                            v54 = 1;
                            v55 = 0;
                            v58 = 0;
                            v43 = 0 as u32;
                            v81 = tempfile::Builder::tempfile_in(&v43 as u128, &v37);
                            if v128.field_0 as i8 == 2 {
                                v89 = v81.field_0;
                                v84 = 0x8000000000000000 as u64;
                                v51 = v52;
                            } else {
                                v44 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v81);
                                v92 = v59;
                                v91 = v44.field_32;
                                v90 = *(&v44.field_16 as &i128);
                                v85 = *(&v44.field_0 as &i128) as u128;
                                v51 = v52;
                            }
                            v88 = v87;
                            v74 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v85, &v8);
                            v98 = v75;
                            if let Err(_) = v74 {
                                break;
                            }
                            v71 = v78;
                            v70 = v77;
                            v69 = v76;
                            v67 = v74 as i64;
                            v68 = v98;
                            v40 = milli::documents::reader::DocumentsBatchReader<R>::from_reader(v88 as u64);
                            v86 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v40, &v8);
                            v98 = v89;
                            if let Err(_) = v86 {
                                break;
                            }
                            memcpy(&v96, &v86 as u8, 232);
                            v95 = struct16 {
                                field_0: v86 as i64
                                field_8: v98
                            };
                            v40 = milli::documents::reader::DocumentsBatchReader<R>::into_cursor_and_fields_index(&v95);
                            memcpy(&v86, &v40, 152);
                            v80 = v66.ty;
                            v79 = v65;
                            v78 = v64;
                            v77 = v63;
                            v76 = v62;
                            v73 = v61;
                            loop {
                                v40 = milli::documents::reader::DocumentsBatchCursor<R>::next_document(&v86);
                                v98 = v28;
                                v0 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v22 as u192, &v40, &v8) as u32 & -0x100 | 1;
                                if (v22 & 1) {
                                    break;
                                }
                                if v98 {
                                    v38 as u576 = indexmap::map::IndexMap<K,V,S>::with_capacity_and_hasher(std::thread::local::LocalKey<T>::with(), v109);
                                    v34 = v98;
                                    v35 = v23.field_16;
                                    v36 = 0 as void*;
                                    v26 = v28;
                                    loop {
                                        v28 = v26;
                                        vvar_1379{stack -1272} = struct24 OrderedDict([(0, 𝜙@64b [((7702389, None), vvar_1078{stack -1272}), ((7702164, None), vvar_1204{stack -1272})])])
                                        core::iter::adapters::fuse::and_then_or_clear(&v18, &v34);
                                        if !v20 {
                                            break;
                                        }
                                        v1 = v18.field_0 as i32 as i16;
                                        v22 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(milli::documents::DocumentsBatchIndex::name(&v74, v18.field_0 as i32 as i16), v109, &v1, &v8);
                                        v98 = v28;
                                        if let Err(_) = v22 {
                                            return v98;
                                        }
                                        v22 = struct32 {
                                            field_0: v20
                                            field_8: v18.field_16
                                            field_16: 0
                                        };
                                        v38 = serde_json::de::from_trait(&v22);
                                        match v38 {
                                            Ok(_) => {
                                                v22 as u192 = indexmap::map::IndexMap<K,V,S>::insert_full(&v38 as u576, v22 as i64, v28, v38 as i64, v39);
                                                v26 = v27;
                                            },
                                            Err(_) => {
                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v39);
                                                goto LABEL_7589eb;
                                            },
                                        }
                                    }
                                    v113 = serde_json::ser::to_writer(&v67, ".tmp");
                                    if !v113 {
                                        v16 = v17;
                                        v19 = v20;
                                    } else {
                                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v113);
LABEL_7589eb:
                                        v98 = v121;
                                        break;
                                    }
                                } else {
                                    v41 = struct64 {
                                        field_0: *(&v67 as &i128)
                                        field_16: v69
                                        field_32: v70
                                        field_48: v71
                                    };
                                    v24 = std::io::buffered::bufwriter::BufWriter<W>::into_inner(&v41);
                                    match v24 {
                                        Err(_) => {
                                            v21 = *((&v24 as &char + 24) as &i128);
                                            v16 = *((&v24 as &char + 8) as &i128) as u128;
                                        },
                                        Ok(_) => {
                                            v118 = v24 as i128;
                                            v119 = *((&v24 as &char + 16) as &i128);
                                            v58 = v31;
                                            *(&v55 as void*) = v30;
                                            *(&v51 as void*) = v119;
                                            v40 = v118;
                                            v60 = v32;
                                            v16 = struct16 {
                                                field_0: v60
                                                padding_8: <UNKNOWN>
                                                field_16: <UNKNOWN>
                                            };
                                            v16 = v17;
                                        },
                                    }
                                    v94 = format!("while flushing update file bufwriter for update file {}", &v8);
                                    v33 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v16, &v94);
                                    if v33.field_16 as i8 == 2 {
                                        break;
                                    }
                                    v72 = struct25 {
                                        field_0: v33.field_0
                                        field_8: v35
                                        field_16: v33.field_16 as i8
                                        field_17: *((&v33.field_16 as &char + 1) as &i64)
                                    };
                                    v40 = tempfile::file::NamedTempFile<F>::persist(&v72, &v8);
                                    v25 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v40, &v8);
                                    match v25 {
                                        Ok(_) => {
                                            v45 = v46;
                                            v47 = v48;
                                            v49 = v50;
                                            v51 = v52;
                                            v54 = v53;
                                            v26 = v27;
                                            goto LABEL_7582f4;
                                        },
                                        Err(v98) => {
                                            v0 = 0;
                                            break;
                                        },
                                    }
                                }
                            }
                        },
                        Err(v98) => {
                            break;
                        },
                    }
                },
                Err(v98) => {
                    break;
                },
            }
        }
    }
    return v98;
}
