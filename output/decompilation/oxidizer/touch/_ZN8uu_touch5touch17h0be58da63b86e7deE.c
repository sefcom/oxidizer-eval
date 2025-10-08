fn uu_touch::touch(a0: i64, a1: i64, a2: i64, a3: &struct52) -> u64 {
    let v0: void*;  // [bp-0x128]
    let v1: core::fmt::rt::Argument;  // [bp-0x120]
    let v2: core::fmt::rt::Argument;  // [bp-0x120]
    let v3: i32;  // [bp-0x114]
    let v4: struct16;  // [bp-0x110], Other Possible Types: struct8
    let v5: Result<(), Error>;  // [bp-0x110], Other Possible Types: struct48
    let v6: Result<(), Error>;  // [bp-0x110]
    let v7: struct40;  // [bp-0x110]
    let v8: alloc::string::String;  // [bp-0x108]
    let v9: i32;  // [bp-0x100]
    let v10: alloc::string::String;  // [bp-0xf8]
    let v11: u64;  // [bp-0xf0]
    let v12: u64;  // [bp-0xe8]
    let v13: alloc::string::String;  // [bp-0xe0]
    let v14: struct32;  // [bp-0xd8]
    let v15: Result<(), Error>;  // [bp-0xd8]
    let v16: Result<(), Error>;  // [bp-0xd8]
    let v17: iNone;  // [bp-0xd8]
    let v18: u64;  // [bp-0xd0]
    let v19: iNone;  // [bp-0xc8]
    let v20: u64;  // [bp-0xb8]
    let v21: alloc::string::String;  // [bp-0xa8]
    let v22: u64;  // [bp-0xa0]
    let v23: u64;  // [bp-0xa0]
    let v24: u64;  // [bp-0x90]
    let v25: struct24;  // [bp-0x88]
    let v26: struct32;  // [bp-0x70]
    let v27: Error;  // [bp-0x50]
    let v28: Error;  // [bp-0x40]
    let v30: void*;  // rbp
    let v31: i64;  // rcx
    let v32: alloc::string::String;  // r15
    let v33: i32;  // edx
    let v34: core::fmt::rt::Argument;  // rax
    let v35: alloc::string::String;  // r15
    let v36: i64;  // xmm0lq
    let v37: alloc::string::String;  // r15
    let v38: alloc::string::String;  // r15
    let v39: alloc::string::String;  // r14
    let v40: i32;  // r13d
    let v42: alloc::string::String;  // r15
    let v43: u64;  // rax
    let v44: i64;  // rdx
    let v45: i64;  // rdx
    let v46: i64;  // rdx
    let v47: void*;  // r15
    let v48: i64;  // rdx
    let v49: alloc::string::String;  // rbx
    let v50: i64;  // rdx
    let v51: i64;  // r13
    let v52: alloc::string::String;  // rsi
    let v53: u64;  // rcx
    let v54: i64;  // r12
    let v55: u64;  // rax
    let v56: iNone;  // xmm1
    let v58: iNone;  // xmm0
    let v61: iNone;  // xmm0
    let v62: iNone;  // xmm0

    v30 = a3;
    v31 = a3[24] as i64 - -9223372036854775809;
    if !v31 {
        v14 = uu_touch::stat(a3[32] as i64, a3[40] as i64, a3[49] as i8 ^ 1);
        if (v14.field_0 as i8 & 1) {
            v7 = uu_touch::touch::{{closure}}(a3[32] as i64, a3[40] as i64, v18);
            if v7.field_0 != 9223372036854775812 {
                v36 = *((&v7.field_8 as &char + 8) as &i64);
                *(v0 as &u64) = v7.field_0;
                *(&v0[8] as &alloc::string::String) = v35;
                *(&v0[16] as &struct_1 *) = v36;
                *(&v0[24] as &alloc::string::String) = v32;
                *(&v0[32] as &u64) = v11;
                *(&v0[40] as &u64) = v12;
                return a0;
            }
            v34 = v7.field_32;
            v8 = v35;
            v10 = v32;
            v9 = v33;
        }
    } else if v31 == 1 {
        v32 = a3[32] as i64;
        v33 = a3[40] as i32;
        v34 = a3[40] as i32;
        v35 = v32;
    } else {
        v4 = chrono::offset::local::Local::now();
        v32 = uu_touch::datetime_to_filetime(&v4);
        v34 = v33 as u64;
        v35 = v32;
    }
    v37 = v35;
    v1 = v34;
    v22 = 0x8000000000000000;
    if *(a3 as &i64) == 0x8000000000000000 {
        v3 = v33;
        v21 = v32;
        v38 = v37;
    } else {
        v15 = uu_touch::filetime_to_datetime(v37, v33);
        match v15 {
            Ok(_) => {
                *(v0 as &i64) = 9223372036854775809;
                *(&v0[8] as &alloc::string::String) = v37;
                *(&v0[16] as &unsigned int) = v33;
                return a0;
            },
            Err(v27) => {
                v39 = v32;
                v5 = uu_touch::parse_date(&v27, a3[8] as i64, a3[16] as i64);
                match v5 {
                    Ok(_) => {
                        v62 = *((&v5 as &char + 20) as &i128);
                        *(&v0[32] as &i128) = *(&v11 as &i128);
                        v0[20] = v62;
                        *(v0 as &i64) = v5 as i64;
                        *(&v0[8] as &alloc::string::String) = v8;
                        *(&v0[16] as &unsigned int) = v9;
                        return a0;
                    },
                    Err(_) => {
                        v3 = v9;
                        v40 = v1 as u32;
                        v16 = uu_touch::filetime_to_datetime(v39, v40);
                        match v16 {
                            Ok(_) => {
                                *(v0 as &i64) = 9223372036854775809;
                                *(&v0[8] as &alloc::string::String) = v39;
                                *(&v0[16] as &unsigned int) = v40;
                                return a0;
                            },
                            Err(v28) => {
                                v6 = uu_touch::parse_date(&v28, a3[8] as i64, a3[16] as i64);
                                match v6 {
                                    Ok(_) => {
                                        v61 = *((&v6 as &char + 20) as &i128);
                                        *(&v0[32] as &i128) = *(&v11 as &i128);
                                        v0[20] = v61;
                                        *(v0 as &i64) = v6 as i64;
                                        *(&v0[8] as &alloc::string::String) = v8;
                                        *(&v0[16] as &u32) = v2 as u32;
                                        return a0;
                                    },
                                    Err(_) => {
                                        v2 = v9 as u64;
                                        v21 = v8;
                                        v1 = v2;
                                        v38 = v8;
                                    },
                                }
                            },
                        }
                    },
                }
            },
        }
    }
    v42 = v38;
    v25 = struct24 {
        field_0: a1
        field_8: a2 * 24 + a1
        field_16: 0
    };
    v43 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25);
    if v44 {
        v13 = v42;
        do {
            v46 = v44;
            v24 = v43;
            v23 = v22;
            v48 = v46;
            if *(v48 as &i64) == v23 {
                v4 = uu_touch::pathbuf_from_stdout();
                v49 = v8;
                v50 = *((&v7.field_8 as &char + 8) as &i64);
                v39 = v10;
                if v4 != 9223372036854775812 {
                    *(&v0[32] as &i128) = *(&v11 as &i128);
                    *(v0 as &struct8) = v4;
                    *(&v0[8] as &alloc::string::String) = v8;
                    *(&v0[16] as &struct_1 *) = v50;
                    *(&v0[24] as &alloc::string::String) = v39;
                    return a0;
                }
                v51 = v50;
                v52 = v39;
                v53 = v22;
                v23 = v53;
                v48 = v50;
                if v8 != v23 {
                    continue;
                }
            }
            v53 = v23;
            v54 = v48;
            v51 = v48;
            v50 = *((v48 + 8) as &i64);
            v52 = *((v54 + 16) as &i64);
            v49 = v53;
            v55 = uu_touch::touch_file(v50, v52, *(v46 as &i64) == v53, v47, v13, v3 as u64, v21, v1 as u32);
            if v55 {
                v26 = struct32 {
                    field_0: v49
                    field_8: v51
                    field_16: v39
                    field_24: &v24
                };
                v5 = uu_touch::touch::{{closure}}(&v26, v55, v44);
                v56 = *(&v5.field_24 as &i128);
                *(&v17 as &i128) = *(&v8.vec.buf.inner.cap as &i128);
                v19 = v56;
                v20 = v12;
                if v5.field_0 != 9223372036854775812 {
                    *(&v0[40] as &u64) = v20;
                    v58 = v17 as i128;
                    *(&v0[24] as &i128) = v19 as i128;
                    v0[8] = v58;
                    *(v0 as &u64) = v5.field_0;
                    return a0;
                }
            }
            v43 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25);
        } while (v45);
    }
    *(v0 as &i64) = 9223372036854775812;
    return a0;
}
