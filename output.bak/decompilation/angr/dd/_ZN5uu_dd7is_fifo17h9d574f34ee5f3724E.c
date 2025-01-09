long long uu_dd::is_fifo::h9d574f34ee5f3724(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xb0]
    char v1;  // [bp-0x78]

    std::fs::metadata::he5d63b9e36b09796(&v0, a0, a1);
    if (*((int *)&v0) != 2 && (0xf000 & *((int *)&v1)) == 0x1000)
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he8a2e51a512ba290(&v0) | -0x100 | 1;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he8a2e51a512ba290(&v0);
    return 0;
}
