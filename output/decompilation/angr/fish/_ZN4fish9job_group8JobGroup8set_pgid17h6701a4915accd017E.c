void fish::job_group::JobGroup::set_pgid(struct_0 *a0, unsigned int a1)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    void* v5;  // rdi

    if (!a0->field_70)
    {
        v0 = &g_14db9e0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14db9f0); /* do not return */
    }
    v0.try_insert(&a0->padding_0[96], a1);
    v5 = 0;
    if (v0)
        v5 = *((int *)&v1);
    v5.expect("JobGroup::pgid already set!Poisoned mutex!Job id was not in use!Cannot have job control without a job id!Cannot take terminal without job control!", 27, &g_14dba08);
    return;
}
