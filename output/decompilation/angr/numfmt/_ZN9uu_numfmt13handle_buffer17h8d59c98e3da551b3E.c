long long uu_numfmt::handle_buffer(unsigned long long a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx

    if (!a1->field_c8)
        return uu_numfmt::handle_buffer_iterator(a0, a1);
    v0 = v2;
    return uu_numfmt::handle_buffer_iterator(a0.split(), a1);
}
