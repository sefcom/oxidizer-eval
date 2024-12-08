long long uu_split::get_input_size::h6ad29fa08a4e6ff3(unsigned long long a0[3], unsigned long a1, unsigned long long a2, unsigned long a3, unsigned long long a4)
{
    unsigned int v0;  // [sp-0x11c]
    unsigned long long v1[3];  // [sp-0x118]
    struct struct_0 **v2;  // [sp-0x110]
    unsigned long long v3;  // [sp-0x108]
    unsigned long v4;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xf8]
    struct struct_1 **v6;  // [sp-0xf0]
    unsigned long long v7;  // [sp-0xe8]
    void* v8;  // [sp-0xe0]
    char v9;  // [bp-0xb0]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x38]
    unsigned long long v13[3];  // rbx
    unsigned long long v14;  // rdx

    v13 = a0;
    v1[0] = a0;
    v4 = a1;
    v5 = uucore::features::fs::sane_blksize::sane_blksize_from_path::h2855cd6f5a15ea47(v13[1], v13[2]);
    if (std::io::default_read_to_end::hdaf296aacaf1b898(&v4, a2, 0))
    {
        return 1;
    }
    else if (v5 > v14)
    {
        return 0;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h799d22e267aaebaa(v13[1], v13[2], "-", 1))
    {
        v2 = &v1[0];
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf7c36d5522ac648a;
        v4 = &g_5488e0;
        v5 = 2;
        v8 = 0;
        v6 = &v2;
        v7 = 1;
        ::0x4c9650::core::option::Option$LT$T$GT$::map_or_else::h4205ca1636aab800(&v11, 0, &v4);
        std::io::error::Error::new::h0a117ec4773f7109(39, &v11);
        return 1;
    }
    else
    {
        std::fs::metadata::h0551237eff0ac10f(&v4, v13, v14);
        if ((int)v4 == 2)
            return 1;
        if (*((long long *)&v9) >= v14)
            return 0;
        std::fs::File::open::ha2a77c506ff16f6b(&v4, v1[1], v1[2]);
        if (!(int)v4)
        {
            v0 = *((int *)((char *)&v4 + 4));
            if (!_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&v0, 1))
            {
                if (!v14)
                {
                    v2 = &v1[0];
                    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf7c36d5522ac648a;
                    v4 = &g_5488c0;
                    v5 = 2;
                    v8 = 0;
                    v6 = &v2;
                    v7 = 1;
                    ::0x4c9650::core::option::Option$LT$T$GT$::map_or_else::h4205ca1636aab800(&v10, 0, &v4);
                    std::io::error::Error::new::h0a117ec4773f7109(39, &v10);
                }
                else
                {
                    ::0x4c87e0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hecc4af608462ac52(&v0);
                    return 0;
                }
            }
            ::0x4c87e0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hecc4af608462ac52(&v0);
            return 1;
        }
    }
}
