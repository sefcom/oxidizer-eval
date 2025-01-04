long long uu_tac::try_mmap_path::h01ee297263e394e5(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x4c]
    void* v1;  // [bp-0x48], Other Possible Types: char
    char v2;  // [bp-0x44]
    void* v3;  // [sp-0x38]
    char v4;  // [sp-0x30]
    unsigned short v5;  // [sp-0x2e]
    char v6;  // [bp-0x28]
    char v7;  // [bp-0x20]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdi

    std::fs::File::open::h0ae14c8dddef61f7(&v1, a1, a2);
    if (*((int *)&v1))
    {
        v9 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::hb56a7153beea00aa(&v1);
        a0->field_0 = 0;
        return v9;
    }
    v0 = *((int *)&v2);
    v3 = 0;
    v1 = 0;
    v4 = 0;
    v5 = 0;
    memmap2::MmapOptions::map::hf6d33351edcc2203(&v6, &v1, &v0);
    if (!*((long long *)&v6))
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v7);
        a0->field_0 = 1;
        v10 = v0;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::h33f78c51d3eed1e5(&v6);
        a0->field_0 = 0;
        v10 = v0;
    }
    v9 = core::ptr::drop_in_place$LT$std..fs..File$GT$::h8bacf0b914d62b8a(v10);
    return v9;
}
