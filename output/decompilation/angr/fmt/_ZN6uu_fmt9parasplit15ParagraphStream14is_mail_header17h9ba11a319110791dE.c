long long uu_fmt::parasplit::ParagraphStream::is_mail_header(unsigned long long a0[4])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    if (a0[3])
        return 0;
    v3 = a0[1];
    v4 = a0[2];
    v5 = core::slice::<impl [T]>::starts_with(v3, v4, "From fatal: expected word not to be emptyinvalid goal: ", 5);
    if ((char)v5)
    {
        return v5 & 0xffffffffffffff00 | 1;
    }
    else if ((v6 & (char)core::str::<impl str>::find(v3, v4)) == 1)
    {
        v7 = v6.get(v3, v4);
        if (!v7)
            core::str::slice_error_fail(v3, v4, 0, v6, &g_4f04f0); /* do not return */
        v0 = v7;
        v1 = v6 + v7;
        return v0.try_fold().eq();
    }
    return 0;
}
