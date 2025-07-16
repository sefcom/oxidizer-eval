fn uu_dd::BlockWriter::discard_cache(a0: i64, a1: i64, a2: i64) -> long long {
    if *(a0 as &i64) != 0x8000000000000000 {
        return uu_dd::bufferedoutput::BufferedOutput::discard_cache(a0, a1, a2);
    }
    return uu_dd::Output::discard_cache(a0 + 8, a1, a2) as i64;
}
