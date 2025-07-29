long long uu_tail::chunks::LinesChunkBuffer::print(unsigned long long a0, unsigned long long a1)
{
    int v1;  // [bp-0x38]
    int v2;  // [bp-0x38]
    int v3;  // [bp-0x28]
    void* *v5;  // rax
    unsigned long long v6;  // rax

    (char)v1.iter(a0);
    while (true)
    {
        v5 = (char)v1.next();
        v1 = v1;
        if (!v5)
        {
            v2 = v3;
            v3 = v1;
            v5 = v2.next();
            v1 = v2;
            if (!v5)
                return 0;
        }
        v6 = *(v5).print_bytes(a1);
        if (v6)
            return v6;
    }
}
