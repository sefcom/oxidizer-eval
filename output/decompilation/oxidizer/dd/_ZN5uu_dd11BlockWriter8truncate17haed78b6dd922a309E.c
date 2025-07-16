fn uu_dd::BlockWriter::truncate(a0: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    v0 = (*(a0 as &i64) == 0x8000000000000000 ? uu_dd::Output::truncate(a0 + 8) : uu_dd::bufferedoutput::BufferedOutput::truncate(a0));
    return v0;
}
