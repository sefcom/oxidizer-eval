long long fish::fs::fish_mkstemp_cloexec(struct_0 *a0, unsigned long long a1)
{
    unsigned int v1;  // eax
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v1 = mkostemp(a1, 0x80000);
    if (v1 == -1)
    {
        a0->field_8 = errno::errno() * 0x100000000 | 2;
        a0->field_0 = 4294967295;
        return errno::errno() * 0x100000000 | 2;
    }
    v2 = a1.from_raw();
    a0->field_0 = v1;
    a0->field_8 = v2;
    a0->field_10 = v3;
    return v2;
}
