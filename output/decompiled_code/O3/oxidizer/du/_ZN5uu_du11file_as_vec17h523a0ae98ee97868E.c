fn uu_du::file_as_vec(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x50], Other Possible Types: Result<struct4, struct8>
    let v1: i352;  // [sp-0x40], Other Possible Types: struct44
    let v3: i64;  // rdx

    v0 = std::fs::File::open(a1, a2);
    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, core::result::Result<T,E>::expect(&v0) as i32);
    return <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, &v1, v3);
}
