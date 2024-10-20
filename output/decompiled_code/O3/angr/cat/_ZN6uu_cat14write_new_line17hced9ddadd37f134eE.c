long long uu_cat::write_new_line::hced9ddadd37f134e(unsigned long long a0[2], unsigned long long a1, char a2[5], struct_0 *a3, char a4)
{
    struct_0 *v0;  // [sp-0xa8]
    unsigned long long v1;  // [sp-0xa0]
    unsigned long v2;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x90]
    struct struct_0 **v4;  // [sp-0x88]
    unsigned long long v5;  // [sp-0x80]
    unsigned long long v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70]
    unsigned long long v8;  // [sp-0x68]
    void* v9;  // [sp-0x58]
    unsigned long long v10;  // [sp-0x50]
    void* v11;  // [sp-0x48]
    unsigned long long v12;  // [sp-0x40]
    char v13;  // [sp-0x38]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rdx

    if (!a3->field_9)
    {
        v15 = a3->field_8;
        if ((char)v15 && a2[0] && a3->field_a)
            goto LABEL_4864ab;
        a3->field_a = 1;
        if ((char)v15 && a2[4] == 2)
        {
            v0 = a3;
            v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v8 = 2;
            v9 = 0;
            v10 = 6;
            v11 = 0;
            v12 = 32;
            v13 = 3;
            v2 = &g_4e4e70;
            v3 = 2;
            v6 = &v8;
            v7 = 1;
            v4 = &v0;
            v5 = 1;
            v15 = std::io::Write::write_fmt::h96737b6427c305a9(a1, &v2);
            if (v15)
            {
                a0[0] = 0x8000000000000000;
                a0[1] = v15;
                return v15;
            }
            a3->field_0 = a3->field_0 + 1;
        }
        if (!(!a2[2]))
            goto LABEL_486448;
    }
    else if (!a2[2])
    {
        v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a1, "\r", 1);
        if (v15)
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v15;
            return v15;
        }
        a3->field_9 = 0;
    }
    else
    {
        v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a1, "^M", 2);
        if (v15)
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v15;
            return v15;
        }
        a3->field_9 = 0;
LABEL_486448:
        v16 = "$\n";
        v17 = 2;
        goto LABEL_486481;
    }
    v16 = "\n: src/uu/cat/src/cat.rs";
    v17 = 1;
LABEL_486481:
    v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a1, v16, v17);
    if (!(!v15) || !(!a4) && !(!((v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(a1), v15))))
    {
        a0[0] = 0x8000000000000000;
        a0[1] = v15;
        return v15;
    }
LABEL_4864ab:
    a0[0] = 9223372036854775814;
    return v15;
}
