fn uu_od::inputdecoder::MemoryDecoder::get_buffer(a0: void*, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: &u64;  // rdi

    v0 = v2;
    v3 = a0->field_8;
    if v3 < a1 {
        core::slice::index::slice_index_order_fail(); /* do not return */
    }
    v4 = a0->field_0;
    if v3 <= v4[2] {
        return a1 + v4[1];
    }
    core::slice::index::slice_end_index_len_fail(); /* do not return */
}
