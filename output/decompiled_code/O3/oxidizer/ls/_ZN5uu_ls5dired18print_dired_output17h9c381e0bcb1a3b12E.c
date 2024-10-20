fn uu_ls::dired::print_dired_output(a0: &struct_0, a1: &u64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: u8;  // [bp-0x98]
    let v1: u8;  // [bp-0x90]
    let v2: Arguments;  // [sp-0x88], Other Possible Types: u64
    let v3: u64;  // [sp-0x78]
    let v4: u128;  // [sp-0x70]
    let v5: u64;  // [sp-0x58]
    let v6: u64;  // [sp-0x48]
    let v7: u64;  // [sp-0x40]
    let v9: u64;  // rax
    let v10: u64;  // rsi
    let v11: u64;  // rdx
    let v12: &u64;  // rax
    let v13: u64;  // r12
    let v14: u64;  // r13
    let v15: u128;  // xmm0
    let v17: u64;  // r12
    let v19: u64;  // r15
    let v20: u64;  // r12
    let v22: u64;  // r12

    v9 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a2, a1, a2, a3, a4, a5, *(&v0 as &i64), *(&v1 as &i64));
    if !v9 {
        v9 = <std::io::stdio::Stdout as std::io::Write>::flush(a2 + 32, v10, v11);
        if !v9 {
            v13 = a1[2];
            if v13 {
                v14 = a1[1];
                v6 = &g_42fc54;
                v7 = 9;
                v2 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v0]
                    fmt: None
                };
                v3 = &v0;
                std::io::stdio::_print(&v2);
                do {
                    v17 = v13 * 16;
                    v5 = v14;
                    v14 = v5 + 16;
                    v2 = Arguments {
                        pieces: [" "]
                        args: [&v0]
                        fmt: None
                    };
                    std::io::stdio::_print(&v2);
                } while (v17 != 16);
                v2 = Arguments {
                    pieces: ["\n"]
                    args: [8]
                    fmt: None
                };
                v4 = 0;
                std::io::stdio::_print(&v2);
            }
            if a0->field_e6 {
                v19 = a1[4];
                v20 = a1[5];
                v6 = &g_42fc5d;
                v7 = 12;
                v2 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v0]
                    fmt: None
                };
                std::io::stdio::_print(&v2);
                if v20 {
                    do {
                        v22 = v20 * 16;
                        v5 = v19;
                        v19 = v5 + 16;
                        v2 = Arguments {
                            pieces: [" "]
                            args: [&v0]
                            fmt: None
                        };
                        std::io::stdio::_print(&v2);
                    } while (v22 != 16);
                }
                v2 = Arguments {
                    pieces: ["\n"]
                    args: [8]
                    fmt: None
                };
                v4 = 0;
                std::io::stdio::_print(&v2);
            }
            v2 = Arguments {
                pieces: ["//DIRED-OPTIONS// --quoting-style=", "\n"]
                args: [&v0]
                fmt: None
            };
            std::io::stdio::_print(&v2);
            return 0;
        }
    }
    v2 = 0x8000000000000000;
    v4 = v9;
    v12 = __rust_alloc(32, 8);
    v15 = *(&v2.pieces.ptr as &i128);
    *(&v12[2] as &i128) = *(&v3 as &i128);
    *(v12) = v15;
    return v12;
}
