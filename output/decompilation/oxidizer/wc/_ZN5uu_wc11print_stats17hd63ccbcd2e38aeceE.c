fn uu_wc::print_stats(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x190]
    let v1: core::slice::iter::Iter<u8>;  // [bp-0x188], Other Possible Types: struct16
    let v2: struct30;  // [bp-0x188]
    let v3: struct30;  // [bp-0x188]
    let v4: struct16;  // [bp-0x180]
    let v5: i64;  // [bp-0x168]
    let v6: i64;  // [bp-0x160]
    let v7: u64;  // [bp-0x158]
    let v8: i64;  // [bp-0x150]
    let v9: core::slice::iter::Iter<u8>;  // [bp-0x148], Other Possible Types: u64
    let v10: i64;  // [bp-0x140]
    let v11: u64;  // [bp-0x138]
    let v12: u64;  // [bp-0x130]
    let v13: void*;  // [bp-0x128]
    let v14: std::io::stdio::Stdout;  // [bp-0x120], Other Possible Types: struct40, u64
    let v15: u64;  // [bp-0x110]
    let v16: void*;  // [bp-0x100]
    let v17: u64;  // [bp-0xf8]
    let v18: u8;  // [bp-0xf0]
    let v19: u64;  // [bp-0xe8]
    let v20: u64;  // [bp-0xd8]
    let v21: u64;  // [bp-0xd0]
    let v22: u64;  // [bp-0xc8]
    let v23: Result<struct12, struct8>;  // [bp-0xc0]
    let v24: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xb8]
    let v25: struct40;  // [bp-0xb0], Other Possible Types: u64
    let v26: u64;  // [bp-0xa8]
    let v27: u64;  // [bp-0x88]
    let v28: u64;  // [bp-0x80]
    let v29: u64;  // [bp-0x78]
    let v30: u8;  // [bp-0x70]
    let v31: u64;  // [bp-0x68]
    let v32: u8;  // [bp-0x60]
    let v33: u64;  // [bp-0x58]
    let v34: u8;  // [bp-0x50]
    let v35: u64;  // [bp-0x48]
    let v36: u8;  // [bp-0x40]
    let v37: u64;  // [bp-0x38]
    let v38: u64;  // [bp-0x30]
    let v40: u64;  // rax
    let v41: struct21;  // r14

    v14 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v14);
    v28 = *((a0 + 26) as &i8);
    v29 = *((a1 + 16) as &i64);
    v30 = *((a0 + 27) as &i8);
    v31 = *((a1 + 24) as &i64);
    v32 = *((a0 + 25) as &i8);
    v33 = *((a1 + 8) as &i64);
    v34 = *((a0 + 24) as &i8);
    v35 = *(a1 as &i64);
    v36 = *((a0 + 28) as &i8);
    v37 = *((a1 + 32) as &i64);
    v1 = 1;
    v4 = 0;
    v5 = &v28;
    v6 = &v38;
    v40 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v5);
    v2 = v1;
    if v40 {
        v2 = v1;
        loop {
            v7 = v40 + 8;
            v8 = &v2;
            v9 = <&T as core::fmt::Display>::fmt;
            v10 = &v7;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = a4;
            v13 = 0;
            v14 = 2;
            v15 = 2;
            v16 = 0;
            v17 = 32;
            v18 = 3;
            v19 = 2;
            v20 = 1;
            v21 = 2;
            v22 = 1;
            v23 = 32;
            v24 = 3;
            v27 = 2;
            v25 = struct40 {
                field_0: &g_419ac8
                field_8: 2
                field_16: &v8
                field_24: 3
            };
            v41 = std::io::Write::write_fmt(&v0, &v25);
            if v41 {
                break;
            }
            v1 = struct16 {
                field_0: &g_41e579
                field_8: 1
            };
            v40 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v5);
            v2 = v3;
            if !v40 {
                goto LABEL_4bdf0f;
            }
        }
    }
LABEL_4bdf0f:
    if a2 {
        v25 = a2;
        v26 = a3;
        v8 = &v2;
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = &v25;
        v11 = <&T as core::fmt::Display>::fmt;
        v14 = struct40 {
            field_0: &g_531208
            field_8: 3
            field_16: &v8
            field_24: 2
        };
        v41 = std::io::Write::write_fmt(&v0, &v14);
    } else {
        v14 = struct40 {
            field_0: "\n"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v41 = std::io::Write::write_fmt(&v0, &v14);
    }
    return v41;
}
