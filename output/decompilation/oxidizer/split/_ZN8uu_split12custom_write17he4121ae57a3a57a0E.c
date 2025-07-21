fn uu_split::custom_write(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v3: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v3 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write(a2, a0, a1);
    return 0;
}
