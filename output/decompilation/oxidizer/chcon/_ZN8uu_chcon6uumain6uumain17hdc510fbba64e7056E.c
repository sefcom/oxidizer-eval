fn uu_chcon::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct28;  // [bp-0x598]
    let v1: struct24;  // [bp-0x598], Other Possible Types: u128
    let v2: u128;  // [bp-0x594]
    let v3: u64;  // [bp-0x590]
    let v4: u128;  // [bp-0x588]
    let v5: u128;  // [bp-0x584]
    let v6: u32;  // [bp-0x578]
    let v7: struct28;  // [bp-0x568], Other Possible Types: struct56, u64
    let v8: Result<struct48, struct16>;  // [bp-0x568]
    let v9: u64;  // [bp-0x568]
    let v10: u128;  // [bp-0x560]
    let v11: u128;  // [bp-0x558]
    let v12: core::fmt::rt::Argument;  // [bp-0x550], Other Possible Types: u8
    let v13: u128;  // [bp-0x548]
    let v14: u32;  // [bp-0x544]
    let v15: iNone;  // [bp-0x538]
    let v16: u64;  // [bp-0x528]
    let v17: struct124;  // [bp-0x518], Other Possible Types: struct24, struct28
    let v18: struct26;  // [bp-0x518], Other Possible Types: u32
    let v19: struct52;  // [bp-0x518]
    let v20: u128;  // [bp-0x518]
    let v21: struct24;  // [bp-0x514]
    let v22: u128;  // [bp-0x508]
    let v23: u128;  // [bp-0x504]
    let v24: u128;  // [bp-0x4f8]
    let v25: u32;  // [bp-0x4f4]
    let v26: u128;  // [bp-0x4f0]
    let v27: u128;  // [bp-0x4e8]
    let v28: u64;  // [bp-0x4e0]
    let v29: u64;  // [bp-0x4d8]
    let v30: u64;  // [bp-0x4d0]
    let v31: iNone;  // [bp-0x4c8]
    let v32: iNone;  // [bp-0x4b8]
    let v33: u8;  // [bp-0x490]
    let v34: struct16;  // [bp-0x478], Other Possible Types: struct24
    let v35: u64;  // [bp-0x478]
    let v36: iNone;  // [bp-0x468]
    let v37: iNone;  // [bp-0x448]
    let v38: struct24;  // [bp-0x438]
    let v39: u128;  // [bp-0x428]
    let v40: struct24;  // [bp-0x420]
    let v41: u128;  // [bp-0x418]
    let v42: u64;  // [bp-0x410]
    let v43: struct24;  // [bp-0x408]
    let v44: iNone;  // [bp-0x3f8]
    let v45: iNone;  // [bp-0x3e8]
    let v46: iNone;  // [bp-0x3d8]
    let v47: u128;  // [bp-0x3c8]
    let v48: alloc::string::String;  // [bp-0x3b8]
    let v49: u64;  // [bp-0x3a8]
    let v50: alloc::string::String;  // [bp-0x3a0]
    let v51: u64;  // [bp-0x390]
    let v52: alloc::string::String;  // [bp-0x388]
    let v53: u64;  // [bp-0x378]
    let v54: alloc::string::String;  // [bp-0x370]
    let v55: u64;  // [bp-0x360]
    let v56: alloc::string::String;  // [bp-0x358]
    let v57: u64;  // [bp-0x348]
    let v58: struct28;  // [bp-0x340]
    let v59: struct56;  // [bp-0x338]
    let v60: struct712;  // [bp-0x2f8]
    let v62: iNone;  // xmm1
    let v63: iNone;  // xmm2
    let v64: iNone;  // xmm3
    let v66: struct24;  // xmm0
    let v67: u128;  // xmm1
    let v68: u64;  // r12
    let v69: u64;  // rax
    let v70: u64;  // r14
    let v72: u128;  // xmm0
    let v73: void*;  // rbx
    let v74: u64;  // rax
    let v75: u128;  // xmm0
    let v76: u32;  // eax
    let v77: u64;  // rcx
    let v78: u64;  // rdx
    let v79: iNone;  // xmm0
    let v80: iNone;  // xmm1
    let v81: iNone;  // xmm0
    let v82: iNone;  // xmm1
    let v83: u128;  // xmm2
    let v84: u64;  // rbx
    let v85: u64;  // r13
    let v86: u64;  // r13
    let v87: u64;  // rdx
    let v88: u64;  // r13

    v60 = uu_chcon::uu_app();
    v17 = uu_chcon::parse_command_line(&v60, a0);
    if v17.field_0 as i64 == 0x8000000000000000 {
        v62 = *(&v17.field_24 as &i128);
        v63 = *((&v17.field_32 as &char + 8) as &i128);
        v64 = *((&v17.field_48 as &char + 8) as &i128);
        v7 = *((&v17.field_0 as &char + 8) as &i128);
        v16 = v30;
        v15 = v64;
        *(&v13 as void*) = v63;
        *(&v11 as void*) = v62;
        if v7 as i32 == 14 {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        }
        v48 = format!("{}.\n", &v7 as u8);
        v0 = struct28 {
            field_0: *(&v48.vec.buf.inner.cap as &i128)
            field_16: v49
            field_24: 1
        };
        return alloc::boxed::Box<T>::new(&v0) as u64;
    } else {
        v47 = *(&v17.field_112 as &i128);
        v46 = v32;
        v45 = v31;
        v44 = v17.field_64;
        v66 = v17.field_0;
        v67 = *(&v17.field_16 as &i128);
        v43 = v17.field_48;
        v41 = v17.field_32;
        v39 = v67;
        v38 = v66;
        v68 = 9223372036854775807 + v40;
        v69 = (v68 < 2 ? v68 : 2);
        if !v69 {
            v9 = selinux::SecurityContext::of_path(&v41);
            if v7.field_0 as i32 == 10 {
                if v7.field_8 as i32 == 2 {
                    v20 = uu_chcon::errors::Error::from_io1(&v41);
                    v76 = v19.field_0;
                    *(&v1.field_0 as &i128) = *(&(&v19.field_0)[1] as &i128);
                    v4 = *((&v19.field_8 as &char + 12) as &i128);
                    v6 = v25;
                    v37 = *(&v19.field_40 as &i128);
                    v77 = v28;
                    v78 = v29;
                    if v19.field_0 != 18 {
                        goto LABEL_45d656;
                    }
                    goto LABEL_45d898;
                } else {
                    v79 = *(&v7.field_8 as &i128);
                    v5 = *(&v7.field_24 as &i128);
                    *(&v2 as void*) = v79;
                    goto LABEL_45d898;
                }
            }
            v76 = v7.field_0;
            v1 = *((&v7.field_0 as &char + 4) as &i128);
            v4 = *((&v7.field_16 as &char + 4) as &i128);
            v6 = v14;
            v37 = *(&v7.field_48 as &i128);
            v77 = &g_41a24c;
            v78 = 24;
            if v76 != 18 {
LABEL_45d656:
                v18 = v76;
                v80 = v4;
                v21.field_0 = v1;
                *(&v23 as void*) = v80;
                v25 = v6;
                *(&v26 as void*) = v37;
                v28 = v77;
                v29 = v78;
                uu_chcon::errors::report_full_error(&v33, &v18, &g_4ef648);
                v50 = format!("{}.", &v33);
                v7 = struct28 {
                    field_0: *(&v50.vec.buf.inner.cap as &i128)
                    field_16: v51
                    field_24: 1
                };
                v73 = alloc::boxed::Box<T>::new(&v7) as u64;
            } else {
LABEL_45d898:
                v66 = *((&v1 as &char + 4) as &i128);
                v36 = *((&v4 as &char + 4) as &i128);
                v34 = v66;
                v74 = 0;
                if *((&v47 as &char + 9) as &i8) != 1 || !*((&v47 as &char + 11) as &i8) {
                    goto LABEL_45d8c2;
                }
                v8 = uu_chcon::get_root_dev_ino();
                if let Err(_) = v8 {
                    goto LABEL_45d8c2;
                }
                v29 = v16;
                v81 = v8 as i128;
                v82 = *((&v8 as &char + 16) as &i128);
                v83 = *((&v8 as &char + 32) as &i128);
                *(&v27 as void*) = v15;
                v24 = v83;
                *(&v22 as void*) = v82;
                *(&v20 as void*) = v81;
                uu_chcon::errors::report_full_error(&v33, &v20, &g_4ef648);
                v56 = format!("{}.", &v33);
                v0 = struct28 {
                    field_0: *(&v56.vec.buf.inner.cap as &i128)
                    field_16: v57
                    field_24: 1
                };
                v73 = alloc::boxed::Box<T>::new(&v0) as u64;
            }
        } else if v69 == 1 {
            v58 = uu_chcon::os_str_to_c_string(v42, v43.field_0);
            if v58.field_0 as i32 == 18 {
                v70 = v58.field_16;
                v18 = struct26 {
                    field_0: 1
                    field_8: v70 - 1
                    field_16: v59
                    field_24: 0
                };
                if selinux::SecurityContext::check(&v18) == 2 || (selinux::SecurityContext::check(&v18) & 1) {
                    v34 = struct24 {
                        field_0: 2
                        field_8: v59
                        field_16: v70
                    };
                    v74 = 0;
LABEL_45d8c2:
                    v17 = struct24 {
                        field_0: v74
                        field_8: v66
                    };
                    uu_chcon::process_files(&v1, &v38, &v35, &v17);
                    if *((&v2 as &char + 12) as &i64) {
                        v84 = v3;
                        v85 = *((&v2 as &char + 12) as &i64) * 72;
                        do {
                            v86 = v85;
                            v9 = uucore::util_name();
                            v10 = v87;
                            eprint!("{}: ", &v9 as u448);
                            uu_chcon::errors::report_full_error(&v9, v84, &g_4ef648);
                            eprintln!("{}.", &v9 as u448);
                            v84 += 72;
                            v88 = v86 - 72;
                            v85 = v88;
                        } while (v86 != 72);
                        return uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                    }
                } else {
                    v72 = *((&v41 as &char + 8) as &i128);
                    v7 = 1;
                    v10 = v72;
                    v12 = 1;
                    v54 = format!("Invalid security context {}.", &v7 as u8);
                    v17 = struct28 {
                        field_0: *(&v54.vec.buf.inner.cap as &i128)
                        field_16: v55
                        field_24: 1
                    };
                    v73 = alloc::boxed::Box<T>::new(&v17) as u64;
                }
            } else {
                v75 = *((&v41 as &char + 8) as &i128);
                v7 = 1;
                v10 = v75;
                v12 = 1;
                v52 = format!("Invalid security context {}.", &v7 as u8);
                v17 = struct28 {
                    field_0: *(&v52.vec.buf.inner.cap as &i128)
                    field_16: v53
                    field_24: 1
                };
                v73 = alloc::boxed::Box<T>::new(&v17) as u64;
            }
        } else {
            v34 = struct16 {
                field_0: ""
            };
            v74 = 0;
            goto LABEL_45d8c2;
        }
        return v73;
    }
}
