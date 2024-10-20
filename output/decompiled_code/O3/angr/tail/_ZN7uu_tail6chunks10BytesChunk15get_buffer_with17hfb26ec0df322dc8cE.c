long long uu_tail::chunks::BytesChunk::get_buffer_with::hfb26ec0df322dc8c(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a0->field_2000;
    if (v3 < a1)
    {
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    }
    else if (v3 > 0x2000)
    {
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    }
    else
    {
        return &a0->padding_0[a1];
    }
}
