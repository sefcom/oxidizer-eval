long long uu_fold::fold::h0e99b4443f72c023(unsigned long a0, unsigned long a1, char a2, unsigned int a3, unsigned long a4)
{
    unsigned int v0;  // [sp-0xac]
    unsigned long v1;  // [sp-0xa8], Other Possible Types: unsigned long long
    char v2;  // [bp-0xa0]
    char v3;  // [bp-0x98]
    unsigned long long v4;  // [sp-0x90]
    unsigned long v5;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x80]
    char v7;  // [bp-0x78]
    char v8;  // [bp-0x68]
    unsigned long long v10;  // rbx
    unsigned long long v11[3];  // rax
    char *v12;  // r15
    unsigned long long v13;  // r14
    unsigned long long v14;  // r12
    char v15;  // r13b
    unsigned long long v16;  // rcx
    char *v17;  // rdx
    unsigned long long v18;  // rbx
    unsigned long long v19;  // r12
    unsigned long long v20;  // r14
    unsigned long long v21;  // r12
    unsigned long long v22;  // rcx
    char *v23;  // rdx
    unsigned long long v24;  // rbx

    v10 = a4;
    v5 = a0;
    v6 = a0 + a1 * 24;
    v11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&v5);
    if (!v11)
        return 0;
    v4 = a4;
    v12 = &v8;
    if (a2)
    {
        while (true)
        {
            v13 = v11[1];
            v14 = v11[2];
            v15 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(v13, v14, "-", 1);
            if (v15)
            {
                v1 = std::io::stdio::stdin::h7215cc131abb55d8();
                v16 = &g_51a900;
                v17 = &v1;
            }
            else
            {
                std::fs::File::open::hf9b1c7861fe4e1e0(&v7, v13, v14);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he04fa865e69b627f(&v2, &v7, v13, v14);
                if (*((long long *)&v2))
                    return v19;
                v0 = *((int *)&v3);
                v16 = &g_51a8a8;
                v17 = &v0;
                v18 = v4;
            }
            v10 = v18;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hbb0364b848194873(&v8, 0x2000, v17, v16);
            v19 = uu_fold::fold_file_bytewise::h3af11a64241fe044(&v8, a3, v10);
            if (v19)
                break;
            if (!v15)
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&v0);
            v11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&v5);
            if (!v11)
                return 0;
        }
    }
    else
    {
        while (true)
        {
            v20 = v11[1];
            v21 = v11[2];
            v15 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(v20, v21, "-", 1);
            if (v15)
            {
                v1 = std::io::stdio::stdin::h7215cc131abb55d8();
                v22 = &g_51a900;
                v23 = &v1;
            }
            else
            {
                std::fs::File::open::hf9b1c7861fe4e1e0(&v7, v20, v21);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he04fa865e69b627f(&v2, &v7, v20, v21);
                v19 = *((long long *)&v2);
                if (v19)
                {
                    return v19;
                }
                v0 = *((int *)&v3);
                v22 = &g_51a8a8;
                v23 = &v0;
                v18 = v4;
            }
            v10 = v24;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hbb0364b848194873(v12, 0x2000, v23, v22);
            v19 = uu_fold::fold_file::hcf3a60b599ccdb00(v12, a3, v10);
            if (v19)
                break;
            if (!v15)
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&v0);
            v11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4f3305ddda7a2719(&v5);
            if (!v11)
                return 0;
        }
    }
    if (!v15)
    {
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4c842b9159849a32(&v0);
        return v19;
    }
    return v19;
}
