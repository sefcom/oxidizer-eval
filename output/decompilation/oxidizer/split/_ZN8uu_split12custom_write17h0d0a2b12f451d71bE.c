fn uu_split::custom_write(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v3: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v3 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write(a2, a0, a1);
    return 0;
}
