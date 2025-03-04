long long uu_sort::Output::into_write::h9c5c08d876f77806(unsigned long a0, struct_0 *a1)
{
    unsigned int v0;  // [sp-0x34]
    unsigned long v1;  // [sp-0x30]
    int v2;  // [sp-0x28]
    unsigned long long v3;  // [sp-0x18]
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdx

    if (a1->field_0 != 0x8000000000000000)
    {
        v3 = a1->field_10;
        *((int128_t *)&v2) = *((int128_t *)&a1->field_0);
        v0 = a1->field_18;
        v1 = std::fs::File::set_len::hd21acd2eeb028efb(&v0, 0);
        ::0x51b750::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf659f53abfc6eaaa(&v1);
        ::0x51ad20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&v2);
        v5 = &g_5ff738;
        v6 = a0;
        v7 = alloc::boxed::Box$LT$T$GT$::new::hea03e04285d5c204(v0);
    }
    else
    {
        v5 = &g_5ff6e8;
        v6 = a0;
        v7 = alloc::boxed::Box$LT$T$GT$::new::h86b0794f31e6b95f(std::io::stdio::stdout::h077da66234850927());
    }
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h88a23f20aed6b056(v6, 0x2000, v7, v5);
    return a0;
}
