fn uu_stat::Stater::exec(a0: &struct104) -> u64 {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v2: u64;  // rsi
    let v3: u64;  // rdx
    let v4: void*;  // r13
    let v5: u32;  // ebp

    v0 = std::fs::metadata(v2, v3);
    if !*((a0 + 16) as &i64) {
        return 0;
    }
    do {
        v5 |= uu_stat::Stater::do_stat(a0, *((8 + *((a0 + 8) as &i64) + v4 as &u8) as &i64), *((16 + *((a0 + 8) as &i64) + v4 as &u8) as &i64), v0 as i32 != 2 & (*((&v0 as &char + 56) as &i32) & 0xf000) == 0x1000);
        v4 += 24;
    } while (*((a0 + 16) as &i64) * 24 != v4);
    return v5;
}
