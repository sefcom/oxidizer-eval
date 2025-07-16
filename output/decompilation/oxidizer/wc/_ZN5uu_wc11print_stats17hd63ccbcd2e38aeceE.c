fn uu_wc::print_stats(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x190]
    let v1: u64;  // [bp-0x188]
    let v2: u64;  // [bp-0x180], Other Possible Types: void*
    let v3: i64;  // [bp-0x168]
    let v4: i64;  // [bp-0x160]
    let v5: u64;  // [bp-0x158]
    let v6: i64;  // [bp-0x150]
    let v7: u64;  // [bp-0x148]
    let v8: i64;  // [bp-0x140]
    let v9: u64;  // [bp-0x138]
    let v10: u64;  // [bp-0x130]
    let v11: void*;  // [bp-0x128]
    let v12: u320;  // [bp-0x120], Other Possible Types: std::io::stdio::Stdout
    let v13: u64;  // [bp-0x110]
    let v14: void*;  // [bp-0x100]
    let v15: u64;  // [bp-0xf8]
    let v16: u8;  // [bp-0xf0]
    let v17: u64;  // [bp-0xe8]
    let v18: u64;  // [bp-0xd8]
    let v19: u64;  // [bp-0xd0]
    let v20: u64;  // [bp-0xc8]
    let v21: Result<struct12, struct8>;  // [bp-0xc0]
    let v22: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xb8]
    let v23: u64;  // [bp-0xb0]
    let v24: u64;  // [bp-0xa8]
    let v25: u64;  // [bp-0x88]
    let v26: u64;  // [bp-0x80]
    let v27: u64;  // [bp-0x78]
    let v28: u8;  // [bp-0x70]
    let v29: u64;  // [bp-0x68]
    let v30: u8;  // [bp-0x60]
    let v31: u64;  // [bp-0x58]
    let v32: u8;  // [bp-0x50]
    let v33: u64;  // [bp-0x48]
    let v34: u8;  // [bp-0x40]
    let v35: u64;  // [bp-0x38]
    let v36: u64;  // [bp-0x30]
    let v38: u64;  // rax
    let v39: u64;  // r14

    v12 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v12);
    v26 = *((a0 + 26) as &i8);
    v27 = *((a1 + 16) as &i64);
    v28 = *((a0 + 27) as &i8);
    v29 = *((a1 + 24) as &i64);
    v30 = *((a0 + 25) as &i8);
    v31 = *((a1 + 8) as &i64);
    v32 = *((a0 + 24) as &i8);
    v33 = *(a1 as &i64);
    v34 = *((a0 + 28) as &i8);
    v35 = *((a1 + 32) as &i64);
    v1 = 1;
    v2 = 0;
    v3 = &v26;
    v4 = &v36;
    v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v3);
    if v38 {
        loop {
            v5 = v38 + 8;
            v6 = &v1;
            v7 = <&T as core::fmt::Display>::fmt;
            v8 = &v5;
            v9 = <&T as core::fmt::Display>::fmt;
            v10 = a4;
            v11 = 0;
            v12 = 2;
            v13 = 2;
            v14 = 0;
            v15 = 32;
            v16 = 3;
            v17 = 2;
            v18 = 1;
            v19 = 2;
            v20 = 1;
            v21 = 32;
            v22 = 3;
            v25 = 2;
            v23 = struct40 {
                field_0: &g_419ac8
                field_8: 2
                field_16: &v6
                field_24: 3
            };
            v39 = std::io::Write::write_fmt(&v0, &v23);
            if v39 {
                break;
            }
            v1 = &g_41e579;
            v2 = 1;
            v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v3);
            if !v38 {
                goto LABEL_4bdf0f;
            }
        }
    }
LABEL_4bdf0f:
    if a2 {
        v23 = a2;
        v24 = a3;
        v6 = &v1;
        v7 = <&T as core::fmt::Display>::fmt;
        v8 = &v23;
        v9 = <&T as core::fmt::Display>::fmt;
        v12 = struct40 {
            field_0: &g_531208
            field_8: 3
            field_16: &v6
            field_24: 2
        };
        v39 = std::io::Write::write_fmt(&v0, &v12);
    } else {
        v12 = struct40 {
            field_0: "\n"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v39 = std::io::Write::write_fmt(&v0, &v12);
    }
    return v39;
}
