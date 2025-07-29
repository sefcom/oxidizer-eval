long long uu_unexpand::tabstops_parse(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    char v3;  // [sp-0x90]
    char v4;  // [bp-0x8f]
    unsigned long long v5;  // [bp-0x88]
    unsigned long v6;  // [bp-0x80]
    void* v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    unsigned short v10;  // [bp-0x38]
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rax
    unsigned long v14;  // rax
    unsigned long long v15;  // rdx

    v9.into_searcher(a1, a2);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v8 = a2;
    v10 = 1;
    while (true)
    {
        v12 = v7.next();
        if (v12)
        {
            ::0x49d250::core::num::<impl u64>::from_str_radix(&v3, v12, a2);
            if (!v3)
            {
                v0.push(v5);
            }
            else
            {
                if (v4 == 2)
                {
                    v13 = 9223372036854775809;
                }
                else
                {
                    v3.to_vec(core::str::<impl str>::trim_start_matches(v12, v15), a2);
                    a0->field_18 = v6;
                    *((int128_t *)&a0->field_8) = *((int128_t *)&v3);
                    break;
                }
LABEL_49f05a:
                *((unsigned long long *)&a0->field_8) = v13;
                break;
            }
        }
        else if (v1.slice_contains(v2))
        {
            v13 = 0x8000000000000000;
            goto LABEL_49f05a;
        }
        else
        {
            if ((v1.fold(v1 + v2 * 8) & 1))
            {
                v14 = &a0->field_8;
                *((void* *)(v14 + 16)) = v2;
                *((int128_t *)v14) = *((int128_t *)&v0);
                a0->field_0 = 0;
                return v14;
            }
            v13 = 9223372036854775810;
            goto LABEL_49f05a;
        }
    }
    a0->field_0 = 1;
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v0);
}
