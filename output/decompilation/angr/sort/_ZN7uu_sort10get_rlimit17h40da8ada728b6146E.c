long long uu_sort::get_rlimit(struct_0 *a0)
{
    struct rlimit v0[2];  // [bp-0x48]
    char v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x18]
    void* v4;  // rax
    unsigned long long v5;  // rcx

    *((uint128_t *)&v0[0]) = 0;
    if (getrlimit(7, &v0))
    {
        uucore::mods::locale::get_message(&v1, "sort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help", 24);
        v2 = 2;
        v4 = v1.new();
        v5 = &g_6708a8;
    }
    else
    {
        v5 = *((long long *)&v0[0].rlim_cur);
        v4 = 0;
    }
    a0->field_8 = v5;
    a0->field_0 = v4;
    return a0;
}
