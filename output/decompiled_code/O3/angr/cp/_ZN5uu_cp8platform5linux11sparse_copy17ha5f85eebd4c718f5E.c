long long uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [sp-0xf8]
    unsigned int v1;  // [sp-0xf4]
    unsigned long v2;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xe8]
    char v4;  // [bp-0xe0]
    char v5;  // [bp-0xdc]
    char v6;  // [bp-0xd8]
    char v7;  // [bp-0xd0]
    char v8;  // [bp-0x90]
    char v9;  // [bp-0x88]
    unsigned long long v11;  // r14
    unsigned long long v12;  // rbx
    void* v13;  // r15
    unsigned long long v14;  // rdx
    unsigned long long v16;  // rax

    std::fs::File::open::h2ade805364297b3f(&v4, a0, a1);
    if (*((int *)&v4))
    {
        v11 = *((long long *)&v6);
        return v11;
    }
    v0 = *((int *)&v5);
    std::fs::File::create::h63900868be62ed17(&v4, a2, a3);
    if (*((int *)&v4))
    {
        ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v0);
        return v11;
    }
    v1 = *((int *)&v5);
    std::fs::File::metadata::he899a18112e6f19e(&v4, &v0);
    if (*((int *)&v4) != 2)
    {
        v12 = *((long long *)&v8);
        core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(v12 >> 63, &g_5b6500);
        if (ftruncate(v1, v12) < 0)
        {
            v11 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
            ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v1);
            ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v0);
            return v11;
        }
        std::fs::File::metadata::he899a18112e6f19e(&v4, &v1);
        if (*((int *)&v4) != 2)
        {
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&v4, *((long long *)&v9));
            if (v12)
            {
                v13 = 0;
                do
                {
                    if (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(&v0, *((long long *)&v6), *((long long *)&v7)))
                    {
LABEL_513410:
                        ::0x5128f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&v4);
                        ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v1);
                        ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v0);
                        return v11;
                    }
                    v2 = ::0x5126e0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha9f3ca16460e2477(v14, *((long long *)&v6), *((long long *)&v7));
                    v3 = v2 + v14;
                    if ((char)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hb6331f8b0439d978(&v2) && (v16 = (unsigned long long)std::os::unix::fs::FileExt::write_all_at::h20b571d70eaa1579(&v1, v2, v14, v13), v16))
                        goto LABEL_513410;
                } while ((v13 += v14, v13 < v12));
            }
            ::0x5128f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&v4);
            ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v1);
            ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v0);
            return 0;
        }
    }
    ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v1);
    ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v0);
    return v11;
}
