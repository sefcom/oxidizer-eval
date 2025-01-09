long long uu_split::get_input_size::hff72b499bd50ee30(unsigned long long a0[3], unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
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
    unsigned long v14;  // rdx

    v13 = a0;
    v1[0] = a0;
    v4 = a1;
    v5 = uucore::features::fs::sane_blksize::sane_blksize_from_path::haa29efd65464ae5d(v13[1], v13[2]);
    if (std::io::default_read_to_end::h83389f9d77e2b24f(&v4, a2, 0, a3))
    {
        return 1;
    }
    else if (v5 > v14)
    {
        return 0;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v13[1], v13[2], "-", 1))
    {
        v2 = &v1[0];
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haeb779686b12abb9;
        v4 = &g_5483a0;
        v5 = 2;
        v8 = 0;
        v6 = &v2;
        v7 = 1;
        ::0x4c9580::core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&v11, 0, &v4);
        std::io::error::Error::new::hd2fa1afc07f95968(39, &v11);
        return 1;
    }
    else
    {
        std::fs::metadata::h341dbab23461c7c8(&v4, v13);
        if ((int)v4 == 2)
            return 1;
        if (*((long long *)&v9) >= v14)
            return 0;
        std::fs::File::open::hf05dc8e7da5fafe3(&v4, v1[1], v1[2]);
        if (!(int)v4)
        {
            v0 = *((int *)((char *)&v4 + 4));
            if (!_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&v0, 1, 0))
            {
                if (!v14)
                {
                    v2 = &v1[0];
                    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haeb779686b12abb9;
                    v4 = &g_5483c0;
                    v5 = 2;
                    v8 = 0;
                    v6 = &v2;
                    v7 = 1;
                    ::0x4c9580::core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&v10, 0, &v4);
                    std::io::error::Error::new::hd2fa1afc07f95968(39, &v10);
                }
                else
                {
                    ::0x4c8710::core::ptr::drop_in_place$LT$std..fs..File$GT$::hc63c21dac960bcdf(&v0);
                    return 0;
                }
            }
            ::0x4c8710::core::ptr::drop_in_place$LT$std..fs..File$GT$::hc63c21dac960bcdf(&v0);
            return 1;
        }
    }
}
