long long uu_cp::file_or_link_exists::h08e64fc6ee2ba9af(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc0]

    std::fs::symlink_metadata::ha8b9885f9a62ee23(&v0, a0, a1);
    ::0x4fc840::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(&v0);
    return (unsigned int)(vvar_5{reg 56} | -0x100 | *((int *)&v0) != 2);
}
