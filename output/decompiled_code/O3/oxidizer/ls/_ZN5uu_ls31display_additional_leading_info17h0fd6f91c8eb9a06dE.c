fn uu_ls::display_additional_leading_info(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: i128;  // [sp-0xc8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [sp-0xa8], Other Possible Types: struct24
    let v3: i64;  // [sp-0x90]
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [sp-0x78]
    let v6: i64;  // [sp-0x70]
    let v7: i64;  // [sp-0x68]
    let v8: i64;  // [sp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: i192;  // [sp-0x50], Other Possible Types: struct24
    let v12: i64;  // rax
    let v13: i128;  // xmm0
    let v14: i256;  // ymm0
    let v15: i256;  // ymm0
    let v16: i256;  // ymm0
    let v17: i64;  // rax
    let v18: i32;  // ebp
    let v19: i128;  // xmm0
    let v20: i128;  // xmm0

    v5 = 0;
    v6 = 1;
    v7 = 0;
    if *((a4 + 233) as &i8) {
        v12 = uu_ls::PathData::get_metadata(a1, a5);
        if !v12 {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("?");
            v1 = v2.field_16;
            v13 = v2;
            v15 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
            v0 = v13;
        } else {
            v0 = uu_ls::get_inode(*((v12 + 40) as &i64));
        }
        v10 = uu_ls::pad_left(*((&v0 as &char + 8) as &i64), v1, a2);
        v8 = &v10;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_6127e8;
        v2.field_8 = 2;
        v4 = 0;
        v2.field_16 = stack_base + -96;
        v3 = 1;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v5, &v2) as i32, "src/uu/ls/src/ls.rs");
    }
    if !*((a4 + 234) as &i8) {
        v20 = v5;
        return struct24 {
            field_0: v20
            field_16: v7
        };
    }
    v17 = uu_ls::PathData::get_metadata(a1, a5);
    if !v17 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("?");
        v1 = v2.field_16;
        v19 = v2;
        v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
        v0 = v19;
        if *((a4 + 248) as &i8) == 4 {
            goto LABEL_5292ee;
        }
LABEL_529390:
        v10 = uu_ls::pad_left(*((&v0 as &char + 8) as &i64), v1, a3);
        v8 = &v10;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_6127e8;
        v2.field_8 = 2;
        v4 = 0;
        v2.field_16 = stack_base + -96;
        v3 = 1;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v5, &v2) as i32, "src/uu/ls/src/ls.rs");
    } else {
        v18 = *((a4 + 241) as &i8);
        v0 = uu_ls::display_size(uu_ls::get_block_size(*((v17 + 56) as &i32), *((v17 + 96) as &i64), *((a4 + 216) as &i64), v18), v18);
        if !(*((a4 + 248) as &i8) == 4) {
            goto LABEL_529390;
        }
LABEL_5292ee:
        v10 = &v0;
        v10.8 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_6127e8;
        v2.field_8 = 2;
        v4 = 0;
        v2.field_16 = stack_base + -80;
        v3 = 1;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v5, &v2) as i32, "src/uu/ls/src/ls.rs");
    }
}
