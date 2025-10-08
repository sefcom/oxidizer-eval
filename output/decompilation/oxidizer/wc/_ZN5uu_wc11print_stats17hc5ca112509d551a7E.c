fn uu_wc::print_stats(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u64;  // [bp-0x150]
    let v1: struct16;  // [bp-0x148], Other Possible Types: u64
    let v2: u64;  // [bp-0x148]
    let v3: u64;  // [bp-0x148]
    let v4: struct81;  // [bp-0x140]
    let v5: u64;  // [bp-0x138]
    let v6: core::fmt::Arguments;  // [bp-0x130]
    let v7: u64;  // [bp-0xf8]
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xf0]
    let v9: struct73;  // [bp-0xe8]
    let v10: core::fmt::rt::Argument;  // [bp-0xe0]
    let v11: u128;  // [bp-0xe0]
    let v12: core::fmt::rt::Argument;  // [bp-0xd0]
    let v13: u128;  // [bp-0xd0]
    let v14: core::fmt::rt::Argument;  // [bp-0xc0]
    let v15: u128;  // [bp-0xc0]
    let v16: std::io::stdio::Stdout;  // [bp-0xb0]
    let v17: u8;  // [bp-0xb0]
    let v18: u64;  // [bp-0xa8]
    let v19: u8;  // [bp-0xa0]
    let v20: u64;  // [bp-0x98]
    let v21: u8;  // [bp-0x90]
    let v22: u64;  // [bp-0x88]
    let v23: u8;  // [bp-0x80]
    let v24: u64;  // [bp-0x78]
    let v25: u8;  // [bp-0x70]
    let v26: u64;  // [bp-0x68]
    let v27: core::fmt::Arguments;  // [bp-0x60], Other Possible Types: u8
    let v29: u64;  // rax
    let v30: Result<struct24, struct9>;  // rax

    v16 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v16);
    v17 = *((a0 + 26) as &i8);
    v18 = *((a1 + 16) as &i64);
    v19 = *((a0 + 27) as &i8);
    v20 = *((a1 + 24) as &i64);
    v21 = *((a0 + 25) as &i8);
    v22 = *((a1 + 8) as &i64);
    v23 = *((a0 + 24) as &i8);
    v24 = *(a1 as &i64);
    v25 = *((a0 + 28) as &i8);
    v26 = *((a1 + 32) as &i64);
    v1 = 1;
    v4 = 0;
    v8 = &v17;
    v9 = &v27;
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v8);
    v2 = v1;
    if v29 {
        if a4 > 65535 {
            v5 = v29 + 8;
            panic!("Formatting argument out of range");
        }
        v2 = v1;
        loop {
            v5 = v29 + 8;
            v10 = core::fmt::rt::Argument {
                ty: &v2
            };
            v12 = core::fmt::rt::Argument {
                ty: &v5
            };
            v14 = core::fmt::rt::Argument {
                ty: 0
            };
            v27 = core::fmt::Arguments {
                pieces: [&g_41a470, &g_41a480]
                args: [v11, v13, v15]
                fmt: &g_41a5b0
            };
            v30 = std::io::Write::write_fmt(&v0, &v27);
            if let Ok(_) = v30 {
                break;
            }
            v1 = struct16 {
                field_0: " "
            };
            v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v8);
            v2 = v3;
            if !v29 {
                goto LABEL_46a490;
            }
        }
    }
LABEL_46a490:
    if v7 {
        v10 = core::fmt::rt::Argument {
            ty: &v2
        };
        v6 = core::fmt::Arguments {
            pieces: [&g_4187e0]
            args: [v11]
            fmt: 0
        };
        v30 = std::io::Write::write_fmt(&v0, &v6);
        if !v30 {
            v30 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v7, a3);
            if !v30 {
                goto LABEL_46a529;
            }
        }
    } else {
LABEL_46a529:
        v6 = core::fmt::Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        v30 = std::io::Write::write_fmt(&v0, &v6);
    }
    return v30;
}
