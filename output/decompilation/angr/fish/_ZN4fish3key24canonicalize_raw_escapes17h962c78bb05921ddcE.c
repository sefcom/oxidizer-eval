long long fish::key::canonicalize_raw_escapes(struct_0 *a0, struct_1 *a1)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    unsigned long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v6;  // rbx
    unsigned long long v7;  // r14
    unsigned long long v8;  // r12
    char v9;  // r12b
    unsigned long long v10;  // rbp
    void* v11;  // rax
    int v12;  // xmm0

    v3 = a1->field_0[1];
    v4 = a1->field_0[1] + *((long long *)&a1->field_8) * 8;
    if (v3.any())
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v3.into_iter(a1);
        if ((int)v3.next() != 0x110000)
        {
            v7 = 0;
            do
            {
                v10 = v6 >> 32;
                if (((char)v7 & 1))
                {
                    if (!((char)(v6 >> 40) & 1))
                    {
                        v10 = (unsigned int)v10 & 4294902015 | 0x100;
                        if ((unsigned int)v6 == 27)
                            v6 = 62722;
                    }
                    else
                    {
                        v0.push(62722, &g_14dbd58);
                    }
LABEL_13d5669:
                    v7 = 0;
                    goto LABEL_13d5669;
                }
                else
                {
                    v9 = 1;
                    v8 = v8 & 0xffffffffffffff00 | 1;
                    if ((unsigned int)v6 == 27)
                        continue;
                }
                v0.push(v6 & 4294967295 | v10 * 0x100000000, &g_14dbd70);
                v8 = v7 & 4294967295;
                v6 = v3.next();
                v7 = v8 & 4294967295;
            } while ((unsigned int)v6 != 0x110000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::key::Key>>(&v3);
        if ((v9 & 1))
            v0.push(62722, &g_14dbd40);
        v11 = 0;
        a0->field_10 = 0;
        v12 = *((int128_t *)&v0);
    }
    else
    {
        v11 = *((long long *)&a1->field_8);
        a0->field_10 = v11;
        v12 = a1->field_0;
    }
    *((void*)&a0->field_0) = v12;
    return v11;
}
