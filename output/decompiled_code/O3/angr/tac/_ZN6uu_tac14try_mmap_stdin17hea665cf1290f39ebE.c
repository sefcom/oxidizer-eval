long long uu_tac::try_mmap_stdin::hea665cf1290f39eb(struct_0 *a0)
{
    unsigned long v0;  // [sp-0x48], Other Possible Types: unsigned long long
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    void* v3;  // [sp-0x28]
    void* v4;  // [sp-0x18]
    char v5;  // [sp-0x10]
    unsigned short v6;  // [sp-0xe]
    unsigned long long v8;  // rax

    v0 = std::io::stdio::stdin::h7215cc131abb55d8();
    v4 = 0;
    v3 = 0;
    v5 = 0;
    v6 = 0;
    v8 = memmap2::MmapOptions::map::h348d3cda0711d7f5(&v1, &v3, &v0);
    if (!*((long long *)&v1))
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
        a0->field_0 = 1;
        return v8;
    }
    a0->field_0 = 0;
    v8 = core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::hcceb556e1d595364(&v1);
    return v8;
}
