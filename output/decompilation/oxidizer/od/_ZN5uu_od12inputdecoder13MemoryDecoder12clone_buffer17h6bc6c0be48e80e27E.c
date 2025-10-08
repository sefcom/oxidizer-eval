fn uu_od::inputdecoder::MemoryDecoder::clone_buffer(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone_from(a1, *((*(a0 as &i64) + 8) as &i64));
    return alloc::vec::Vec<T,A>::resize(a1, *((a0 + 8) as &i64));
}
