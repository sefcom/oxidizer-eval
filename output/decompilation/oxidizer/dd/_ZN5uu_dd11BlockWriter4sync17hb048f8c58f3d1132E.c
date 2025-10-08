fn uu_dd::BlockWriter::sync(a0: i64) -> long long {
    if (((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char {
        return uu_dd::Output::sync(a0 + 8);
    }
    return uu_dd::bufferedoutput::BufferedOutput::sync(a0);
}
