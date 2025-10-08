long long uu_tail::chunks::BytesChunkBuffer::print(unsigned long long a0, unsigned long long a1)
{
    void* *v0;  // [bp-0x50], Other Possible Types: char
    void* *v1;  // [bp-0x48]
    void* *v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    void* *v5;  // rcx
    void* *v6;  // rcx
    void* *v7;  // r12
    void* *v8;  // r12
    void* *v9;  // rdx
    void* *v10;  // rcx
    void* *v11;  // rbx
    void* *v12;  // r12
    void* *v13;  // rbp
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax

    v0.iter(a0);
    v5 = *((long long *)&v3);
    while (true)
    {
        v6 = v5;
        v7 = v2;
        if (v0 != v1)
        {
            v8 = v7;
            v9 = v0;
            v10 = v6;
        }
        else
        {
            v8 = v0;
            v9 = v7;
            v10 = v0;
            v1 = v6;
            if (v9 == v1)
                return 0;
        }
        v11 = v10;
        v12 = v9;
        v13 = v8;
        v15 = a1.write_all(*(v12).get_buffer(), v14);
        v0 = v12 + 1;
        v2 = v13;
        v5 = v11;
        if (v15)
            return v15.from();
    }
}
