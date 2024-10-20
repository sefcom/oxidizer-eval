long long uu_od::inputdecoder::MemoryDecoder::get_buffer::h93d8c0c66c38088c(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4[3];  // rdi

    v0 = v2;
    v3 = a0->field_8;
    if (v3 < a1)
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    v4 = a0->field_0;
    if (v3 <= v4[2])
        return a1 + v4[1];
    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
}
