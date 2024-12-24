long long uu_ln::existing_backup_path::hc3c6e3bdf27b32e6(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xf0]
    char v1;  // [bp-0xe8]
    char v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    char v4;  // [bp-0xd0]
    unsigned long long v7;  // rsi

    uu_ln::simple_backup_path::h5a0f80204a5cbdec(&v0, a1, a2, ".~1~", 4);
    std::fs::metadata::hf1d4ccf38989bef2(&v3, *((long long *)&v1), *((long long *)&v2));
    v7 = *((long long *)&v4);
    if (*((long long *)&v3) != 2)
    {
        ::0x4b81d0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h628b93203760f254(*((long long *)&v3), v7);
        uu_ln::numbered_backup_path::haea3c8fd8eb7d72b(a0, a1, a2);
    }
    else
    {
        ::0x4b81d0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h628b93203760f254(2, v7);
        uu_ln::simple_backup_path::h5a0f80204a5cbdec(a0, a1, a2, a3, a4);
    }
    return ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v0);
}
