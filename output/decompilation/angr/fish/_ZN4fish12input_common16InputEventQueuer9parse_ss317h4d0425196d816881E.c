long long fish::input_common::InputEventQueuer::parse_ss3(void* a0, unsigned long long a1, void* a2)
{
    void* v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned int v3;  // ebp
    unsigned int v4;  // edx
    unsigned long long v5;  // cc_ndep
    char v6;  // r12b
    unsigned long v7;  // rax
    unsigned int v8;  // ebp
    unsigned int v9;  // eax
    char v11;  // r12b
    char v12;  // bpl
    char v13;  // r14b
    char v14;  // r15b
    char v15;  // r12b
    char v16;  // bpl
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdi

    v0 = v2;
    if (!((char)a1.try_readb(a2) & 1))
    {
        *((unsigned long long *)a0) = 1099511627855;
        *((unsigned long long *)&a0[8]) = 0;
        return 1099511627855;
    }
    v0 = a0;
    v3 = 0;
    if ((char)g_a1b598.contains(v4))
    {
        do
        {
            v7 = v3;
            if ((char)_ccall(0, 47, v7 & 4294967295, 10, v5))
                core::panicking::panic_const::panic_const_mul_overflow(&g_14db2a0); /* do not return */
            if (v6 < 48)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14db2b8); /* do not return */
            v8 = (unsigned int)v7 * 10;
            v9 = v6 - 48;
            v3 = v8 + v9;
            if ((char)__CFADD__(v8, v9 & 255))
                core::panicking::panic_const::panic_const_add_overflow(&g_14db2a0); /* do not return */
            v5 = ((char)a1.try_readb(a2) & 1) < 1;
            v11 = -(((char)a1.try_readb(a2) & 1) < 1);
            v6 = v11 | (char)v4;
        } while ((char)g_a1b598.contains(v11 | (char)v4));
    }
    v12 = (v3 < 1 ? 0 : (char)(v3 - 1));
    switch (v6)
    {
    case 32:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62734;
        break;
    case 65:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62724;
        break;
    case 66:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62725;
        break;
    case 67:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62727;
        break;
    case 68:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62726;
        break;
    case 70:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62731;
        break;
    case 72:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62730;
        break;
    case 73:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62733;
        break;
    case 77:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 62723;
        break;
    case 80:
        v18 = 1;
LABEL_13ce4ee:
        v17 = (unsigned int)fish::key::function_key(v18) | v13 * 0x100000000 | v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000;
        break;
    case 81:
        v18 = 2;
        goto LABEL_13ce4ee;
    case 82:
        v18 = 3;
        goto LABEL_13ce4ee;
    case 83:
        v18 = 4;
        goto LABEL_13ce4ee;
    case 88:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 61;
        break;
    case 106:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 42;
        break;
    case 107:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 43;
        break;
    case 108:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 44;
        break;
    case 109:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 45;
        break;
    case 110:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 46;
        break;
    case 111:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 47;
        break;
    case 112:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 48;
        break;
    case 113:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 49;
        break;
    case 114:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 50;
        break;
    case 115:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 51;
        break;
    case 116:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 52;
        break;
    case 117:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 53;
        break;
    case 118:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 54;
        break;
    case 119:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 55;
        break;
    case 120:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 56;
        break;
    case 121:
        v17 = (v14 * 0x10000000000 | v15 * 0x1000000000000 | v16 * 0x100000000000000) + v13 * 0x100000000 + 57;
        break;
    default:
        *((unsigned int *)v0) = 0x110000;
        return v0;
    }
    *((unsigned long long *)v0) = v17;
    *((unsigned long long *)&v0[8]) = 0;
    return v17;
}
