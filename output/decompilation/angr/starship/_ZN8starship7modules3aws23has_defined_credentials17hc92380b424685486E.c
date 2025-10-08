char starship::modules::aws::has_defined_credentials(unsigned long long a0, unsigned long long a1, unsigned long long *a2)
{
    char *v0;  // [bp-0x58]
    char *v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    unsigned long long v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    char v8;  // [bp-0x18]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v2 = "AWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs";
    v3 = 17;
    v4 = "AWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs";
    v5 = 21;
    v6 = "AWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs";
    v7 = 17;
    v0 = &v2;
    v1 = &v8;
    if (v0.any())
        return 1;
    v10 = starship::modules::aws::get_creds(a0, a2);
    if (!v10)
        return 2;
    v11 = starship::modules::aws::get_profile_creds(v10, a1);
    if (!v11)
        return 2;
    v11.contains_key("aws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs", 17);
    return 2;
}
