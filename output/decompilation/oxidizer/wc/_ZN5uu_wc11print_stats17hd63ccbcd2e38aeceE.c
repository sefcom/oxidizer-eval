fn uu_wc::print_stats(a0: &u64, a1: &u64, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x190]
    let v1: u64;  // [sp-0x188]
    let v2: void*;  // [sp-0x180], Other Possible Types: u64
    let v3: &u8;  // [sp-0x168]
    let v4: u64;  // [sp-0x160]
    let v5: u64;  // [sp-0x158]
    let v6: &u8;  // [sp-0x150], Other Possible Types: Argument
    let v7: u64;  // [sp-0x148]
    let v8: &u8;  // [sp-0x140], Other Possible Types: Argument
    let v9: u64;  // [sp-0x138]
    let v10: u64;  // [sp-0x130]
    let v11: void*;  // [sp-0x128]
    let v12: struct40;  // [sp-0x120], Other Possible Types: Arguments, u64
    let v13: u64;  // [sp-0x110]
    let v14: void*;  // [sp-0x100]
    let v15: u64;  // [sp-0xf8]
    let v16: u8;  // [sp-0xf0]
    let v17: u64;  // [sp-0xe8]
    let v18: u64;  // [sp-0xd8]
    let v19: u64;  // [sp-0xd0]
    let v20: u64;  // [sp-0xc8]
    let v21: u64;  // [sp-0xc0]
    let v22: u8;  // [sp-0xb8]
    let v23: u64;  // [sp-0xb0]
    let v24: u64;  // [sp-0xa8]
    let v25: &&struct_0;  // [sp-0xa0]
    let v26: u64;  // [sp-0x98]
    let v27: &u8;  // [sp-0x90]
    let v28: u64;  // [sp-0x88]
    let v29: u8;  // [sp-0x80]
    let v30: u64;  // [sp-0x78]
    let v31: u8;  // [sp-0x70]
    let v32: u64;  // [sp-0x68]
    let v33: u8;  // [sp-0x60]
    let v34: u64;  // [sp-0x58]
    let v35: u8;  // [sp-0x50]
    let v36: u64;  // [sp-0x48]
    let v37: u8;  // [sp-0x40]
    let v38: u64;  // [sp-0x38]
    let v39: u8;  // [bp-0x30]
    let v41: struct8;  // rax
    let v42: u64;  // r14

    v12 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v12);
    v29 = *((&a0[3] as &char + 2) as &i8);
    v30 = a1[2];
    v31 = *((&a0[3] as &char + 3) as &i8);
    v32 = a1[3];
    v33 = *((&a0[3] as &char + 1) as &i8);
    v34 = a1[1];
    v35 = a0[3];
    v36 = *(a1);
    v37 = *((&a0[3] as &char + 4) as &i8);
    v38 = a1[4];
    v1 = 1;
    v2 = 0;
    v3 = &v29;
    v4 = &v39;
    v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find();
    if v41 {
        do {
            v5 = v41 + 8;
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
            v23 = &g_419ac8;
            v24 = 2;
            v27 = &v12;
            v28 = 2;
            v25 = &v6;
            v26 = 3;
            if std::io::Write::write_fmt(&v0, &v23) {
                return v42;
            }
        } while ((v1 = &g_41e579, v2 = 1, v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(), v41));
    }
    if !v23 {
        *(&v12 as &struct40) = struct40 {
            field_0: "\n"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        std::io::Write::write_fmt(&v0, &v12);
    } else {
        v23 = a2;
        v24 = a3;
        v6 = Argument {
            value: &v1
            formatter: <&T as core::fmt::Display>::fmt
        };
        v8 = Argument {
            value: &v23
            formatter: <&T as core::fmt::Display>::fmt
        };
        v12 = Arguments {
            pieces: ["", "", "\n"]
            args: [&v6, &v8]
            fmt: 0
        };
        std::io::Write::write_fmt(&v0, &v12);
    }
    return v42;
}
