fn uu_od::inputdecoder::MemoryDecoder::clone_buffer(a0: void*, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone_from(a1, a0->field_0);
    return alloc::vec::Vec<T,A>::resize(a1, a0->field_8, 0);
}
