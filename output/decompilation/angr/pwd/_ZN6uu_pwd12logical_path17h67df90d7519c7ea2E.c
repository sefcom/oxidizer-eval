long long uu_pwd::logical_path::h67df90d7519c7ea2(struct_0 *a0)
{
    char v0;  // [sp-0x40], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]

    std::env::var_os::hc2689bb17ea5a37c(&v3, "PWD", 3);
    if (*((long long *)&v3) == 0x8000000000000000)
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hf39ea7a48d4b8f78(&v0, &v3);
        if (v0 != 0x8000000000000000 && (char)uu_pwd::logical_path::looks_reasonable::h198aec699ed31598(*((long long *)&v1), *((long long *)&v2)))
        {
            a0->field_10 = *((long long *)&v2);
            a0->field_0 = *((int128_t *)&v0);
            return a0;
        }
    }
    std::env::current_dir::h8e5fbaefdf378c8c(a0);
    if (v0 != 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h5f81ac5c3a3e7dd1(&v0);
        return a0;
    }
    return a0;
}
