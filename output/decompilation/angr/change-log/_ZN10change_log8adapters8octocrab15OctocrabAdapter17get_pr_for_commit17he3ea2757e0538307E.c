double change_log::adapters::octocrab::OctocrabAdapter::get_pr_for_commit(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, int a6)
{
    int v0;  // xmm0

    v0 = *((int128_t *)&vvar_6);
    a0->field_0 = a1;
    a0->field_8 = a2;
    a0->field_10 = a3;
    a0->field_18 = a4;
    a0->field_20 = a5;
    *((void*)&(&a0->field_20)[1]) = v0;
    a0->padding_38[2296] = 0;
    return (unsigned long long)v0;
}
