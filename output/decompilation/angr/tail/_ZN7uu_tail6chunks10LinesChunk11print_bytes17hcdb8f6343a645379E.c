long long uu_tail::chunks::LinesChunk::print_bytes(void* a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax

    v0 = v2;
    v4 = a1.write_all(a0.get_buffer_with(0), v3);
    if (!v4)
        return 0;
    return v4.from();
}
