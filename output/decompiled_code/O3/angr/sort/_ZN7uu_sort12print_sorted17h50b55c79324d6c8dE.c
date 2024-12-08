long long uu_sort::print_sorted::h50b55c79324d6c8d(unsigned long a0, unsigned long a1, char a2[154], void* a3)
{
    unsigned long v0;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x58]
    char v2;  // [bp-0x50]
    unsigned long long v4[2];  // rax

    uu_sort::Output::into_write::h1555b31fcb8637ed(&v2, a3);
    v0 = a0;
    v1 = a1;
    while (true)
    {
        v4 = ::0x51c9e0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha5562479a38d1bfb(&v0);
        if (!v4)
            break;
        uu_sort::Line::print::h330b1b344154d584(v4, &v2, a2);
    }
    return ::0x519a00::core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hae565c5244f64508(&v2);
}
