fn uu_dircolors::generate_dircolors_config(a0: i64) -> u64 {
    let v0: core::fmt::Arguments;  // [bp-0xb0], Other Possible Types: struct712, struct640, u64
    let v1: &str;  // [bp-0xa8], Other Possible Types: struct16, core::fmt::rt::Argument, u128
    let v2: u128;  // [bp-0xa8]
    let v3: core::fmt::rt::Argument;  // [bp-0xa8]
    let v4: core::fmt::rt::Argument;  // [bp-0x98], Other Possible Types: u128
    let v5: core::fmt::Arguments;  // [bp-0x98], Other Possible Types: core::fmt::rt::Argument, struct24, u128
    let v6: core::fmt::rt::Argument;  // [bp-0x98]
    let v7: core::fmt::rt::Argument;  // [bp-0x88], Other Possible Types: struct712, struct640, u64
    let v8: core::fmt::Arguments;  // [bp-0x80]
    let v9: struct24;  // [bp-0x50]
    let v10: i64;  // [bp-0x38]
    let v12: void*;  // r12
    let v13: u64;  // rbx
    let v14: u64;  // r12
    let v15: u64;  // r12
    let v16: u64;  // r12

    v9 = struct24 {
        field_0: 0
        field_8: ""
    };
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_41c60d, &g_41c7f1);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_41c7f1, &g_41c7fe);
    do {
        v0 = _ZN6uucore8features6colors5TERMS17ha2c08363bc802d0aE.field_0 + v12;
        v3 = core::fmt::rt::Argument {
            ty: &v0
        };
        v8 = core::fmt::Arguments {
            pieces: ["TERM ", "\n"]
            args: [v1]
            fmt: 0
        };
        <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
        v12 += 16;
    } while (v12 != 432);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_41c7fe, &g_41ca6c);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 32;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v6 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v4]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 48;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 80;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 96;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 128;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 144;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 176;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 192;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 224;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 240;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 272;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 288;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 320;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 336;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 368;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 384;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 416;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 432;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 464;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 480;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 0x200;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 528;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 560;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 576;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 608;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 624;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 656;
    v3 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v1, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 672;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 704;
    v1 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v2, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 720;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 752;
    v1 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v2, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 0x300;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 800;
    v1 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v2, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    v7 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 816;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E.field_0 + 848;
    v1 = core::fmt::rt::Argument {
        ty: &v7
    };
    v4 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_4f5f30, " ", "\n"]
        args: [v2, v5]
        fmt: 0
    };
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_41ca71, &g_41cab8);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_41cab9, &g_41cb02);
    do {
        v15 = v14;
        v7 = v13;
        v0 = v13 + 16;
        v1 = core::fmt::rt::Argument {
            ty: &v7
        };
        v4 = core::fmt::rt::Argument {
            ty: &v0
        };
        v8 = core::fmt::Arguments {
            pieces: [&g_4f5f30, " ", "\n"]
            args: [v2, v5]
            fmt: 0
        };
        <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v9, &v8);
        v13 += 32;
        v16 = v15 - 32;
        v14 = v16;
    } while (v15 != 32);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_41cb02, &g_41cb48);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v9, &g_41cb48, &g_41cb82);
    *((v10 + 16) as &i64) = 0;
    *(v10 as &i128) = *(&v9.field_0 as &i128);
    return v10;
}
