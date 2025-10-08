long long fish::termsize::TermsizeContainer::updating(struct_0 **a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x58]
    int v1;  // [bp-0x48], Other Possible Types: char
    char v2;  // [bp-0x38]
    void* v4;  // r15
    char v5;  // cl
    unsigned long v6;  // rax
    unsigned long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned int v9;  // eax
    unsigned long v10;  // r12
    char v11;  // al
    unsigned long v12;  // rcx
    unsigned long v13;  // rdx
    unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // r12
    char v17;  // dl

    v1.lock(a0 + 1);
    v4 = v1.unwrap(&g_14e2c40);
    v5 = (long long)v4[8];
    if ((v5 & 1))
    {
        v6 = v4 + 24;
        v7 = v4 + 16;
        if ((v5 & 1))
            goto LABEL_14161d0;
LABEL_14161af:
        v0 = 80;
        v8 = 24;
    }
    else
    {
        v6 = v4 + 48;
        v7 = v4 + 40;
        if (!((char)(long long)v4[32] & 1))
            goto LABEL_14161af;
LABEL_14161d0:
        v0 = *((long long *)v7);
        v8 = *((long long *)v6);
    }
    v9 = core::sync::atomic::atomic_load(&_ZN4fish8termsize22TTY_TERMSIZE_GEN_COUNT17ha4aa3eda6c6dc63dE, 0);
    v10 = v4 + 8;
    if ((int)v4[56] != v9)
    {
        *((unsigned int *)&v4[56]) = v9;
        *(a0)(&v1);
        *((long long *)(v10 + 16)) = *((long long *)&v2);
        *((void*)v10) = v1;
    }
    v11 = *((long long *)v10);
    if ((v11 & 1))
    {
        v12 = v4 + 24;
        v13 = v4 + 16;
        v14 = a1;
        if ((v11 & 1))
            goto LABEL_1416259;
LABEL_1416235:
        v15 = 80;
        v16 = 24;
    }
    else
    {
        v12 = v4 + 48;
        v13 = v4 + 40;
        v14 = a1;
        if (!((char)(long long)v4[32] & 1))
            goto LABEL_1416235;
LABEL_1416259:
        v16 = *((long long *)v12);
        v15 = *((long long *)v13);
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v17 & 1);
    if (v15 == v0 && v16 == v8)
        return v15;
    a0.set_columns_lines_vars(v15, v16, v14);
    return v15;
}
