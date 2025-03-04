fn uu_ls::display_dir_entry_size(a0: &struct48, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0xa8]
    let v1: i64;  // [sp-0x80]
    let v2: struct24;  // [sp-0x78]
    let v3: struct24;  // [sp-0x60], Other Possible Types: struct48
    let v5: i64;  // rax
    let v6: i64;  // r14
    let v7: i64;  // rax
    let v8: i32;  // ebp
    let v9: i64;  // rax

    v5 = uu_ls::PathData::get_metadata(a1, a3);
    if !v5 {
        *((a0 + 32) as &i128) = 0;
        *((a0 + 16) as &i128) = 0;
        *(a0 as &i128) = 0;
        v7 = v5;
        return v7;
    }
    v6 = v5;
    v3 = uu_ls::display_len_or_rdev(v5, *((a2 + 208) as &i64), *((a2 + 241) as &i8));
    if v3.field_24 as i64 == 0x8000000000000000 {
        v1 = 0;
    }
    v2 = uu_ls::display_symlink_count(*((v6 + 48) as &i64));
    v8 = *((a2 + 227) as &i8);
    v0 = uu_ls::display_uname(*((v6 + 60) as &i32), v8 as u64);
    v3 = uu_ls::display_group(*((v6 + 64) as &i32), v8 as u64);
    v7 = v9;
    return v7;
}
