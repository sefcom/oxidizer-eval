fn uu_dd::BlockWriter::write_blocks(a0: u64, a1: i64, a2: u64, a3: u64) -> long long {
    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        return uu_dd::Output::write_blocks(a0, a1 + 8, a2, a3);
    }
    return uu_dd::bufferedoutput::BufferedOutput::write_blocks(a0, a1, a2, a3);
}
