long long uu_fmt::parasplit::ParagraphStream::is_mail_header::h731e3b642fe81af5(struct_0 *a0)
{
    char *v0;  // [sp-0x20]
    unsigned long long v1;  // [sp-0x18]
    char *v4;  // rbx
    unsigned long long v5;  // r14
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    char *v8;  // rdx

    if (a0->field_18)
        return 0;
    v4 = a0->field_8;
    v5 = a0->field_10;
    v6 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hac4fa9c385da1f1a(v4, v5, "From ", 5);
    if ((char)v6)
        return v6 | -0x100 | 1;
    v7 = core::str::_$LT$impl$u20$str$GT$::find::h52067c9f3e2182a8(v4, v5);
    if (!v7)
    {
        return 0;
    }
    else if (!v8)
    {
        return 0;
    }
    else
    {
        if (v8 >= v5)
        {
            if (v8 != v5)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(v4 + v8)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        v0 = v4;
        v1 = v8 + v4;
        return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4f2ff1fe0879138b((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h2b551a1086dfc39c(&v0, v7, v8));
    }
}
