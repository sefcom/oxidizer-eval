long long uu_fmt::parasplit::ParagraphStream::is_mail_header::h9700490a74650aec(struct_0 *a0)
{
    char *v0;  // [sp-0x20]
    unsigned long long v1;  // [sp-0x18]
    char *v4;  // rbx
    unsigned long long v5;  // r14
    unsigned long long v6;  // rax
    char *v7;  // rdx

    if (a0->field_18)
        return 0;
    v4 = a0->field_8;
    v5 = a0->field_10;
    v6 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(v4, v5, "From ", 5);
    if ((char)v6)
    {
        return v6 | -0x100 | 1;
    }
    else if (!core::str::_$LT$impl$u20$str$GT$::find::h92b5562c589406cd(v4, v5))
    {
        return 0;
    }
    else if (!v7)
    {
        return 0;
    }
    else
    {
        if (v7 >= v5)
        {
            if (v7 != v5)
                core::str::slice_error_fail::h5dbb61534404fe7e(v4, v5, 0, v7, &g_526668); /* do not return */
        }
        else
        {
            if (*((char *)(v4 + v7)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(v4, v5, 0, v7, &g_526668); /* do not return */
        }
        v0 = v4;
        v1 = v7 + v4;
        return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h162bfb0b12d90eb8(core::iter::traits::iterator::Iterator::try_fold::h78ccae77746afe6c(&v0));
    }
}
