long long uu_echo::parse_backslash_number::he56ed8545e2dc3bc(unsigned long long *a0, char a1, unsigned int a2)
{
    unsigned long v0;  // [bp-0x38]
    char v1;  // [sp-0x35]
    unsigned int v2;  // [sp-0x34]
    unsigned long v4;  // rax
    unsigned int v5;  // r14d
    char *v6;  // rax
    unsigned long v7;  // r14
    unsigned long long v8;  // rbp
    unsigned long long v9;  // 4098
    unsigned long long v10;  // rax
    unsigned long long v11;  // r12
    char *v13;  // rax
    unsigned long long v14;  // 4098
    unsigned int v15;  // rdx, Other Possible Types: unsigned long

    v0 = v4;
    if (!a1)
    {
        v5 = 0;
        goto LABEL_4a45cd;
    }
    else
    {
        v6 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(a0, a0 + 2));
        if (!v6)
            return 0;
        v5 = v7 & 0xffffffffffffff00 | a1 != 1;
LABEL_4a45cd:
        v2 = v5;
        if ((uu_echo::Base::ascii_to_number::h59ff941f17249d67(v2, *(v6)) & 1))
        {
            v8 = v15;
            v9 = *(a0);
            *(a0) = 0;
            if (!v9)
                _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(a0 + 2);
            v11 = a0 + 2;
            v1 = 4 - (!(char)v2);
            while (true)
            {
                v13 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(a0, v11));
                if (!(v13) || !((v13 = (long long)uu_echo::Base::ascii_to_number::h59ff941f17249d67((unsigned long long)v2, (unsigned long long)*(v13)), ((char)v13 & 1))))
                    break;
                v14 = *(a0);
                *(a0) = 0;
                if (!v14)
                    v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(v11);
                v8 = v8 & 0xffffffffffffff00 | ((v8 & 255) << (v1 & 31)) + (v15 & 4294967295) & 255;
                if ((char)_$LT$u8$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h78b98a6df4caa3d9(1) >= (!(char)v2 | 2))
                    break;
            }
            v10 = v13 & 0xffffffffffffff00 | 1;
            return v10;
        }
    }
}
