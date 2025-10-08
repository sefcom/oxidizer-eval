fn uu_chcon::change_file_context(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct76 {
    let a0: u64;  // rdi
    let v0: struct640;  // [sp-0x1b8]
    let v1: struct52;  // [bp-0x1b0], Other Possible Types: Result<struct24, struct16>
    let v2: struct52;  // [bp-0x1b0]
    let v3: struct56;  // [bp-0x1b0], Other Possible Types: struct52, u448
    let v4: Option<struct24>;  // [bp-0x1b0], Other Possible Types: u256
    let v5: struct52;  // [bp-0x1b0]
    let v6: struct52;  // [bp-0x1b0]
    let v7: struct52;  // [bp-0x1b0]
    let v8: struct640;  // [bp-0x1ac]
    let v9: struct640;  // [bp-0x1a8]
    let v10: u64;  // [bp-0x198]
    let v11: struct640;  // [bp-0x178]
    let v12: u64;  // [bp-0x170]
    let v13: u128;  // [sp-0x168]
    let v14: struct28;  // [bp-0x168], Other Possible Types: u64
    let v15: u128;  // [bp-0x168]
    let v16: u64;  // [bp-0x160]
    let v17: u128;  // [sp-0x158]
    let v18: struct640;  // [bp-0x158], Other Possible Types: u64
    let v19: u16;  // [bp-0x150]
    let v20: iNone;  // [sp-0x148], Other Possible Types: u128
    let v21: u64;  // [bp-0x138]
    let v22: u64;  // [bp-0x128]
    let v23: u64;  // [bp-0x118]
    let v24: u32;  // [bp-0x10c]
    let v25: u128;  // [bp-0x108]
    let v26: void*;  // [bp-0x100], Other Possible Types: u64
    let v27: u64;  // [bp-0xf8]
    let v28: struct32;  // [bp-0xe8], Other Possible Types: u128
    let v29: u128;  // [bp-0xe4]
    let v30: u128;  // [bp-0xdc]
    let v31: u64;  // [bp-0xd4]
    let v32: struct28;  // [sp-0xc0]
    let v33: struct640;  // [bp-0xb8]
    let v34: void*;  // [bp-0x78]
    let v35: u64;  // [bp-0x70]
    let v36: struct12;  // [bp-0x68]
    let v38: u64;  // rbp
    let v39: u128;  // xmm0
    let v42: u128;  // xmm0
    let v43: iNone;  // xmm2
    let v44: iNone;  // xmm3
    let v50: u64;  // xmm0lq
    let v51: struct640;  // rdx
    let v52: u64;  // xmm0lq
    let v53: u64;  // r8
    let v54: iNone;  // xmm2
    let v55: iNone;  // xmm3
    let v56: u32;  // eax
    let v57: iNone;  // xmm2
    let v58: iNone;  // xmm3
    let v59: iNone;  // xmm2
    let v60: iNone;  // xmm3
    let v61: iNone;  // xmm2
    let v62: iNone;  // xmm3
    let v67: u64;  // r12
    let v83: u32;  // [bp-0x17c]

    v38 = *((a1 + 24) as &i64);
    if 0x8000000000000000 + v38 - 1 <= 1 {
        v1 = uu_chcon::SELinuxSecurityContext::to_c_string(a2);
        match v1 {
            Ok(_) => {
                v42 = *((&v1 as &char + 4) as &i128);
                v43 = *((&v1 as &char + 32) as &i128);
                v44 = *((&v1 as &char + 48) as &i128);
                v30 = *((&v1 as &char + 16) as &i128) as u128;
                v28 = v42;
                return struct80 {
                    field_0: v1 as i32
                    field_4: <UNKNOWN>
                    field_16: <UNKNOWN>
                    field_32: <UNKNOWN>
                    field_48: <UNKNOWN>
                    field_64: <UNKNOWN>
                };
            },
            Err(_) => {
                v31 = v10;
                v39 = *((&v1 as &char + 8) as &i128);
                v29 = v39;
                v22 = v39;
                v23 = v31;
                if v22 as i32 == 2 {
                    uu_chcon::errors::Error::from_io1(a0, "Setting security context", a3, a4);
                    return;
                }
                v27 = v31;
                v25 = v29;
                v18 = v26;
                v14 = 1;
                v16 = v27 - 1;
                v19 = 0;
                v2 = selinux::SecurityContext::set_for_path(v26, a3, a4, *((a1 + 122) as &i8) as u8 as u64);
                if v2.field_0 != 10 {
                    return struct72 {
                        field_0: *(&v2.field_0 as &i128)
                        field_16: *(&v2.field_16 as &i128)
                        field_32: v2.field_32
                        field_48: v2.field_48
                        field_56: &g_41b8d2
                        field_64: 24
                    };
                }
                return struct4 {
                    field_0: 18
                };
            },
        }
    } else {
        v24 = *((a1 + 122) as &i8);
        v3 = selinux::SecurityContext::of_path(a3, a4, *((a1 + 122) as &i8));
        if v3.field_0 != 10 {
            return struct72 {
                field_0: *(&v3.field_0 as &i128)
                field_16: *((&v3.field_8 as &char + 8) as &i128)
                field_32: *((&v3.field_24 as &char + 8) as &i128)
                field_48: *((&v3.field_40 as &char + 8) as &i64)
                field_56: &g_41b86a
                field_64: 24
            };
        } else if v3.field_8 as i32 == 2 {
            uu_chcon::errors::Error::from_io1(a0, "Applying partial security context to unlabeled file", a3, a4);
            return;
        } else {
            v28 = struct32 {
                field_0: v3.field_8
                field_16: v3.field_24
            };
            v14 = selinux::SecurityContext::to_c_string(&v28);
            if v14.field_0 != 10 {
                return struct72 {
                    field_0: *(&v14.field_0 as &i128)
                    field_16: *(&v14.field_16 as &i128)
                    field_32: v20
                    field_48: v21
                    field_56: &g_41b86a
                    field_64: 24
                };
            } else if v14.field_8 as i32 == 2 {
                v1 = uu_chcon::errors::Error::from_io1("Applying partial security context to unlabeled file", a3, a4);
                return struct72 {
                    field_0: *(&v1.field_0 as &i128)
                    field_16: *(&v1.field_16 as &i128)
                    field_32: v1.field_32
                    field_48: *(&v10 as &i128)
                    field_64: v12
                };
            } else {
                v27 = v14.field_24;
                v25 = *(&v14.field_8 as &i128);
                v34 = v26;
                v35 = v27;
                v36 = selinux::OpaqueSecurityContext::from_c_str(v26);
                if v36.field_0 != 10 {
                    v3 = uu_chcon::change_file_context::{{closure}}(a3, a4, &v36);
                    v50 = *(&v3.field_0 as &i64);
                    v15 = *(&v3.field_16 as &i128);
                    v18 = v3.field_32;
                    v20 = *(&v10 as &i128);
                    v21 = v12;
                    if v3.field_0 != 18 {
                        return struct72 {
                            field_0: v50
                            field_8: v9
                            field_16: v15
                            field_32: v18
                            field_48: v20
                            field_64: v21
                        };
                    }
                }
                v22 = v9;
                if v38 != 0x8000000000000000 {
                    v32 = uu_chcon::os_str_to_c_string(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
                    if v32.field_0 == 18 {
                        v51 = v33;
                    } else {
                        v3 = uu_chcon::change_file_context::{{closure}}(a3, a4, &v32);
                        v51 = v9;
                        v54 = *((&v3.field_32 as &char + 8) as &i128);
                        v55 = *(&v11 as &i128);
                        v13 = *(&v3.field_24 as &i128);
                        *(&v17 as void*) = v54;
                        v20 = v55;
                        if v3.field_0 != 18 {
                            return struct72 {
                                field_0: v52
                                field_8: v51
                                field_16: v53
                                field_24: v13
                                field_40: v17
                                field_56: v20
                            };
                        }
                    }
                    v0 = v51;
                    v4 = selinux::OpaqueSecurityContext::set_user(&v22, v51);
                    if let Some(_) = v4 {
                        return struct80 {
                            field_0: v56
                            field_4: <UNKNOWN>
                            field_20: <UNKNOWN>
                            field_36: <UNKNOWN>
                            field_52: &g_41b8b5
                            field_56: 29
                            field_64: <UNKNOWN>
                        };
                    }
                }
                if *((a1 + 48) as &i64) != 0x8000000000000000 {
                    v32 = uu_chcon::os_str_to_c_string(*((a1 + 56) as &i64), *((a1 + 64) as &i64));
                    if v32.field_0 == 18 {
                        v51 = v33;
                    } else {
                        v5 = uu_chcon::change_file_context::{{closure}}(a3, a4, &v32);
                        v51 = v9;
                        v57 = *((&v5.field_32 as &char + 8) as &i128);
                        v58 = *(&(&v10)[4] as &i128);
                        v13 = *(&v5.field_24 as &i128);
                        *(&v17 as void*) = v57;
                        v20 = v58;
                        if v5.field_0 != 18 {
                            return struct72 {
                                field_0: v52
                                field_8: v51
                                field_16: v53
                                field_24: v13
                                field_40: v17
                                field_56: v20
                            };
                        }
                    }
                    v0 = v51;
                    v4 = selinux::OpaqueSecurityContext::set_role(&v22, v51);
                    if let Some(_) = v4 {
                        return struct80 {
                            field_0: v56
                            field_4: <UNKNOWN>
                            field_20: <UNKNOWN>
                            field_36: <UNKNOWN>
                            field_52: &g_41b8b5
                            field_56: 29
                            field_64: <UNKNOWN>
                        };
                    }
                }
                if *((a1 + 72) as &i64) != 0x8000000000000000 {
                    v32 = uu_chcon::os_str_to_c_string(*((a1 + 80) as &i64), *((a1 + 88) as &i64));
                    if v32.field_0 == 18 {
                        v51 = v33;
                    } else {
                        v6 = uu_chcon::change_file_context::{{closure}}(a3, a4, &v32);
                        v51 = v9;
                        v59 = *((&v6.field_32 as &char + 8) as &i128);
                        v60 = *(&(&v10)[4] as &i128);
                        v13 = *(&v6.field_24 as &i128);
                        *(&v17 as void*) = v59;
                        v20 = v60;
                        if v6.field_0 != 18 {
                            return struct72 {
                                field_0: v52
                                field_8: v51
                                field_16: v53
                                field_24: v13
                                field_40: v17
                                field_56: v20
                            };
                        }
                    }
                    v0 = v51;
                    v4 = selinux::OpaqueSecurityContext::set_type(&v22, v51);
                    if let Some(_) = v4 {
                        return struct80 {
                            field_0: v56
                            field_4: <UNKNOWN>
                            field_20: <UNKNOWN>
                            field_36: <UNKNOWN>
                            field_52: &g_41b8b5
                            field_56: 29
                            field_64: <UNKNOWN>
                        };
                    }
                }
                if *((a1 + 96) as &i64) != 0x8000000000000000 {
                    v32 = uu_chcon::os_str_to_c_string(*((a1 + 104) as &i64), *((a1 + 112) as &i64));
                    if v32.field_0 == 18 {
                        v51 = v33;
                    } else {
                        v7 = uu_chcon::change_file_context::{{closure}}(a3, a4, &v32);
                        v51 = v9;
                        v61 = *((&v7.field_32 as &char + 8) as &i128);
                        v62 = *(&(&v10)[4] as &i128);
                        v13 = *(&v7.field_24 as &i128);
                        *(&v17 as void*) = v61;
                        v20 = v62;
                        if v7.field_0 != 18 {
                            return struct72 {
                                field_0: v52
                                field_8: v51
                                field_16: v53
                                field_24: v13
                                field_40: v17
                                field_56: v20
                            };
                        }
                    }
                    v0 = v51;
                    v4 = selinux::OpaqueSecurityContext::set_range(&v22, v51);
                    if let Some(_) = v4 {
                        return struct80 {
                            field_0: v56
                            field_4: <UNKNOWN>
                            field_20: <UNKNOWN>
                            field_36: <UNKNOWN>
                            field_52: &g_41b8b5
                            field_56: 29
                            field_64: <UNKNOWN>
                        };
                    }
                }
                v1 = selinux::OpaqueSecurityContext::to_c_string(&v22);
                match v1 {
                    Ok(_) => {
                        return struct72 {
                            field_0: v7.field_0
                            field_4: v8
                            field_8: *((&v1 as &char + 8) as &i128)
                            field_24: *((&v3 as &char + 24) as &i128)
                            field_40: *((&v7.field_32 as &char + 8) as &i128)
                            field_56: &g_41b86a
                            field_64: 24
                        };
                    },
                    Err(_) => {
                        v67 = *((&v1 as &char + 16) as &i64) - 1;
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v34, v35 - 1, v9, v67) as u8 {
                            return struct4 {
                                field_0: 18
                            };
                        }
                        v18 = v9;
                        v14 = 1;
                        v16 = v67;
                        v19 = 0;
                        v2 = selinux::SecurityContext::set_for_path(v9, a3, a4, v24 as u64);
                        if v2.field_0 != 10 {
                            return struct72 {
                                field_0: *(&v2.field_0 as &i128)
                                field_16: *(&v2.field_16 as &i128)
                                field_32: v2.field_32
                                field_48: v2.field_48
                                field_56: &g_41b8d2
                                field_64: 24
                            };
                        }
                        return struct4 {
                            field_0: 18
                        };
                    },
                }
            }
        }
    }
}
