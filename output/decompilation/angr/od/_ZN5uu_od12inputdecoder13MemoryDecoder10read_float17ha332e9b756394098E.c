long long uu_od::inputdecoder::MemoryDecoder::read_float(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x50]
    char *v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]
    unsigned long long v9;  // rax
    unsigned int v10;  // ebx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned int v13;  // eax
    unsigned long long v14;  // rdx
    unsigned long v16;  // rdi

    v0 = a2;
    switch (a2)
    {
    case 2:
        v10 = a0->field_18;
        v11 = a1.index(a1 + 2, a0->field_0->field_8, a0->field_0->field_10, &g_596370);
        if (v10 && v10 == 1)
        {
            v13 = v11.read_u16(v12);
            break;
        }
        else
        {
            v13 = v11.read_u16(v14);
        }
        v16 = v13;
        if (!(char)::0x4bb0e0::std_detect::detect::cache::test())
            return ::0x4bb320::half::binary16::arch::f16_to_f64_fallback(v13);
        ::0x4bb3f0::half::binary16::arch::x86::f16_to_f32_x86_f16c(v13); /* do not return */
    case 4:
        return *((int *)&a0->field_18).read_f32(a1.index(a1 + 4, a0->field_0->field_8, a0->field_0->field_10, &g_596388), a2);
    case 8:
        v9 = a1.index(a1 + 8, a0->field_0->field_8, a0->field_0->field_10, &g_5963a0);
        return *((int *)&a0->field_18).read_f64(v9, a2);
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v3 = &g_5962e8;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt(&v3, &g_5963b8); /* do not return */
    }
}
