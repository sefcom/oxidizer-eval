fn uu_rmdir::uumain::uumain::points_to_directory(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: Enum;  // [sp-0xb8], Other Possible Types: i1408

    v0 = std::sys::pal::unix::fs::stat(a1, a2);
    if v0 != 2 {
        *((a0 + 1) as &u8) = (0xf000 & *((&v0 as &char + 56) as &i32)) == 0x4000;
    } else {
        *((a0 + 8) as &i64) = *((&v0 as &char + 8) as &i64);
    }
    *(a0 as &i8) = 1;
    return a0;
}
