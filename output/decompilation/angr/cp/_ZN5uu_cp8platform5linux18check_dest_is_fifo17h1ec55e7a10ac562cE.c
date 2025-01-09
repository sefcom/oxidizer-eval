long long uu_cp::platform::linux::check_dest_is_fifo::h1ec55e7a10ac562c(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0x80]
    unsigned long long v4;  // rdi
    unsigned long v6;  // rbx

    std::fs::metadata::h003d8cdbffde7c56(&v0, a0, a1);
    v4 = *((long long *)&v0);
    ::0x5129d0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(v4, *((long long *)&v1));
    return (v6 & 0xffffffffffffff00 | (0xf000 & *((int *)&v2)) == 0x1000 & v4 != 2) & 4294967295 & 4294967295;
}
