fn uu_cat::LineNumber::write(a0: i64, a1: u64) -> long long {
    let v1: u64;  // rdi

    v1 = *((a0 + 32) as &i64);
    return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, a0 + v1, 32 - v1);
}
