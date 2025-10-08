fn uu_dd::BlockWriter::truncate(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x8], Other Possible Types: u64
    let v2: u64;  // rax

    v0 = v2;
    if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        v0 = uu_dd::bufferedoutput::BufferedOutput::truncate(a0);
        return v0;
    }
    v0 = uu_dd::Output::truncate(a0 + 8);
    return v0;
}
