long long uu_sort::print_sorted::h4af69ccc01b31cb7(struct_0 *a0, char a1[154], void* a2)
{
    int v0;  // [sp-0xa8]
    int v1;  // [sp-0x98]
    int v2;  // [sp-0x88]
    int v3;  // [sp-0x78]
    int v4;  // [sp-0x68]
    unsigned long long v5;  // [sp-0x58]
    char v6;  // [bp-0x48]
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx
    unsigned long long v10[2];  // rax

    uu_sort::Output::into_write::h1555b31fcb8637ed(&v6, a2);
    v5 = a0->field_50;
    *((uint128_t *)&v4) = a0->field_40;
    *((uint128_t *)&v3) = a0->field_30;
    *((uint128_t *)&v2) = a0->field_20;
    *((uint128_t *)&v1) = a0->field_10;
    *((uint128_t *)&v0) = a0->field_0;
    while (true)
    {
        v10 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc93af8d0acba6070(&v0, v8, v9);
        if (!v10)
            break;
        uu_sort::Line::print::h330b1b344154d584(v10, &v6, a1);
    }
    return ::0x519a00::core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hae565c5244f64508(&v6);
}
