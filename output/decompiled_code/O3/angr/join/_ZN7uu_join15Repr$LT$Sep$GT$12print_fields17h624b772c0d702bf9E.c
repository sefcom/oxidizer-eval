long long uu_join::Repr$LT$Sep$GT$::print_fields::h624b772c0d702bf9(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long a4)
{
    unsigned long long v1;  // rbp
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r13
    unsigned long long v5;  // rdx
    void* v6;  // rax
    unsigned long long v7;  // rax

    v1 = a3->field_10;
    if (!v1)
        return 0;
    do
    {
        v3 = 0;
        v4 = ::0x46c270::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v3);
        if (v3 != a4)
        {
            v6 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a2, _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h3d279e3ebb80d459(a0, a1), v5);
            if (v6)
                return v6;
            v7 = uu_join::Line::get_field::h39d63660a434080d(a3, v3);
            if (!v7)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v6 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a2, v7, v5);
            if (v6)
                return v6;
        }
    } while (v4 < v1);
}
