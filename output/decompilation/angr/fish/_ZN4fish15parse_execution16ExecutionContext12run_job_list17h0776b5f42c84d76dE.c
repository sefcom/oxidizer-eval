long long fish::parse_execution::ExecutionContext::run_job_list(void* a0, void* a1, struct_0 *a2)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // r12
    unsigned long long v9;  // rbx
    void* v10;  // rdx
    unsigned long long v11;  // r15
    unsigned long long v12;  // r15
    unsigned long long v13;  // rax
    unsigned long v14;  // r15

    if (!a2->field_8)
        return 0;
    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = a2->field_8;
    v10 = a2->field_0;
    v11 = v0 * 160;
    do
    {
        v12 = v11;
        v13 = a0.test_and_run_1_job_conjunction(a1, v10);
        v10 += 160;
        v14 = v12 - 160;
        v11 = v14;
    } while (v12 != 160);
    return v13;
}
