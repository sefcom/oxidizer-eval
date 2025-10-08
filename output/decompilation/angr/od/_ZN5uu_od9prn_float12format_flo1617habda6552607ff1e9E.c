long long uu_od::prn_float::format_flo16(unsigned long long a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdi

    v0 = v2;
    v3 = a1;
    if (!(char)std_detect::detect::cache::test())
    {
        half::binary16::arch::f16_to_f64_fallback(v3);
        return uu_od::prn_float::format_float(a0, 9, 4);
    }
    half::binary16::arch::x86::f16_to_f32_x86_f16c(v3); /* do not return */
}
