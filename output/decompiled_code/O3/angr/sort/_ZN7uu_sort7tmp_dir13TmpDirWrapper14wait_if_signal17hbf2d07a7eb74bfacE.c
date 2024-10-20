long long uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal::hbf2d07a7eb74bfac(struct_1 *a0)
{
    unsigned int *v0;  // [sp-0x28]
    char v1;  // [sp-0x20]
    struct_0 *v3;  // r14
    unsigned int *v4;  // rbx
    unsigned int v5;  // cc_dep2
    unsigned long long v6;  // rax
    char v7;  // al

    v3 = a0->field_30;
    v4 = &v3->field_10;
    v3->field_10 = 1;
    if (!v3->field_10)
    {
        v3->field_10 = 1;
        v5 = v3->field_10;
    }
    else
    {
        v3->field_10 = 1;
        v5 = v3->field_10;
    }
    if (v5)
        std::sys::sync::mutex::futex::Mutex::lock_contended::h59becd3ae8a2224e(v4);
    if (!_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE << 1)
    {
        if (!v3->field_14)
            goto LABEL_4f3d2b;
        v7 = 0;
LABEL_4f3d98:
        v0 = v4;
        v1 = v7;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v6 = std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c();
    if (v3->field_14)
    {
        v7 = v6 | -0x100 | (char)v6 ^ 1;
        goto LABEL_4f3d98;
    }
    if ((char)v6)
    {
LABEL_4f3d2b:
        if ((9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) && !(char)std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c())
            v3->field_14 = 1;
    }
    *(v4) = 0;
    if (CasCmpNE(*(v4), *(v4)))
        goto LABEL_0x4f3d43;
    if (*(v4) == 2)
        goto LABEL_0x4f3d74;
}
