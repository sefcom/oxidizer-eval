double uu_od::prn_char::format_ascii_dump::h253c6e9b0061c235(long long a0, long long a1, long long a2)
{
    void* v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x40]
    void* v2;  // [sp-0x38]
    unsigned long v3;  // [sp-0x30]
    unsigned long long v4;  // [sp-0x28]
    char *v6;  // rax
    unsigned long long v7;  // rax
    int v8;  // xmm0
    int v9;  // ymm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    ::0x4d5660::alloc::string::String::push::h859ae11851fd8b8e(&v0, 62);
    v3 = a1;
    v4 = a2 + a1;
    v6 = ::0x4d5670::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hacde45113f50203e(&v3);
    if (v6)
    {
        do
        {
            v7 = *(v6);
            if ((v7 - 32 & 255) >= 95)
                ::0x4d5660::alloc::string::String::push::h859ae11851fd8b8e(&v0, 46);
            else
                ::0x4d55e0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&v0, ::0x4d5550::core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(*((long long *)&(&_ZN5uu_od8prn_char7C_CHARS17h05ab81629a83a794E)[(v7 & 4294967295) * 16 & 4294967295]), *((long long *)&(&g_5428a0)[(v7 & 4294967295) * 16 & 4294967295]) + *((long long *)&(&_ZN5uu_od8prn_char7C_CHARS17h05ab81629a83a794E)[(v7 & 4294967295) * 16 & 4294967295])), a2);
        } while ((v6 = ::0x4d5670::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hacde45113f50203e(&v3), v6));
    }
    ::0x4d5660::alloc::string::String::push::h859ae11851fd8b8e(&v0, 60);
    a0->field_10 = v2;
    v8 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v8;
    return (unsigned long long)(v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8);
}
