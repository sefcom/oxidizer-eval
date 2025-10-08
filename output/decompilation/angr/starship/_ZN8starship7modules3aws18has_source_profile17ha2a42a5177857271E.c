long long starship::modules::aws::has_source_profile(unsigned long long a0, unsigned long long a1, unsigned long long *a2, unsigned long long *a3)
{
    int v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x48]
    int v3;  // [bp-0x40], Other Possible Types: char
    char v4;  // [bp-0x30]
    unsigned long long v6;  // rax
    unsigned int v7;  // ebp
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    char *v10;  // r12
    char v11;  // al
    char v12;  // al

    v6 = starship::modules::aws::get_config(a0, a2);
    v7 = vvar_38{reg 56} & 0xffffff00 | 2;
    if (!v6)
        return v7;
    v8 = starship::modules::aws::get_profile_config(v6, a1, a2);
    if (!v8)
        return v7;
    v9 = v8.get("source_profileError in module `aws`: \nsrc/modules/aws.rs", 14);
    if (v9)
    {
        v3.to_vec(v9, a2);
        v0 = v3;
        v2 = *((long long *)&v4);
        v10 = &v0;
        if (v1 == 0x8000000000000000)
            v10 = 0;
    }
    else
    {
        v1 = 0x8000000000000000;
        v10 = 0;
    }
    v11 = starship::modules::aws::has_credential_process_or_sso(a0, v10, a2, a3);
    v12 = starship::modules::aws::has_defined_credentials(a0, v10, a3);
    core::ptr::drop_in_place<regex::error::Error>(&v0);
    return (!(v11 & 1) ? v12 & 1 : 1);
}
