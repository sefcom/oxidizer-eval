long long starship::modules::aws::get_credentials_duration(unsigned long long a0, unsigned long long a1, unsigned long long *a2, unsigned long long *a3)
{
    int v0;  // [bp-0x108], Other Possible Types: char *, unsigned long long
    int v1;  // [bp-0x108]
    char *v2;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v3;  // [bp-0xf8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xf0]
    char *v5;  // [bp-0xf0]
    int v6;  // [bp-0xef]
    unsigned long long v7;  // [bp-0xe8]
    char v8;  // [bp-0xe0]
    void* v9;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned long long v11;  // [bp-0xc8]
    char *v12;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xb8]
    void* v14;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0xa8]
    unsigned long long v16;  // [bp-0xa0]
    unsigned long long v17;  // [bp-0x98]
    void* v18;  // [bp-0x90]
    char v19;  // [bp-0x88]
    unsigned long long v20;  // [bp-0x78]
    int v21;  // [bp-0x70], Other Possible Types: char
    char v22;  // [bp-0x60]
    char v23;  // [bp-0x48]
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned int v28;  // ebp
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    char v32;  // al
    struct_0 *v33;  // rax

    v9 = 0;
    v11 = 3;
    v12 = "AWS_CREDENTIAL_EXPIRATIONAWS_SESSION_EXPIRATIONAWSUME_EXPIRATIONexpirationx_security_token_expiressso_start_urlexpiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`";
    v13 = 25;
    v14 = "AWS_SESSION_EXPIRATIONAWSUME_EXPIRATIONexpirationx_security_token_expiressso_start_urlexpiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs";
    v15 = 22;
    v16 = "AWSUME_EXPIRATIONexpirationx_security_token_expiressso_start_urlexpiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs";
    v17 = 17;
    v4.try_fold(&(char)v9, &(char)v12, 3);
    if ((char)(((0 ^ *((long long *)&v4)) & (0 ^ -(*((long long *)&v4)))) >> 63))
    {
        v0 = 0x8000000000000000;
        core::ptr::drop_in_place<versions::Chunk>(&v4);
        goto LABEL_b83e3a;
    }
    *((int128_t *)&v0) = *((int128_t *)&v4);
    v3 = *((long long *)&v8);
    if (v0 == 0x8000000000000000)
    {
LABEL_b83e3a:
        core::ptr::drop_in_place<regex::error::Error>(&v0);
        v25 = starship::modules::aws::get_creds(a0, a3);
        if (v25)
        {
            v26 = starship::modules::aws::get_profile_creds(v25, a1);
            if (!v26)
                goto LABEL_b83ed6;
            v9 = "expirationx_security_token_expiressso_start_urlexpiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs";
            v11 = 10;
            v12 = "x_security_token_expiressso_start_urlexpiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs";
            v13 = 24;
            v0 = &(char)v9;
            v2 = &v14;
            v27 = v0.find_map(v26);
            if (v27)
            {
                v4.parse_from_rfc3339(v27, a2);
                v28 = *((int *)&v4);
                if (v28)
                    goto LABEL_b84043;
            }
            else
            {
                v28 = 0;
                if (!(1))
                    goto LABEL_b84043;
            }
        }
        else
        {
LABEL_b83ed6:
            v29 = starship::modules::aws::get_config(a0, a2);
            if (v29)
            {
                v30 = starship::modules::aws::get_profile_config(v29, a1, a2);
                if (v30)
                {
                    v31 = v30.get("sso_start_urlexpiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs", 13);
                    if (v31)
                    {
                        (char)v9.digest(v31, a2);
                        starship::utils::encode_to_hex(&v22, &(char)v9);
                        (char)v9.get_home();
                        if (v9 != 0x8000000000000000)
                        {
                            memcpy(&v19, &v11, 16);
                            v18 = v9;
                            v5 = &v22;
                            v7 = <alloc::string::String as core::fmt::Display>::fmt;
                            v9 = &g_11f3b78;
                            v11 = 2;
                            v14 = 0;
                            v12 = &v4;
                            v13 = 1;
                            v23.map_or_else(0, a2, &(char)v9);
                            v18.push(&v23);
                            starship::utils::read_file(&v0, &v18);
                            if (v0 == 0x8000000000000000)
                            {
                                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v0);
                                goto LABEL_b84180;
                            }
                            memcpy(&v21, &v0, 16);
                            v20 = v0;
                            v1 = v21;
                            v3 = 0;
                            serde_json::de::from_trait(&(char)v9, &v0, (char)a2);
                            v32 = v9;
                            if (v32 == 6)
                            {
                                core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&(char)v9);
                                core::ptr::drop_in_place<alloc::string::String>(&v20);
                                goto LABEL_b84180;
                            }
                            memcpy(&v8, &v12, 16);
                            *((int128_t *)&v6) = *((int128_t *)((char *)&v9 + 1));
                            v4 = v32;
                            core::ptr::drop_in_place<alloc::string::String>(&v20);
                            v33 = v4.get("expiresAtcredential_processsso_sessionAWS_ACCESS_KEY_IDAWS_SECRET_ACCESS_KEYAWS_SESSION_TOKENaws_access_key_idsource_profileError in module `aws`: \nsrc/modules/aws.rs", 9);
                            if (!v33 || v33->field_0 != 3)
                            {
                                core::ptr::drop_in_place<serde_json::value::Value>(&v4);
LABEL_b84180:
                                core::ptr::drop_in_place<std::path::PathBuf>(&v18);
                                goto LABEL_b8418a;
                            }
                            (char)v9.parse_from_rfc3339(v33->field_10, v33->field_18);
                            v28 = v9;
                            core::ptr::drop_in_place<serde_json::value::Value>(&v4);
                            core::ptr::drop_in_place<std::path::PathBuf>(&v18);
                            core::ptr::drop_in_place<alloc::string::String>(&v22);
                            if (v28)
                                goto LABEL_b84043;
                        }
                        else
                        {
LABEL_b8418a:
                            core::ptr::drop_in_place<alloc::string::String>(&v22);
                        }
                    }
                }
            }
        }
    }
    else
    {
        v4.parse_from_rfc3339(v2, v3);
        v28 = *((int *)&v4);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        if (v28)
        {
LABEL_b84043:
            v28.num_days_from_ce();
            (char)v9.now();
            (unsigned int)v9.num_days_from_ce();
            return 1;
        }
    }
    return 0;
}
