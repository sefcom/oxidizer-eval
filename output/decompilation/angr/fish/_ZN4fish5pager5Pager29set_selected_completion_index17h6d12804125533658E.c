long long fish::pager::Pager::set_selected_completion_index(unsigned long long a0[22], char a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    char v4;  // cc_dep1
    unsigned long long v5;  // rsi
    unsigned long long v6;  // 4096

    v2 = a0[21];
    if ((a1 & 1) && a2 > v2)
    {
        v0 = v2;
        core::panicking::panic("assertion failed: new_index.is_none_or(|new_index| new_index <= self.completion_infos.len())assertion failed: min_cols_required_for_rows <= colsassertion failed: denom != 0assertion failed: comp_info.comp.last().unwrap().len() >= comp_info.colors.len()FISH", 92, &g_14dc638); /* do not return */
    }
    if (!v2)
        return v2;
    v3 = v2 - 1;
    v4 = a2 == v2 & a1;
    if ((a2 == v2 & a1))
    {
        v5 = 1;
        if (v4)
            goto LABEL_13d892e;
LABEL_13d892d:
        v6 = a2;
    }
    else
    {
        v5 = a1;
        if (!v4)
            goto LABEL_13d892d;
LABEL_13d892e:
        v6 = v3;
    }
    a0[0] = v5;
    a0[1] = v6;
    return v6;
}
