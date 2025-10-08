fn meilitool::compact_index(a0: i64, a1: void*, a2: u64) -> long long {
    let v0: i64;  // [bp-0x5e0]
    let v1: u32;  // [bp-0x5d4]
    let v2: u64;  // [bp-0x5d0]
    let v3: struct24;  // [bp-0x5c8]
    let v4: u64;  // [bp-0x5c0]
    let v5: u64;  // [bp-0x5b8]
    let v6: u64;  // [bp-0x5b0]
    let v7: u8;  // [bp-0x5a8]
    let v8: struct24;  // [bp-0x5a0]
    let v9: u64;  // [bp-0x598]
    let v10: u64;  // [bp-0x590]
    let v11: struct24;  // [bp-0x588]
    let v12: u64;  // [bp-0x580]
    let v13: u64;  // [bp-0x578]
    let v14: u64;  // [bp-0x570]
    let v15: struct24;  // [bp-0x568]
    let v16: struct24;  // [bp-0x548]
    let v17: u64;  // [bp-0x540]
    let v18: u64;  // [bp-0x538]
    let v19: void*;  // [bp-0x530]
    let v20: u64;  // [bp-0x528]
    let v23: u64;  // [bp-0x510]
    let v24: u64;  // [bp-0x508]
    let v25: u64;  // [bp-0x500]
    let v26: struct16;  // [bp-0x4f8]
    let v27: u64;  // [bp-0x4e8]
    let v28: i32;  // [bp-0x4e0]
    let v29: core::fmt::rt::Argument;  // [bp-0x4c8], Other Possible Types: struct12, struct16, struct24, struct32, core::result::Result<std::fs::Metadata, std::io::error::Error>, u128
    let v30: struct24;  // [bp-0x4c8], Other Possible Types: u128
    let v31: Result<struct464, struct16>;  // [bp-0x4c8]
    let v32: u32;  // [bp-0x4c4]
    let v33: i64;  // [bp-0x4c0], Other Possible Types: u64
    let v34: u64;  // [bp-0x4b8]
    let v35: u32;  // [bp-0x4b4]
    let v36: struct41;  // [bp-0x2f0]
    let v37: void*;  // [bp-0x2e8]
    let v38: u64;  // [bp-0x2e0]
    let v39: iNone;  // [bp-0x2d8]
    let v40: void*;  // [bp-0x2c8], Other Possible Types: Result<struct24, struct16>, u64
    let v42: u32;  // [bp-0x2c4]
    let v43: i32;  // [bp-0x2c0], Other Possible Types: unsigned long
    let v44: u32;  // [bp-0x2b8]
    let v45: u64;  // [bp-0x2b8]
    let v46: u32;  // [bp-0x2b0]
    let v47: u32;  // [bp-0x2a8]
    let v48: iNone;  // [bp-0x218]
    let v49: void*;  // [bp-0x208], Other Possible Types: core::fmt::Arguments, struct24, struct32, u32
    let v50: u128;  // [bp-0x208]
    let v51: Result<struct12, struct8>;  // [bp-0x208]
    let v53: u32;  // [bp-0x204]
    let v54: u64;  // [bp-0x200]
    let v55: u8;  // [bp-0x1f8]
    let v56: u32;  // [bp-0x1f7]
    let v57: u32;  // [bp-0x1f4]
    let v58: u64;  // [bp-0x1f0]
    let v59: u32;  // [bp-0x1e8]
    let v61: u64;  // r14
    let v62: u64;  // r15
    let v63: i64;  // rdx
    let v64: Result<struct12, struct8>;  // r12
    let v65: u64;  // rcx
    let v66: u64;  // r8
    let v67: u32;  // eax
    let v68: i64;  // rax
    let v69: u8;  // sil

    v26 = struct16 {
        field_0: a1
        field_8: a2
    };
    v61 = *((a0 + 8) as &i64);
    v62 = *((a0 + 16) as &i64);
    v16 = std::path::Path::join(v61, v62, "tasks");
    v49 = 0;
    v55 = 0;
    v59 = 0;
    v58 = 429496729601;
    heed::envs::env_open_options::EnvOpenOptions<T>::open(&v29, &v49 as u8, &v16);
    v64 = v63;
    if !(anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v29, v17, v18) & 1) {
        v2 = v63;
        v50 = heed::txn::RoTxn<T>::new(&v2, a2, v65, v66);
        v29 = *(&v49.field_8 as &i128);
        v34 = 429496729601;
        if v49.field_0 as i32 == 1 {
            v55 = v34;
            v50 = v29;
            v64 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v50);
        } else {
            v15 = v29;
            v50 = meilitool::try_opening_database(&v2, &v15);
            v64 = v54;
            if let Ok(_) = v50 as u192 {
                v29 = heed::databases::database::Database<KC,DC,C,CDUP>::iter(v54, *((&v51 as &char + 16) as &i32) as u32 as u64, &v15);
                v67 = v29 as i32;
                if v67 == 5 {
                    v0 = a0;
                    v6 = v33;
                    v7 = *((&v29 as &char + 16) as &i8);
                    loop {
                        v36 = <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(&v6);
                        if v36.field_0 as i32 != 1 {
                            break;
                        }
                        if !v37 {
                            *(&v54 as void*) = v39;
                            v50 = v20;
                            v64 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v50 as u192);
                            return v64;
                        }
                        v48 = v39;
                        v19 = v37;
                        v20 = v38;
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v20, a1, a2) as u8 {
                            eprintln!("Found index {} and skipping it", &v19);
                        } else {
                            eprintln!("Found index {} 🎉", &v19);
                            v30 = std::path::Path::join(v61, v62, "indexes");
                            v49 = <T as alloc::string::SpecToString>::spec_to_string(&v48);
                            v3 = std::path::Path::join(v33, v30.field_16, &v49);
                            v40 = 0 as void*;
                            v44 = 0;
                            v46 = 0;
                            v47 = 0;
                            v49 as u3712 = milli::index::Index::new(&v40 as u8, &v3);
                            v31 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v49 as u3712, v4, v5);
                            v64 = v33;
                            if let Ok(_) = v31 {
                                memcpy(&v55, &v31 as u8, 448);
                                v49 = v31 as i64 as u64;
                                v54 = v64;
                                eprintln!("Awaiting for a mutable transaction...");
                                v29 = milli::index::Index::write_txn(&v49 as u3712, a2, v65, v66);
                                v40 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v29);
                                v64 = v43;
                                if let Ok(_) = v40 {
                                    v23 = v40 as i64;
                                    v24 = v64;
                                    v25 = v45;
                                    v8 = std::path::Path::join(v4, v5, "data.mdb");
                                    v11 = std::path::Path::join(v4, v5, "data.mdb.cpy");
                                    eprintln!("Compacting the index...");
                                    v27 = std::time::Instant::now();
                                    v28 = v63 as u32;
                                    v29 = milli::index::Index::copy_to_path(v49, &v11);
                                    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v40, &v29, v12, v13);
                                    if (v40 as i8 & 1) {
                                        v64 = v43;
                                        return v64;
                                    }
                                    v1 = v42;
                                    v29 = std::fs::File::metadata(&v1);
                                    if v29.field_0 as i32 == 2 {
                                        v64 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(1);
                                        return v64;
                                    }
                                    v14 = (&v31)[1] as i64;
                                    v29 = std::fs::metadata(&v8, a2);
                                    v40 as u1408 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v29, v9, v10);
                                    match v40 as u1408 {
                                        Err(_) => {
                                            v64 = v43;
                                            return v64;
                                        },
                                        Ok(_) => {
                                            v40 = std::time::Instant::elapsed(&v27);
                                            v43 = v63 as u32;
                                            println!("Compaction successful. Took around {}", &v40 as u1408);
                                            eprintln!("The index went from {} bytes to {} bytes ({}x reduction)", &v21, &v14, &v22);
                                            eprintln!("Replacing the non-compacted index by the compacted one...");
                                            v64 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(std::fs::rename(&v11, &v8), v12, v13, v9, v10);
                                            if let Ok(_) = v64 {
                                                println!("Everything's done 🎉");
                                            }
                                        },
                                    }
                                }
                            }
                            goto LABEL_75fb33;
                        }
                    }
                    v29 = core::fmt::rt::Argument {
                        ty: &v26
                    };
                    v49 = core::fmt::Arguments {
                        pieces: ["Target index ", " not found!"]
                        args: [v30]
                        fmt: 0
                    };
                    v68 = anyhow::__private::format_err(&v49);
                } else {
                    v69 = *((&v29 as &char + 16) as &i8);
                    v57 = v35;
                    v56 = *((&v29 as &char + 17) as &i32) as u32;
                    v49 = v67;
                    v53 = v32;
                    v54 = v33;
                    v55 = v69;
                    v68 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v49);
                }
                v64 = v68;
            }
        }
    }
LABEL_75fb33:
    return v64;
}
