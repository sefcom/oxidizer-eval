long long starship::print::handle_module(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x208]
    void* v2;  // [bp-0x1f8]
    unsigned long long v3;  // [bp-0x1f0]
    void* v4;  // [bp-0x1e8]
    unsigned long long v5;  // [bp-0x1e0]
    unsigned long long v6;  // [bp-0x1d8]
    char *v7;  // [bp-0x1d0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x1c8], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x1c0], Other Possible Types: unsigned long
    void* v10;  // [bp-0x1b8]
    unsigned long long v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x1a0]
    unsigned long long v13;  // [bp-0x198]
    unsigned long long v14;  // [bp-0x190]
    unsigned long long v15;  // [bp-0x188]
    unsigned long long v16;  // [bp-0x180]
    unsigned long long v17;  // [bp-0x178]
    char *v18;  // [bp-0x170]
    unsigned long long v19;  // [bp-0x168]
    unsigned long long v20;  // [bp-0x160]
    unsigned long long v21;  // [bp-0x158]
    char v22;  // [bp-0x150]
    char v23;  // [bp-0xf0]
    char v24;  // [bp-0x90]
    char *v26;  // r15
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    unsigned long long v30;  // rdx

    v1 = a1;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    if (!v1.slice_contains(&g_11f68c0, 98))
    {
        if ((char)core::slice::<impl [T]>::starts_with(a1, a2, "custom.Error in module `custom.`:\n", 7) || (char)core::slice::<impl [T]>::starts_with(v0, a2, "env_var.-noshell", 8))
        {
            v26 = &v24;
            starship::modules::handle(&v24, v0, a2, a3);
            v27 = &g_11f6f40;
LABEL_bc7fb7:
            v2.extend_trusted(v26, v27);
        }
        else
        {
            if ((char)v0.equal(a2, "customenv_varfg:bg:underlineitalicdimmedblinkhiddenstrikethroughprev_fgprev_bgParsing color_string: Attempting to read hexadecimal color string: Could not parse hexadecimal string: Read RGB color string: Read ANSI color string:  defined as ", 6) || (char)v0.equal(a2, "env_varfg:bg:underlineitalicdimmedblinkhiddenstrikethroughprev_fgprev_bgParsing color_string: Attempting to read hexadecimal color string: Could not parse hexadecimal string: Read RGB color string: Read ANSI color string:  defined as ", 7))
            {
                v1 = v0;
                if ((char)v1.equal(a2, "env_varfg:bg:underlineitalicdimmedblinkhiddenstrikethroughprev_fgprev_bgParsing color_string: Attempting to read hexadecimal color string: Could not parse hexadecimal string: Read RGB color string: Read ANSI color string:  defined as ", 7))
                {
                    starship::modules::handle(&v22, v0, a2, a3);
                    v2.extend_trusted(&v22, &g_11f6f28);
                    v1 = v0;
                }
                v20 = v1;
                v21 = a2;
                v28 = a3 + 488.get_config(&v20, 1);
                v5 = 1;
                *((int *)&v6) = (!v28 ? 0 : starship::print::handle_module::{{closure}}(v28));
                v7 = v30;
                v8 = 0;
                v10 = 0;
                (char)v11.collect(&v5);
                v5 = v12;
                v6 = v13;
                v7 = &v1;
                v8 = a4;
                v9 = a3;
                rayon::iter::from_par_iter::collect_extended(&(char)v16, &v5);
                v5.into_iter(&(char)v16);
                v2.spec_extend(&v5);
                core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v11, v12);
            }
            else
            {
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
                {
                    v16 = &g_11f6f00;
                    v17 = <&T as core::fmt::Debug>::fmt;
                    v18 = &v1;
                    v19 = <&T as core::fmt::Display>::fmt;
                    v5 = &g_11f6ee0;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v16;
                    v8 = 2;
                    v11 = "starship::printStarship RootThe root moduleUnexpected error returned in root format variables\\! \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA";
                    v12 = 15;
                    v13 = "starship::printStarship RootThe root moduleUnexpected error returned in root format variables\\! \\nall\n Here are the timings of modules in your prompt (>=1ms or output):\n  -    -   \"\"\n\n Here\'s a breakdown of your prompt:\n \"\" (azA";
                    v14 = 15;
                    v15 = log::__private_api::loc(&g_11f6f10);
                    log::__private_api::log(&v5, 4, &v11);
                }
            }
        }
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v2);
        return 0;
    }
    else if (!(char)a3.is_module_disabled_in_config(a1, a2))
    {
        v26 = &v23;
        starship::modules::handle(&v23, v0, a2, a3);
        v27 = &g_11f6f58;
        goto LABEL_bc7fb7;
    }
    else
    {
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v2);
        return 0;
    }
}
