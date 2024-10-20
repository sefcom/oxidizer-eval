long long uu_cat::write_end::h93b8661f35812098(unsigned long long a0, char a1[2], char a2[2], char a3, char a4)
{
    unsigned long long v1;  // [sp-0x38]
    char v3[2];  // rsi
    unsigned long v4;  // rax
    char v5[2];  // rbx
    unsigned long long v6;  // rcx
    unsigned long long v7;  // r8
    char v10[2];  // r15
    unsigned int v18;  // eax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax

    v3 = a1;
    v1 = v4;
    v5 = a2;
    if (a4)
    {
        if (a3)
        {
            v6 = "^I";
            v7 = 2;
        }
        else
        {
            v6 = "\t";
            v7 = 1;
        }
        return uu_cat::write_nonprint_to_end::he83ef31cc0d3cb6f(a1, a2, a0, v6, v7);
    }
    if (!a3)
    {
        if (a2)
        {
            v10 = 0;
            do
            {
                v18 = *((char *)(a1 + v10));
                if (!(v18 != 10) || !(v18 != 13))
                {
                    v20 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a0, a1, v10);
                    if (v20)
                    {
                        v1 = v20;
                        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                    }
                    return v5;
                }
            } while ((v10 += 1, a2 != v10));
        }
        v19 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a0, a1, a2);
        if (!v19)
            return v5;
        v1 = v19;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    if (!a2)
        goto LABEL_0x4865b8;
    else
        goto LABEL_0x486511;
}
