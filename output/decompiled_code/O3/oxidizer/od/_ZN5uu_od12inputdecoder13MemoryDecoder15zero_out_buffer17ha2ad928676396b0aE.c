fn uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(a0: &&struct_0, a1: &u8, a2: u32) -> u64 {
    let v2: &u8;  // rbx
    let v3: &u8;  // rax

    if a1 >= a2 {
        return v3;
    }
    do {
        v2 = a1;
    } while ((v3 = <usize as core::iter::range::Step>::forward_unchecked(v2), v2[*(a0)->field_8] = 0 as u8, v3 < a2));
    return v3;
}
