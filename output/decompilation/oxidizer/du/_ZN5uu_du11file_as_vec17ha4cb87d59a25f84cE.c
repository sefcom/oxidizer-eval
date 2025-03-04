fn uu_du::file_as_vec(a0: &struct24, a1: u32) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x50]
    let v1: struct44;  // [sp-0x40]

    v0 = std::fs::File::open(a1);
    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, core::result::Result<T,E>::expect(&v0) as i32);
    return <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, &v1);
}
