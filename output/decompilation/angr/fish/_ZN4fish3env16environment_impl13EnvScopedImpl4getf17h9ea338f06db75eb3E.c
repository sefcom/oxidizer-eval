long long fish::env::environment_impl::EnvScopedImpl::getf(struct_0 *a0, void* a1[12], unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    void* v0;  // [bp-0x68], Other Possible Types: int
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3[12];  // [bp-0x4c]
    char v4;  // [bp-0x4b]
    char v5;  // [bp-0x4a]
    char v6;  // [bp-0x49]
    char v7;  // [bp-0x48]
    int v10;  // [bp-0x40], Other Possible Types: char
    char v11;  // [bp-0x30]

    v3.new(a4);
    v0 = 0;
    if (v6 == 1)
    {
        v10.try_get_computed(a1, a2, a3);
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
        v2 = *((long long *)&v11);
        v0 = v10;
    }
    if (v4)
    {
        v10.try_get_local(a1[10], a2, a3);
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
        v2 = *((long long *)&v11);
        v0 = v10;
    }
    if (v5)
    {
        v10.try_get_function(a1[10], a2, a3);
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
        v2 = *((long long *)&v11);
        v0 = v10;
        if ((v6 & 1))
            goto LABEL_1397631;
LABEL_1397619:
    }
    else
    {
        if (!(v6 & 1))
            goto LABEL_1397619;
LABEL_1397631:
        v10.try_get_global(a1[11], a2, a3);
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
        v2 = *((long long *)&v11);
        v0 = v10;
    }
    if (v7)
    {
        v10.try_get_universal(a2, a3);
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
        v2 = *((long long *)&v11);
        v0 = v10;
    }
    a0->field_10 = v2;
    a0->field_0 = 0;
    a0->field_8 = v1;
    return v1;
}
