long long uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long a4)
{
    unsigned long long v1;  // rbp
    void* v2;  // rbx
    unsigned long long v3;  // r13
    void* v4;  // rax
    unsigned long long v5;  // rax

    v1 = a3->field_10;
    if (!v1)
        return 0;
    v2 = 0;
    do
    {
        v3 = ::0x46c0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v2);
        if (v2 != a4)
        {
            v4 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a2, _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(a0, a1), a2);
            if (v4)
                return v4;
            v5 = uu_join::Line::get_field::h7dd14bed39768627(a3, v2);
            if (!v5)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_5325d8); /* do not return */
            v4 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a2, v5, a2);
            if (v4)
                return v4;
        }
    } while ((v2 = v3, v2 < v1));
}
