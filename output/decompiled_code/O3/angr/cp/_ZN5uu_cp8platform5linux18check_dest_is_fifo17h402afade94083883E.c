long long uu_cp::platform::linux::check_dest_is_fifo::h402afade94083883(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0x80]
    unsigned long long v4;  // rdi
    unsigned long v6;  // rbx

    std::fs::metadata::hb89aa4d693159f5b(&v0, a0, a1);
    v4 = *((long long *)&v0);
    ::0x512010::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(v4, *((long long *)&v1));
    return (v6 | -0x100 | (0xf000 & *((int *)&v2)) == 0x1000 & v4 != 2) & 4294967295 & 4294967295;
}
