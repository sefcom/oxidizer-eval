long long uu_cp::CopyMode::from_matches(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    unsigned long long v2;  // rbp

    if ((char)a0.get_flag("link/", 4))
    {
        v2 = 0;
    }
    else
    {
        v2 = vvar_17{reg 56} & 0xffffffffffffff00 | 1;
        if (!(char)a0.get_flag("symbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is ", 13))
        {
            v0.try_get_one(a0, _ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE, g_560aa0);
            v2 = v2 & 0xffffffffffffff00 | 3;
            if (!_ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE.unwrap(g_560aa0, &v0) && !(char)a0.get_flag(_ZN6uucore8features14update_control9arguments17OPT_UPDATE_NO_ARG17h3487f3d89cd8344fE, g_560ab0))
            {
                v2 = v2 & 0xffffffffffffff00 | 2;
                if ((char)a0.get_flag("attributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Impli", 15))
                    v2 = (int)a0.get_flag("remove-destinationremove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesAT", 18) & 0xffffff00 | ((char)a0.get_flag("remove-destinationremove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesAT", 18) ^ 1) * 2 + 2;
            }
        }
    }
    return v2 & 4294967295;
}
