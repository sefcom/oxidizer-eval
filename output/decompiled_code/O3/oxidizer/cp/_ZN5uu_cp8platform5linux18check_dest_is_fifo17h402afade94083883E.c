fn uu_cp::platform::linux::check_dest_is_fifo(a0: i64, a1: i64) -> u64 {
    let v0: i1408;  // [sp-0xb8], Other Possible Types: Result<struct176, struct16>
    let v4: i64;  // rbx

    v0 = std::fs::metadata(a0, a1);
    return (v4 | -0x100 | (0xf000 & *((&v0 as &char + 56) as &i32)) == 0x1000 & v0 != 2) & 4294967295 & 4294967295;
}
