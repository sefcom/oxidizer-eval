fn uu_dd::Dest::truncate(a0: i64) -> u64 {
    let v4: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    if *(a0 as &i8) != 1 {
        return 0;
    }
    v4 = <std::fs::File as std::io::Seek>::stream_position(a0 + 4);
    match v4 {
        Ok(_) => {
            return std::fs::File::set_len(a0 + 4, *((&v4 as &char + 8) as &i64));
        },
        Err(_) => {
            return *((&v4 as &char + 8) as &i64);
        },
    }
}
