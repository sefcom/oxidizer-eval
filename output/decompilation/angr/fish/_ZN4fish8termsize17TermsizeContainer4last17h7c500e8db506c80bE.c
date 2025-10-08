long long fish::termsize::TermsizeContainer::last(unsigned long a0)
{
    char v0;  // [bp-0x28]
    unsigned long long v2[5];  // rax
    char v3;  // sil
    unsigned long v4;  // rdi
    unsigned long long v5;  // rbx
    char v6;  // dl

    v0.lock(a0 + 8);
    v2 = v0.unwrap(&g_14e2c10);
    v3 = v2[1];
    if ((v3 & 1))
    {
        v4 = &v2[2];
        if ((v3 & 1))
            goto LABEL_1415fd2;
LABEL_1415fb0:
        v5 = 80;
    }
    else
    {
        v4 = v2 + 1;
        if (!((char)v2[4] & 1))
            goto LABEL_1415fb0;
LABEL_1415fd2:
        v5 = *((long long *)v4);
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v6 & 1);
    return v5;
}
