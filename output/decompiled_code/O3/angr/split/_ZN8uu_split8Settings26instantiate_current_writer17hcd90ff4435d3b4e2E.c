long long uu_split::Settings::instantiate_current_writer::hcd90ff4435d3b4e2(unsigned long long a0[2], unsigned long long a1[17], unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x88]
    unsigned long v2;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x78]
    unsigned long v4;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x68]
    unsigned long long v6;  // [sp-0x60]
    unsigned long long v7;  // [sp-0x58]
    void* v8;  // [sp-0x50]
    char v9;  // [bp-0x40]

    v0 = a2;
    v1 = a3;
    if (!(char)uu_split::platform::unix::paths_refer_to_same_file::heb0d8f4c4d2160c1(a1[15], a1[16], a2, a3))
    {
        uu_split::platform::unix::instantiate_current_writer::hf8c74f0faf7167ae(a0, a1 + 1, a2, a3, a4);
        return a0;
    }
    v2 = &v0;
    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h02c142c219899b7f;
    v4 = &g_5488a0;
    v5 = 2;
    v8 = 0;
    v6 = &v2;
    v7 = 1;
    ::0x4c9650::core::option::Option$LT$T$GT$::map_or_else::h4205ca1636aab800(&v9, 0, &v4);
    a0[1] = std::io::error::Error::new::h0a117ec4773f7109(39, &v9);
    a0[0] = 0x8000000000000000;
    return a0;
}
