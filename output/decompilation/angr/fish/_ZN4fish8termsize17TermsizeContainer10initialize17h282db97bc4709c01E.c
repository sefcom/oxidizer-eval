long long fish::termsize::TermsizeContainer::initialize(struct_0 **a0, unsigned long long a1, struct_2 *a2)
{
    unsigned long long v0[2];  // [bp-0x48]
    char v1;  // [bp-0x38]
    unsigned long v3;  // r15
    unsigned long v4;  // r12
    void* v5;  // rbx
    char v6;  // cl
    unsigned long v7;  // rdx
    unsigned long long v8;  // r14
    char v9;  // dl

    a2->field_20(&v0);
    v3 = fish::termsize::var_to_int_or(&v0);
    a2->field_20(&v0, a1, "L", 5, 4);
    v4 = fish::termsize::var_to_int_or(&v0);
    v0.lock(a0 + 1);
    v5 = v0.unwrap(&g_14e2c28);
    if ((v4 > 0 & v3 > 0))
    {
        v5 + 8.mark_override_from_env(v3, v4);
        v6 = (long long)v5[8];
        if (!(v6 & 1))
            goto LABEL_1416105;
LABEL_14160b6:
        v7 = v5 + 16;
        if ((v6 & 1))
            goto LABEL_1416119;
LABEL_14160c6:
        v8 = 80;
    }
    else
    {
        *((int *)&v5[56]) = core::sync::atomic::atomic_load(&_ZN4fish8termsize22TTY_TERMSIZE_GEN_COUNT17ha4aa3eda6c6dc63dE, 0);
        *(a0)(&v0);
        *((long long *)&v5[24]) = *((long long *)&v1);
        *((unsigned long long [2])&v5[8]) = v0;
        v6 = (long long)v5[8];
        if ((v6 & 1))
            goto LABEL_14160b6;
LABEL_1416105:
        v7 = v5 + 40;
        if (!((char)(long long)v5[32] & 1))
            goto LABEL_14160c6;
LABEL_1416119:
        v8 = *((long long *)v7);
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v9 & 1);
    return v8;
}
