long long fish::complete::Completer::try_complete_variable(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned int v5;  // edx
    char v6;  // bpl
    char v7;  // r13b
    unsigned int v8;  // r14d
    char v9;  // bpl
    char v10;  // r15b
    unsigned int v12;  // r14d
    unsigned int v13;  // r14d
    unsigned long v14;  // rbp
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rcx
    unsigned long v17;  // rax
    unsigned long v18;  // cc_ndep
    char v20;  // bl

    v0 = a1;
    v1 = a1 + a2 * 4;
    v2 = 0;
    v4 = v0.next();
    if (v5 == 0x110000)
    {
        v6 = 1;
    }
    else
    {
        v7 = 0;
        do
        {
            v12 = v8;
            if (!(v10 & 1))
                continue;
            v4 = v0.next();
            if (v5 != 0x110000)
                v12 = v5;
            else
                break;
            v13 = v12;
            v14 = fish::common::valid_var_name_char(v13);
            v9 = (char)v14 & v7;
            v15 = v14 & 0xffffff00 | v9;
            switch (v13)
            {
            case 39:
                if (!v20)
                {
                    v20 = 1;
                    break;
                }
                else if (v20 != 1)
                {
                    goto LABEL_138ed53;
                }
                else
                {
                    goto LABEL_138ed53;
                }
            case 92:
                v10 = 1;
                goto LABEL_138ed53;
            case 34:
                switch (v20)
                {
                case 0:
                    v20 = 2;
                    break;
                case 2:
                    break;
                default:
                    break;
                }
            case 36:
                if ((v20 & 253))
                {
                    goto LABEL_138ed53;
                }
                else
                {
                    v9 = 1;
                    v15 = v15 & 0xffffffffffffff00 | 1;
                    v16 = v4;
                    goto LABEL_138ed53;
                }
            default:
LABEL_138ed53:
                v4 = v0.next();
            }
            v7 = v15;
            v8 = v5;
        } while (v8 != 0x110000);
        v6 = v9 ^ 1;
    }
    if (!a2)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d6048); /* do not return */
    v17 = a2 - 1;
    if (((v6 | v16 == v17 & a0->field_70) & 1))
    {
        return 0;
    }
    else if (!((char)_ccall(4, 24, v16 + 1, 0, _ccall(17, (unsigned long long)((v6 | (char)(v16 == v17) & a0->field_70) & 1), 0, v18))))
    {
        return a0.complete_variable(a1, a2, v16 + 1);
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14d6060); /* do not return */
    }
}
