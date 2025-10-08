long long linera_summary::github::Github::latest_runs(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned int a6, unsigned long a7, unsigned long a8)
{
    int v0;  // xmm0

    v0 = *((int128_t *)&vvar_6);
    a0->field_0 = a1;
    a0->field_8 = a2;
    a0->field_10 = a3;
    a0->field_18 = a4;
    a0->field_20 = a5;
    *((void*)&(&a0->field_20)[1]) = v0;
    *((unsigned long *)((char *)&a0->field_28 + 8)) = a8;
    a0->padding_40[80] = 0;
    return a8;
}
