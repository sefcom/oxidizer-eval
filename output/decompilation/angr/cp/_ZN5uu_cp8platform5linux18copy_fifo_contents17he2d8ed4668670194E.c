long long uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [sp-0xf8]
    unsigned int v1;  // [sp-0xf4]
    char v2;  // [bp-0xf0]
    char v3;  // [bp-0xec]
    unsigned long v4;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xd8]
    unsigned long v6;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xc8]
    char v8;  // [bp-0xc0], Other Possible Types: unsigned int
    unsigned int v9;  // [sp-0xbc]
    unsigned int v10;  // [bp-0xb8]
    char v11;  // [sp-0xb7]
    char v12;  // [bp-0xb4], Other Possible Types: unsigned short
    char v13;  // [bp-0x88]

    v4 = a0;
    v5 = a1;
    v6 = a2;
    v7 = a3;
    std::fs::File::open::h9d5fc688c698f3f4(&v8, &v4);
    if (v8)
        return 1;
    v0 = v9;
    v8 = 0;
    v12 = 0;
    v10 = 0;
    v12 = 1;
    v11 = 1;
    v9 = ~((int)uucore::features::mode::get_umask::hd2aa58752ad993fa()) & 402;
    std::fs::OpenOptions::open::hb8d9aa9fb7330c1e(&v2, &v8, &v6);
    if (!*((int *)&v2))
    {
        v1 = *((int *)&v3);
        if (!_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::ha1823f747cb4d7cf(&v0, &v1))
        {
            std::fs::File::metadata::he899a18112e6f19e(&v8, &v0);
            if (v8 != 2 && !std::fs::File::set_permissions::h14239b20adbb1b7d(&v1, *((int *)&v13)))
            {
                ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0();
                ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0();
                return 0;
            }
        }
        ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0();
    }
    ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0();
    return 1;
}
