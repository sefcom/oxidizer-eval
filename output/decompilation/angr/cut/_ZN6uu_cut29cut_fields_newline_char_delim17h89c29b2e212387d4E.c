long long uu_cut::cut_fields_newline_char_delim(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, char a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    char v5;  // [bp-0x88]
    int v6;  // [bp-0x88]
    char v7;  // [bp-0x78]
    char v8;  // [bp-0x68]
    char v9;  // [bp-0x38]
    uint128_t *v10;  // rax
    char v11;  // bpl
    unsigned long v12;  // rdx
    unsigned long v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    v8.with_capacity(0x2000, a0);
    v9 = a5;
    v0.from_iter(&v8, &g_58bd60);
    v3 = a3;
    v4 = a4 * 16 + a3;
    if (v3.next())
    {
        do
        {
            *((uint128_t *)&v6) = *(v10);
            v7 = 0;
            if (!v6.spec_next())
                continue;
            v13 = v12 - 1;
            if (v13 < v2)
            {
                if ((v11 & 1) && !(!(unsigned long long)a1.write_all(a2, a6, a7)))
                    goto LABEL_4ad9f4;
                for (v14 = (unsigned long long)a1.write_all(a2, *((long long *)(v13 * 24 + v1 + 8)), *((long long *)(v13 * 24 + v1 + 16))); !v14; v14 = (unsigned long long)a1.write_all(a2, *((long long *)(v15 * 24 + v1 + 8)), *((long long *)(v15 * 24 + v1 + 16))))
                {
                    v11 = 1;
                    if (!v6.spec_next())
                        goto LABEL_4ad910;
                    v15 = v12 - 1;
                    if (!(v15 < v2))
                        goto LABEL_4ad910;
                    if (!(!(unsigned long long)a1.write_all(a2, a6, a7)))
                        break;
                }
LABEL_4ad9f4:
                v16 = v14.from();
                goto LABEL_0x4ada2a;
            }
LABEL_4ad910:
            v10 = v3.next();
        } while (v10);
        goto LABEL_4ada2a;
    }
    v5 = a5;
    v17 = (unsigned long long)a1.write_all(a2, &v5, 1);
    if (!v17)
    {
        ::0x4abe50::core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<u8>>>(&v0);
        return 0;
    }
    v16 = v17.from();
LABEL_4ada2a:
    ::0x4abe50::core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<u8>>>(&v0);
    return v16;
}
