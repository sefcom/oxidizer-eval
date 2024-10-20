long long uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::he9e562713f666b45(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long long v2;  // rdi
    struct_0 *v3;  // rax
    unsigned long v4;  // rax
    struct_0 *v6;  // rax
    unsigned long long v8;  // r9
    char v9;  // r9b
    unsigned long long v11;  // rsi

    v2 = a0->field_2000;
    if (v2 >= 8193)
    {
        v0 = v4;
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    }
    else if (!a1)
    {
        return 0;
    }
    else if (!v2)
    {
        return 0;
    }
    else
    {
        v6 = 0;
        do
        {
            v9 = *((char *)(a0 + v6)) == a0->field_2010;
            v8 = v8 | -0x100 | v9;
            v3 = &v6->padding_1;
        } while (v2 - 1 != v6 && (v11 = a1 - (-0x100 | (unsigned long long)v9), a1 != (-0x100 | (unsigned long long)v9)));
        return v3;
    }
}
