long long uu_split::split(struct_0 *a0)
{
    char v0;  // [bp-0x218]
    char v1;  // [bp-0x158]
    char v2;  // [bp-0x120], Other Possible Types: unsigned long
    char v3;  // [bp-0x118]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rcx

    if ((char)a0->field_78.equal(a0->field_80, "-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 1))
    {
        v5 = std::io::stdio::stdin().new();
        v6 = &g_5a70c8;
        v7 = 0x2000;
        if (!(!a0->field_0))
            goto LABEL_4b3aeb;
    }
    else
    {
        v0.open(a0->field_78, a0->field_80);
        v2.map_err_context(&v0, a0);
        if (v2)
            return v2;
        v5 = *((int *)&v3).new();
        v6 = &g_5a7070;
        v7 = 0x2000;
        if (a0->field_0)
        {
LABEL_4b3aeb:
            v7 = a0->field_8;
        }
    }
    v1.with_capacity(v7, v5, v6);
    v8 = a0->field_10 - 6;
    if (v8 >= 3)
        v8 = 3;
    goto (long long)(g_434644[v8] + (char *)&g_434644[0]);
}
