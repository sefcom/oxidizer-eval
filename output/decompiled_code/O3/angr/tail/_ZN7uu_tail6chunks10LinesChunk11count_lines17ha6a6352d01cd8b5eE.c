long long uu_tail::chunks::LinesChunk::count_lines::ha6a6352d01cd8b5e(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x18]
    char v3;  // [sp-0x10]
    unsigned long long v6;  // rax
    unsigned long v7;  // rdx

    v6 = uu_tail::chunks::LinesChunk::get_buffer::h5b7e02a16000fb44(a0);
    v3 = a0->field_2010;
    v0 = v6;
    v1 = v6;
    v2 = v7 + v6;
    return memchr::arch::generic::memchr::Iter::count::h14febf7eb8497a26(v6, v7 + v6, &v3);
}
