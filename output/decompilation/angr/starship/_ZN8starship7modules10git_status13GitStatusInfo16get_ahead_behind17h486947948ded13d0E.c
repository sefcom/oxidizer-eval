double starship::modules::git_status::GitStatusInfo::get_ahead_behind(long long a0, long long a1)
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    int v4;  // xmm0
    unsigned long v5;  // xmm0lq

    v1 = a1.get_repo_status();
    if (!v1)
    {
        a0->field_0 = 2;
        return v5;
    }
    v2 = v1->field_0;
    v3 = *((long long *)((char *)&v1->field_8 + 8));
    v4 = *((int128_t *)&(&v1->field_0)[1]);
    *((void*)&(&a0->field_0)[1]) = v4;
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v3;
    a0->field_0 = v2;
    return (unsigned long long)v4;
}
