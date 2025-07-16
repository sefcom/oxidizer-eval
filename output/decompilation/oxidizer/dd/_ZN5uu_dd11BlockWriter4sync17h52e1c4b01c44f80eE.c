fn uu_dd::BlockWriter::sync(a0: i64) -> long long {
    if *(a0 as &i64) != 0x8000000000000000 {
        return uu_dd::bufferedoutput::BufferedOutput::sync(a0);
    }
    return uu_dd::Output::sync(a0 + 8);
}
