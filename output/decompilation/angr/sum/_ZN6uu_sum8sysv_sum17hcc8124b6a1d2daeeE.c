void uu_sum::sysv_sum(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    struct_0 *v0;  // [bp-0x1038], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x1030]
    unsigned long long v3;  // rax
    unsigned int v4;  // r12d
    void* v5;  // r15
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v1 = 0;
    v0 = v3;
    v0 = a0;
    v4 = 0;
    memset(&v1, 0, 0x1000);
    v5 = 0;
    while (true)
    {
        if ((unsigned long long)a1.read(a2, &v1))
        {
            if ((char)v6.kind() == 35)
            {
                ::0x495420::core::ptr::drop_in_place<std::io::error::Error>(v6);
            }
            else
            {
                v0->field_8 = v6;
                v0->field_0 = 1;
                break;
            }
        }
        else
        {
            if (v6)
            {
                v7 = v6.index(&v1, &g_5721d0);
                v5 += v6;
                v4 = v7.fold(v6 + v7, v4);
            }
            else
            {
                v0->field_8 = (v5 >> 9) + 1 - (((unsigned int)v5 & 511) < 1);
                v0->field_10 = (unsigned short)((v4 >> 16) + v4 >> 16) + (unsigned short)(v4 >> 16) + (unsigned short)v4;
                v0->field_0 = 0;
                break;
            }
        }
    }
    ::0x495370::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(a1, a2);
    return;
}
