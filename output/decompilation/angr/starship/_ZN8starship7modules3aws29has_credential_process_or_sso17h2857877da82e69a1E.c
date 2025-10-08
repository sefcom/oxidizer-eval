long long starship::modules::aws::has_credential_process_or_sso(unsigned long long a0, unsigned long long a1, unsigned long long *a2, unsigned long long *a3)
{
    char v0;  // [bp-0xd0]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14
    char *v4;  // r15
    char *v5;  // rax
    char *v6;  // rax
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbx

    v2 = starship::modules::aws::get_config(a0, a2);
    if (v2)
    {
        v3 = starship::modules::aws::get_creds(a0, a3);
        v4 = &v0;
        v0.new();
        v5 = starship::modules::aws::get_profile_config(v2, a1, a2);
        if (v5)
            v6 = v5;
        else
            v6 = v4;
        v8 = (!v3 ? 0 : starship::modules::aws::get_profile_creds(v3, a1));
        v9 = a1 & 0xffffffffffffff00 | 1;
        if (!v6.contains_key("credential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs", 18) && !v6.contains_key("sso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs", 11) && !v6.contains_key("sso_start_urlexpiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs", 13))
        {
            if (!v8)
            {
                v9 = v9 & 0xffffffffffffff00 | 2;
            }
            else if (!v8.contains_key("credential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs", 18))
            {
                v9 = v8.contains_key("sso_start_urlexpiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs", 13);
            }
        }
        core::ptr::drop_in_place<ini::Properties>(&v0);
    }
    else
    {
        v9 = a1 & 0xffffffffffffff00 | 2;
    }
    return v9 & 4294967295;
}
