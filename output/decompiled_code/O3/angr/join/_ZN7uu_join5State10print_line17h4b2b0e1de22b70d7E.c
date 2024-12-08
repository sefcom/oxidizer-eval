long long uu_join::State::print_line::h4b2b0e1de22b70d7(struct_0 *a0, unsigned long long a1, void* a2, struct_1 *a3)
{
    unsigned long v0;  // [bp-0x28]
    char v1;  // [sp-0x21]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // r15
    unsigned long long v6;  // rax

    v0 = v3;
    if (!a3->field_10)
    {
        v5 = a0->field_40;
        v6 = uu_join::Line::get_field::h39d63660a434080d(a2, v5);
        if (!v6)
            v6 = a3->field_18;
        v4 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, v6, a3->field_20);
        if (v4)
            return v4;
        v4 = uu_join::Repr$LT$Sep$GT$::print_fields::h443ae88fa5dcea6d(a1, a2, v5);
        if (v4)
            return v4;
    }
    else
    {
        v4 = uu_join::Repr$LT$Sep$GT$::print_format::h81b8c747aee89097(a3, a1, a2, a0);
        if (v4)
            return v4;
    }
    v1 = a3->field_28;
    v4 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, &v1, 1);
    return v4;
}
