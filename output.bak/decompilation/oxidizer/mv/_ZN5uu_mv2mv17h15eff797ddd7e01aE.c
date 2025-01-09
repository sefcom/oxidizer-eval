fn uu_mv::mv(a0: u32, a1: u32, a2: &struct56) -> u64 {
    let v0: i192;  // [sp-0x60], Other Possible Types: struct24
    let v1: struct24;  // [sp-0x48], Other Possible Types: i192
    let v2: struct24;  // [sp-0x30], Other Possible Types: i192
    let v4: i64;  // rdi
    let v5: i64;  // rax

    v0 = uu_mv::parse_paths(a0, a1, *((a2 + 50) as &i8));
    if *((a2 + 24) as &i64) == 0x8000000000000000 {
        v4 = *((&v0 as &char + 8) as &i64);
        v5 = (*((&v0 as &char + 16) as &i64) == 2 ? uu_mv::handle_two_paths(*((v4 + 8) as &i64), *((v4 + 16) as &i64), *((v4 + 32) as &i64), *((v4 + 40) as &i64), a2) : uu_mv::handle_multiple_paths(v4, *((&v0 as &char + 16) as &i64), a2));
        return v5;
    }
    v2 = std::sys::os_str::bytes::Slice::to_owned(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
    v1 = v2;
    v5 = uu_mv::move_files_into_dir(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), *((&v1 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64), a2);
    return v5;
}
