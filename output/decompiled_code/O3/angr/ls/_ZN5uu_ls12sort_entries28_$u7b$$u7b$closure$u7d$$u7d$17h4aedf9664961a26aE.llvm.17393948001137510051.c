long long _ZN5uu_ls12sort_entries28_$u7b$$u7b$closure$u7d$$u7d$17h4aedf9664961a26aE.llvm.17393948001137510051(struct_3 *a0)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    char v2;  // [bp-0x98]
    unsigned long long v4;  // rax
    struct_2 *v5;  // rcx
    unsigned long long v6;  // rdx
    void* v7;  // rax
    unsigned long long v8;  // r14
    struct_1 *v9;  // r12
    struct struct_0 **v10;  // rax

    if (!(a0->field_128) || !(a0->field_48 < 2))
    {
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v0, a0->field_20, a0->field_28);
        if (*((int *)&v0) != 2)
        {
            v4 = 0xf000 & *((int *)&v2);
            goto LABEL_4f4244;
        }
        else
        {
            v5 = *((long long *)&v1);
            v6 = (unsigned int)v5 & 3;
            v7 = 0;
            if (v6 - 2 >= 2 && v6)
            {
                v8 = *((long long *)((char *)&v5->field_-1 + 1));
                v9 = *((long long *)((char *)&v5->field_-1 + 7));
                if (v9->field_0)
                    v10(v8);
                if (v9->field_8)
                    __rust_dealloc(v8);
                __rust_dealloc((char *)&v5->field_-1 + 1);
                v7 = 0;
            }
        }
    }
    else
    {
        v4 = 0xf000 & a0->field_80;
LABEL_4f4244:
        v7 = v4 | -0x100 | (unsigned int)v4 == 0x4000;
    }
    return v7 | -0x100 | (char)v7 ^ 1;
}
