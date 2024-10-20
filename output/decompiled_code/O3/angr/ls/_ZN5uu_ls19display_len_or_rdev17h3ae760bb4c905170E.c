long long uu_ls::display_len_or_rdev::h3ae760bb4c905170(unsigned long long a0[6], struct_0 *a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x98]
    void* v1;  // [sp-0x90]
    unsigned long long v2;  // [sp-0x88]
    void* v3;  // [sp-0x80]
    unsigned int v4;  // [sp-0x78]
    unsigned int v5;  // [sp-0x74]
    void* v6;  // [sp-0x70]
    void* v7;  // [sp-0x60]
    unsigned long long v8;  // [sp-0x50]
    unsigned long long v9;  // [sp-0x48]
    unsigned long long v10;  // [sp-0x40]
    char v11;  // [sp-0x38]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax

    if ((0xb000 & a1->field_38 | 0x4000) == 0x6000)
    {
        v13 = a1->field_48;
        v4 = (unsigned int)(v13 >> 32) & -0x1000 | (unsigned int)((v13 & 4294967295 & 4294967295) >> 8) & 4095;
        v5 = (unsigned int)(v13 >> 12) & -0x100 | (unsigned int)v13;
        v1 = 0;
        v2 = 1;
        v3 = 0;
        v10 = 32;
        v11 = 3;
        v6 = 0;
        v7 = 0;
        v8 = &v1;
        v9 = &g_5ac0e8;
        if ((char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09(&v4, &v6))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        v2 = 1;
        v3 = 0;
        v10 = 32;
        v11 = 3;
        v6 = 0;
        v7 = 0;
        v8 = &v1;
        v9 = &g_5ac0e8;
        if (!(char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09(&v5, &v6))
        {
            v17 = v3;
            a0[5] = v17;
            *((int128_t *)&a0[3]) = *((int128_t *)&v1);
            a0[0] = v1;
            a0[1] = v2;
            a0[2] = v3;
            return v17;
        }
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    else if (!a2)
    {
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
    }
    else
    {
        v14 = a1->field_50;
        if ((v14 | a2) >> 32)
        {
            v15 = (0 CONCAT v14) /m a2;
            v16 = (0 CONCAT v14) /m a2 >> 64;
        }
        else
        {
            v15 = (0 CONCAT (unsigned int)v14) /m (unsigned int)a2 & 4294967295;
            v16 = (0 CONCAT (unsigned int)v14) /m (unsigned int)a2 >> 32 & 4294967295;
        }
        uucore::features::format::human::human_readable::h98ed56fc1b2b7cd1(a0, v15 - -1 - (v16 < 1), a3, a3, a4, a5, *((long long *)&v0), v1);
        a0[3] = 0x8000000000000000;
        return 0x8000000000000000;
    }
}
