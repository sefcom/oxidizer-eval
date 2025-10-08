long long starship::modules::azure::get_azure_profile_info(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xa8]
    int v2;  // [bp-0xa0], Other Possible Types: char
    int v3;  // [bp-0x90], Other Possible Types: char
    int v4;  // [bp-0x80]
    unsigned long v5;  // [bp-0x70]
    int v6;  // [bp-0x68]
    int v7;  // [bp-0x58]
    int v8;  // [bp-0x48]
    char v9;  // [bp-0x38]

    starship::modules::azure::get_config_file_location(&v2, a1);
    if ((char)(((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v1 = *((long long *)&v3);
    v0 = v2;
    v0.push("azureProfile.jsonFailed to parse azure profile.", 17);
    starship::modules::azure::load_azure_profile(&v2, &v0);
    if (*((long long *)&v2) == 0x8000000000000000)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v8 = v4;
        v7 = v3;
        v6 = v2;
        v9.into_iter(&(char)v7);
        v2.try_fold(&v9);
        if (*((long long *)&v2) == 0x8000000000000000)
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<starship::modules::azure::Subscription>>(&v2);
        }
        else
        {
            *((unsigned long *)&a0[48]) = v5;
            a0[32] = v4;
            a0[16] = v3;
            *(a0) = v2;
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<starship::modules::azure::Subscription>>(&v9);
        core::ptr::drop_in_place<alloc::string::String>(&v6);
    }
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v0);
}
