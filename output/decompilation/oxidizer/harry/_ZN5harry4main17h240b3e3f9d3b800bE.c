fn harry::main() -> void {
    let v0: u64;  // [bp-0x170]
    let v1: u32;  // [bp-0x16c]
    let v2: i64;  // [bp-0x168], Other Possible Types: u64
    let v3: u32;  // [bp-0x15c]
    let v4: struct24;  // [bp-0x158], Other Possible Types: struct8
    let v5: struct24;  // [bp-0x158]
    let v6: u64;  // [bp-0x148]
    let v7: Result<struct4, struct8>;  // [bp-0x140], Other Possible Types: struct48, struct16
    let v8: struct24;  // [bp-0x110], Other Possible Types: struct16, u64
    let v9: u64;  // [bp-0x110]
    let v10: Result<struct16, struct16>;  // [bp-0xf8]
    let v11: Result<struct16, struct16>;  // [bp-0xf8]
    let v12: u64;  // [bp-0xf0]
    let v13: Result<struct4, struct8>;  // [bp-0xe8], Other Possible Types: struct24, struct40, u64
    let v14: u64;  // [bp-0xe8]
    let v15: u64;  // [bp-0xe8]
    let v16: u64;  // [bp-0xe8]
    let v17: u64;  // [bp-0xb8]
    let v18: u64;  // [bp-0xb0]
    let v19: struct16;  // [bp-0xa8]
    let v20: u64;  // [bp-0xa8]
    let v21: u32;  // [bp-0xa0]
    let v22: u64;  // [bp-0x98]
    let v23: u128;  // [bp-0x98]
    let v24: u128;  // [bp-0x88]
    let v25: alloc::string::String;  // [bp-0x70]
    let v26: u64;  // [bp-0x60]
    let v27: u32;  // [bp-0x58]
    let v28: u32;  // [bp-0x54]
    let v29: u128;  // [bp-0x50]
    let v30: u128;  // [bp-0x40]
    let v31: u64;  // [bp-0x30]
    let v32: u64;  // [bp-0x28]
    let v33: u64;  // [bp-0x20]
    let v34: u64;  // [bp-0x18]
    let v35: u64;  // [bp-0x10]
    let v37: u64;  // r15
    let v38: u64;  // r14
    let v39: u64;  // r13
    let v40: u64;  // r12
    let v41: u64;  // rbx
    let v42: u32;  // edx
    let v43: u64;  // rcx
    let v44: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v45: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v35 = v37;
    v34 = v38;
    v33 = v39;
    v32 = v40;
    v31 = v41;
    v7 = struct16 {
        field_0: "7869"
        field_8: <&T as core::fmt::Display>::fmt
    };
    v13 = core::fmt::Arguments::new_v1("0.0.0.0:", 1, &v7, 0x1);
    v25 = alloc::fmt::format(&v13);
    v17 = v25.vec.buf.field_0;
    v18 = v26;
    v19 = struct16 {
        field_0: std::time::Instant::now()
        field_8: v42
    };
    loop {
        v7 = struct16 {
            field_0: &v17
            field_8: <&T as core::fmt::Display>::fmt
        };
        v13 = core::fmt::Arguments::new_v1("Binding to ", 2, &v7, 0x1);
        std::io::stdio::_print(&v13);
        v13 = std::net::each_addr(v17, v18, v43);
        v7 = core::result::Result<T,E>::map(&v13);
        v0 = core::result::Result<T,E>::expect(&v7);
        println!("Waiting for connection");
        std::net::tcp::TcpListener::accept(&v27, &v0);
        if v27 {
            v22 = v29;
            v7 = struct16 {
                field_0: &v22 as u128
                field_8: <std::io::error::Error as core::fmt::Display>::fmt
            };
            v13 = core::fmt::Arguments::new_v1("Error: ", 2, &v7, 0x1);
            std::io::stdio::_print(&v13);
        } else {
            v1 = v28;
            v24 = v30;
            v23 = v29;
            v7 = struct16 {
                field_0: &v23
                field_8: <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt
            };
            v13 = core::fmt::Arguments::new_v1("Got connection from ", 2, &v7, 0x1);
            std::io::stdio::_print(&v13);
            v3 = 0;
            v13 = v14;
            v15 = v14;
            if (v3 as i8 & 1) {
                do {
                    loop {
                        v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, &v1);
                        v4 = struct24 {
                            field_0: 1
                            field_8: 0
                        };
                        v10 = std::io::append_to_string(&v4, &v7);
                        if let Ok(_) = v10 {
                            break;
                        }
                        if !v12 {
                            goto LABEL_40c430;
                        }
                        v4 = alloc::string::String::pop();
                        v13 = v5;
                        v8 = harry::exec(&v13);
                        v45 = <std::net::tcp::TcpStream as std::io::Write>::write(&v13, &v1, v8.field_0);
                    }
                    v2 = v12;
                    v8 = struct16 {
                        field_0: &v2
                        field_8: <std::io::error::Error as core::fmt::Display>::fmt
                    };
                    v13 = core::fmt::Arguments::new_v1("Error: ", 2, &v8, 0x1);
                    std::io::stdio::_print(&v13);
                    v13 = v15;
                    v8 = v9;
LABEL_40c1f0:
                    v16 = v13;
                    v13 = v16;
                    v15 = v16;
                } while ((v3 as i8 & 1));
            }
            v15 = v13;
            v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, &v1);
            v4 = struct24 {
                field_0: 1
                field_8: 0
            };
            v11 = std::io::append_to_string(&v4, &v7);
            if !(!v11 as i64) {
                continue;
            }
            if !v12 {
                goto LABEL_40c430;
            }
            v4 = alloc::string::String::pop();
            println!("Not authenticated. Waiting for password");
            if harry::verify_sha3(1, v6) && <core::time::Duration as core::cmp::PartialOrd>::partial_cmp(std::time::Instant::elapsed(&v20), v42) != 255 {
                println!("Auth success");
                v44 = <std::net::tcp::TcpStream as std::io::Write>::write(&v11 as u384, &v1, &g_45c2ff);
                v3 = core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v11 as u384) & -0x100 | 1;
                v13 = v14;
                goto LABEL_40c1f0;
            } else {
                v20 = std::time::Instant::now();
                v21 = v42;
                v2 = &v4;
                v8 = struct16 {
                    field_0: &v2
                    field_8: <&T as core::fmt::Display>::fmt
                };
                v13 = core::fmt::Arguments::new_v1("Wrong password or too quick: ", 2, &v8, 0x1);
                std::io::stdio::_print(&v13);
                v13 = v14;
                v8 = v9;
                goto LABEL_40c1f0;
            }
LABEL_40c430:
            v8 = struct16 {
                field_0: &v23
                field_8: <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt
            };
            v13 = core::fmt::Arguments::new_v1("Socket with ", 2, &v8, 0x1);
            std::io::stdio::_print(&v13);
            v8 = v9;
        }
    }
}
