long long uu_wc::compute_number_width(unsigned long long a0[4], void* a1)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    int v3;  // [bp-0xd8]
    int v4;  // [bp-0xa8]
    char v5;  // [bp-0x90]
    unsigned long long v7;  // rdx
    unsigned long long *v8;  // rax
    unsigned long long v9;  // rbx
    void* v10;  // r12
    unsigned long long v11;  // rsi
    unsigned long long v13;  // rdi
    unsigned int v14;  // cc_dep1
    unsigned long long v15;  // rax

    if (!a0[0])
    {
        return ((int)a1.number_enabled() == 1 ? 1 : 7);
    }
    else if ((unsigned int)a0[0] == 1)
    {
        if ((int)a1.number_enabled() == 1 && a0[3] == 1)
            return 1;
        v0 = a0[1].into_iter();
        v1 = v7;
        if (!v0.next())
            return 1;
        v9 = 1;
        v10 = 0;
        do
        {
            if (*(v8) == 9223372036854775809)
            {
                v9 = 7;
                continue;
            }
            std::fs::metadata(&v2, v8);
            if (v2 == 2)
            {
                v11 = (long long)v3;
                v13 = 2;
                goto LABEL_4b379a;
            }
            v14 = (int)v4 & 0xf000;
            if (v14 != 0x8000)
            {
                v15 = 0;
                if (!(v14 != 0x8000))
                    goto LABEL_4b3790;
                goto LABEL_4b378f;
            }
            else
            {
                v15 = *((long long *)&v5);
                if (v14 != 0x8000)
                {
LABEL_4b378f:
                    v9 = 7;
                    goto LABEL_4b3792;
                }
                else
                {
LABEL_4b3790:
LABEL_4b3792:
                    v10 += v15;
                    v11 = (long long)v3;
                    v13 = v2;
LABEL_4b379a:
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v13, v11);
                }
            }
            v8 = v0.next();
        } while (v8);
        if (v10)
            return ::0x4ac590::core::cmp::max_by((int)core::num::int_log10::u64(v10) + 1, v9);
        return v9;
    }
    else
    {
        return 1;
    }
}
