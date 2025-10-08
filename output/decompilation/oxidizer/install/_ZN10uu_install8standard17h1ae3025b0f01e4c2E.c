fn uu_install::standard(a0: &struct24) -> u64 {
    let v0: u8;  // [bp-0x249]
    let v1: u64;  // [bp-0x248]
    let v2: u64;  // [bp-0x240]
    let v3: u64;  // [sp-0x238]
    let v4: u64;  // [bp-0x238]
    let v5: u64;  // [bp-0x230]
    let v6: u64;  // [bp-0x230]
    let v7: u64;  // [bp-0x228]
    let v8: u64;  // [bp-0x228]
    let v9: struct24;  // [bp-0x220], Other Possible Types: u32
    let v10: struct640;  // [bp-0x220], Other Possible Types: u64
    let v11: struct640;  // [bp-0x220]
    let v12: u64;  // [bp-0x218]
    let v13: core::fmt::Arguments;  // [sp-0x210], Other Possible Types: u64
    let v14: core::fmt::Arguments;  // [bp-0x210], Other Possible Types: u64
    let v15: void*;  // [bp-0x1f0], Other Possible Types: struct16, u64
    let v16: u64;  // [bp-0x1e8]
    let v17: void*;  // [bp-0x1e0]
    let v18: struct24;  // [bp-0x1d8], Other Possible Types: u128
    let v19: u64;  // [bp-0x1d8]
    let v20: u64;  // [bp-0x1d0]
    let v21: struct16;  // [bp-0x1d0]
    let v22: u64;  // [bp-0x1c8]
    let v23: u8;  // [bp-0x1c0]
    let v24: u64;  // [bp-0x1b0]
    let v25: u64;  // [bp-0x1a8]
    let v26: u8;  // [bp-0x1a0]
    let v27: void*;  // [bp-0x198], Other Possible Types: u32
    let v28: struct712;  // [bp-0x190]
    let v29: struct24;  // [bp-0x188], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>, u64
    let v30: struct24;  // [bp-0x188], Other Possible Types: u128
    let v31: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x188]
    let v32: u64;  // [bp-0x180]
    let v33: u64;  // [bp-0x178]
    let v34: u64;  // [bp-0x178]
    let v35: u64;  // [bp-0x170]
    let v36: iNone;  // [bp-0x168], Other Possible Types: u64
    let v37: iNone;  // [bp-0x158], Other Possible Types: u64
    let v38: struct16;  // [bp-0xd8]
    let v39: alloc::string::String;  // [bp-0xc0]
    let v40: u64;  // [bp-0xb0]
    let v41: struct20;  // [bp-0xa8]
    let v42: u128;  // [bp-0x98]
    let v43: iNone;  // [bp-0x88]
    let v44: iNone;  // [bp-0x78]
    let v45: core::option::Option<std::path::Component>;  // [bp-0x68]
    let v47: u64;  // r15
    let v48: i64;  // rsi
    let v50: struct16;  // rbp
    let v51: u64;  // rsi
    let v52: u64;  // rcx
    let v53: i64;  // rax
    let v54: u64;  // rax
    let v55: u64;  // rsi
    let v56: u32;  // rdx
    let v58: u64;  // rcx
    let v63: u64;  // rax
    let v64: u8;  // r13b
    let v65: void*;  // r15
    let v66: u64;  // r13
    let v67: u64;  // r12
    let v68: &mut [u8];  // rax:rdx

    v47 = *((a0 + 16) as &i64);
    if !v47 {
        v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing file operand");
        v33 = v13;
        v29 = *(&v9.field_0 as &i128);
        v35 = 1;
        alloc::boxed::Box<T>::new(&v29);
    } else if (3 <= v47 & v64) {
        v18 = <alloc::string::String as core::clone::Clone>::clone(*((a0 + 8) as &i64) + 48);
        v9 = uucore::format_usage("{} [OPTION]... [FILE]...");
        v35 = v22;
        v32 = *(&v18.field_0 as &i128);
        v36 = *(&v9.field_0 as &i128);
        v37 = v13;
        v29 = 17;
        alloc::boxed::Box<T>::new(&v29);
    } else {
        v50 = *((v48 + 48) as &i64);
        if (((0 ^ v50) & (0 ^ -(v50))) >> 63) as char {
            *((a0 + 16) as &u64) = v47;
            v52 = (v47 - 1) * 3;
            v53 = *((*((a0 + 8) as &i64) + v52 * 8) as &i64);
            core::option::unwrap(v53);
            v12 = *((v51 + v52 * 8 + 8) as &i128);
            v10 = v53;
            if v47 {
                v3 = v14;
                v1 = v10;
                v2 = v12;
                goto LABEL_4677b8;
            } else {
                v29 = core::str::converts::from_utf8(v12, v13);
                match v29 {
                    Err(_) => {
                        core::option::unwrap_failed(); /* do not return */
                    },
                    Ok(_) => {
                        v18 = v32;
                        v20 = v33;
                        v39 = format!("missing destination file operand after '{}'", &v18);
                        v35 = 1;
                        v30 = *(&v39.vec.buf.inner.cap as &i128) as u128;
                        v33 = v40;
                        alloc::boxed::Box<T>::new(&v30 as u384);
                    },
                }
            }
        } else {
            v29 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v48 + 56) as &i64), *((v48 + 64) as &i64));
            v3 = v34;
            v1 = *(&v29.field_0 as &i128);
