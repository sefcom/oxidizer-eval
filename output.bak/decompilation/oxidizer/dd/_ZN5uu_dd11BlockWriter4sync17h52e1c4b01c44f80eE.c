fn uu_dd::BlockWriter::sync(a0: &u64) -> u64 {
    if *(a0) == 0x8000000000000000 {
        return uu_dd::Output::sync(a0 + 1);
    }
    return uu_dd::bufferedoutput::BufferedOutput::sync(a0);
}
