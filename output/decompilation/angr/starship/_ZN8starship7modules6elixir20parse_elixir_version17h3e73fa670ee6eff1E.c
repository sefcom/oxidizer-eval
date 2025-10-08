long long starship::modules::elixir::parse_elixir_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xe8], Other Possible Types: void*
    unsigned long long v1;  // [bp-0xe0]
    char v2;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v3;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned long v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    unsigned short v6;  // [bp-0xb0]
    int v7;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v8;  // [bp-0x90]
    char v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x78]
    void* v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    char v13;  // [bp-0x60]
    unsigned short v14;  // [bp-0x30]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v23;  // rax

    v13.into_searcher(10, a1, a2);
    v11 = 0;
    v12 = a2;
    v14 = 0;
    v16 = v11.next_inclusive();
    if (v16)
    {
        v2.into_searcher(v16.call(v17), a2);
        v0 = 0;
        v1 = v17;
        v6 = 1;
        if (!v0.advance_by(1))
        {
            v19 = v0.try_fold();
            if (v19)
            {
                v20 = v11.next_inclusive();
                if (v20)
                {
                    v20.call(v17);
                    v21 = v11.next_inclusive();
                    if (v21)
                    {
                        v2.into_searcher(v21.call(v17), a2);
                        v0 = 0;
                        v1 = v17;
                        v6 = 1;
                        if (!v0.advance_by(1))
                        {
                            v23 = v0.try_fold();
                            if (v23)
                            {
                                v7.to_vec(v19, v17);
                                v9.to_vec(v23, v17);
                                v5 = v10;
                                memcpy(&v3, &v9, 16);
                                v2 = v8;
                                v0 = v7;
                                *((unsigned long *)&a0[32]) = v4;
                                *((unsigned long long *)&a0[40]) = v5;
                                *((unsigned long long *)&a0[16]) = v2;
                                *((unsigned long *)&a0[24]) = v3;
                                *(a0) = v7;
                                return v3;
                            }
                        }
                    }
                }
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
