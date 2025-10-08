long long uu_od::inputdecoder::MemoryDecoder::read_float(unsigned long long a0[3], unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x50]
    char *v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]
    unsigned long v9;  // rbx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned int v12;  // eax
    unsigned long long v13;  // rdx
    unsigned long v15;  // rdi

    v9 = a1;
    v0 = a3;
    switch (a3)
    {
    case 2:
        v10 = a2.index(a2 + 2, a0[1], a0[2], &g_502368);
        if ((char)v9 && (unsigned int)v9 == 1)
        {
            v12 = v10.read_u16(v11);
            break;
        }
        else
        {
            v12 = v10.read_u16(v13);
        }
        v15 = v12;
        if (!(char)std_detect::detect::cache::test())
            return half::binary16::arch::f16_to_f64_fallback(v12);
        half::binary16::arch::x86::f16_to_f32_x86_f16c(v12); /* do not return */
    case 4:
        return v9.read_f32(a2.index(a2 + 4, a0[1], a0[2], &g_502380), a2);
    case 8:
        return v9.read_f64(a2.index(a2 + 8, a0[1], a0[2], &g_502398), a2);
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v3 = &g_5022e0;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt(&v3, &g_5023b0); /* do not return */
    }
}
