fn uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(a0: &&struct_0, a1: &u8, a2: u32) -> u64 {
    let v1: &u8;  // rbx

    if a1 >= a2 {
        return v1;
    }
    v1 = a1;
    do {
    } while ((v1[*(a0)->field_8] = 0 as u8, v1 = <usize as core::iter::range::Step>::forward_unchecked(v1), v1 < a2));
    return v1;
}
