long long fish::builtins::set::env_set_reporting_errors(unsigned int a0, unsigned int a1, char a2, unsigned long a3, unsigned long a4, unsigned int a5, struct_0 *a6, unsigned int a7, unsigned long long a8)
{
    int v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x38]
    unsigned int v2;  // r9d
    unsigned int v3;  // eax

    v2 = a5 | 0x100;
    if ((a2 & 1))
    {
        v1 = a6->field_10;
        *((uint128_t *)&v0) = a6->field_0;
        v3 = a8.set_var(a3, a4, v2, &v0);
    }
    else
    {
        v1 = a6->field_10;
        *((uint128_t *)&v0) = a6->field_0;
        v3 = a8.set_var_and_fire(a3, a4, v2, &v0);
    }
    fish::builtins::set::handle_env_return(v3, a0, a1, a3, a4, a7);
    return v3;
}
