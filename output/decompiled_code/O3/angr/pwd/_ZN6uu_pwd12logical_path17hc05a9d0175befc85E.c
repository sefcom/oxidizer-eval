long long uu_pwd::logical_path::hc05a9d0175befc85(struct_0 *a0)
{
    char v0;  // [sp-0x40], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]

    std::env::var_os::h8bd74107e703e402(&v3, "PWD", 3);
    if (*((long long *)&v3) == 0x8000000000000000)
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::h7c90cd3ac7e886be(&v0, &v3);
        if (v0 != 0x8000000000000000 && (char)uu_pwd::logical_path::looks_reasonable::h76d69bc7db349f79(*((long long *)&v1), *((long long *)&v2)))
        {
            a0->field_10 = *((long long *)&v2);
            a0->field_0 = *((int128_t *)&v0);
            return a0;
        }
    }
    std::env::current_dir::h8e5fbaefdf378c8c(a0);
    if (v0 != 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he4d7249a6ce7e43b(&v0);
        return a0;
    }
    return a0;
}
