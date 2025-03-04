long long uu_cp::file_or_link_exists::h0326283b1ad33442(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc0]

    std::fs::symlink_metadata::h8589e79b0a107dee(&v0, a0, a1);
    ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v0);
    return (unsigned int)(vvar_3{reg 56} & 0xffffffffffffff00 | *((int *)&v0) != 2);
}
