long long uu_wc::is_stdin_small_file::hda862548f32829d1()
{
    unsigned int v0;  // [sp-0xbc]
    char v1;  // [bp-0xb8]
    char v2;  // [bp-0xb0]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x68]
    unsigned long v7;  // rbx

    std::io::stdio::stdin::h7215cc131abb55d8();
    v0 = 0;
    std::fs::File::metadata::he899a18112e6f19e(&v1, &v0);
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc7378430642e479d(*((long long *)&v1), *((long long *)&v2));
    return (*((long long *)&v1) == 2 ? 0 : (unsigned int)(v7 & 0xffffffffffffff00 | *((long long *)&v4) < 10485761 & (0xf000 & *((int *)&v3)) == 0x8000));
}
