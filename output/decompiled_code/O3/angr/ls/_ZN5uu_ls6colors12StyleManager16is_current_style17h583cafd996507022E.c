long long uu_ls::colors::StyleManager::is_current_style::h583cafd996507022(char a0[26], char a1[18])
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    char v3;  // dl
    unsigned long long v4;  // rcx
    char v5;  // dl
    unsigned long long v8;  // rax
    unsigned long long v10;  // rax
    unsigned long long v12;  // rax
    void* v14;  // rax
    char v15;  // dl
    char v16;  // cl

    v1 = a0[8];
    if ((char)v1 == 2)
        return 0;
    v2 = a0[17];
    v3 = a1[9];
    if ((unsigned int)v2 == 18)
    {
        if (v3 == 18)
            goto LABEL_4e3171;
    }
    else
    {
        if (v3 != 18 && (char)v2 == v3)
        {
            if ((unsigned int)v2 == 16)
            {
                if (a0[18] == a1[10])
                    goto LABEL_4e3171;
            }
            else
            {
                if (!((unsigned int)v2 == 17) || !(a0[18] != a1[10]) && !(a0[19] != a1[11]) && !(a0[20] != a1[12]))
                {
LABEL_4e3171:
                    v4 = a0[21];
                    v5 = a1[13];
                    if ((unsigned int)v4 == 18)
                    {
                        if (v5 != 18)
                            return 0;
                        goto LABEL_4e3187;
                    }
                    else
                    {
                        if (v5 == 18)
                            return 0;
                        if ((char)v4 != v5)
                            return 0;
                        if ((unsigned int)v4 == 16)
                        {
                            if (a0[22] != a1[14])
                                return 0;
                            goto LABEL_4e3187;
                        }
                        if ((unsigned int)v4 != 17 || a0[22] == a1[14] && a0[23] == a1[15] && a0[24] == a1[16])
                        {
LABEL_4e3187:
                            if ((v1 & 255 & 255) != !a1[0] && a0[9] != !a1[1] && a0[10] != !a1[2])
                            {
                                v8 = v1 | -0x100 | (v1 & 255 & 255) | -0x100 | a0[9] | -0x100 | a0[10] | -0x100 | a0[11];
                                if (a0[11] != !a1[3] && a0[12] != !a1[4])
                                {
                                    v10 = v8 | -0x100 | a0[12] | -0x100 | a0[13];
                                    if (a0[13] != !a1[5] && a0[14] != !a1[6])
                                    {
                                        v12 = v10 | -0x100 | a0[14] | -0x100 | a0[15];
                                        if (a0[15] != !a1[7] && (!a1[8] ^ a0[16]))
                                        {
                                            v15 = a0[25];
                                            v16 = a1[17];
                                            v14 = v12 | -0x100 | a0[16] | -0x100 | v16 == 18 & v15 == 18;
                                            if (v15 == 18)
                                            {
                                                return v14;
                                            }
                                            else if (v16 == 18)
                                            {
                                                return v14;
                                            }
                                            else
                                            {
                                                return ::0x4e2770::_$LT$lscolors..style..Color$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8ea8dc270cd3be2e(&a0[25], &a1[17]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
