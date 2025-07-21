fn uu_touch::touch(a1: i64, a2: i64) -> : struct52 {
    let a0: struct52;  // rsi
    let v1: u64;  // [bp-0x168]
    let v2: std::sys::os_str::bytes::Buf;  // [bp-0x168]
    let v3: struct64;  // [bp-0x160], Other Possible Types: struct_1 *
    let v4: i64;  // [bp-0x158]
    let v5: Result<(), Error>;  // [bp-0x150], Other Possible Types: alloc::raw_vec::Cap, struct16, struct40
    let v6: Result<(), Error>;  // [bp-0x150], Other Possible Types: struct48
    let v7: core::fmt::Arguments;  // [bp-0x148]
    let v8: u32;  // [bp-0x140]
    let v9: core::fmt::Arguments;  // [bp-0x138]
    let v11: u64;  // [bp-0x130]
    let v12: struct56;  // [bp-0x128], Other Possible Types: u64
    let v13: struct52;  // [bp-0x120]
    let v14: struct16;  // [bp-0x118]
    let v15: Result<struct24, struct8>;  // [bp-0x118]
    let v16: i64;  // [bp-0x118]
    let v17: u64;  // [bp-0x110]
    let v18: u128;  // [bp-0x108]
    let v19: i8;  // [bp-0xf8], Other Possible Types: u64
    let v20: u64;  // [bp-0xe8]
    let v21: i64;  // [bp-0xe0]
    let v22: core::fmt::Arguments;  // [bp-0xd8]
    let v23: u64;  // [bp-0xd0]
    let v24: u64;  // [bp-0xc0]
    let v25: u128;  // [bp-0xb8]
    let v26: struct32;  // [bp-0xb8]
    let v27: core::fmt::Arguments;  // [bp-0xa8]
    let v28: i64;  // [bp-0xa0]
    let v29: struct52;  // [bp-0x90]
    let v30: u64;  // [bp-0x88]
    let v31: void*;  // [bp-0x80]
    let v32: struct32;  // [bp-0x78]
    let v33: struct16;  // [bp-0x50]
    let v34: struct16;  // [bp-0x40]
    let v36: u64;  // rax
    let v37: i64;  // r14
    let v38: core::fmt::Arguments;  // r15
    let v39: u64;  // rax
    let v40: core::fmt::Arguments;  // r15
    let v41: i64;  // 4096
    let v46: core::fmt::Arguments;  // r15, Other Possible Types: u64
    let v47: i64;  // rdi
    let v49: u8;  // cl
    let v50: core::fmt::Arguments;  // r14
    let v51: i64;  // rdi
    let v52: u128;  // xmm0
    let v53: i64;  // rdi
    let v54: u128;  // xmm0
    let v55: i64;  // rdi
    let v57: core::fmt::rt::Argument;  // r12, Other Possible Types: u64
    let v58: core::fmt::Arguments;  // r14
    let v59: i64;  // rdi
    let v60: u64;  // rax
    let v61: i64;  // rdx
    let v63: i64;  // rdx
    let v64: i64;  // rdx
    let v65: i64;  // rdx
    let v66: u64;  // rax
    let v67: u128;  // xmm1
    let v68: i64;  // xmm0

    v36 = (*((a2 + 24) as &i64) < 9223372036854775810 ? *((a2 + 24) as &i64) - -9223372036854775809 : 0);
    v4 = a2;
    if v36 {
        v13 = a0;
        if v36 == 1 {
            v40 = v38;
            v41 = a2;
        } else {
            v5 = chrono::offset::local::Local::now();
            uu_touch::datetime_to_filetime(&v5);
            v40 = v38;
            v41 = v4;
        }
        v46 = v40;
        v2 = v39;
    } else {
        v37 = a2;
        v15 = uu_touch::stat(*((a2 + 32) as &i64), *((a2 + 40) as &i64), !*((a2 + 49) as &i8));
        match v15 {
            Err(_) => {
                v5 = uu_touch::touch::{{closure}}(v37 + 24, v17);
                if v5.field_0 != 9223372036854775812 {
                    *(v47 as &u64) = v5.field_0;
                    *((v47 + 8) as &core::fmt::Arguments) = v46;
                    *((v47 + 16) as &core::fmt::rt::Argument) = v57;
                    *((v47 + 24) as &core::fmt::Arguments) = v38;
                    *((v47 + 32) as &u64) = v11;
                    *((v47 + 40) as &struct56) = v12;
                    return;
                }
                v13 = a0;
                v2 = v11;
                v7 = v46;
                v9 = v38;
            },
            Ok(_) => {
                v13 = a0;
                v2 = *(&v19 as &i32) as u32 as u64;
            },
        }
    }
    v50 = v38;
    if *(v37 as &i64) != 0x8000000000000000 {
        uu_touch::filetime_to_datetime(v46, v57 & 4294967295, v49);
        match v15 {
            Ok(_) => {
                *(v51 as &i64) = 9223372036854775809;
                *((v51 + 8) as &core::fmt::Arguments) = v46;
                *((v51 + 16) as &u32) = v57 as u32;
                return;
            },
            Err(_) => {
                v33 = v14;
                v3 = *((v4 + 8) as &i64);
                v23 = *((v4 + 16) as &i64);
                v5 = uu_touch::parse_date(&v33, *((v4 + 8) as &i64), *((v4 + 16) as &i64));
                v46 = v7;
                match v5 {
                    Ok(_) => {
                        v52 = *((&v5 as &char + 20) as &i128);
                        *((v51 + 32) as &i128) = *(&v11 as &i128);
                        *((v51 + 20) as &u128) = v52;
                        *(v51 as &i64) = v5 as i64;
                        *((v51 + 8) as &core::fmt::Arguments) = v46;
                        *((v51 + 16) as &u32) = v57 as u32;
                        return;
                    },
                    Err(_) => {
                        uu_touch::filetime_to_datetime(v38, v2, a2);
                        match v15 {
                            Ok(_) => {
                                *(v53 as &i64) = 9223372036854775809;
                                *((v53 + 8) as &core::fmt::Arguments) = v38;
                                *((v53 + 16) as &u32) = v2 as u32;
                                return;
                            },
                            Err(_) => {
                                v34 = v14;
                                v6 = uu_touch::parse_date(&v34, v3, v23);
                                match v6 {
                                    Ok(_) => {
                                        v54 = *((&v6 as &char + 20) as &i128);
                                        *((v55 + 32) as &i128) = *(&v11 as &i128);
                                        *((v55 + 20) as &u128) = v54;
                                        *(v55 as &i64) = v6 as i64;
                                        *((v55 + 8) as &core::fmt::Arguments) = v7;
                                        *((v55 + 16) as &u32) = v1 as u32;
                                        return;
                                    },
                                    Err(_) => {
                                        v1 = v8 as u64;
                                        v50 = v7;
                                    },
                                }
                            },
                        }
                    },
                }
            },
        }
    }
    v3 = v59;
    v29 = v13;
    v30 = v29 + a1 * 24;
    v31 = 0;
    do {
        do {
            v60 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v29);
            if !v61 {
                *(v3 as &i64) = 9223372036854775812;
                return;
            }
            v24 = v60;
            v63 = v61;
            if *(v63 as &i64) == 0x8000000000000000 {
                v5 = uu_touch::pathbuf_from_stdout();
                v64 = *((&v6 as &char + 16) as &i64);
                v63 = v64;
                if v5 != 9223372036854775812 {
                    *((v3 + 32) as &i128) = *(&v11 as &i128);
                    *(v3 as &alloc::raw_vec::Cap) = v5;
                    *((v3 + 8) as &core::fmt::Arguments) = v7;
                    *((v3 + 16) as &struct_0 *) = v64;
                    *((v3 + 24) as &core::fmt::Arguments) = v9;
                    return;
                }
            }
            v65 = v63;
            v20 = v7;
            v21 = v65;
            v22 = v9;
            v66 = uu_touch::touch_file(*((v65 + 8) as &i64), *((v65 + 16) as &i64), *(v61 as &i64) == 0x8000000000000000, v4, v46, v57 & 4294967295, v58, v2 as u32);
            v27 = v22;
            v25 = *(&v20 as &i128);
            v28 = &v24;
        } while (!v66);
        v32 = v26;
        v6 = uu_touch::touch::{{closure}}(&v32, v66, v61);
    } while ((v67 = *(&v6.field_24 as &i128), *(&v16 as &i128) = *(&v7.pieces.ptr as &i128), v18 = v67, v19 = v12, v6.field_0 == 9223372036854775812));
    *((v3 + 40) as &u64) = v19;
    v68 = *(&v16 as &i128);
    *((v3 + 24) as &u128) = v18;
    *((v3 + 8) as &struct_0 *) = v68;
    *(v3 as &u64) = v6.field_0;
    return;
}
