fn uu_dd::BlockWriter::discard_cache(a0: &u64, a1: u32, a2: u32) -> u64 {
    if *(a0) == 0x8000000000000000 {
        return uu_dd::Output::discard_cache(a0 + 1, a1, a2);
    }
    return uu_dd::bufferedoutput::BufferedOutput::discard_cache(a0, a1, a2);
}
