fn uu_ls::display_additional_leading_info(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: i192;  // [sp-0xc8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xb8]
    let v2: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v3: i64;  // [sp-0xa0]
    let v4: i64;  // [sp-0x98]
    let v5: i64;  // [sp-0x90]
    let v6: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x78]
    let v8: i64;  // [sp-0x70]
    let v9: i64;  // [sp-0x68]
    let v10: i64;  // [sp-0x60]
    let v11: i64;  // [sp-0x58]
    let v12: i192;  // [sp-0x50], Other Possible Types: struct24
    let v13: i64;  // [sp-0x48]
    let v15: i64;  // rax
    let v16: i128;  // xmm0
    let v17: i256;  // ymm0
    let v18: i256;  // ymm0
    let v19: i64;  // rax
    let v20: i32;  // ebp
    let v21: i128;  // xmm0
    let v22: i128;  // xmm0

    v7 = 0;
    v8 = 1;
    v9 = 0;
    if *((a4 + 233) as &i8) {
        v15 = uu_ls::PathData::get_metadata(a1, a5);
        if !v15 {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("?");
            v1 = v4;
            v16 = v2;
            v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
            v0 = v16;
        } else {
            v0 = uu_ls::get_inode(*((v15 + 40) as &i64));
        }
        v12 = uu_ls::pad_left(*((&v0 as &char + 8) as &i64), v1, a2);
        v10 = &v12;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_6125e8;
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 1;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v7, &v2) as i32, "src/uu/ls/src/ls.rs");
    }
    if !*((a4 + 234) as &i8) {
        v22 = v7;
        return struct24 {
            field_0: v22
            field_16: v9
        };
    }
    v19 = uu_ls::PathData::get_metadata(a1, a5);
    if !v19 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("?");
        v1 = v4;
        v21 = v2;
        v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
        v0 = v21;
        if *((a4 + 248) as &i8) == 4 {
            goto LABEL_52937e;
        }
LABEL_529420:
        v12 = uu_ls::pad_left(*((&v0 as &char + 8) as &i64), v1, a3);
        v10 = &v12;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_6125e8;
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 1;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v7, &v2) as i32, "src/uu/ls/src/ls.rs");
    } else {
        v20 = *((a4 + 241) as &i8);
        v0 = uu_ls::display_size(uu_ls::get_block_size(*((v19 + 56) as &i32), *((v19 + 96) as &i64), *((a4 + 216) as &i64), v20), v20);
        if !(*((a4 + 248) as &i8) == 4) {
            goto LABEL_529420;
        }
LABEL_52937e:
        v12 = &v0;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_6125e8;
        v3 = 2;
        v6 = 0;
        v4 = &v12;
        v5 = 1;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v7, &v2) as i32, "src/uu/ls/src/ls.rs");
    }
}
