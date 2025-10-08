fn uu_ls::display_additional_leading_info(a0: i64, a1: void*, a2: u64, a3: u64, a4: i64, a5: u64) -> long long {
    let v0: struct24;  // [bp-0xc8]
    let v1: u128;  // [bp-0xc8]
    let v2: struct24;  // [bp-0xc8]
    let v3: u128;  // [bp-0xc8]
    let v4: u64;  // [bp-0xc0]
    let v5: struct24;  // [bp-0xb8]
    let v6: struct24;  // [bp-0xa8], Other Possible Types: core::fmt::Arguments
    let v7: struct24;  // [bp-0x98], Other Possible Types: u64
    let v8: struct24;  // [bp-0x78]
    let v9: core::fmt::rt::Argument;  // [bp-0x60], Other Possible Types: u128
    let v10: u128;  // [bp-0x60]
    let v11: core::fmt::rt::Argument;  // [bp-0x60]
    let v12: u128;  // [bp-0x50]
    let v14: i64;  // rax
    let v16: i64;  // rax
    let v17: u64;  // rax
    let v21: core::fmt::rt::Argument;  // [bp-0x50], Other Possible Types: struct24

    v8 = struct24 {
        field_0: 0
        field_8: ""
    };
    if *((a4 + 241) as &i8) {
        v14 = uu_ls::PathData::get_metadata(a1, a5);
        if v14 {
            v2 = uu_ls::get_inode(*((v14 + 40) as &i64));
        } else {
            v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("?");
            v5 = v7;
            v3 = *(&v6.field_0 as &i128);
        }
        v21 = uu_ls::pad_left(v4, v5, a2);
        v11 = core::fmt::rt::Argument {
            ty: &v21
        };
        v6 = core::fmt::Arguments {
            pieces: [&g_686678, " "]
            args: [v9]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v8, &v6), "src/uu/ls/src/ls.rs");
    }
    if !*((a4 + 242) as &i8) {
        return struct24 {
            field_0: *(&v8.field_0 as &i128)
            field_16: 0
        };
    }
    v16 = uu_ls::PathData::get_metadata(a1, a5);
    if v16 {
        v17 = uu_ls::get_block_size(*((v16 + 56) as &i32), *((v16 + 96) as &i64), *((a4 + 216) as &i64), *((a4 + 249) as &i8));
        v0 = uu_ls::display_size(v17, *((a4 + 249) as &i8));
        if *((a4 + 0x100) as &i8) != 4 {
            goto LABEL_59c360;
        }
LABEL_59c2be:
        v21 = core::fmt::rt::Argument {
            ty: &v0
        };
        v6 = core::fmt::Arguments {
            pieces: [&g_686678, " "]
            args: [v12]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v8, &v6), "src/uu/ls/src/ls.rs");
    } else {
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("?");
        v5 = v7;
        v1 = *(&v6.field_0 as &i128);
        if *((a4 + 0x100) as &i8) == 4 {
            goto LABEL_59c2be;
        }
LABEL_59c360:
        v21 = uu_ls::pad_left(v4, v5, a3);
        v9 = core::fmt::rt::Argument {
            ty: &v21
        };
        v6 = core::fmt::Arguments {
            pieces: [&g_686678, " "]
            args: [v10]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v8, &v6), "src/uu/ls/src/ls.rs");
    }
    return struct24 {
        field_0: *(&v8.field_0 as &i128)
        field_16: 0
    };
}
