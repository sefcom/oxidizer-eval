fn uu_rmdir::uumain::uumain::points_to_directory(a0: &Result<struct1, struct8>, a1: u32, a2: u32) -> u64 {
    let v0: i1408;  // [sp-0xb8], Other Possible Types: Result<struct176, struct16>

    v0 = std::fs::metadata(a1, a2);
    match v0 {
        Ok(_) => {
            *((a0 + 1) as &u8) = ((0xf000 & *((&v0 as &char + 56) as &i32)) == 0x4000) as u8 as u8;
        },
        Err(_) => {
            *((a0 + 8) as &i64) = *((&v0 as &char + 8) as &i64);
        },
    }
    return struct1 {
        field_0: 1
    };
}
