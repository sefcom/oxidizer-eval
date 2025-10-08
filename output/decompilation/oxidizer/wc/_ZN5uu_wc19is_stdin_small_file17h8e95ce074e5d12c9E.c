fn uu_wc::is_stdin_small_file() -> u64 {
    let v0: u64;  // [bp-0xbc]
    let v1: Result<struct16, struct16>;  // [bp-0xb8]
    let v2: i8;  // [bp-0x68]
    let v4: u32;  // ebx

    std::io::stdio::stdin();
    v0 = 0;
    v1 = std::fs::File::metadata(&v0);
    return (v1 as i64 == 2 ? 0 : v4 & -0x100 | *(&v2 as &i64) < 10485761 & (0xf000 & *((&v1 as &char + 56) as &i32)) == 0x8000);
}
