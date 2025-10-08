long long fish::path::path_remoteness(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x90]
    unsigned long long v2;  // rax
    unsigned int v3;  // ebp
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx

    v2 = fish::common::wcs2zstring(a0, a1);
    v3 = 0;
    if (statfs(v2, &v0) >= 0)
    {
        v4 = *((long long *)&v0);
        if (v4 > 1633904242)
        {
            if (v4 > 1952539502)
            {
                if (v4 <= 4266872129)
                {
                    if (v4 != 1952539503)
                    {
                        v5 = 2768370933;
                        goto LABEL_13f0d05;
                    }
                }
                else
                {
                    if (v4 != 4283649346)
                    {
                        v5 = 4266872130;
LABEL_13f0d05:
                        if (v4 != v5)
                        {
                            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v6);
                            return 0;
                        }
                    }
                }
            }
            if (v4 <= 1799439954)
            {
                if (v4 == 1633904243 || v4 == 1702057286)
                    goto LABEL_13f0d1c;
            }
            else
            {
                if (v4 == 1799439955 || v4 == 1937076805)
                    goto LABEL_13f0d1c;
            }
        }
        else if (v4 > 19992998)
        {
            if (v4 <= 1196443218)
            {
                if (v4 - 19992999 < 2 || v4 == 428016422)
                    goto LABEL_13f0d1c;
            }
            else
            {
                if (v4 == 1196443219 || v4 == 1397113167)
                {
LABEL_13f0d1c:
                    v3 = 2;
                }
            }
        }
        else
        {
            if (v4 <= 26984)
            {
                if (v4 == 20859 || v4 == 22092)
                    goto LABEL_13f0d1c;
            }
            else
            {
                if (v4 == 26985 || v4 == "252\\fP <\\fBhttps://github.com/fish-shell/fish-shell/issues/11252\\fP>).\n.IP \\(bu 2\nCancelling the command\\-line in Vi mode displays correctly again (\\fI\\%#11261\\fP <\\fBhttps://github.com/fish-shell/fish-shell/issues/11261\\fP>).\n.IP \\(bu 2\nThe acidhub prompt properly displays the git branch again (\\fI\\%#11179\\fP <\\fBhttps://github.com/fish-shell/fish-shell/issues/11179\\fP>).\n.IP \\(bu 2\nCompletions for \\fBwine\\fP correctly include files again (\\fI\\%#11202\\fP <\\fBhttps://github.com/fish-shell/fish-shell/issues/11202\\fP>).\n.IP \\(bu 2\nOn macOS, paths from \\fB/etc/paths\\fP and \\fB/etc/manpaths\\fP containing colons are handled correctly (\\fI\\%#10684\\fP <\\fBhttps://github.com/fish-shell/fish-shell/issues/10684\\fP>). This functionality was included in the 4.0.0 release notes but was missing from the source code.\n.IP \\(bu 2\nThe XTerm \\fBmodifyOtherKeys\\fP keyboard encoding is no longer used under WezTerm, as it does not work correctly in all layouts (\\fI\\%#11204\\fP <\\fBhttps://github.com/fish-shell/fish-shell/issues/112")
                    goto LABEL_13f0d1c;
            }
        }
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v6);
    return v3;
}
