long long uu_od::prn_float::format_flo16::hd8d34214ac1f2229(unsigned long long a0, unsigned int a1)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long long v3;  // rdi

    v0 = v2;
    v3 = a1;
    if (!(char)::0x4d4930::std_detect::detect::cache::test::h15354216764ae092())
    {
        ::0x4d4a90::half::binary16::arch::f16_to_f64_fallback::h99c57f7b07aa0fd1(v3);
        return uu_od::prn_float::format_float::h341a0cfde1a47520(a0, 9, 4);
    }
    ::0x4d4c40::half::binary16::arch::x86::f16_to_f32_x86_f16c::hae4e4afa5bc8fbe3(v3); /* do not return */
}
