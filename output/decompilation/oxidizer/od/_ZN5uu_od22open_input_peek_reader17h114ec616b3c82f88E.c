fn uu_od::open_input_peek_reader(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct48 {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0x40]
    let v1: i64;  // rdi

    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a0 + a1 * 24);
    uu_od::multifilereader::MultifileReader::new(v1 + 16, &v0);
    *(v1 as &u64) = a3;
    *((v1 + 8) as &u64) = a4;
    *((v1 + 64) as &u64) = a2;
    *((v1 + 72) as &i64) = 0;
    *((v1 + 80) as &i64) = 1;
    *((v1 + 88) as &i64) = 0;
    return;
}
