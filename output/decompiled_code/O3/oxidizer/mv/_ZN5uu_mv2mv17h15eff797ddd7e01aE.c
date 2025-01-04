fn uu_mv::mv(a0: u32, a1: u32, a2: &struct56, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x60], Other Possible Types: i192
    let v1: i192;  // [bp-0x48]
    let v2: i192;  // [sp-0x30], Other Possible Types: struct24
    let v4: i64;  // rdi
    let v5: i64;  // rcx
    let v6: i64;  // r8
    let v7: i64;  // r9
    let v8: i64;  // rax
    let v9: i64;  // r14
    let v10: i64;  // r15
    let v11: i64;  // r9

    v0 = uu_mv::parse_paths(a0, a1, *((a2 + 50) as &i8));
    if *((a2 + 24) as &i64) == 0x8000000000000000 {
        v4 = *((&v0 as &char + 8) as &i64);
        v8 = (*((&v0 as &char + 16) as &i64) == 2 ? uu_mv::handle_two_paths(*((v4 + 8) as &i64), *((v4 + 16) as &i64), *((v4 + 32) as &i64), *((v4 + 40) as &i64), a2) : uu_mv::handle_multiple_paths(v4, *((&v0 as &char + 16) as &i64), a2, v5, v6, v7));
        return v8;
    }
    v9 = *((&v0 as &char + 8) as &i64);
    v10 = *((&v0 as &char + 16) as &i64);
    v2 = std::sys::os_str::bytes::Slice::to_owned(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
    v1 = v2;
    v8 = uu_mv::move_files_into_dir(v9, v10, *((&v1 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64), a2, v11);
    return v8;
}
