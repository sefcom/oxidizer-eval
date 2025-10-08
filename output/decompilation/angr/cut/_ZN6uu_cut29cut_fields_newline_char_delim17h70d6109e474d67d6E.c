long long uu_cut::cut_fields_newline_char_delim(unsigned long long a0, unsigned long long a1, unsigned long long a2, uint128_t *a3, unsigned long a4, char a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    int v6;  // [bp-0x68]
    char v7;  // [bp-0x58]
    char v8;  // [bp-0x38]
    char v9;  // r13b
    unsigned long v10;  // rdx
    unsigned long v11;  // rbp
    unsigned long long v12;  // rax
    unsigned long v13;  // rbp
    void* v14;  // rax
    unsigned long long v15;  // rax

    v5.with_capacity(a0);
    v8 = a5;
    v2.collect(&v5);
    if (a4)
    {
        v1 = &a3[a4];
        v0 = v3;
        do
        {
            *((uint128_t *)&v6) = *(a3);
            v7 = 0;
            if (!((char)v6.spec_next() & 1))
                continue;
            v11 = v10 - 1;
            if (v11 < v4)
            {
                if ((v9 & 1))
                {
                    v12 = (unsigned long long)a1.write_all(a2, a6, a7);
                    if (v12)
                        goto LABEL_469482;
                }
                for (v12 = (unsigned long long)a1.write_all(a2, *((long long *)(v0 + v11 * 24 + 8)), *((long long *)(v0 + v11 * 24 + 16))); !v12; v12 = (unsigned long long)a1.write_all(a2, *((long long *)(v0 + v13 * 24 + 8)), *((long long *)(v0 + v13 * 24 + 16))))
                {
                    v9 = 1;
                    if (!((char)v6.spec_next() & 1))
                        goto LABEL_469380;
                    v13 = v10 - 1;
                    if (v13 >= v4)
                        goto LABEL_469380;
                    if ((unsigned long long)a1.write_all(a2, a6, a7))
                        break;
                }
LABEL_469482:
                v14 = v12.from();
                goto LABEL_4694b8;
            }
LABEL_469380:
            a3 += 1;
        } while (a3 != v1);
        goto LABEL_4694b8;
    }
    v5 = a5;
    v15 = (unsigned long long)a1.write_all(a2, &v5, 1);
    if (v15)
    {
        v14 = v15.from();
LABEL_4694b8:
    }
    else
    {
        v14 = 0;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<u8>>>(&v2);
    return v14;
}
