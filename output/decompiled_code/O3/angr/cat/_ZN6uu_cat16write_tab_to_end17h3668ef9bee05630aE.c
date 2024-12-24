long long uu_cat::write_tab_to_end::h3668ef9bee05630a(char *a0, unsigned long a1, unsigned long long a2)
{
    void* v0;  // [sp-0x48]
    char *v1;  // [sp-0x40]
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4;  // rbx
    char *v5;  // r15
    unsigned long long v6;  // rbx
    char *v8;  // r12
    char *v9;  // r15
    char *v10;  // rdx
    char *v11;  // r12

    v4 = a1;
    v5 = a0;
    v1 = a0;
    v2 = &a0[a1];
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h734419576d2f6002(&v1))
    {
        v0 = 0;
        do
        {
            v6 = v4;
            v8 = v11;
            v9 = v5;
            core::result::Result$LT$T$C$E$GT$::unwrap::h08945c0f33ae2f71(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a2, ::0x4ad250::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h63b1aa296660cfa4(v8, v9, v6, &g_5191f0), v10), &g_519208);
            if (v8 >= v6)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            if (*((char *)(v9 + v8)) != 9)
            {
                v4 = v0 + v8;
                return v4;
            }
            core::result::Result$LT$T$C$E$GT$::unwrap::h08945c0f33ae2f71(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a2, "^I", 2), &g_519238);
            v5 = v9 + v8 + 1;
            v0 = v0 + v8 + 1;
            v4 = -1 + v6 - v8;
            v1 = v5;
            v2 = &v9[v6];
        } while (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h734419576d2f6002(&v1));
    }
    core::result::Result$LT$T$C$E$GT$::unwrap::h08945c0f33ae2f71(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a2, v5, v4), &g_5191d8);
    return v4;
}
