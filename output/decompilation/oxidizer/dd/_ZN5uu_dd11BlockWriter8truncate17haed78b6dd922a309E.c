fn uu_dd::BlockWriter::truncate(a0: &u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    v0 = (*(a0) == 0x8000000000000000 ? uu_dd::Output::truncate(a0 + 1) : uu_dd::bufferedoutput::BufferedOutput::truncate(a0));
    return v0;
}
