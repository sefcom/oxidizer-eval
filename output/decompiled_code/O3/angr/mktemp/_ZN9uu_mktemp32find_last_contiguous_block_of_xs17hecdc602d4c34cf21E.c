long long uu_mktemp::find_last_contiguous_block_of_xs::hecdc602d4c34cf21(unsigned long long a0[3], char *a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    char *v6;  // rdx
    unsigned long long v7;  // rax

    v0 = v2;
    v3 = core::str::_$LT$impl$u20$str$GT$::rfind::hdc34a8e199d8585a(a1, a2);
    if (!v3)
    {
        a0[0] = v3;
        return v4;
    }
    v6 = v5 + 3;
    if (v5 + 3)
    {
        if (v6 >= a2)
        {
            if (v6 != a2)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(a1 + v6)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
    }
    v7 = core::option::Option$LT$T$GT$::map_or::h11b4750eddbd9843(core::str::_$LT$impl$u20$str$GT$::rfind::h956e633172bf6445(a1, v6), v5);
    a0[1] = v7;
    a0[2] = v6;
    a0[0] = v3;
    return v4;
}
