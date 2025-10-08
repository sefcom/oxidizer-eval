long long uu_tail::chunks::LinesChunk::print_bytes(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    v1 = a1.write_all(a0.get_buffer_with(a2), a2);
    if (!v1)
        return 0;
    return v1.from();
}
