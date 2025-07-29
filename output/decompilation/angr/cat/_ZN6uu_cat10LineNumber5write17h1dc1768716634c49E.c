long long uu_cat::LineNumber::write(struct_0 *a0, unsigned long long a1)
{
    struct_0 *v0;  // [bp-0x8]
    unsigned long long v2;  // rdi

    v2 = a0->field_20;
    if (v2 > 32)
    {
        v0 = a0;
        core::slice::index::slice_start_index_len_fail(v2, 32, &g_572d88); /* do not return */
    }
    return a1.write_all(&a0->padding_0[v2], 32 - v2);
}
