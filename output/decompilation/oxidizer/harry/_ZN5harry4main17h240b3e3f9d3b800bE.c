fn harry::main() -> void {
    let v0: u64;  // [bp-0x170]
    let v1: u32;  // [bp-0x16c]
    let v2: i64;  // [bp-0x168], Other Possible Types: u64
    let v3: u32;  // [bp-0x15c]
    let v4: alloc::raw_vec::RawVec<u8, alloc::alloc::Global>;  // [bp-0x158], Other Possible Types: struct24
    let v5: struct24;  // [bp-0x158]
    let v6: u64;  // [bp-0x148]
    let v7: Result<struct4, struct8>;  // [bp-0x140], Other Possible Types: struct48, struct16
    let v8: struct24;  // [bp-0x110], Other Possible Types: struct16, u64
    let v9: u64;  // [bp-0x110]
    let v10: struct16;  // [bp-0xf8]
    let v11: u64;  // [bp-0xf0]
    let v12: Result<struct4, struct8>;  // [bp-0xe8], Other Possible Types: struct24, struct40, u64
    let v13: u64;  // [bp-0xe8]
    let v14: u64;  // [bp-0xe8]
    let v15: u64;  // [bp-0xe8]
    let v16: u64;  // [bp-0xb8]
    let v17: u64;  // [bp-0xb0]
    let v18: struct16;  // [bp-0xa8]
    let v19: u64;  // [bp-0xa8]
    let v20: u32;  // [bp-0xa0]
    let v21: u64;  // [bp-0x98]
    let v22: u128;  // [bp-0x98]
    let v23: u128;  // [bp-0x88]
    let v24: alloc::string::String;  // [bp-0x70]
    let v25: u64;  // [bp-0x60]
    let v26: u32;  // [bp-0x58]
    let v27: u32;  // [bp-0x54]
    let v28: u128;  // [bp-0x50]
    let v29: u128;  // [bp-0x40]
    let v30: u64;  // [bp-0x30]
    let v31: u64;  // [bp-0x28]
    let v32: u64;  // [bp-0x20]
    let v33: u64;  // [bp-0x18]
    let v34: u64;  // [bp-0x10]
    let v36: u64;  // r15
    let v37: u64;  // r14
    let v38: u64;  // r13
    let v39: u64;  // r12
    let v40: u64;  // rbx
    let v41: u32;  // edx
    let v42: u64;  // rcx
    let v43: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v44: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v34 = v36;
    v33 = v37;
    v32 = v38;
    v31 = v39;
    v30 = v40;
    v7 = struct16 {
        field_0: "7869"
        field_8: <&T as core::fmt::Display>::fmt
    };
    v12 = core::fmt::Arguments::new_v1("0.0.0.0:", 1, &v7, 0x1);
    v24 = alloc::fmt::format(&v12);
    v16 = v24.vec.buf.cap;
    v17 = v25;
    v18 = struct16 {
        field_0: std::time::Instant::now()
        field_8: v41
    };
    loop {
        v7 = struct16 {
            field_0: &v16
            field_8: <&T as core::fmt::Display>::fmt
        };
        v12 = core::fmt::Arguments::new_v1("Binding to ", 2, &v7, 0x1);
        std::io::stdio::_print(&v12);
        v12 = std::net::each_addr(v16, v17, v42);
        v7 = core::result::Result<T,E>::map(&v12);
        v0 = core::result::Result<T,E>::expect(&v7);
        println!("Waiting for connection");
        std::net::tcp::TcpListener::accept(&v26, &v0);
        if v26 {
            v21 = v28;
            v7 = struct16 {
                field_0: &v21 as u128
                field_8: <std::io::error::Error as core::fmt::Display>::fmt
            };
            v12 = core::fmt::Arguments::new_v1("Error: ", 2, &v7, 0x1);
            std::io::stdio::_print(&v12);
        } else {
            v1 = v27;
            v23 = v29;
            v22 = v28;
            v7 = struct16 {
                field_0: &v22
                field_8: <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt
            };
            v12 = core::fmt::Arguments::new_v1("Got connection from ", 2, &v7, 0x1);
            std::io::stdio::_print(&v12);
            v3 = 0;
            v12 = v13;
            v14 = v13;
            if (v3 as i8 & 1) {
                do {
                    loop {
                        v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, &v1);
                        v4 = struct24 {
                            field_0: 1
                            field_8: 0
                        };
                        v10 = std::io::append_to_string(&v4, &v7);
                        if v10.field_0 {
                            break;
                        }
                        if !v11 {
                            goto LABEL_40c430;
                        }
                        v4 = alloc::string::String::pop();
                        v12 = v5;
                        v8 = harry::exec(&v12);
                        v44 = <std::net::tcp::TcpStream as std::io::Write>::write(&v12, &v1, v8.field_0);
                    }
                    v2 = v11;
                    v8 = struct16 {
                        field_0: &v2
                        field_8: <std::io::error::Error as core::fmt::Display>::fmt
                    };
                    v12 = core::fmt::Arguments::new_v1("Error: ", 2, &v8, 0x1);
                    std::io::stdio::_print(&v12);
                    v12 = v14;
                    v8 = v9;
LABEL_40c1f0:
                    v15 = v12;
                    v12 = v15;
                    v14 = v15;
                } while ((v3 as i8 & 1));
            }
            v14 = v12;
            v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, &v1);
            v4 = struct24 {
                field_0: 1
                field_8: 0
            };
            v10 = std::io::append_to_string(&v4, &v7);
            if !(!v10.field_0) {
                continue;
            }
            if !v11 {
                goto LABEL_40c430;
            }
            v4 = alloc::string::String::pop();
            println!("Not authenticated. Waiting for password");
            if harry::verify_sha3(1, v6) && <core::time::Duration as core::cmp::PartialOrd>::partial_cmp(std::time::Instant::elapsed(&v19), v41) != 255 {
                println!("Auth success");
                v43 = <std::net::tcp::TcpStream as std::io::Write>::write(&v14, &v1, &g_45c2ff);
                v3 = core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v14) & -0x100 | 1;
                v12 = v13;
                goto LABEL_40c1f0;
            } else {
                v19 = std::time::Instant::now();
                v20 = v41;
                v2 = &v4;
                v8 = struct16 {
                    field_0: &v2
                    field_8: <&T as core::fmt::Display>::fmt
                };
                v12 = core::fmt::Arguments::new_v1("Wrong password or too quick: ", 2, &v8, 0x1);
                std::io::stdio::_print(&v12);
                v12 = v13;
                v8 = v9;
                goto LABEL_40c1f0;
            }
LABEL_40c430:
            v8 = struct16 {
                field_0: &v22
                field_8: <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt
            };
            v12 = core::fmt::Arguments::new_v1("Socket with ", 2, &v8, 0x1);
            std::io::stdio::_print(&v12);
            v8 = v9;
        }
    }
}
