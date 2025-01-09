fn uu_dd::BlockWriter::write_blocks(a0: &Result<struct32, struct32>, a1: &u64) -> u64 {
    let v1: u32;  // rdx
    let v2: u32;  // rcx
    let v3: u32;  // rdx
    let v4: u32;  // rcx

    if *(a1) == 0x8000000000000000 {
        return uu_dd::Output::write_blocks(a0, a1 + 1, v1, v2);
    }
    return uu_dd::bufferedoutput::BufferedOutput::write_blocks(a0, a1, v3, v4);
}
