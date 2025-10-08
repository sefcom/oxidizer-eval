long long bat::app::App::forced_style_components(void* *a0, unsigned long long a1)
{
    char v0;  // [bp-0x48]
    unsigned long long v2[3];  // rax
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rax

    v0.try_get_one(a1, "decorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
    v2 = "decorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present".unwrap(11, &v0);
    if (v2 && (char)v2[1].equal(v2[2], "neverinternal error: entered unreachable code: other values for --paging are not allowed", 5))
        return a0.default();
    if ((char)a1.get_flag("numberstyles present", 6))
    {
        v3 = 7;
    }
    else
    {
        v4 = a1.get_count("plainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-", 5);
        if (!(char)v4)
        {
            *(a0) = 0;
            return v4;
        }
        v3 = 11;
    }
    return a0.from_iter(v3);
}
