fn uu_cat::write_lines(a1: i64, a2: i64, a3: i64) -> : struct8 {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x7d01]
    let v1: std::io::stdio::StderrLock;  // [bp-0x7d00]
    let v2: i64;  // [bp-0x7cf8]
    let v3: u32;  // [bp-0x7ce8]
    let v4: u32;  // [bp-0x7ce4]
    let v5: u64;  // [bp-0x7ce0]
    let v6: u64;  // [bp-0x7cd0]
    let v7: void*;  // [bp-0x7cc8], Other Possible Types: u64
    let v8: i8;  // [bp-0x7cc0]
    let v9: void*;  // [bp-0x7cb8]
    let v10: u64;  // [bp-0x7cb0]
    let v11: void*;  // [bp-0x7ca8]
    let v12: u64;  // [bp-0x7ca0]
    let v13: u8;  // [bp-0x7c98]
    let v14: u32;  // [bp-0x7c90]
    let v15: u64;  // [bp-0x7c88]
    let v16: std::io::stdio::Stdout;  // [bp-0x7c78]
    let v17: core::fmt::rt::Argument;  // [bp-0x7c70]
    let v18: u128;  // [bp-0x7c70]
    let v19: core::fmt::Arguments;  // [bp-0x7c60]
    let v20: u8;  // [bp-0x7c30]
    let v21: void*;  // [bp-0x7030]
    let v22: void*;  // [bp-0x6030]
    let v23: void*;  // [bp-0x5030]
    let v24: void*;  // [bp-0x4030]
    let v25: void*;  // [bp-0x3030]
    let v26: void*;  // [bp-0x2030]
    let v27: void*;  // [bp-0x1030]
    let v31: u32;  // rdx
    let v33: i64;  // r15
    let v34: void*;  // r12
    let v35: std::io::stdio::StderrLock;  // rax
    let v36: core::result::Result<(), std::io::error::Error>;  // rax
    let v38: i64;  // rax
    let v39: u32;  // ecx
    let v40: i64;  // rdi
    let v42: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v27 = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    memset(&v20, 0, 0x7c00);
    v16 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v16);
    v0 = *((a1 + 4) as &i8);
    v14 = (!*((a1 + 2) as &i8) ? &g_41ce0c : &g_41ce24);
    v15 = (*((a1 + 2) as &i8)) + 1;
    v5 = "src/uu/cat/src/cat.rs";
    v4 = *((a1 + 1) as &i8);
    v3 = *((a1 + 3) as &i8);
    loop {
        v42 = <std::os::unix::net::stream::UnixStream as std::io::Read>::read(a0, &v20, 0x7c00);
        v6 = *((&v42 as &char + 8) as &i64);
        if v42 as i64 || !*((&v42 as &char + 8) as &i64) {
            break;
        }
        v33 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v42 as &char + 8) as &i64), &v20, 0x7c00, "src/uu/cat/src/cat.rs");
        do {
            if v33 + v34 == "\n" {
                uu_cat::write_new_line(&v7, &v1, a1, a2, *((a0 + 4) as &i8));
                v35 = v7;
                if v35 != 9223372036854775814 {
                    *((v2 + 8) as &i128) = *(&v8 as &i128);
                    *(v2 as &std::io::stdio::StderrLock) = v35;
                    return;
                }
                *((a2 + 8) as &i8) = 1;
            } else {
                if *((a2 + 9) as &i8) {
                    <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, "\r");
                    match v36 {
                        Err(_) => {
                            *(v2 as &i64) = 0x8000000000000000;
                            *((v2 + 8) as &core::result::Result<(), std::io::error::Error>) = v36;
                            return;
                        },
                        Ok(_) => {
                            *((a2 + 8) as &i16) = 0;
                            *((a2 + 10) as &i8) = 0;
                        },
                    }
                } else {
                    *((a2 + 10) as &i8) = 0;
                    if *((a2 + 8) as &i8) && v0 {
                        v17 = core::fmt::rt::Argument {
                            ty: a2
                        };
                        v7 = 2;
                        v9 = 0;
                        v10 = 6;
                        v11 = 0;
                        v12 = 32;
                        v13 = 3;
                        v19 = core::fmt::Arguments {
                            pieces: [&g_518728, "\t"]
                            args: [v18]
                            fmt: &v7
                        };
                        std::io::Write::write_fmt(&v1, &v19);
                        match v36 {
                            Err(_) => {
                                *(v2 as &i64) = 0x8000000000000000;
                                *((v2 + 8) as &core::result::Result<(), std::io::error::Error>) = v36;
                                return;
                            },
                            Ok(_) => {
                                *(a2 as &i64) = *(a2 as &i64) + 1;
                            },
                        }
                    }
                }
                v38 = uu_cat::write_end(&v1, v33 + v34, v31 - v34, v4, v3) + v34;
                if v38 != v31 {
                    match (v39) {
                        10 => {
                            uu_cat::write_end_of_line(&v7, &v1, v14, v15, *((a0 + 4) as &i8));
                            v35 = v7;
                            if v7 != 9223372036854775814 {
                                *((v2 + 8) as &i128) = *(&v8 as &i128);
                                *(v2 as &std::io::stdio::StderrLock) = v35;
                                return;
                            }
                            *((a2 + 8) as &i8) = 1;
                            break;
                        }
                        13 => {
                            *((a2 + 9) as &i8) = 1;
                            break;
                        }
                        _ => {
                            v7 = 0;
                            core::panicking::assert_failed(0, v33 + v38, &g_41ce0c, &v7, "src/uu/cat/src/cat.rs"); /* do not return */
                        }
                    }
                } else {
                    *((a2 + 8) as &i8) = 0;
                    break;
                }
            }
        } while (v34 < *((&v42 as &char + 8) as &i64));
    }
    *(v40 as &i64) = 9223372036854775814;
    return;
}
