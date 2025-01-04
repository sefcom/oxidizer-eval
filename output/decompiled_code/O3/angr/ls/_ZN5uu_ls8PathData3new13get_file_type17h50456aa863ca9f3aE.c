long long uu_ls::PathData::new::get_file_type::h50456aa863ca9f3a(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0xe0]
    char v1;  // [bp-0xd0]
    unsigned int v3;  // ebp

    if (a3)
    {
        std::fs::metadata::h459aac21f85cb4df(&v1, a1, a2);
        if (*((int *)&v1) != 2)
        {
            ::0x51b5c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&v1);
            return 1;
        }
        ::0x51b5c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&v1);
    }
    std::fs::DirEntry::file_type::hd81c8483f7ba6043(&v0, a0);
    if (!*((int *)&v0))
    {
        v3 = 1;
    }
    else
    {
        std::fs::symlink_metadata::haff3ff196e1dc22b(&v1, a1, a2);
        ::0x51b5c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&v1);
        v3 = (unsigned int)(-0x100 | (int)*((long long *)&v1) == 2) + 1;
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..FileType$C$std..io..error..Error$GT$$GT$::hcb401049192dd8f7(&v0);
    return v3;
}
