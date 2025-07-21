fn uu_du::file_as_vec(a1: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: Result<struct4, struct8>;  // [bp-0x50]
    let v1: struct44;  // [bp-0x40]

    v0 = std::fs::File::open(a1);
    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, core::result::Result<T,E>::expect(&v0) as i32);
    return <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, &v1) as u64;
}
