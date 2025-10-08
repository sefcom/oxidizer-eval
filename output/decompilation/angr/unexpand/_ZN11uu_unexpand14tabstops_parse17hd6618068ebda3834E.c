long long uu_unexpand::tabstops_parse(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa8]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x9f]
    unsigned long long v5;  // [bp-0x98]
    int v6;  // [bp-0x90], Other Possible Types: char
    void* v7;  // [bp-0x80]
    void* v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    unsigned short v11;  // [bp-0x38]
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rax
    unsigned long v15;  // rax
    unsigned long long v16;  // rdx

    v10.into_searcher(a1, a2);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v8 = 0;
    v9 = a2;
    v11 = 1;
    while (true)
    {
        v13 = v8.next();
        if (v13)
        {
            ::0x458c30::core::num::<impl usize>::from_ascii_radix(&v3, v13, a2);
            if (!v3)
            {
                v0.push(v5);
            }
            else
            {
                if (v4 == 2)
                {
                    v14 = 9223372036854775809;
                }
                else
                {
                    v6.to_vec(core::str::<impl str>::trim_start_matches(v13, v16), a2);
                    *((void* *)&a0[24]) = v7;
                    a0[8] = v6;
                    break;
                }
LABEL_45beda:
                *((unsigned long long *)&a0[8]) = v14;
                break;
            }
        }
        else if (v1.slice_contains(v2))
        {
            v14 = 0x8000000000000000;
            goto LABEL_45beda;
        }
        else
        {
            if ((v1.fold(v1 + v2 * 8) & 1))
            {
                v15 = a0 + 8;
                *((void* *)(v15 + 16)) = v2;
                *((int128_t *)v15) = *((int128_t *)&v0);
                *((unsigned long long *)a0) = 0;
                return v15;
            }
            v14 = 9223372036854775810;
            goto LABEL_45beda;
        }
    }
    *((unsigned long long *)a0) = 1;
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v0, v1);
}
