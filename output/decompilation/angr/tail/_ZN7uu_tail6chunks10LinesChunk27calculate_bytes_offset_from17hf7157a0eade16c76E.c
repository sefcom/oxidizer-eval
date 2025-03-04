long long uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::hf7157a0eade16c76(struct_0 *a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v3;  // rbx
    unsigned long v4;  // rdx
    char *v5;  // rax
    void* v6;  // r14
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r13
    char v10;  // r13b
    unsigned long long v11;  // r12

    v3 = a1;
    v0 = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(a0);
    v1 = v4 + v0;
    v5 = ::0x512470::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfe7d83be48d23115(&v0);
    if (!a1)
    {
        return 0;
    }
    else if (!v5)
    {
        return 0;
    }
    else
    {
        v6 = 0;
        while (true)
        {
            v8 = v3;
            v10 = *(v5) == a0->field_2010;
            v9 = v9 & 0xffffffffffffff00 | v10;
            v6 += 1;
            v5 = ::0x512470::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfe7d83be48d23115(&v0);
            if (!v5)
                return v6;
            v11 = v10;
            v3 = v8 - v11;
            if (v8 == v11)
                return v6;
        }
    }
}
