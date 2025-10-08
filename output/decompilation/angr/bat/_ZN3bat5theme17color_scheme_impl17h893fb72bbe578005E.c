long long bat::theme::color_scheme_impl(char a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    if (!a0)
    {
        v3 = <bat::theme::TerminalColorSchemeDetector as bat::theme::ColorSchemeDetector>::should_detect();
        if (!(char)v3)
            return v3 & 0xffffffffffffff00 | 2;
    }
    else if (a0 != 1)
    {
        v3 = (unsigned long long)bat::theme::color_scheme_from_system();
        return v3 & 0xffffffffffffff00 | 2;
    }
    return <bat::theme::TerminalColorSchemeDetector as bat::theme::ColorSchemeDetector>::detect();
}
