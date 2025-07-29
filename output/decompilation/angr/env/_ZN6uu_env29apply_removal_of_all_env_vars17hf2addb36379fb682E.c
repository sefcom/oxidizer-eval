void uu_env::apply_removal_of_all_env_vars(struct_0 *a0)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x50]

    if (!a0->field_98)
        return;
    std::env::vars_os();
    while (true)
    {
        v1.next(&v0);
        if ((char)(((0 ^ *((long long *)&v1)) & (0 ^ -(*((long long *)&v1)))) >> 63))
            break;
        std::env::remove_var(&v1);
        core::ptr::drop_in_place<core::option::Option<(std::ffi::os_str::OsString,std::ffi::os_str::OsString)>>(&v1);
    }
    core::ptr::drop_in_place<core::option::Option<(std::ffi::os_str::OsString,std::ffi::os_str::OsString)>>(&v1);
    core::ptr::drop_in_place<std::env::VarsOs>(&v0);
    return;
}
