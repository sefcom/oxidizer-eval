fn uu_dd::BlockWriter::flush(a0: u64, a1: i64) -> long long {
    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        return uu_dd::bufferedoutput::BufferedOutput::flush(a0, a1);
    }
    return struct48 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: 0
        field_32: 0
    };
}
