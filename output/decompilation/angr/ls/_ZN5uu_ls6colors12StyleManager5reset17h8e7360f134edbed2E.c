long long uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(unsigned long long a0[3], char a1[30], char a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rbx

    if (a1[8] == 2 && !a2)
    {
        a0[0] = 0;
        a0[1] = 1;
        a0[2] = 0;
        return a0;
    }
    v0 = v2;
    a1[29] = 1;
    a1[8] = 2;
    ::0x539150::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(a0);
    return a0;
}
