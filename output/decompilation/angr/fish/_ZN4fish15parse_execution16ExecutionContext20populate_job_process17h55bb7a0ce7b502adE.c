long long fish::parse_execution::ExecutionContext::populate_job_process(struct_1 *a0, void* a1, unsigned long long a2, unsigned long long a3, struct_0 *a4, void* a5)
{
    char *v0;  // [bp-0x50]
    void* v1;  // [bp-0x48]
    unsigned long long v2[1][2];  // [bp-0x40]
    unsigned long long v4;  // rax
    unsigned long v5;  // rcx
    unsigned long v6;  // rax

    v2[0] = 0;
    v4 = a0.apply_variable_assignments(a1, a3, a5, &v2);
    v0 = &v2;
    v1 = a1;
    if (!(char)v4)
    {
        v5 = a4->field_0;
        v6 = ((unsigned int)(v5 - 2) < 5 ? v5 - 1 : 0);
        v4 = (v6 - 2 < 4 ? a0->field_18.populate_block_process(a1, a3, a4) : (!v6 ? a0.populate_plain_process(a1, a3, a4) : (unsigned long long)a0.populate_not_process(a1, a2, a3, a4->field_8)));
    }
    core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::parse_execution::ExecutionContext::run_1_job::{{closure}}>>(&v0);
    return v4 & 4294967295;
}
