long long uu_echo::parse_backslash_number::h8778193964a4072e(unsigned long long *a0, char a1)
{
    unsigned long v0;  // [bp-0x38]
    char v1;  // [sp-0x35]
    unsigned int v2;  // [sp-0x34]
    unsigned long v4;  // rax
    unsigned int v5;  // r14d
    char *v6;  // rax
    unsigned long v8;  // r14
    unsigned long long v9;  // rbp
    unsigned long long v10;  // 4098
    char *v11;  // rax
    unsigned long long v12;  // r12
    char *v14;  // rax
    unsigned long long v15;  // 4098
    unsigned int v16;  // rdx, Other Possible Types: unsigned long

    v0 = v4;
    if (!a1)
    {
        v5 = 0;
        goto LABEL_4a4b2d;
    }
    else
    {
        v6 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::h17ef566e7ef78bbd(a0, a0 + 2));
        if (!v6)
            return 0;
        v5 = v8 | -0x100 | a1 != 1;
LABEL_4a4b2d:
        v2 = v5;
        if (((char)uu_echo::Base::ascii_to_number::ha5e3cf36e3d832c4(v2, *(v6)) & 1))
        {
            v9 = v16;
            v10 = *(a0);
            *(a0) = 0;
            if (!v10)
                _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha6c306d05b4b422a(a0 + 2);
            v12 = a0 + 2;
            v1 = 4 - (!(char)v2);
            while (true)
            {
                v14 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::h17ef566e7ef78bbd(a0, v12));
                if (!(v14) || !((v14 = uu_echo::Base::ascii_to_number::ha5e3cf36e3d832c4((unsigned long long)v2, (unsigned long long)*(v14)), ((char)v14 & 1))))
                    break;
                v15 = *(a0);
                *(a0) = 0;
                if (!v15)
                    v14 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha6c306d05b4b422a(v12);
                v9 = v9 | -0x100 | ((v9 & 255) << (v1 & 31)) + (v16 & 4294967295) & 255;
                if ((char)_$LT$u8$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h78b98a6df4caa3d9(1) >= (!(char)v2 | 2))
                    break;
            }
            v11 = v14 | -0x100 | 1;
            return v11;
        }
    }
}
