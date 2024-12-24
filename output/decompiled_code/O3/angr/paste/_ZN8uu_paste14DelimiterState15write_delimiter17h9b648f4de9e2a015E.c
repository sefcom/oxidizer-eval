long long uu_paste::DelimiterState::write_delimiter::h9b648f4de9e2a015(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5[2];  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r14
    unsigned long long v8;  // r12
    unsigned long long v9;  // rdx

    v0 = v2;
    v3 = a0[0];
    if (!v3)
    {
        return v3;
    }
    else if ((unsigned int)v3 == 1)
    {
        v4 = a0[1];
        return ::0x4ab4f0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3a6e1b0e1c2f7284(a1, ::0x4ab490::core::slice::iter::Iter$LT$T$GT$::make_slice::hfee69a2dccc97e19(v4, a0[2] + v4), v6);
    }
    else
    {
        v5 = _$LT$core..iter..adapters..cycle..Cycle$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45954299a5c4e4d6(&a0[1 + 2], a1, a2);
        if (v5)
        {
            v7 = v5[0];
            v8 = v5[1];
            v3 = ::0x4ab4f0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3a6e1b0e1c2f7284(a1, ::0x4ab490::core::slice::iter::Iter$LT$T$GT$::make_slice::hfee69a2dccc97e19(v7, v7 + v8), v9);
            a0[1] = v7;
            a0[2] = v8;
            return v3;
        }
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
}
