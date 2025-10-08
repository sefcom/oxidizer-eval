void starship::modules::aws::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x448], Other Possible Types: char
    unsigned long long v1;  // [bp-0x438]
    int v2;  // [bp-0x428], Other Possible Types: char, unsigned long long
    unsigned long long v3;  // [bp-0x420]
    int v4;  // [bp-0x418], Other Possible Types: char *, unsigned long long
    char v5;  // [bp-0x410], Other Possible Types: unsigned long long
    int v6;  // [bp-0x408], Other Possible Types: void*
    unsigned long long v7;  // [bp-0x400]
    int v8;  // [bp-0x3f8]
    unsigned long long v9;  // [bp-0x3e8]
    unsigned long long v11;  // [bp-0x3d8]
    unsigned long long v12;  // [bp-0x3c8]
    int v13;  // [bp-0x3b8], Other Possible Types: char
    unsigned long long v14;  // [bp-0x3a8]
    char v15;  // [bp-0x398], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x398]
    unsigned long long v17;  // [bp-0x390]
    unsigned long long v18;  // [bp-0x388]
    unsigned long long v19;  // [bp-0x388]
    unsigned long long v20;  // [bp-0x380]
    char v21;  // [bp-0x378], Other Possible Types: unsigned long long
    int v22;  // [bp-0x368]
    char v23;  // [bp-0x358]
    char v24;  // [bp-0x348]
    int v25;  // [bp-0x340], Other Possible Types: char
    unsigned long long v26;  // [bp-0x330]
    int v27;  // [bp-0x328]
    unsigned long long v28;  // [bp-0x318]
    char *v29;  // [bp-0x308]
    unsigned long long v30;  // [bp-0x300]
    char v31;  // [bp-0x2f8]
    char v32;  // [bp-0x2e0]
    char v33;  // [bp-0x2c8]
    char *v34;  // [bp-0x2b8]
    char *v35;  // [bp-0x2b0]
    char *v36;  // [bp-0x2a8]
    char *v37;  // [bp-0x2a0]
    unsigned long v38;  // [bp-0x298]
    int v39;  // [bp-0x290], Other Possible Types: char
    int v40;  // [bp-0x280]
    int v41;  // [bp-0x270]
    int v42;  // [bp-0x260]
    int v43;  // [bp-0x250]
    char v44;  // [bp-0x240]
    unsigned long long v45;  // [bp-0x238]
    char v46;  // [bp-0x230]
    char v47;  // [bp-0x200]
    unsigned long long v48;  // [bp-0x1d0]
    unsigned long long v49;  // [bp-0x1c8]
    char v50;  // [bp-0x1c0]
    char v51;  // [bp-0x1b0]
    unsigned long long v52;  // [bp-0x1a0]
    char v53;  // [bp-0x198]
    char v54;  // [bp-0x18f]
    unsigned long long v55[22];  // [bp-0x188]
    unsigned long long v56;  // [bp-0xd8]
    char *v58;  // r15
    char *v62;  // rdi
    char *v63;  // rsi
    unsigned long v64;  // rdx
    unsigned long long v65;  // r8
    unsigned long long v66;  // r9
    int v67;  // xmm0
    int v68;  // xmm1

    v39.new_module(a1, "awsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean", 3);
    v46.try_load(v45);
    *(v55) = 9223372036854775809;
    v56 = 9223372036854775809;
    starship::modules::aws::get_aws_profile_and_region(&v2, a1, &v55);
    v1 = v4;
    memcpy(&v0, &v2, 16);
    v14 = v7;
    memcpy(&v13, &v5, 16);
    if (*((long long *)&v0) == 0x8000000000000000 && *((long long *)&vvar_451{stack -952}) == 0x8000000000000000)
    {
LABEL_b84678:
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<regex::error::Error>(&v13);
        v62 = &v0;
    }
    else
    {
        if (!v54)
        {
            v58 = &v0;
            if (((char)starship::modules::aws::has_credential_process_or_sso(a1, (*((long long *)&v0) != 0x8000000000000000 ? &v0 : 0), &v55, &v56) == 2 || !((char)starship::modules::aws::has_credential_process_or_sso(a1, (*((long long *)&v0) != 0x8000000000000000 ? &v0 : 0), &v55, &v56) & 1)) && ((char)starship::modules::aws::has_source_profile(a1, (*((long long *)&v0) != 0x8000000000000000 ? &v0 : 0), &v55, &v56) == 2 || !((char)starship::modules::aws::has_source_profile(a1, (*((long long *)&v0) != 0x8000000000000000 ? &v0 : 0), &v55, &v56) & 1)))
            {
                if (*((long long *)&v0) == 0x8000000000000000)
                    v58 = 0;
                if (starship::modules::aws::has_defined_credentials(a1, v58, &v56) == 2 || !(starship::modules::aws::has_defined_credentials(a1, v58, &v56) & 1))
                    goto LABEL_b84678;
            }
        }
        v63 = &v0;
        if (*((long long *)&v0) == 0x8000000000000000)
            v63 = 0;
        if (((char)starship::modules::aws::get_credentials_duration(a1, v63, &v55, &v56) & 1))
        {
            if (v64 > 0)
            {
                starship::utils::render_time(&v15, v64 * 1000, v64 * 1000 >> 63, 0, v65, v66);
            }
            else
            {
                v2.to_vec(v52, *((long long *)&v53));
                v18 = v4;
                memcpy(&v15, &v2, 16);
            }
            v12 = v18;
            memcpy(&(char)v11, &v15, 16);
        }
        else
        {
            v11 = 0x8000000000000000;
        }
        v4 = v14;
        v2 = v13;
        starship::modules::aws::alias_name(&v31, &v2, &v46);
        v4 = v1;
        v2 = v0;
        starship::modules::aws::alias_name(&v32, &v2, &v47);
        v15.new(v48, v49);
        memcpy(&v33, &v50, 16);
        v34 = &v51;
        v35 = &v32;
        v36 = &v31;
        v37 = &(char)v11;
        v38 = a1;
        if (v16 == 0x8000000000000000)
        {
            v26 = v20;
            memcpy(&v25, &v17, 16);
        }
        else
        {
            v9 = *((long long *)&v23);
            v67 = *((int128_t *)&v16);
            v68 = *((int128_t *)&v18);
            v8 = v22;
            *((int128_t *)&v6) = *((int128_t *)&v21);
            v4 = v68;
            v2 = v67;
            starship::modules::aws::module::{{closure}}(&v24, &v33, &v2);
            if (!(v24 & 1))
            {
                v39.set_segments(&v25);
                *((int128_t *)&a0[80]) = *((int128_t *)&v44);
                a0[64] = v43;
                a0[48] = v42;
                a0[32] = v41;
                a0[16] = v40;
                *(a0) = v39;
                core::ptr::drop_in_place<regex::error::Error>(&v32);
                core::ptr::drop_in_place<regex::error::Error>(&v31);
                core::ptr::drop_in_place<regex::error::Error>(&(char)v11);
                v56.drop_in_place<core::cell::once::OnceCell<core::option::Option<ini::Ini>>>();
                v55.drop_in_place<core::cell::once::OnceCell<core::option::Option<ini::Ini>>>();
                core::ptr::drop_in_place<starship::configs::aws::AwsConfig>(&v46);
                return;
            }
        }
        v28 = v26;
        v27 = v25;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
        {
            v29 = &v27;
            v30 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
            v2 = &g_11f3b98;
            v3 = 1;
            v6 = 0;
            v4 = &v29;
            v5 = 1;
            v15 = "starship::modules::awssymbolstyleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs";
            v17 = 22;
            v19 = "starship::modules::awssymbolstyleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs";
            v20 = 22;
            v21 = log::__private_api::loc(&g_11f3ba8);
            log::__private_api::log(&v2, 2, &v15);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v27);
        core::ptr::drop_in_place<regex::error::Error>(&v32);
        core::ptr::drop_in_place<regex::error::Error>(&v31);
        v62 = &(char)v11;
    }
    core::ptr::drop_in_place<regex::error::Error>(v62);
    v56.drop_in_place<core::cell::once::OnceCell<core::option::Option<ini::Ini>>>();
    v55.drop_in_place<core::cell::once::OnceCell<core::option::Option<ini::Ini>>>();
    core::ptr::drop_in_place<starship::configs::aws::AwsConfig>(&v46);
    core::ptr::drop_in_place<starship::module::Module>(&v39);
    return;
}
