fn uu_chmod::Chmoder::chmod(a0: &struct39, a1: i64, a2: i64) -> u64 {
    let v0: u8;  // [bp-0x18d]
    let v1: u8;  // [bp-0x18c]
    let v2: u8;  // [bp-0x18b]
    let v3: u8;  // [bp-0x18a]
    let v4: u8;  // [bp-0x189]
    let v5: u64;  // [bp-0x188]
    let v6: u64;  // [bp-0x180]
    let v7: void*;  // [bp-0x178]
    let v8: u64;  // [bp-0x170]
    let v9: u64;  // [bp-0x168]
    let v10: u8;  // [bp-0x160]
    let v11: void*;  // [bp-0x158]
    let v12: struct16;  // [bp-0x150]
    let v13: struct640;  // [bp-0x140]
    let v14: i32;  // [bp-0x134]
    let v15: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x128], Other Possible Types: struct28, u64
    let v16: core::fmt::rt::Argument;  // [bp-0x128]
    let v17: core::fmt::rt::Argument;  // [bp-0x128], Other Possible Types: u64
    let v18: u64;  // [bp-0x128]
    let v19: u64;  // [bp-0x128]
    let v20: struct640;  // [bp-0x118]
    let v21: u32;  // [bp-0x110]
    let v22: alloc::string::String;  // [bp-0x78]
    let v23: struct640;  // [bp-0x68]
    let v24: alloc::string::String;  // [bp-0x60]
    let v25: struct640;  // [bp-0x50]
    let v26: alloc::string::String;  // [bp-0x48]
    let v28: i64;  // r12
    let v29: u64;  // r15
    let v30: i64;  // rax
    let v31: void*;  // rcx
    let v32: u64;  // r14
    let v33: u64;  // rbp
    let v36: i64;  // rdx
    let v38: u64;  // rbp

    if !a2 {
        return 0;
    }
    v28 = a1;
    v29 = a1 + a2 * 24;
    v30 = a1 + 24;
    v0 = *((a0 + 33) as &i8);
    v3 = *((a0 + 34) as &i8);
    v1 = *((a0 + 35) as &i8);
    v4 = *((a0 + 37) as &i8);
    v2 = *((a0 + 36) as &i8);
    v14 = ((*((a0 + 36) as &i8) & 1) ? !*((a0 + 38) as &i8) : *((a0 + 37) as &i8) ^ 1);
    v31 = 0;
    loop {
        v11 = v31;
        loop {
            v32 = *((v28 + 8) as &i64);
            v33 = *((v28 + 16) as &i64);
            v28 = v30;
            v15 = std::fs::metadata(v32, v33);
            if v15 as i64 == 2 {
                if !std::path::Path::is_symlink(v32, v33) {
                    v18 = v19;
                    if !(v0 & 1) {
                        v7 = 0;
                        v8 = v32;
                        v9 = v33;
                        v10 = 1;
                        v24 = format!("cannot access {}: No such file or directory", &v7);
                        v21 = 1;
                        v17 = *(&v24.vec.buf.inner.cap as &i128);
                        v20 = v25;
                        v12 = struct16 {
                            field_0: alloc::boxed::Box<T>::new(&v17 as u384) as u64
                            field_8: &g_4eba08
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v12.field_0));
                        v5 = uucore::util_name();
                        v6 = v36;
                        eprintln!("{}: {}", &v5, &v12);
                        v18 = v17;
                    }
LABEL_45e010:
                    v19 = v18;
                    uucore::mods::error::set_exit_code(1);
                } else if !(v14 as i8 & 1) {
                    v16 = v19;
                    if !(v0 & 1) {
                        v7 = 0;
                        v8 = v32;
                        v9 = v33;
                        v10 = 1;
                        v22 = format!("cannot operate on dangling symlink {}", &v7);
                        v21 = 1;
                        v17 = *(&v22.vec.buf.inner.cap as &i128);
                        v20 = v23;
                        v12 = struct16 {
                            field_0: alloc::boxed::Box<T>::new(&v17 as u384) as u64
                            field_8: &g_4eba08
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v12.field_0));
                        v5 = uucore::util_name();
                        v6 = v36;
                        eprintln!("{}: {}", &v5, &v12);
                        uucore::mods::error::set_exit_code(1);
                        v16 = v17;
                    }
                    v15 = v16;
                    v18 = v15;
                    if (v3 & 1) {
                        v7 = 0;
                        v8 = v32;
                        v9 = v33;
                        v10 = 1;
                        println!("failed to change mode of {} from 0000 (---------) to 1500 (r-x-----T)", &v7);
                        v18 = v17;
                        goto LABEL_45e010;
                    }
                }
            } else {
                if (v4 & 1) || !std::path::Path::is_symlink(v32, v33) {
                    break;
                }
            }
            v30 = v28 + 24;
            if v28 == v29 {
                return v11;
            }
        }
        if (v2 & 1) {
            if (v1 & 1) && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, "/") {
                v7 = 0;
                v8 = v32;
                v9 = v33;
                v10 = 1;
                v26 = format!("it is dangerous to operate recursively on {}\nchmod: use --no-preserve-root to override this failsafe", &v7);
                v15 = struct28 {
                    field_0: *(&v26.vec.buf.inner.cap as &i128)
                    field_16: v26.vec.len
                    field_24: 1
                };
                return alloc::boxed::Box<T>::new(&v15) as u64;
            }
            v31 = uu_chmod::Chmoder::walk_dir(a0, v32, v33);
            v38 = v36;
        } else {
            v31 = core::result::Result<T,E>::and(uu_chmod::Chmoder::chmod_file(a0, v32, v33), v36, v11, v13);
            v38 = v36;
        }
        v30 = v28 + 24;
        v13 = v38;
        if v28 == v29 {
            v30 = v28;
            if v28 == v29 {
                return v31;
            }
        } else if v28 == v29 {
            return v31;
        }
    }
}
