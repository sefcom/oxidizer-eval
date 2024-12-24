long long uu_sort::print_sorted::hf42036ed23d5f90d(uint128_t a0[3], char a1[154], void* a2)
{
    int v0;  // [sp-0x78]
    int v1;  // [sp-0x68]
    int v2;  // [sp-0x58]
    char v3;  // [bp-0x48]
    unsigned long long v5[2];  // rax

    uu_sort::Output::into_write::h1555b31fcb8637ed(&v3, a2);
    *((uint128_t *)&v2) = a0[2];
    *((uint128_t *)&v1) = a0[1];
    *((uint128_t *)&v0) = a0[0];
    while (true)
    {
        v5 = _$LT$itertools..adaptors..coalesce..CoalesceBy$LT$I$C$F$C$C$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h82719abb39b5e009(&v0);
        if (!v5)
            break;
        uu_sort::Line::print::h330b1b344154d584(v5, &v3, a1);
    }
    return ::0x519a00::core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hae565c5244f64508(&v3);
}
