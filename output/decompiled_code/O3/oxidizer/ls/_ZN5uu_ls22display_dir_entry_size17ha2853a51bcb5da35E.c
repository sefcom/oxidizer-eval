fn uu_ls::display_dir_entry_size(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0xa8], Other Possible Types: struct24
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x88]
    let v3: i64;  // [sp-0x80]
    let v4: i128;  // [sp-0x78], Other Possible Types: struct24
    let v5: i64;  // [sp-0x68]
    let v6: i384;  // [sp-0x60], Other Possible Types: struct48, struct24
    let v8: i64;  // rax
    let v9: i64;  // r14
    let v10: i64;  // rax
    let v11: i64;  // r13
    let v12: i64;  // r12
    let v13: i32;  // ebp
    let v14: i64;  // rax

    v8 = uu_ls::PathData::get_metadata(a1, a3);
    if !v8 {
        return struct48 {
            field_0: 0
            field_16: 0
            field_32: 0
        };
    }
    v9 = v8;
    v6 = uu_ls::display_len_or_rdev(v8, *((a2 + 208) as &i64), *((a2 + 241) as &i8));
    if *((&v6 as &char + 24) as &i64) != 0x8000000000000000 {
        v11 = *((&v6 as &char + 16) as &i64);
        v5 = v11;
        v4 = v6;
        v12 = *((&v6 as &char + 40) as &i64);
        v1 = v12;
        v0 = *((&v6 as &char + 24) as &i128);
        v3 = v12;
        v2 = v12 + v11 + 2;
    } else {
        v0 = v6;
        v2 = *((&v6 as &char + 16) as &i64);
        v1 = v2;
        v3 = 0;
        v11 = 0;
    }
    v4 = uu_ls::display_symlink_count(*((v9 + 48) as &i64));
    v13 = *((a2 + 227) as &i8);
    v0 = uu_ls::display_uname(*((v9 + 60) as &i32), v13);
    v6 = uu_ls::display_group(*((v9 + 64) as &i32), v13);
    v14 = *((&v6 as &char + 16) as &i64);
    *(a0 as &struct24) = v4.field_16;
    *((a0 + 8) as &struct24) = v0.field_16;
    *((a0 + 16) as &i64) = v14;
    *((a0 + 24) as &i64) = v2;
    *((a0 + 32) as &i64) = v11;
    *((a0 + 40) as &i64) = v3;
    return v10;
}
