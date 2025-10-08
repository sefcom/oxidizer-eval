fn uu_du::file_as_vec(a0: u64, a1: u64) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0x40], Other Possible Types: struct44

    v0 = std::fs::File::open(a1);
    v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(core::result::Result<T,E>::expect(&v0));
    return core::iter::traits::iterator::Iterator::collect(a0, &v0);
}
