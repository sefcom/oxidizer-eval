fn uu_ls::display_dir_entry_size(a0: i64, a1: void*, a2: i64, a3: u64) -> int {
    let v0: u64;  // [bp-0x78]
    let v1: struct40;  // [bp-0x70]
    let v2: struct24;  // [bp-0x68]
    let v3: Option<struct48>;  // [bp-0x60], Other Possible Types: struct24
    let v4: u64;  // [bp-0x60]
    let v5: struct24;  // [bp-0x50]
    let v7: i64;  // rax
    let v8: i64;  // r15
    let v9: u32;  // ebp
    let v10: u64;  // r12

    v7 = uu_ls::PathData::get_metadata(a1, a3);
    if !v7 {
        return struct48 {
            field_0: 0
            field_16: 0
            field_32: 0
        };
    }
    v8 = v7;
    v3 = uu_ls::display_len_or_rdev(v7, *((a2 + 208) as &i64), *((a2 + 249) as &i8));
    if !((((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char) {
        v2 = *((&v3 as &char + 40) as &i64);
        v1 = v5;
        v0 = *((&v3 as &char + 40) as &i64) + 2 + v1;
    }
    v3 = uu_ls::display_symlink_count(*((v8 + 48) as &i64));
    v9 = *((a2 + 235) as &i8);
    v10 = *((uu_ls::display_uname(*((v8 + 60) as &i32), v9, a3) + 16) as &i64);
    return struct48 {
        field_0: v5
        field_8: v10
        field_16: *((uu_ls::display_group(*((v8 + 64) as &i32) as u32 as u64, v9 as u64, a3) + 16) as &i64)
        field_24: v0
        field_32: v1
        field_40: v2
    };
}
