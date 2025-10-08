fn meilitool::clear_task_queue(a0: i64) -> long long {
    let v0: void*;  // [bp-0x1d8], Other Possible Types: struct32, struct24
    let v1: core::fmt::Arguments;  // [bp-0x1d8], Other Possible Types: Result<struct12, struct8>, u32
    let v2: Result<struct24, struct12>;  // [bp-0x1d8]
    let v3: struct9;  // [bp-0x1d8]
    let v4: u128;  // [bp-0x1d0]
    let v5: core::fmt::rt::Argument;  // [bp-0x1c8], Other Possible Types: u32
    let v6: u32;  // [bp-0x1c8]
    let v7: core::fmt::rt::Argument;  // [bp-0x1c0]
    let v8: core::fmt::rt::Argument;  // [bp-0x1b8]
    let v9: u64;  // [bp-0x1a0]
    let v10: core::fmt::Arguments;  // [bp-0x198]
    let v11: struct24;  // [bp-0x198]
    let v12: core::fmt::Arguments;  // [bp-0x188]
    let v13: u64;  // [bp-0x180]
    let v14: core::fmt::rt::Argument;  // [bp-0x174]
    let v15: core::fmt::rt::Argument;  // [bp-0x170]
    let v16: u32;  // [bp-0x16c]
    let v17: u32;  // [bp-0x168]
    let v18: core::fmt::rt::Argument;  // [bp-0x164]
    let v19: core::fmt::rt::Argument;  // [bp-0x160]
    let v20: u32;  // [bp-0x15c]
    let v21: core::fmt::Arguments;  // [bp-0x158], Other Possible Types: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>, struct12, u8
    let v22: struct9;  // [bp-0x158]
    let v23: u64;  // [bp-0x150]
    let v24: core::fmt::rt::Argument;  // [bp-0x148]
    let v25: iNone;  // [bp-0x140]
    let v26: void*;  // [bp-0x120]
    let v27: struct24;  // [bp-0x118]
    let v28: u64;  // [bp-0x110]
    let v29: u64;  // [bp-0x108]
    let v30: struct16;  // [bp-0x100]
    let v31: core::fmt::rt::Argument;  // [bp-0xf0]
    let v32: core::fmt::rt::Argument;  // [bp-0xe8]
    let v33: struct16;  // [bp-0xe0]
    let v34: struct16;  // [bp-0xd8]
    let v35: core::fmt::rt::Argument;  // [bp-0xd0]
    let v36: core::fmt::Arguments;  // [bp-0xc8]
    let v37: struct24;  // [bp-0xc0]
    let v38: u64;  // [bp-0xb8]
    let v39: u64;  // [bp-0xb0]
    let v40: u64;  // [bp-0xa8]
    let v41: u64;  // [bp-0xa0]
    let v42: i64;  // [bp-0x98]
    let v43: u64;  // [bp-0x90]
    let v44: u128;  // [bp-0x90]
    let v45: u64;  // [bp-0x90]
    let v46: u64;  // [bp-0x80]
    let v47: alloc::string::String;  // [bp-0x78]
    let v48: alloc::string::String;  // [bp-0x78]
    let v49: u128;  // [bp-0x78]
    let v50: u64;  // [bp-0x58]
    let v51: u64;  // [bp-0x58]
    let v52: struct24;  // [bp-0x58]
    let v53: alloc::string::String;  // [bp-0x50]
    let v54: u128;  // [bp-0x40]
    let v56: u64;  // r14
    let v57: u64;  // r15
    let v58: u64;  // rdx
    let v59: core::fmt::Arguments;  // r12
    let v60: u32;  // rcx
    let v61: u64;  // r8
    let v62: struct24;  // r13
    let v63: struct16;  // rax
    let v64: void*;  // r14
    let v65: u64;  // rax

    v56 = *((a0 + 8) as &i64);
    v57 = *((a0 + 16) as &i64);
    v37 = std::path::Path::join(v56, v57, "tasks");
    v0 = 0;
    v6 = 0;
    v8 = 0;
    v7 = 429496729601;
    heed::envs::env_open_options::EnvOpenOptions<T>::open(&v21, &v0 as u8, &v37);
    if (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v21, v38, v39) & 1) {
LABEL_75b5a5:
        return v58;
    }
    v9 = v58;
    eprintln!("Deleting tasks from the database...");
    v1 as u256 = heed::txn::RwTxn::new(&v9, v58, v60, v61);
    *(&v21.pieces.ptr as &i128) = *(&v0.field_8 as &i128);
    v24 = 429496729601;
    if v0.field_0 as i32 == 1 {
        v5 = v24;
        *(&v1.pieces.ptr as &i128) = *(&v21.pieces.ptr as &i128);
        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v1 as u256);
        return v58;
    }
    v12 = v24;
    v10 = *(&v21.pieces.ptr as &i128);
    v1 = meilitool::try_opening_poly_database(&v9, &v10, "all-tasks");
    if let Err(_) = v1 {
        return v58;
    }
    v2 = heed::databases::database::Database<KC,DC,C,CDUP>::len(v59, v5, &v10);
    match v2 {
        Err(_) => {
            v40 = v4;
            v1 = meilitool::try_opening_poly_database(&v9, &v10, "status");
            v62 = v4;
            if let Err(_) = v1 {
                return v62;
            }
            v20 = v5;
            v1 = meilitool::try_opening_poly_database(&v9, &v10, "kind");
            v63 = v4;
            if let Ok(_) = v1 {
                v36 = v63;
                v19 = v5;
                v1 = meilitool::try_opening_poly_database(&v9, &v10, "index-tasks");
                v63 = v4;
                if let Ok(_) = v1 {
                    v35 = v63;
                    v18 = v5;
                    v1 = meilitool::try_opening_poly_database(&v9, &v10, "canceled_by");
                    v63 = v4;
                    if let Ok(_) = v1 {
                        v34 = v63;
                        v17 = v5;
                        v1 = meilitool::try_opening_poly_database(&v9, &v10, "enqueued-at");
                        v63 = v4;
                        if let Ok(_) = v1 {
                            v33 = v63;
                            v16 = v5;
                            v1 = meilitool::try_opening_poly_database(&v9, &v10, "started-at");
                            v63 = v4;
                            if let Ok(_) = v1 {
                                v32 = v63;
                                v15 = v5;
                                v1 = meilitool::try_opening_poly_database(&v9, &v10, "finished-at");
                                v63 = v4;
                                if let Ok(_) = v1 {
                                    v31 = v63;
                                    v14 = v5;
                                    meilitool::try_clearing_poly_database(&v10, v59, v5 as u64, "all-tasks");
                                    if !v63 {
                                        meilitool::try_clearing_poly_database(&v10, v62, v20 as u64, "status");
                                        if !v62 {
                                            meilitool::try_clearing_poly_database(&v10, v36, v19 as u64, "kind");
                                            if !v62 {
                                                meilitool::try_clearing_poly_database(&v10, v35, v18 as u64, "index-tasks");
                                                if !v62 {
                                                    meilitool::try_clearing_poly_database(&v10, v34, v17 as u64, "canceled_by");
                                                    if !v62 {
                                                        meilitool::try_clearing_poly_database(&v10, v33, v16 as u64, "enqueued-at");
                                                        if !v62 {
                                                            meilitool::try_clearing_poly_database(&v10, v32, v15 as u64, "started-at");
                                                            if !v62 {
                                                                meilitool::try_clearing_poly_database(&v10, v31, v14 as u64, "finished-at");
                                                                if !v62 {
                                                                    v0 = v11;
                                                                    v21 = heed::txn::RwTxn::commit(&v0);
                                                                    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v21, "While committing the transaction");
                                                                    if v58 {
                                                                        return v58;
                                                                    }
                                                                    eprintln!("Successfully deleted {} tasks from the tasks database!", &v40);
                                                                    eprintln!("Deleting the content files from disk...");
                                                                    v26 = 0;
                                                                    v27 = std::path::Path::join(v56, v57, "update_files");
                                                                    v3 = std::fs::read_dir(&v27);
                                                                    v22 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v3.field_0, *(&v3.field_8 as &i32) as i8, v28, v29);
                                                                    if v22.field_8 != 2 {
                                                                        v30 = struct16 {
                                                                            field_0: v22.field_0
                                                                            field_8: v22.field_8
                                                                        };
                                                                        loop {
                                                                            v21 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v30);
                                                                            if let None = v21 {
                                                                                break;
                                                                            }
                                                                            if v23 {
                                                                                v41 = v23;
                                                                                v42 = v51;
                                                                                v46 = *((&v21 as &char + 40) as &i64);
                                                                                *(&v44 as void*) = v25;
                                                                                v0 = std::fs::DirEntry::path(&v41);
                                                                                v65 = std::fs::remove_file(&v0);
                                                                                if !v65 {
                                                                                    v26 = v64;
                                                                                } else {
                                                                                    v13 = v65;
                                                                                    v52 = std::fs::DirEntry::path(&v41);
                                                                                    v54 = v53;
                                                                                    eprintln!("Error while deleting {}: {}", &v54, &v13);
                                                                                    v47 = v48;
                                                                                }
                                                                                v47 = v47;
                                                                            } else {
                                                                                v51 = v42;
                                                                                v49 = *(&v28 as &i128) as u128;
                                                                                eprintln!("Error while reading a file in {}: {}", &v49 as u64, &v51);
                                                                                v43 = v45;
                                                                                v50 = v51;
                                                                            }
                                                                        }
                                                                        eprintln!("Successfully deleted {} content files from disk!", &v26);
                                                                    }
                                                                    goto LABEL_75b5a5;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        },
        Ok(_) => {
            v1 = v2 as i32;
            v4 = *((&v2 as &char + 8) as &i128) as u128;
            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v1);
        },
    }
    v62 = v63;
    return v58;
}
