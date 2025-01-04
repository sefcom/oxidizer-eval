long long uu_tail::chunks::LinesChunk::count_lines::hff5a62bbb9e14842(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x18]
    char v3;  // [sp-0x10]
    unsigned long long v6;  // rax
    unsigned long v7;  // rdx

    v6 = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(a0);
    v3 = a0->field_2010;
    v0 = v6;
    v1 = v6;
    v2 = v7 + v6;
    return memchr::arch::generic::memchr::Iter::count::h043089570cb60419(v6, v7 + v6, &v3);
}
