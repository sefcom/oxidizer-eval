fn uu_rmdir::uumain::uumain::points_to_directory(a0: &Result<struct1, struct8>, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct176, struct8>;  // [sp-0xb8]

    v0 = std::fs::metadata(a1, a2);
    match v0 {
        Err(_) => {
            return struct9 {
                field_0: 1
                field_8: <UNKNOWN>
            };
        },
        Ok(_) => {
            *((a0 + 1) as &u8) = ((0xf000 & *((&v0 as &char + 56) as &i32)) == 0x4000) as u8 as u8;
        },
    }
}
