fn uu_tail::chunks::BytesChunk::get_buffer_with(a0: &struct_0, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = a0->field_2000;
    if v3 < a1 {
        core::slice::index::slice_index_order_fail(); /* do not return */
    } else if v3 > 0x2000 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    } else {
        return &a0->padding_0[a1] as &struct_0;
    }
}
