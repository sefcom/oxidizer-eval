void uu_sum::sysv_sum(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x1040]
    struct_0 *v1;  // [bp-0x1038]
    void* v2;  // [bp-0x1030]
    unsigned int v4;  // r12d
    unsigned long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long *v7;  // rdx
    unsigned long long v8;  // rax

    v2 = 0;
    v4 = 0;
    memset(&v2, 0, 0x1000);
    v0 = 0;
    while (true)
    {
        if (((char)(unsigned long long)a1.read(a2, &v2) & 1))
        {
            if ((char)v5.kind() == 35)
            {
                core::ptr::drop_in_place<std::io::error::Error>(v5);
            }
            else
            {
                v7 = a0;
                v1->field_8 = v5;
                v8 = 1;
                break;
            }
        }
        else
        {
            if (v5)
            {
                v6 = v5.index(&v2, &g_4e1168);
                v0 += v5;
                v4 = v6.fold(v5 + v6, v4);
            }
            else
            {
                v7 = a0;
                v1->field_8 = (v0 >> 9) + 1 - (((unsigned int)v0 & 511) < 1);
                v1->field_10 = (unsigned short)((v4 >> 16) + v4 >> 16) + (unsigned short)(v4 >> 16) + (unsigned short)v4;
                v8 = 0;
                break;
            }
        }
    }
    *(v7) = v8;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(a1, a2);
    return;
}
