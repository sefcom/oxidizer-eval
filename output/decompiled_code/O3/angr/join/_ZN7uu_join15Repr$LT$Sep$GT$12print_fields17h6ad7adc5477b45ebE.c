long long uu_join::Repr$LT$Sep$GT$::print_fields::h6ad7adc5477b45eb(unsigned long long a0, struct_0 *a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r13
    void* v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    v0 = v2;
    v3 = a1->field_10;
    if (!v3)
        return 0;
    do
    {
        v5 = 0;
        v6 = ::0x46c270::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v5);
        if (v5 != a2)
        {
            v7 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a0, 1, 0);
            if (v7)
                return v7;
            v8 = uu_join::Line::get_field::h39d63660a434080d(a1, v5);
            if (!v8)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v7 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a0, v8, v9);
            if (v7)
                return v7;
        }
    } while (v6 < v3);
}
