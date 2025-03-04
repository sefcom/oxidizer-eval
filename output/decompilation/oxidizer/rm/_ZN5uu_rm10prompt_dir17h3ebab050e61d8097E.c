fn uu_rm::prompt_dir(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct176, struct8>;  // [sp-0xd0]
    let v2: i64;  // rbp
    let v3: i64;  // rbx
    let v4: i32;  // ebx

    v2 = a2 as u64;
    if !v2 as u8 {
        v4 = (v3 & -0x100 | 1) as u32;
        return v4 as u64;
    }
    v0 = std::fs::metadata(a0, a1);
    if v0 as i32 == 2 {
        return v4 as u64;
    }
    uu_rm::handle_writable_directory(a0, a1, v2 & 4294967295, *((&v0 as &char + 56) as &i32));
}
