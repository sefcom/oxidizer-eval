fn uu_more::Pager::draw_prompt(a0: i64, a1: i64, a2: i64, a3: i32) -> int {
    let v0: core::fmt::Arguments;  // [bp-0x108], Other Possible Types: core::fmt::rt::Argument, u64
    let v1: u128;  // [bp-0x108]
    let v2: u64;  // [bp-0x108]
    let v3: u64;  // [bp-0x100]
    let v4: core::fmt::rt::Argument;  // [bp-0xf8]
    let v5: u128;  // [bp-0xf8]
    let v6: core::fmt::rt::Argument;  // [bp-0xe8], Other Possible Types: void*
    let v7: u128;  // [bp-0xe8]
    let v8: i64;  // [bp-0xd8]
    let v9: i16;  // [bp-0xd8]
    let v10: u64;  // [bp-0xd0]
    let v11: core::fmt::Arguments;  // [bp-0xc0], Other Possible Types: struct_2 *
    let v12: i64;  // [sp-0xb8], Other Possible Types: u64
    let v13: u64;  // [bp-0xb0]
    let v14: u32;  // [bp-0x8c]
    let v15: iNone;  // [bp-0x88]
    let v18: iNone;  // [bp-0x68]
    let v20: u64;  // [bp-0x58]
    let v21: u8;  // [bp-0x48]
    let v23: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rcx
    let v28: i64;  // rax
    let v29: iNone;  // xmm1

    if a2 == *((a0 + 112) as &i64) {
        v23 = *((a0 + 96) as &i64);
        v25 = v23;
        v26 = 1;
        if v25 {
            v25 = *((a0 + 104) as &i64);
            v26 = v23;
        }
        v11 = v26;
        v12 = v25;
        v8 = &v11;
        v10 = <&T as core::fmt::Display>::fmt;
        v2 = "Next file: ";
        v3 = 1;
        v6 = 0;
        v28 = &v8;
    } else {
        v29 = BinaryOp InterleaveLOV - 0x45300000000000004330000000000000;
        round();
        v9 = (BinaryOp MinV) as u16;
        v11 = &v9 as u64;
        v12 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v0 = &g_525370;
        v3 = 2;
        v6 = 0;
        v28 = &v11;
    }
    vvar_395{stack -264} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4699068, None), vvar_303{stack -264}), ((4699223, None), vvar_312{stack -264})])])), (16, &[core::fmt::rt::Argument] OrderedDict([(0, vvar_8{reg 16}), (8, 0x1<64>)]))])
    core::option::Option<T>::map_or_else(&v21, &v0);
    format!("--More--({})", &v21);
    v18 = *(&v11 as &i128);
    v20 = v13;
    if *((a0 + 128) as &i8) {
        if a3 == 0x110000 {
            format!("{}[Press space to continue, 'q' to quit.]", &v18);
        } else {
            v14 = a3;
            format!("{} [Unknown key: '{}'. Press 'h' for instructions. (unimplemented)]", &v18, &v14);
        }
    } else {
        if a3 != 0x110000 {
            format!("{}{}", &v18, "\x07");
        }
    }
    v0 = core::fmt::rt::Argument {
        ty: &g_41f8c1
    };
    v4 = core::fmt::rt::Argument {
        ty: &v15
    };
    v6 = core::fmt::rt::Argument {
        ty: &g_41f8c2
    };
    v11 = core::fmt::Arguments {
        pieces: ["\r", &g_525410, &g_525420]
        args: [v1, v5, v7]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_fmt(a1, &v11), "src/uu/more/src/more.rs");
    return;
}
