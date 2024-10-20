long long uu_sort::ext_sort::sorter::h7b69088a570a8b4e(unsigned long long a0, unsigned long long a1, char a2[133], unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0[133];  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x48]
    unsigned long long v2[6];  // [sp-0x40]
    struct struct_0 **v3;  // [sp-0x38]
    unsigned long long v5[6];  // rax
    unsigned long long v7;  // rcx
    unsigned long long v8;  // r8
    unsigned long long v9[6];  // r13
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdi
    unsigned long long v12;  // rsi
    unsigned long long v13;  // r9
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx

    v5 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(a0, a1, a2);
    if (!v5)
        return v5;
    while (true)
    {
        v2[0] = v9;
        v10 = v9 + 1;
        v11 = v9[4];
        v12 = v9[5];
        if (!(!a2[131] && !a2[132]))
        {
            *((char *[133])&v0[0]) = a2;
            v1 = v10;
            rayon::slice::mergesort::par_mergesort::hdbb4ae45b1cc4dfb(v11, v12, v0, v7, v8, v13);
        }
        else
        {
            *((char *[133])&v0[0]) = a2;
            v1 = v10;
            v3 = &v0[0];
            if (!v12)
                v15 = 64;
            else
                v15 = (ExpCmpNE(v12, 0) ? (ExpCmpNE(v12, 0) ? 63 - Clz(v12) : v10) : (ExpCmpNE(v12, 0) ? 63 - Clz(v12) : v10)) ^ 63;
            rayon::slice::quicksort::recurse::hba6f101fc4e194ad(v11, v12, &v3, 0, 64 - v15 & 4294967295);
        }
        v0 = std::sync::mpmc::Sender$LT$T$GT$::send::h35e018604c6f7ac0(a1, v9, v16);
        if (v0)
        {
            v5 = self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(v0);
            return v5;
        }
        v5 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(a0, v17, v18);
        if (!v5)
            return v5;
    }
}
