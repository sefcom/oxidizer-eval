fn uu_pinky::platform::unix::Pinky::long_pinky(a0: &struct31) {
    let v0: u8;  // [bp-0x1eb]
    let v1: u8;  // [bp-0x1ea]
    let v2: u8;  // [bp-0x1e9]
    let v3: struct24;  // [bp-0x1e8], Other Possible Types: u64
    let v4: struct16;  // [bp-0x1e8], Other Possible Types: u64
    let v5: iNone;  // [bp-0x1e8], Other Possible Types: u128
    let v6: struct16;  // [bp-0x1e8]
    let v7: u64;  // [sp-0x1d8]
    let v8: Option<struct24>;  // [sp-0x1c8], Other Possible Types: core::fmt::Arguments, struct24, u64
    let v9: u64;  // [bp-0x1c8]
    let v10: struct24;  // [bp-0x1c8], Other Possible Types: u64
    let v11: u64;  // [bp-0x1b8]
    let v12: i64;  // [bp-0x1b8], Other Possible Types: u64
    let v13: u64;  // [bp-0x1b8]
    let v14: u64;  // [bp-0x1b0]
    let v15: u64;  // [bp-0x1b0]
    let v16: Result<struct4, struct8>;  // [bp-0x198]
    let v17: core::fmt::rt::Argument;  // [bp-0x188]
    let v18: u64;  // [bp-0x180]
    let v19: core::fmt::rt::Argument;  // [bp-0x180]
    let v20: core::fmt::Arguments;  // [bp-0x178]
    let v21: u8;  // [bp-0x170]
    let v22: struct24;  // [bp-0x168], Other Possible Types: u64
    let v23: u64;  // [bp-0x168]
    let v24: u64;  // [bp-0x168]
    let v25: u128;  // [bp-0x168]
    let v26: u64;  // [bp-0x158]
    let v27: u64;  // [bp-0x150]
    let v28: struct16;  // [bp-0x148], Other Possible Types: u64
    let v29: u64;  // [bp-0x148]
    let v30: u128;  // [bp-0x148]
    let v31: Option<struct24>;  // [bp-0x138], Other Possible Types: struct24, u8
    let v32: u64;  // [bp-0x138]
    let v33: core::fmt::Arguments;  // [bp-0x138]
    let v34: struct24;  // [bp-0x130]
    let v35: Result<struct24, struct16>;  // [bp-0x128]
    let v36: u128;  // [bp-0x128]
    let v37: struct24;  // [bp-0x120]
    let v38: u128;  // [bp-0x120]
    let v39: &str;  // [sp-0x118]
    let v40: u128;  // [bp-0x118]
    let v41: u128;  // [bp-0x108]
    let v42: u128;  // [bp-0xf8]
    let v43: u64;  // [bp-0xf0]
    let v44: core::fmt::rt::Argument;  // [bp-0xe8]
    let v45: core::fmt::Arguments;  // [bp-0xd8]
    let v46: iNone;  // [bp-0xc8]
    let v47: Result<struct128, struct16>;  // [bp-0xb0], Other Possible Types: u8
    let v48: struct24;  // [bp-0xa8]
    let v49: u128;  // [bp-0xa0]
    let v50: iNone;  // [bp-0x90]
    let v51: u128;  // [bp-0x80]
    let v52: u128;  // [bp-0x70]
    let v53: iNone;  // [bp-0x60]
    let v54: iNone;  // [bp-0x50]
    let v55: i8;  // [bp-0x40]
    let v57: u64;  // rbx
    let v58: i64;  // r14
    let v59: i64;  // r12
    let v60: u256;  // ymm0
    let v61: u64;  // rbx
    let v62: core::fmt::Arguments;  // ymm0
    let v63: core::fmt::rt::Argument;  // xmm0
    let v64: core::fmt::Arguments;  // xmm0
    let v65: core::fmt::Arguments;  // rax
    let v66: iNone;  // ymm0, Other Possible Types: u256
    let v67: u64;  // rax
    let v68: u128;  // xmm0
    let v70: iNone;  // xmm0
    let v72: u64;  // rbx
    let v75: u64;  // [bp-0x100]

    if !*((a0 + 16) as &i64) {
        return;
    }
    v2 = *((a0 + 30) as &i8);
    v1 = *((a0 + 27) as &i8);
    v0 = *((a0 + 28) as &i8);
    v57 = *((a0 + 16) as &i64) * 24;
    v58 = &v47;
    v59 = &v31;
    do {
        v61 = v57;
        v47 = &v21;
        v48 = <&T as core::fmt::Display>::fmt;
        v31 = "Login name: ";
        v34 = 2;
        v39 = "\x02";
        v35 = v58;
        v37 = 1;
        std::io::stdio::_print(v59);
        <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(v58, *((v21 + 8) as &i64), *((v21 + 16) as &i64));
        if let Err(_) = v47 {
            v31 = struct24 {
                field_0: " ???\n"
                field_8: 1
                field_16: 8
            };
            v60 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v38 = 0 as u128;
            std::io::stdio::_print(v59);
            v31 = v32;
        }
        v62 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v55 as &i128);
        v46 = *(&v55 as &i128);
        v63 = v54;
        v45 = v63;
        v44 = v53;
        v42 = v52;
        v64 = v47 as i128;
        v66 = (((v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 as u256;
        v41 = v51;
        *(&v40 as void*) = v50;
        v36 = v49;
        v33 = v64;
        v8 = uu_pinky::platform::unix::gecos_to_fullname(v59);
        match v8 {
            None => {
                v22 = struct24 {
                    field_0: 0
                    field_8: ""
                };
                v65 = v43;
                v24 = v23;
                v22 = v23;
                if v43 == 0x8000000000000000 {
                    goto LABEL_463c61;
                }
                goto LABEL_463c0d;
            },
            Some(_) => {
                v26 = v12;
                v66 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 as i128 as u128 as u256;
                v25 = v8 as i128 as u128;
                v65 = v43;
                v24 = v22;
                if v43 != 0x8000000000000000 {
LABEL_463c0d:
                    v66 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256;
                    v19 = v44;
                    goto LABEL_463c78;
                } else {
LABEL_463c61:
                    v22 = v24;
                    v18 = 1;
                    v20 = 0;
                    v65 = 0;
LABEL_463c78:
                    v17 = v65;
                    v67 = v41 as i64;
                    if v67 == 0x8000000000000000 {
                        v28 = struct16 {
                            field_0: ""
                        };
                        v67 = 0;
                        v28 = v29;
                    } else {
                        v66 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v41 as &char + 8) as &i128) as u128 as u256;
                        v30 = *(&v75 as &i128) as u128;
                    }
                    v27 = v67;
                    println!(" {}", &v22);
                    v8 = v9;
                    v12 = v11;
                    v4 = v3;
                    v15 = v14;
                    if (v2 & 1) {
                        print!("Directory: {}", &v17);
                        println!("Shell:  {}", &v27);
                        v8 = v9;
                        v12 = v11;
                        v4 = v3;
                        v15 = v14;
                    }
                    v10 = v8;
                    v13 = v12;
                    if (v1 & 1) {
                        v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v18, v20);
                        v7 = v12;
                        v68 = v10.field_0;
                        v5 = v68;
                        v6 = std::path::PathBuf::push(".project");
                        v66 = (v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v6.field_0 as &i128) as u128 as u256;
                        v10 = v3;
                        v16 = std::fs::File::open(&v10);
                        match v16 {
                            Err(_) => {
                                v10 = v8;
                                v13 = v11;
                            },
                            Ok(_) => {
                                v66 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                                print!("Project: ");
                                uu_pinky::platform::unix::read_to_console(*((&v16 as &char + 4) as &i32) as u32 as u64);
                                v10 = v9;
                                v13 = v11;
                            },
                        }
                    }
                    v12 = v13;
                    if (v0 & 1) {
                        v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v18, v20);
                        v7 = v12;
                        v70 = v8.field_0;
                        v5 = v70;
                        v4 = std::path::PathBuf::push(".plan");
                        v66 = (v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v4.field_0 as &i128) as u128 as u256;
                        v8 = v3;
                        v16 = std::fs::File::open(&v8);
                        if let Ok(_) = v16 {
                            v66 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                            println!("Plan:");
                            uu_pinky::platform::unix::read_to_console(*((&v16 as &char + 4) as &i32) as u32 as u64);
                        }
                    }
                    v60 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v8 = core::fmt::Arguments {
                        pieces: ["\n"]
                        args: []
                        fmt: 0
                    };
                    std::io::stdio::_print(&v8);
                    v8 = v9;
                    v12 = v11;
                }
            },
        }
        v72 = v61 - 24;
        v58 = &v47;
        v59 = &v31;
        v57 = v72;
    } while (v61 != 24);
    return;
}
