fn meilitool::hair_dryer(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: i64;  // [bp-0x700]
    let v1: u32;  // [bp-0x6f4]
    let v2: core::fmt::Arguments;  // [bp-0x6f0]
    let v3: struct16;  // [bp-0x6e0]
    let v4: u64;  // [bp-0x6c8]
    let v5: struct16;  // [bp-0x6c0]
    let v6: struct16;  // [bp-0x6b8]
    let v7: struct24;  // [bp-0x6a8]
    let v8: u128;  // [bp-0x688]
    let v9: u64;  // [bp-0x678]
    let v10: u64;  // [bp-0x668]
    let v11: u64;  // [bp-0x660]
    let v12: void*;  // [bp-0x658]
    let v13: u64;  // [bp-0x650]
    let v14: u8;  // [bp-0x648]
    let v15: u64;  // [bp-0x640]
    let v16: u64;  // [bp-0x638]
    let v17: struct24;  // [bp-0x630]
    let v18: u64;  // [bp-0x628]
    let v19: u64;  // [bp-0x620]
    let v20: void*;  // [sp-0x618]
    let v22: struct48;  // [bp-0x618]
    let v24: struct16;  // [bp-0x610]
    let v25: struct16;  // [bp-0x610]
    let v26: u32;  // [sp-0x608]
    let v29: struct48;  // [bp-0x600], Other Possible Types: u32
    let v30: struct48;  // [sp-0x5f8], Other Possible Types: u32
    let v33: struct24;  // [bp-0x5f0]
    let v34: struct24;  // [bp-0x5f0]
    let v35: u64;  // [bp-0x5e8]
    let v36: u8;  // [bp-0x5e0]
    let v37: core::fmt::rt::Argument;  // [bp-0x5d8]
    let v38: iNone;  // [bp-0x5d8]
    let v39: core::fmt::rt::Argument;  // [bp-0x5d0]
    let v40: core::fmt::Arguments;  // [bp-0x5c8]
    let v41: void*;  // [bp-0x5b8], Other Possible Types: core::fmt::rt::Argument, u32
    let v42: struct16;  // [bp-0x5b8], Other Possible Types: struct24, struct32, struct464, u32
    let v43: u128;  // [bp-0x5b8]
    let v44: Result<struct12, struct8>;  // [bp-0x5b8]
    let v45: Result<struct24, struct12>;  // [bp-0x5b8]
    let v46: struct32;  // [bp-0x5b8]
    let v47: Result<struct24, struct12>;  // [bp-0x5b8]
    let v48: u32;  // [bp-0x5b4]
    let v49: core::fmt::Arguments;  // [bp-0x5b0], Other Possible Types: u64
    let v50: core::fmt::Arguments;  // [bp-0x5b0], Other Possible Types: u64
    let v51: u64;  // [bp-0x5b0]
    let v52: struct24;  // [bp-0x5a8], Other Possible Types: u8
    let v53: u32;  // [bp-0x5a7]
    let v54: core::fmt::rt::Argument;  // [bp-0x5a4], Other Possible Types: u32
    let v55: u64;  // [bp-0x5a0]
    let v56: u32;  // [bp-0x598]
    let v57: Result<struct24, struct13>;  // [bp-0x3e8], Other Possible Types: u8
    let v58: struct24;  // [bp-0x3e8]
    let v59: Result<struct464, struct16>;  // [bp-0x3e8]
    let v60: u128;  // [bp-0x3e8]
    let v61: Result<struct24, struct13>;  // [bp-0x3e8]
    let v62: u32;  // [bp-0x3e4]
    let v63: &str;  // [bp-0x3e0], Other Possible Types: int, u64
    let v64: &str;  // [bp-0x3e0], Other Possible Types: u64
    let v65: u64;  // [bp-0x3d8]
    let v66: core::fmt::rt::Argument;  // [bp-0x3d4], Other Possible Types: u32
    let v67: u128;  // [bp-0x218]
    let v68: u64;  // [bp-0x200]
    let v69: struct32;  // [bp-0x1f8]
    let v70: u2752;  // [bp-0x1f0]
    let v71: Result<struct24, struct16>;  // [bp-0x98]
    let v72: u8;  // [bp-0x90]
    let v74: i64;  // r12
    let v75: i64;  // r13
    let v76: u64;  // rdx
    let v78: u64;  // r8
    let v82: u32;  // eax
    let v84: u64;  // r15
    let v85: i64;  // rdi
    let v86: i64;  // rsi
    let v91: u32;  // eax
    let v92: u64;  // rdi
    let v93: u64;  // r15
    let v104: struct16;  // rax
    let v105: u8;  // sil
    let v106: u8;  // sil
    let v107: struct24;  // [bp-0x670]
    let v108: core::fmt::Arguments;  // [bp-0x3d7]

    v17 = std::path::Path::join(*((a0 + 8) as &i64), *((a0 + 16) as &i64), "tasks");
    v41 = 0;
    v52 = 0;
    v56 = 0;
    v55 = 429496729601;
    heed::envs::env_open_options::EnvOpenOptions<T>::open(&v57, &v41, &v17);
    if (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v57, v18, v19) & 1) {
        return v104;
    }
    v2 = v76;
    eprintln!("Trying to get a read transaction on the index scheduler...");
    v43 = heed::txn::RoTxn<T>::new(&v2, a2, a3, v78);
    *(&v57 as &i32) = vvar_1381{stack -1456};
    v65 = 429496729601;
    if v42.field_0 as i32 == 1 {
        v52 = v65;
        v43 = v57;
        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v43);
    } else {
        v7 = v57;
        v44 = meilitool::try_opening_database(&v2, &v7);
        if let Ok(_) = v44 {
            v57 = heed::databases::database::Database<KC,DC,C,CDUP>::iter(v50, *((&v44 as &char + 16) as &i32) as u32 as u64, &v7);
            v82 = v57 as i32;
            if v82 == 5 {
                v3 = v63;
                v15 = v84;
                v0 = a0;
                loop {
                    <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(v85, v86);
                    if *(&v36 as &i32) != 1 {
                        break;
                    }
                    if v37 {
                        v67 = v40;
                        v6 = v38;
                        v42 = struct16 {
                            field_0: a1
                            field_8: v15
                        };
                        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v42, &v6) {
                            v58 = std::path::Path::join(v74, v75, "indexes");
                            v42 = <T as alloc::string::SpecToString>::spec_to_string(&v67);
                            v107 = std::path::Path::join(v64, v58.field_16, &v42);
                            v20 = 0;
                            v26 = 0;
                            v29 = 0;
                            v30 = 0;
                            v42 = milli::index::Index::new(&v20, &v107);
                            v59 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v42, v10, v11);
                            if let Err(_) = v59 {
                                break;
                            }
                            memcpy(&v70, &v59 as u8, 448);
                            v68 = v59 as i64;
                            v69 = v104;
                            eprintln!("Trying to get a read transaction on the {} index...", &v6);
                            v46 = milli::index::Index::read_txn(&v68, a2, a3, v78);
                            v60 = *(&v46.field_8 as &i128) as u128;
                            v65 = 1 as u64;
                            if v46.field_0 as i32 != 1 {
                                v9 = v65;
                                v8 = v60;
                                v50 = v49;
                                v64 = v63;
                                if a3 {
                                    v51 = v49;
                                    v26 = 0;
                                    v29 = 0;
                                    v30 = 0;
                                    do {
                                        v50 = v51;
                                        v1 = 0;
                                        v47 = heed::databases::database::Database<KC,DC,C,CDUP>::len(v71, *(&v72 as &i32) as u32 as u64, &v8);
                                        match v47 {
                                            Ok(_) => {
                                                v41 = v47 as i32;
                                                v49 = *((&v47 as &char + 8) as &i128) as u128;
                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v41);
                                                return v104;
                                            },
                                            Err(_) => {
                                                v4 = v50;
                                                eprintln!("Hair drying hannoy for {}...", &v6);
                                                v61 = heed::databases::database::Database<KC,DC,C,CDUP>::iter(v71, *(&v72 as &i32) as u32 as u64, &v8);
                                                v91 = v61 as i32;
                                                if v91 != 5 {
                                                    v105 = *((&v61 as &char + 16) as &i8);
                                                    v54 = v66;
                                                    v53 = v108.pieces.ptr as i32 as u32;
                                                    v41 = v91;
                                                    v48 = v62;
                                                    v49 = v63;
                                                    v52 = v105;
                                                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v41);
                                                    return v104;
                                                }
                                                v16 = a3 - 1;
                                                v12 = 0;
                                                v13 = v63;
                                                v14 = *((&v61 as &char + 16) as &i8);
                                            },
                                        }
                                        loop {
                                            vvar_1379{stack -1560} = struct48 OrderedDict([(0, 𝜙@64b [((7739983, None), vvar_1108{stack -1560}), ((7739451, None), vvar_1108{stack -1560}), ((7739649, None), vvar_1108{stack -1560})]), (8, 𝜙@64b [((7739983, None), vvar_1114{stack -1552}), ((7739451, None), vvar_1114{stack -1552}), ((7739649, None), vvar_1114{stack -1552})]), (16, 𝜙@32b [((7739983, None), vvar_1109{stack -1544}), ((7739451, None), vvar_1109{stack -1544}), ((7739649, None), vvar_1109{stack -1544})]), (32, 𝜙@32b [((7739983, None), vvar_1111{stack -1528}), ((7739451, None), vvar_1111{stack -1528}), ((7739649, None), vvar_1111{stack -1528})])])
                                            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v22, &v12);
                                            if v22.field_0 as i32 != 1 {
                                                break;
                                            }
                                            v92 = *((&v22.field_8 as &char + 8) as &i64);
                                            v5 = v25;
                                            v93 = *((&v22.field_24 as &char + 8) as &i64);
                                            if v92 {
                                                v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v92, v22.field_24 as i64 + v92) as u32;
                                                v1 += v42;
                                                v45 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v49, v34 + v49) as u32;
                                                v1 += v45;
                                                if __ROR__(15170602326218735249 * v5, 4) <= 1844674407370955 {
                                                    v35 = (BinaryOp MulV) as i64;
                                                    eprintln!("Visited {}/{} ({}%) keys", &v5, &v4, &v35);
                                                }
                                            } else {
                                                v41 = v22.field_24 as i64 as u64;
                                                v49 = v93;
                                                v52 = v34;
                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v41 as u8);
                                            }
                                        }
                                        eprintln!("Done hair drying a total of at least {} bytes.", &v1);
                                        v50 = v49;
                                        v64 = v63;
                                        v24 = v25;
                                        v33 = v34;
                                        v51 = v49;
                                    } while (v16);
                                }
                                v50 = v50;
                                v64 = v64;
                            } else {
                                v52 = v65;
                                v42 = v60;
                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v46);
                                break;
                            }
                        } else {
                            eprintln!("Found index {} but it's not the right index...", &v6);
                            v50 = v49;
                            v64 = v63;
                        }
                    } else {
                        v49 = v40;
                        v41 = v39;
                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v41 as u8);
                        break;
                    }
                }
            } else {
                v106 = *((&v57 as &char + 16) as &i8);
                v54 = v66;
                v53 = *((&v57 as &char + 17) as &i32) as u32;
                v41 = v82;
                v48 = v62;
                v49 = v63;
                v52 = v106;
                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v41);
            }
        }
    }
    return v104;
}
