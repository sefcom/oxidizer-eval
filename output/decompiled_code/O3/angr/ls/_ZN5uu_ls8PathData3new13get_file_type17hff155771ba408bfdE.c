long long uu_ls::PathData::new::get_file_type::hff155771ba408bfd(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0xe0]
    char v1;  // [bp-0xd0]
    unsigned int v3;  // ebp

    if (a3)
    {
        std::fs::metadata::hd4f38c47306d1d10(&v1, a1, a2);
        if (*((int *)&v1) != 2)
        {
            ::0x51b5a0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h58f02cc439e5852f(&v1);
            return 1;
        }
        ::0x51b5a0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h58f02cc439e5852f(&v1);
    }
    std::fs::DirEntry::file_type::hd81c8483f7ba6043(&v0, a0);
    if (!*((int *)&v0))
    {
        v3 = 1;
    }
    else
    {
        std::fs::symlink_metadata::h7200cb6a2092cc2c(&v1, a1, a2);
        ::0x51b5a0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h58f02cc439e5852f(&v1);
        v3 = (unsigned int)(-0x100 | (int)*((long long *)&v1) == 2) + 1;
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..FileType$C$std..io..error..Error$GT$$GT$::h91129477e782d255(&v0);
    return v3;
}