LABEL_4677b8:
            core::iter::traits::iterator::Iterator::collect(&v26, v51, v51 + v47 * 24);
            if *((v48 + 101) as &i8) {
                if v50 == 0x8000000000000000 && v28 <= 1 && !uu_install::is_potential_directory_path(v2, v3) {
                    v54 = std::path::Path::parent(v2, v3);
                    if v54 {
                        v55 = v54;
                        goto LABEL_46782d;
                    }
                }
                v55 = v2;
                v4 = v3;
LABEL_46782d:
                v7 = v55;
                v5 = v4;
                v29 = alloc::string::String::from_utf8_lossy(v55, v4);
                v38 = v50;
                v9 = 0;
                v68 = core::char::methods::encode_utf8_raw(47, &v9, v56);
                v8 = v7;
                v6 = v5;
                if core::slice::<impl [T]>::ends_with(v32, v34, v68.data_ptr, v58) {
                    v29 = core::str::converts::from_utf8(v7, v5);
                    match v29 {
                        Err(_) => {
                            core::option::unwrap_failed(); /* do not return */
                        },
                        Ok(_) => {
                            v8 = core::str::<impl str>::trim_end_matches(v32, v34);
                        },
                    }
                }
                v24 = v8;
                v25 = v6;
                v29 = std::fs::metadata(v8, v6);
                if v31 as i64 == 2 {
                    if *((v48 + 97) as &i8) {
                        v0 = v64;
                        v15 = 0;
                        v16 = 1;
                        v17 = 0;
                        v41 = std::path::Path::components(v24, v25);
                        v37 = v44;
                        v36 = v43;
                        v33 = v42;
                        v29 = *(&v41.field_0 as &i128);
                        loop {
                            v45 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v29);
                            if &v45 == "\n" {
                                break;
                            }
                            v15 = std::path::PathBuf::push(std::path::Component::as_os_str(&v45) as u64, v56);
                            if !std::path::Path::is_dir(1, 0) {
                                v19 = 1;
                                *(&v21.field_0 as &i128) = *(&v16 as &i128);
                                v23 = 1;
                                println!("install: creating directory {}", &v19);
                                v10 = v11;
                                v14 = v13;
                            }
                        }
                        v64 = v0;
                    }
                    v15 = std::fs::create_dir_all(v24, v25);
                    if !v15 {
                        goto LABEL_467c56;
                    }
                    v18 = v15;
                    v9 = std::sys::pal::unix::os::split_paths::bytes_to_path(v24);
                    v36 = v14;
                    v33 = *(&v9.field_0 as &i128);
                    v32 = v18;
                    v29 = 2;
                    alloc::boxed::Box<T>::new(&v29);
                } else {
LABEL_467c56:
                    if v38 == 0x8000000000000000 {
                        goto LABEL_467c5f;
                    }
                    v29 = std::fs::metadata(v7, v5);
                    if v29 as i64 != 2 && std::path::Path::is_dir(v7, v5) {
                        goto LABEL_467c5f;
                    }
                    v9 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7);
                    v35 = v14;
                    v32 = *(&v9.field_0 as &i128);
                    v29 = 14;
                    alloc::boxed::Box<T>::new(&v29);
                }
                goto LABEL_467efa;
            }
LABEL_467c5f:
            if v28 > 1 {
                uu_install::copy_files_into_dir(v27, v28, v2, v3, v48);
            } else {
                if v28 != 1 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v65 = v27;
                if std::path::Path::is_dir(v65[8] as i64, v65[16] as i64) {
                    v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v65[8] as i64, v65[16] as i64);
                    v35 = v14;
                    v32 = *(&v9.field_0 as &i128);
                    v29 = 13;
                    alloc::boxed::Box<T>::new(&v29);
                    goto LABEL_467efa;
                }
                v66 = v2;
                v67 = v3;
                if v64 {
                    v29 = std::fs::metadata(v66, v67);
                    if v29 as i64 == 2 {
                        goto LABEL_467d64;
                    }
                    v30 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v66, v67);
                    v22 = v34;
                    v18 = *(&v30.field_0 as &i128);
                    v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v65[8] as i64, v65[16] as i64);
                    v37 = v14;
                    v36 = *(&v9.field_0 as &i128);
                    v32 = *(&v19 as &i128);
                    v35 = v22;
                    v29 = 15;
                    alloc::boxed::Box<T>::new(&v29);
                    goto LABEL_467efa;
                } else {
LABEL_467d64:
                    if uu_install::is_potential_directory_path(v66, v67) {
                        uu_install::copy_files_into_dir(v65, 1, v66, v67, v48);
LABEL_467efa:
                    } else if std::path::Path::is_file(v66, v67) || uu_install::is_new_file_path(v66, v67) {
                        uu_install::copy(v65[8] as i64, v65[16] as i64, v66, v67, v48);
                    } else {
                        v35 = v3;
                        v32 = *(&v1 as &i128);
                        v29 = 5;
                        alloc::boxed::Box<T>::new(&v29);
                    }
                }
            }
        }
    }
    return v63;
}
