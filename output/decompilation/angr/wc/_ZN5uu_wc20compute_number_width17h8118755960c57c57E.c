long long uu_wc::compute_number_width(struct_0 *a0, void* a1)
{
    unsigned long long v0;  // [bp-0xe0]
    int v1;  // [bp-0xd8]
    int v2;  // [bp-0xa8]
    char v3;  // [bp-0x90]
    unsigned int v5;  // eax
    unsigned long long v6;  // rdx
    unsigned long long *v7;  // r14
    unsigned long long v8;  // r13
    unsigned long long v9;  // rbx
    void* v10;  // r15
    unsigned long long v11;  // r13
    unsigned int v13;  // eax
    unsigned long long v14;  // rax

    if (!a0->field_0)
    {
        return ((int)a1.number_enabled() == 1 ? 1 : 7);
    }
    else if ((unsigned int)a0->field_0 == 1)
    {
        v5 = a1.number_enabled();
        v6 = a0->field_18;
        if (v5 == 1 && v6 == 1)
            return 1;
        if (!v6)
            return 1;
        v7 = a0->field_10;
        v8 = v6 * 24;
        v9 = 1;
        v10 = 0;
        while (true)
        {
            v11 = v8;
            if (*(v7) == 9223372036854775809)
            {
                v9 = 7;
                v7 += 3;
                v8 = v11 - 24;
                if (v11 == 24)
                    break;
            }
            else
            {
                std::fs::metadata(&v0, v7);
                if (v0 == 2)
                {
                    v0 = 2;
                }
                else
                {
                    v13 = (int)v2 & 0xf000;
                    v14 = *((long long *)&v3);
                    if (v13 != 0x8000)
                        v14 = 0;
                    if (v13 != 0x8000)
                        v9 = 7;
                    v10 += v14;
                }
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v0, (long long)v1);
                v7 += 3;
                v8 = v11 - 24;
                if (v11 == 24)
                    break;
            }
        }
        if (!v10)
            return v9;
        return (int)core::num::int_log10::u64(v10) + 1.max(v9);
    }
    else
    {
        return 1;
    }
}
