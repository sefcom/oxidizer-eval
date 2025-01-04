long long uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::hf7157a0eade16c76(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long v3;  // rdx
    char *v4;  // rax
    void* v5;  // r14
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r13
    char v9;  // r13b
    unsigned long long v10;  // r12

    v0 = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(a0);
    v1 = v3 + v0;
    v4 = ::0x512470::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfe7d83be48d23115(&v0);
    if (!a1)
    {
        return 0;
    }
    else if (!v4)
    {
        return 0;
    }
    else
    {
        v5 = 0;
        while (true)
        {
            v7 = a1;
            v9 = *(v4) == a0->field_2010;
            v8 = v8 | -0x100 | v9;
            v5 += 1;
            v4 = ::0x512470::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfe7d83be48d23115(&v0);
            if (!v4)
                return v5;
            v10 = -0x100 | v9;
            a1 = v7 - v10;
            if (v7 == v10)
                return v5;
        }
    }
}
