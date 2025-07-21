fn uu_ls::display_additional_leading_info(a1: i32, a2: i64, a3: i64, a4: i64, a5: i32) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xc8]
    let v1: core::fmt::Arguments;  // [bp-0xc0], Other Possible Types: u64
    let v2: u64;  // [bp-0xb8]
    let v3: core::fmt::Arguments;  // [bp-0xa8], Other Possible Types: char
    let v4: u64;  // [bp-0x98]
    let v5: struct24;  // [bp-0x78]
    let v6: core::fmt::rt::Argument;  // [bp-0x60], Other Possible Types: u128
    let v7: u128;  // [bp-0x60]
    let v8: core::fmt::rt::Argument;  // [bp-0x60]
    let v9: core::fmt::rt::Argument;  // [bp-0x50], Other Possible Types: u8
    let v10: u128;  // [bp-0x50]
    let v12: i64;  // rax
    let v14: i64;  // rax
    let v15: u64;  // rax

    v5 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    if *((a4 + 233) as &i8) {
        v12 = uu_ls::PathData::get_metadata(a1, a5);
        if v12 {
            uu_ls::get_inode(&v0, *((v12 + 40) as &i64));
        } else {
            <T as alloc::slice::hack::ConvertVec>::to_vec("?", a3);
            v2 = v4;
            v0 = *(&v3 as &i128);
        }
        uu_ls::pad_left(&v9 as u32, v1, v2, a2);
        v8 = core::fmt::rt::Argument {
            ty: &v9
        };
        v3 = core::fmt::Arguments {
            pieces: [&g_6125e8, " "]
            args: [v6]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v5, &v3) as i32, "src/uu/ls/src/ls.rs");
    }
    if !*((a4 + 234) as &i8) {
        return struct24 {
            field_0: *(&v5.field_0 as &i128)
            field_16: 0
        };
    }
    v14 = uu_ls::PathData::get_metadata(a1, a5);
    if v14 {
        v15 = uu_ls::get_block_size(*((v14 + 56) as &i32), *((v14 + 96) as &i64), *((a4 + 216) as &i64), *((a4 + 241) as &i8));
        uu_ls::display_size(&v0, v15, *((a4 + 241) as &i8));
        if !(*((a4 + 248) as &i8) == 4) {
            goto LABEL_529420;
        }
LABEL_52937e:
        v9 = core::fmt::rt::Argument {
            ty: &v0 as u8
        };
        v3 = core::fmt::Arguments {
            pieces: [&g_6125e8, " "]
            args: [v10]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v5, &v3) as i32, "src/uu/ls/src/ls.rs");
    } else {
        <T as alloc::slice::hack::ConvertVec>::to_vec("?", a3);
        v2 = v4;
        v0 = *(&v3.pieces.ptr as &i128);
        if *((a4 + 248) as &i8) == 4 {
            goto LABEL_52937e;
        }
LABEL_529420:
        uu_ls::pad_left(&v9 as u32, v1, v2, a3);
        v6 = core::fmt::rt::Argument {
            ty: &v9
        };
        v3 = core::fmt::Arguments {
            pieces: [&g_6125e8, " "]
            args: [v7]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v5, &v3) as i32, "src/uu/ls/src/ls.rs");
    }
    return struct24 {
        field_0: *(&v5.field_0 as &i128)
        field_16: 0
    };
}
