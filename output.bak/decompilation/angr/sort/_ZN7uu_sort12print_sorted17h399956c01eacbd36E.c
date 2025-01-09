long long uu_sort::print_sorted::h399956c01eacbd36(unsigned long a0, unsigned long a1, char a2[154], void* a3)
{
    unsigned long v0;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x58]
    char v2;  // [bp-0x50]
    unsigned long long v4[2];  // rax

    uu_sort::Output::into_write::h9c5c08d876f77806(&v2, a3);
    v0 = a0;
    v1 = a1;
    while (true)
    {
        v4 = ::0x51d920::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&v0);
        if (!v4)
            break;
        uu_sort::Line::print::he3975e626e2ad263(v4, &v2, a2);
    }
    return ::0x51a9c0::core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&v2);
}
