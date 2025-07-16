fn uu_more::Pager::draw_prompt(a0: i64, a1: i64, a2: i64, a3: i32) {
    let v0: u64;  // [bp-0x148], Other Possible Types: int
    let v1: u128;  // [bp-0x148]
    let v2: u64;  // [bp-0x148]
    let v3: u64;  // [bp-0x140]
    let v4: iNone;  // [bp-0x138]
    let v5: u128;  // [bp-0x138]
    let v6: void*;  // [bp-0x128], Other Possible Types: int
    let v7: u128;  // [bp-0x128]
    let v8: u64;  // [bp-0x118], Other Possible Types: struct16
    let v9: u64;  // [bp-0x118]
    let v10: i64;  // [bp-0x118], Other Possible Types: core::result::Result<(), std::io::error::Error>
    let v11: u64;  // [bp-0x110]
    let v12: u64;  // [bp-0x108]
    let v13: i64;  // [sp-0x100], Other Possible Types: u384, std::io::stdio::Stdout
    let v14: std::io::stdio::Stdout;  // [bp-0xf8], Other Possible Types: core::result::Result<(), std::io::error::Error>
    let v15: u32;  // [bp-0xcc]
    let v16: u8;  // [bp-0xc8]
    let v17: u64;  // [bp-0xb8]
    let v18: u8;  // [bp-0xa8]
    let v19: u128;  // [bp-0x90]
    let v20: u64;  // [bp-0x80]
    let v21: struct16;  // [bp-0x78]
    let v22: struct16;  // [bp-0x68]
    let v23: u128;  // [bp-0x60]
    let v24: u64;  // [bp-0x50]
    let v25: struct16;  // [bp-0x48]
    let v26: i8;  // [bp-0x38]
    let v28: std::io::stdio::Stdout;  // rax
    let v30: std::io::stdio::Stdout;  // rax
    let v31: std::io::stdio::Stdout;  // rcx
    let v32: u128;  // xmm1
    let v33: u128;  // xmm0
    let v35: i64;  // rax
    let v36: u64;  // rax

    if *((a0 + 48) as &i64) == a2 {
        v28 = *((a0 + 32) as &i64);
        v30 = v28;
        v31 = 1;
        if v30 {
            v30 = *((a0 + 40) as &i64);
            v31 = v28;
        }
        v13 = v31;
        v14 = v30;
        v10 = &v13;
        v11 = <&T as core::fmt::Display>::fmt;
        v0 = "Next file: ";
        v3 = 1;
        v6 = 0;
        v35 = &v10;
    } else {
        v32 = BinaryOp InterleaveLOV - 0x45300000000000004330000000000000;
        v33 = BinaryOp MulV;
        round(v33);
        v8 = BinaryOp MinV;
        v10 = v9 & -0x10000 | v8;
        v13 = &v10;
        v14 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v2 = &g_562a98;
        v3 = 2;
        v6 = 0;
        v35 = &v13;
    }
    vvar_404{stack -328} = core::fmt::Arguments OrderedDict({0: &[&str] OrderedDict({0: 𝜙@64b [((5101399, None), vvar_317{stack -328}), ((5101554, None), vvar_310{stack -328})]}), 16: &[core::fmt::rt::Argument] OrderedDict({0: vvar_8{reg 16}, 8: 0x1<64>})})
    core::option::Option<T>::map_or_else(&v18, &v0);
    format!("--More--({})", &v18);
    memcpy(&v16, &v19, 16);
    v17 = v20;
    if *((a0 + 66) as &i8) {
        if a3 == 0x110000 {
            format!("{}[Press space to continue, 'q' to quit.]", &v16);
            v8 = v23;
            v36 = v24;
        } else {
            v15 = a3;
            format!("{} [Unknown key: '{}'. Press 'h' for instructions. (unimplemented)]", &v16, &v15);
            v8 = v21;
            v36 = v22;
        }
    } else {
        if a3 == 0x110000 {
            v12 = v20;
            v8 = v19;
        } else {
            format!("{}{}", &v16, "\x07");
            v8 = v25;
            v36 = *(&v26 as &i64);
        }
    }
    v0 = core::fmt::rt::Argument {
        ty: &g_418aac
    };
    v4 = core::fmt::rt::Argument {
        ty: &v10
    };
    v6 = core::fmt::rt::Argument {
        ty: &g_418b38
    };
    v13 = core::fmt::Arguments {
        pieces: ["\r", &g_562b38, &g_562b48]
        args: [v1, v5, v7]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_fmt(a1, &v13), "src/uu/more/src/more.rs");
    return;
}
