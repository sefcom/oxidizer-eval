fn uu_dd::BlockWriter::write_blocks(a0: &Result<struct32, struct32>, a1: &u64, a2: u32, a3: u32) -> u64 {
    if *(a1) == 0x8000000000000000 {
        return uu_dd::Output::write_blocks(a0, a1 + 1, a2, a3);
    }
    return uu_dd::bufferedoutput::BufferedOutput::write_blocks(a0, a1, a2, a3);
}
