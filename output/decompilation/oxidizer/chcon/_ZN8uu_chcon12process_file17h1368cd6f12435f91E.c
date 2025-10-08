fn uu_chcon::process_file(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct72 {
    let a0: i64;  // rdi
    let v0: struct640;  // [bp-0x1b8], Other Possible Types: u128
    let v1: u128;  // [bp-0x1b8]
    let v2: struct640;  // [bp-0x1b8]
    let v4: u128;  // [bp-0x1b0]
    let v5: struct640;  // [bp-0x1a8], Other Possible Types: u128
    let v6: struct640;  // [bp-0x1a8]
    let v7: u8;  // [bp-0x1a0]
    let v8: iNone;  // [bp-0x198], Other Possible Types: struct640
    let v9: iNone;  // [bp-0x188], Other Possible Types: struct640
    let v10: struct640;  // [bp-0x178], Other Possible Types: u64
    let v11: struct24;  // [bp-0x168], Other Possible Types: struct52, Option<struct24>
    let v12: struct52;  // [bp-0x168], Other Possible Types: struct76, u64
    let v13: struct52;  // [bp-0x168]
    let v14: struct52;  // [bp-0x168]
    let v15: struct52;  // [bp-0x168]
    let v16: struct52;  // [bp-0x168]
    let v17: struct52;  // [bp-0x168]
    let v18: struct52;  // [bp-0x168]
    let v19: struct32;  // [bp-0x160]
    let v20: struct640;  // [bp-0x158]
    let v21: struct640;  // [bp-0x158]
    let v22: struct640;  // [bp-0x158]
    let v23: struct640;  // [bp-0x148]
    let v24: struct640;  // [bp-0x148]
    let v25: i8;  // [bp-0x130]
    let v26: struct640;  // [bp-0x128]
    let v27: u128;  // [bp-0x118]
    let v28: u64;  // [bp-0x110]
    let v29: struct437;  // [bp-0x110], Other Possible Types: struct640
    let v30: struct640;  // [bp-0x108]
    let v31: struct640;  // [bp-0xf8]
    let v32: iNone;  // [bp-0xf8], Other Possible Types: struct640
    let v33: u32;  // [bp-0xf8]
    let v34: iNone;  // [bp-0xe8], Other Possible Types: struct640
    let v36: iNone;  // [bp-0xd8], Other Possible Types: struct640
    let v38: iNone;  // [bp-0xc8], Other Possible Types: struct640
    let v40: struct640;  // [bp-0xb8], Other Possible Types: u64
    let v42: struct32;  // [bp-0xa8]
    let v43: struct32;  // [bp-0xa0]
    let v44: i64;  // [bp-0x98]
    let v45: struct640;  // [bp-0x90]
    let v46: u64;  // [bp-0x88]
    let v47: u64;  // [bp-0x80]
    let v48: Option<struct24>;  // [bp-0x78]
    let v50: i64;  // r15
    let v51: void*;  // rax
    let v52: struct32;  // rax
    let v53: u32;  // ecx
    let v54: iNone;  // xmm1
    let v55: iNone;  // xmm2
    let v56: struct640;  // rdx
    let v57: u64;  // rcx
    let v58: struct32;  // r8
    let v59: struct32;  // rdi
    let v60: iNone;  // xmm0
    let v61: iNone;  // xmm1
    let v62: iNone;  // xmm2
    let v63: iNone;  // xmm0
    let v64: iNone;  // xmm0
    let v65: u32;  // ecx
    let v66: iNone;  // xmm0
    let v67: iNone;  // xmm1
    let v68: iNone;  // xmm2
    let v69: iNone;  // xmm0
    let v70: u32;  // esi
    let v71: struct640;  // xmm0
    let v72: u64;  // rdx
    let v73: iNone;  // xmm0
    let v74: iNone;  // xmm1
    let v75: iNone;  // xmm2
    let v76: iNone;  // xmm3
    let v77: u128;  // xmm3
    let v78: u128;  // xmm2
    let v79: u128;  // xmm1
    let v80: u128;  // xmm0
    let v81: iNone;  // xmm0
    let v82: iNone;  // xmm1
    let v83: iNone;  // xmm2
    let v84: iNone;  // xmm3

    v50 = *((a3 + 8) as &i64);
    core::option::unwrap(v50);
    v51 = uu_chcon::fts::EntryRef::path(v50);
    if !v51 {
        return struct32 {
            field_0: 16
            padding_4: <UNKNOWN>
            field_8: &g_41b7e1
            field_16: 20
            field_24: 85899345923
        };
    }
    v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v51, a2);
    if !((((0 ^ v11.field_0) & (0 ^ -(v12))) >> 63) as char) {
        v27 = *(&v11.field_0 as &i128);
        v30 = v21;
        v52 = uu_chcon::fts::EntryRef::access_path(v50);
        if !v19 {
            v18 = uu_chcon::errors::Error::from_io1("File name validation", &v27, 85899345923);
            v53 = v18.field_0;
            v0 = *(&v18.field_24 as &i128);
            v5 = *(&v18.field_40 as &i128);
            v8 = *(&v25 as &i128);
            v20 = v21;
            if v53 != 18 {
                v54 = v0;
                v55 = v5;
                return struct72 {
                    field_0: *(&v18.field_0 as &i64)
                    field_8: v19
                    field_16: v21
                    field_24: v54
                    field_40: v55
                    field_56: v8
                };
            }
        }
        v56 = v20;
        v57 = *((v50 + 104) as &i64);
        if !v57 {
            v12 = uu_chcon::errors::Error::from_io1("Getting meta data", &v27, 85899345923);
            *((a0 + 64) as &i64) = v26.field_0;
            v81 = *(&v12.field_0 as &i128);
            v82 = *((&v12.field_8 as &char + 8) as &i128);
            v83 = *(&v12.field_32 as &i128);
            v84 = *(&v12.field_48 as &i128);
        }
        v45 = v56;
        v58 = *(v57 as &i64);
        v59 = *((v57 + 8) as &i64);
        v31 = 18;
        match (*((v50 + 98) as &i16)) {
            1 => {
                if *((a1 + 123) as &i8) {
                    if *(a4 as &i32) != 1 || *((a4 + 8) as &i64) != v58 || *((a4 + 16) as &i64) != v59 {
                        return struct4 {
                            field_0: 18
                        };
                    }
                    uu_chcon::root_dev_ino_warn(v28, v30);
                    v48 = uu_chcon::fts::FTS::set(*(a3 as &i64), v50, 4);
                    uu_chcon::fts::FTS::read_next_entry(&v0, a3);
                    v13 = uu_chcon::errors::Error::from_io1("Modifying root path", &v27, 4294967299);
                    v60 = *(&v13.field_0 as &i128);
                    v61 = *((&v13.field_8 as &char + 8) as &i128);
                    v62 = *(&v13.field_32 as &i128);
                    return struct72 {
                        field_0: v60
                        field_16: v61
                        field_32: v62
                        field_48: *(&v13.field_48 as &i128)
                        field_64: v26.field_0
                    };
                    return struct4 {
                        field_0: 18
                    };
                }
                break;
            }
            2 => {
                v65 = *((a1 + 123) as &i8);
                if v65 < 2 || v65 != 2 && *((v50 + 96) as &i16) {
                    uu_chcon::emit_cycle_warning(v28, v30);
                    v16 = uu_chcon::errors::Error::from_io1("Reading cyclic directory", &v27, 90194313219);
                    v66 = *(&v16.field_0 as &i128);
                    v67 = *((&v16.field_8 as &char + 8) as &i128);
                    v68 = *(&v16.field_32 as &i128);
                    return struct72 {
                        field_0: v66
                        field_16: v67
                        field_32: v68
                        field_48: *(&v16.field_48 as &i128)
                        field_64: v26.field_0
                    };
                }
                break;
            }
            4 => {
                v42 = v58;
                v43 = v59;
                v44 = v52;
                v14 = uu_chcon::errors::Error::from_io1("Reading directory", &v27, *((v50 + 56) as &i32) * 0x100000000 | 2);
                v10 = v26.field_0;
                v63 = *(&v14.field_0 as &i128);
                v9 = *(&v14.field_48 as &i128);
                v8 = *(&v14.field_32 as &i128);
                v6.field_0 = vvar_818{stack -344};
                *(&v1 as void*) = v63;
            }
            6 => {
                if !*((a1 + 123) as &i8) {
                    break;
                }
                goto LABEL_464a08;
            }
            7 => {
                v42 = v58;
                v43 = v59;
                v44 = v52;
                v17 = uu_chcon::errors::Error::from_io1("Accessing", &v27, *((v50 + 56) as &i32) * 0x100000000 | 2);
                v10 = v26.field_0;
                v69 = *(&v17.field_0 as &i128);
                v9 = *(&v17.field_48 as &i128);
                v8 = *(&v17.field_32 as &i128);
                v6.field_0 = vvar_818{stack -344};
                *(&v1 as void*) = v69;
            }
            10 => {
                if !*((v50 + 96) as &i16) && !*((v50 + 24) as &i64) {
                    *((v50 + 24) as &i64) = 1;
                    v11 = uu_chcon::fts::FTS::set(*(a3 as &i64), v50, 1);
                    return struct4 {
                        field_0: 18
                    };
                }
                v42 = v58;
                v43 = v59;
                v44 = v52;
                v15 = uu_chcon::errors::Error::from_io1("Accessing", &v27, *((v50 + 56) as &i32) * 0x100000000 | 2);
                v10 = v26.field_0;
                v64 = *(&v15.field_0 as &i128);
                v9 = *(&v15.field_48 as &i128);
                v8 = *(&v15.field_32 as &i128);
                v6.field_0 = vvar_818{stack -344};
                *(&v1 as void*) = v64;
            }
            _ => {
LABEL_464a08:
                v70 = v33;
                if (v33 == 18 & *((v50 + 98) as &i16) == 6) {
                    if *(a4 as &i32) != 1 || *((a4 + 8) as &i64) != v58 || *((a4 + 16) as &i64) != v59 {
                        goto LABEL_464b1b;
                    }
                    uu_chcon::root_dev_ino_warn(v29, v30);
                    v11 = uu_chcon::errors::Error::from_io1("Modifying root path", &v27, 4294967299);
                    v10 = v26.field_0;
                    v71 = *(&v11.field_0 as &i128);
                    v9 = *(&v11.field_48 as &i128);
                    v8 = *(&v11.field_32 as &i128);
                    *(&v5 as &i128) = *((&v11.field_8 as &char + 8) as &i128);
                    v2 = v71;
                    v40 = v10;
                    v38 = v9;
                    v36 = v8;
                    v34 = *(&v5 as &i128);
                    v32 = *(&v2 as &i128);
                    v70 = v33;
                }
                if v70 != 18 {
                    goto LABEL_464c41;
                }
LABEL_464b1b:
                v20 = v21;
                if *((a1 + 120) as &i8) {
                    v46 = uucore::util_name();
                    v47 = v72;
                    v0 = 1;
                    v4 = *(&v29.field_0 as &i128);
                    v7 = 1;
                    println!("{}: changing security context of {}", &v46, &v0);
                    v20 = v22;
                    v23 = v24;
                }
                v12 = uu_chcon::change_file_context(a1, a2, v52, v45);
LABEL_464c41:
                if !*((a1 + 123) as &i8) {
                    v11 = uu_chcon::fts::FTS::set(*(a3 as &i64), v50, 4);
                }
                v73 = v32;
                v74 = v34;
                v75 = v36;
                v76 = v38;
                return struct72 {
                    field_0: v80
                    field_16: v79
                    field_32: v78
                    field_48: v77
                    field_64: v40
                };
            }
        }
        v40 = v10;
        v38 = v9;
        v36 = v8;
        v34 = *(&v6 as &i128);
        v32 = v1;
        v52 = v44;
        v59 = v43;
        v58 = v42;
        goto LABEL_464a08;
    }
    return struct32 {
        field_0: 16
        padding_4: <UNKNOWN>
        field_8: &g_41b7e1
        field_16: 20
        field_24: 85899345923
    };
}
