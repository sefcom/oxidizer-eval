fn uu_dd::BlockWriter::discard_cache(a0: i64, a1: u64, a2: u64) -> void {
    if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        uu_dd::bufferedoutput::BufferedOutput::discard_cache(*((a0 + 24) as &i32), *((a0 + 28) as &i32), a1, a2);
        return;
    }
    uu_dd::Output::discard_cache(*((a0 + 8) as &i32), *((a0 + 12) as &i32), a1, a2);
    return;
}
