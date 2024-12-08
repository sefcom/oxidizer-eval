fn uu_rm::prompt_dir(a0: i64, a1: i64, a2: i32) -> u64 {
    let v0: Result<struct176, struct16>;  // [sp-0xd0], Other Possible Types: i1408
    let v2: i64;  // rbp
    let v3: i64;  // rbx
    let v4: i32;  // ebx
    let v5: i64;  // rbx

    v2 = a2;
    if !v2 {
        v4 = v3 | -0x100 | 1;
        return v4;
    }
    v0 = std::fs::metadata(a0, a1);
    v4 = v5 | -0x100 | 1;
    match v0 {
        Ok(_) => {
            v4 = uu_rm::handle_writable_directory(a0, a1, v2 & 4294967295, *((&v0 as &char + 56) as &i32) as u32 as u64) as i32;
        },
        Err(_) => {
        },
    }
    return v4;
}
