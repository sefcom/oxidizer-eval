long long uu_sort::Output::into_write::h9c5c08d876f77806(unsigned long a0, struct_0 *a1)
{
    unsigned int v0;  // [sp-0x34]
    unsigned long v1;  // [sp-0x30], Other Possible Types: unsigned long long
    int v2;  // [sp-0x28]
    unsigned long long v3;  // [sp-0x18]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // 4096

    if (a1->field_0 == 0x8000000000000000)
    {
        v5 = alloc::boxed::Box$LT$T$GT$::new::h86b0794f31e6b95f(std::io::stdio::stdout::h077da66234850927());
        v6 = &g_5ff6e8;
        v7 = a0;
    }
    else
    {
        v3 = a1->field_10;
        *((int128_t *)&v2) = *((int128_t *)&a1->field_0);
        v0 = a1->field_18;
        v1 = std::fs::File::set_len::hd21acd2eeb028efb(&v0, 0);
        ::0x51b750::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf659f53abfc6eaaa(&v1);
        v5 = alloc::boxed::Box$LT$T$GT$::new::hea03e04285d5c204(v0);
        ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v2);
        v6 = &g_5ff738;
    }
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h88a23f20aed6b056(v7, 0x2000, v5, v6);
    return a0;
}
