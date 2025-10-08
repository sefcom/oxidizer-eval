fn meilitool::upgrade::v1_11::v1_10_to_v1_11(a0: u64, a1: u64) -> long long {
    let v0: Result<struct24, struct13>;  // [bp-0x1e8], Other Possible Types: struct24, u128
    let v1: struct24;  // [bp-0x1e8]
    let v2: Result<struct24, struct16>;  // [bp-0x1e8]
    let v3: Result<struct24, struct16>;  // [bp-0x1e8]
    let v4: struct33;  // [bp-0x1e8]
    let v5: struct12;  // [bp-0x1e8]
    let v6: u32;  // [bp-0x1e4]
    let v7: void*;  // [bp-0x1e0], Other Possible Types: u64
    let v8: void*;  // [bp-0x1e0]
    let v9: u64;  // [bp-0x1d8]
    let v10: u32;  // [bp-0x1d4]
    let v12: void*;  // [bp-0x1a8], Other Possible Types: Result<struct12, struct8>, struct32, u32
    let v13: struct32;  // [bp-0x1a8], Other Possible Types: u128
    let v14: Result<struct12, struct8>;  // [bp-0x1a8]
    let v15: Result<struct24, struct12>;  // [bp-0x1a8]
    let v16: struct24;  // [bp-0x1a8]
    let v17: void*;  // [bp-0x1a8]
    let v19: struct24;  // [bp-0x1a8]
    let v20: u128;  // [bp-0x1a8]
    let v21: u32;  // [bp-0x1a4]
    let v22: void*;  // [bp-0x1a0], Other Possible Types: u64
    let v23: u64;  // [bp-0x198]
    let v24: u32;  // [bp-0x198]
    let v25: u32;  // [bp-0x197]
    let v26: u32;  // [bp-0x194]
    let v27: u64;  // [bp-0x190]
    let v28: u32;  // [bp-0x188]
    let v29: void*;  // [bp-0x168]
    let v30: u64;  // [bp-0x158]
    let v31: u64;  // [bp-0x150]
    let v32: u64;  // [bp-0x148]
    let v33: u128;  // [bp-0x148]
    let v34: struct24;  // [bp-0x148]
    let v35: void*;  // [bp-0x140]
    let v36: u64;  // [bp-0x138]
    let v37: u64;  // [bp-0x130]
    let v38: void*;  // [bp-0x128]
    let v39: u64;  // [bp-0x120]
    let v40: struct24;  // [bp-0x118]
    let v41: u64;  // [bp-0xf8]
    let v42: iNone;  // [bp-0xf0]
    let v45: void*;  // [bp-0xd0]
    let v46: struct24;  // [bp-0xc8]
    let v47: u64;  // [bp-0xc0]
    let v48: u64;  // [bp-0xb8]
    let v49: struct48;  // [bp-0xb0], Other Possible Types: u64
    let v50: u64;  // [bp-0xa8]
    let v51: iNone;  // [bp-0xa0]
    let v52: u64;  // [bp-0x90]
    let v53: u64;  // [bp-0x88]
    let v54: u64;  // [bp-0x80]
    let v55: u64;  // [bp-0x78]
    let v56: struct32;  // [bp-0x70]
    let v57: void*;  // [bp-0x50]
    let v58: u64;  // [bp-0x48]
    let v60: void*;  // rdx
    let v61: void*;  // r12
    let v62: u32;  // rcx
    let v63: u64;  // r8
    let v64: void*;  // r13
    let v65: u32;  // eax
    let v66: u64;  // rax
    let v67: void*;  // rbp
    let v68: u64;  // rax
    let v69: u32;  // eax
    let v70: u128;  // xmm0
    let v71: u8;  // sil
    let v72: struct24;  // [bp-0x160]

    println!("Upgrading from v1.10.0 to v1.11.0");
    v46 = std::path::Path::join(a0, a1, "tasks");
    v12 = 0;
    v23 = 0;
    v28 = 0;
    v27 = 429496729601;
    heed::envs::env_open_options::EnvOpenOptions<T>::open(&v0, &v12 as u384, &v46);
    v61 = v60;
    if !(anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v0, v47, v48) & 1) {
        v29 = v60;
        v13 = heed::txn::RoTxn<T>::new(&v29, v60, v62, v63);
        v0 = *(&v12.field_8 as &i128);
        v9 = 429496729601;
        if v12.field_0 as i32 == 1 {
            v23 = v9;
            v13 = v0;
            v61 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v13);
        } else {
            v40 = v0;
            v14 = meilitool::try_opening_database(&v29, &v40);
            v61 = v22;
            if let Ok(_) = v14 {
                v15 = heed::databases::database::Database<KC,DC,C,CDUP>::len(v22, *((&v14 as &char + 16) as &i32) as u32 as u64, &v40);
                v64 = v60;
                if !(anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v15) as u8 & 1) {
                    v45 = v60;
                    v0 = heed::databases::database::Database<KC,DC,C,CDUP>::iter(v22, *((&v14 as &char + 16) as &i32) as u32 as u64, &v40);
                    v65 = v0 as i32;
                    if v65 == 5 {
                        core::iter::traits::iterator::Iterator::collect(&v58, v7, *((&v0 as &char + 16) as &i8) as u8 as u64);
                        v56 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v58);
                        v57 = 0;
                        v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v56);
                        v66 = v50;
                        if v50 != 9223372036854775809 {
                            do {
                                v7 = v7;
                                if v66 == 0x8000000000000000 {
                                    *(&v20 as void*) = v51;
                                    v23 = v52;
                                    v64 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v15);
                                    goto LABEL_757ec4;
                                }
                                v42 = v51;
                                v41 = v66;
                                v54 = v52;
                                v55 = v53;
                                v1 = std::path::Path::join(a0, a1, "indexes");
                                v16 = <T as alloc::string::SpecToString>::spec_to_string(&v54);
                                v72 = std::path::Path::join(v7, v1.field_16, &v16);
                                v37 = v49 + 1;
                                v33 = *(&v30 as &i128) as u128;
                                println!("[{}/{}]Updating embeddings for `{}` at `{}`", &v37, &v45, &v41, &v32);
                                v17 = 0 as void*;
                                v24 = 0 as u32;
                                v28 = 0;
                                v27 = 107374182401;
                                heed::envs::env_open_options::EnvOpenOptions<T>::open(&v1 as u384, &v17 as u128, &v72);
                                v64 = v60;
                                if (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v1 as u384, v30, v31, &v41) as u8 & 1) {
                                    goto LABEL_757ec4;
                                }
                                v2 as u64 = v60;
                                v12 = heed::txn::RoTxn<T>::new(&v2 as u64, v60, v62, v63);
                                v2 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v12, v30, v31, &v41);
                                v64 = v8;
                                if v2 as i64 == 2 {
                                    goto LABEL_757ec4;
                                }
                                v37 = v2 as i64;
                                v38 = v64;
                                v39 = *((&v2 as &char + 16) as &i64);
                                v12 = meilitool::try_opening_poly_database(&v2 as u64, &v37, "vector-arroy");
                                anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v2, &v12, &v41);
                                v64 = v8;
                                if (v2 as i8 & 1) {
                                    goto LABEL_757ec4;
                                }
                                v13 = heed::txn::RwTxn::new(&v2 as u64, v60, v62, v63);
                                v3 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v13, v30, v31, &v41);
                                v67 = v8;
                                match v3 {
                                    Ok(_) => {
                                        v32 = v3 as i64;
                                        v35 = v67;
                                        v36 = *((&v3 as &char + 16) as &i64);
                                        v12 as u192 = meilitool::try_opening_poly_database(&v2 as u64, &v32, "vector-arroy");
                                        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v3, &v12 as u192, &v41);
                                        v67 = v8;
                                        if (v3 as i8 & 1) {
                                            goto LABEL_757e83;
                                        }
                                        v4 = arroy::upgrade::cosine_from_0_4_to_0_5(&v37, v8, *((&v3 as &char + 16) as &i32) as u32 as u64, &v32, v8, *((&v3 as &char + 16) as &i32));
                                        v68 = v4.field_0;
                                        if v68 != 9223372036854775819 {
                                            v70 = *(&v4.field_8 as &i128);
                                            v27 = *(&v4.field_24 as &i128) as u128;
                                            v22 = v70;
                                            v12 = v68;
                                            v67 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v12 as u192);
                                            goto LABEL_757e83;
                                        }
                                        v19 = v34;
                                        v5 = heed::txn::RwTxn::commit(&v19);
                                        v69 = v5.field_0 as i32;
                                        if v69 != 5 {
                                            v26 = v10;
                                            v21 = *(&v6 as &i128) as u128;
                                            v12 = v69;
                                            v67 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v12);
                                            goto LABEL_757e83;
                                        }
                                    },
                                    Err(_) => {
LABEL_757e83:
                                        v64 = v67;
                                        goto LABEL_757ec4;
                                    },
                                }
                                v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v56);
                                v66 = v50;
                                v7 = v8;
                            } while (v50 != 9223372036854775809);
                        }
                        goto LABEL_757eee;
                    } else {
                        v71 = *((&v0 as &char + 16) as &i8);
                        v26 = v10;
                        v25 = *((&v0 as &char + 17) as &i32) as u32;
                        v12 = v65;
                        v21 = v6;
                        v22 = v7;
                        v23 = v71;
                        v64 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v12);
                    }
                }
LABEL_757ec4:
                v61 = v64;
            }
        }
    }
LABEL_757eee:
    return v61;
}
