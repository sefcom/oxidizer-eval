long long just::recipe::Recipe::module_path(unsigned long long a0)
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rdx
    void* v3;  // r15
    unsigned long long v4;  // rax

    v1 = a0.namepath();
    if (!((char)core::str::<impl str>::rfind(v1, v2) & 1))
        v3 = 0;
    v4 = 0.get(v3, v1, v2);
    if (!v4)
        core::str::slice_error_fail(v1, v2, 0, v3, &g_830b20); /* do not return */
    return v4;
}
