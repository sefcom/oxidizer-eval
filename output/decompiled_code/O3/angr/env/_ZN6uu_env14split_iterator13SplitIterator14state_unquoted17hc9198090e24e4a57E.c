int uu_env::split_iterator::SplitIterator::state_unquoted::hc9198090e24e4a57()
{
    unsigned long v0;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x70]
    unsigned long long v2;  // [sp-0x68]
    int v3;  // [sp-0x60]
    struct_1 *v5;  // rsi
    unsigned long long v6;  // rcx
    char *v7;  // rax
    unsigned int v8;  // eax
    unsigned long long v9;  // rax
    unsigned long v10;  // rcx
    unsigned int v11;  // edx
    unsigned int v12;  // r8d
    unsigned int v13;  // r9d
    unsigned long long v14;  // rax
    unsigned long long v15;  // r15
    unsigned long long v16;  // r12
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r13
    unsigned long long *v20;  // rax
    unsigned long long *v21;  // rcx
    unsigned int *v22;  // rdi

    v6 = v5->field_20;
    v7 = v5->field_38;
    if (v6 < v7)
    {
        v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    do
    {
        if (v6 == v7)
        {
LABEL_4a4d64:
            v15 = v5->field_0;
            v16 = v5->field_8;
            v17 = v5->field_10;
            v5->field_0 = 0;
            v5->field_8 = 1;
            v5->field_10 = 0;
            v18 = v5->field_50;
            if (v18 == v5->field_40)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc64220d1688a1117(&v5->field_40);
            v20 = v5->field_48;
            v21 = 3 * v18;
            *((unsigned long long *)((char *)v20 + 0x8 * v21)) = v15;
            *((unsigned long long *)(8 + (char *)v20 + 0x8 * v21)) = v16;
            *((unsigned long long *)(16 + (char *)v20 + 0x8 * v21)) = v17;
            v5->field_50 = v18 + 1;
            *(v22) = 6;
            return;
        }
        else
        {
            v8 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(v7[v5->field_18]);
            v9 = (v8 == 0x110000 ? 65533 : v8);
            v10 = v9 - 9 & 4294967295;
            if ((unsigned int)v10 <= 83)
                goto *((int *)(4328364 + vvar_93{reg 24} * 4)) + 4328364;
            if ((unsigned int)v9 == 0x110000)
                goto LABEL_4a4d64;
        }
        v14 = uu_env::string_expander::StringExpander::take_one::h3a4cbc8ee4975407(v5, v5, v11, v10, v12, v13);
        if ((char)v11 != 2)
        {
            *(v22) = 5;
            *((unsigned long long *)&v22[2]) = v14;
            *((unsigned long long *)&v22[4]) = v14;
            *((char *)&v22[6]) = (char)v11 & 1;
            return;
        }
        v6 = v5->field_20;
        v7 = v5->field_38;
    } while (v6 >= v7);
}
