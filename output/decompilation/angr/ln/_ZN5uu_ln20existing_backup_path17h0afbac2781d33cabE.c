long long uu_ln::existing_backup_path::h0afbac2781d33cab(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xf0]
    char v1;  // [bp-0xe8]
    char v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    char v4;  // [bp-0xd0]
    unsigned long long v7;  // rsi

    uu_ln::simple_backup_path::hd90ca54508e22200(&v0, a1, a2, ".~1~", 4);
    std::fs::metadata::hebad4fc3d3e825b8(&v3, *((long long *)&v1), *((long long *)&v2));
    v7 = *((long long *)&v4);
    if (*((long long *)&v3) != 2)
    {
        ::0x4b84f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(*((long long *)&v3), v7);
        uu_ln::numbered_backup_path::h43f0286cb18b9b8f(a0, a1, a2);
    }
    else
    {
        ::0x4b84f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(2, v7);
        uu_ln::simple_backup_path::hd90ca54508e22200(a0, a1, a2, a3, a4);
    }
    return ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&v0);
}
