long long uu_cp::CopyMode::from_matches(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    unsigned long long v2;  // rbp

    if ((char)a0.get_flag("linkkindAuto/", 4))
    {
        v2 = 0;
    }
    else
    {
        v2 = vvar_17{reg 56} & 0xffffffffffffff00 | 1;
        if (!(char)a0.get_flag("symbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-re", 13))
        {
            v0.try_get_one(a0, _ZN6uucore8features14update_control9arguments10OPT_UPDATE17h95c884df776c9effE, g_5ffb88);
            v2 = v2 & 0xffffffffffffff00 | 3;
            if (!_ZN6uucore8features14update_control9arguments10OPT_UPDATE17h95c884df776c9effE.unwrap(g_5ffb88, &v0) && !(char)a0.get_flag(_ZN6uucore8features14update_control9arguments17OPT_UPDATE_NO_ARG17hbbb964a35837776cE, g_5ffb98))
            {
                v2 = v2 & 0xffffffffffffff00 | 2;
                if ((char)a0.get_flag("attributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinat", 15))
                    v2 = (int)a0.get_flag("remove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencederefer", 18) & 0xffffff00 | ((char)a0.get_flag("remove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencederefer", 18) ^ 1) * 2 + 2;
            }
        }
    }
    return v2 & 4294967295;
}
