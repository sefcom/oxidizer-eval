void starship::modules::python::module(void* a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x270]
    int v1;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x260]
    int v3;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x250]
    int v5;  // [bp-0x248]
    int v6;  // [bp-0x240]
    unsigned long long v7;  // [bp-0x230]
    char v8;  // [bp-0x228]
    int v9;  // [bp-0x220], Other Possible Types: char
    unsigned long long v10;  // [bp-0x210]
    int v11;  // [bp-0x208]
    unsigned long long v12;  // [bp-0x1f8]
    int v13;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x1e0]
    int v15;  // [bp-0x1d8], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x1d0]
    void* v17;  // [bp-0x1c8], Other Possible Types: char
    int v18;  // [bp-0x1b8]
    unsigned long long v19;  // [bp-0x1a8]
    char *v20;  // [bp-0x198]
    unsigned long long v21;  // [bp-0x190]
    char *v22;  // [bp-0x188]
    unsigned long v23;  // [bp-0x180]
    char *v24;  // [bp-0x178]
    unsigned long v25;  // [bp-0x170]
    void* v26;  // [bp-0x168]
    int v27;  // [bp-0x160], Other Possible Types: char
    int v28;  // [bp-0x150]
    int v29;  // [bp-0x140]
    int v30;  // [bp-0x130]
    int v31;  // [bp-0x120]
    char v32;  // [bp-0x110]
    unsigned long long v33;  // [bp-0x108]
    char v34;  // [bp-0x100]
    char v35;  // [bp-0xe0]
    char v36;  // [bp-0xc8]
    char v37;  // [bp-0xb0]
    unsigned long long v38;  // [bp-0x98]
    unsigned long v39;  // [bp-0x90]
    unsigned long v40;  // [bp-0x88]
    unsigned long long v41;  // [bp-0x78]
    char v42;  // [bp-0x70]
    char v43;  // [bp-0x38]
    int v45;  // xmm0
    int v46;  // xmm2
    char v47;  // bpl
    void* v48;  // r13
    int v49;  // xmm0

    v27.new_module(a1, "pythonpython3python2pyipynb.python-versionpyproject.tomlPipfiletox.ini__init__.pyVIRTUAL_ENVpyenv via [${symbol}${pyenv_prefix}(${version} )(\\($virtualenv\\) )]($style)", 6);
    v34.try_load(v33);
    (char)v13.try_begin_scan(a1);
    if (v13)
    {
        v45 = *((int128_t *)&v35);
        v46 = *((int128_t *)&v37);
        v0 = v13;
        *((int128_t *)&v1) = *((int128_t *)&v36);
        v3 = v46;
        v5 = v45;
        v47 = v0.is_match();
        if (v39)
        {
            if (v47 || (char)a0.detect_env_vars(v38, v39))
                goto LABEL_bb549c;
        }
        else
        {
            if (v47)
            {
LABEL_bb549c:
                v0.new(v41, *((long long *)&v42));
                if (!v43)
                    v48 = 0;
                v22 = &v34;
                v23 = a1;
                v24 = &v27;
                *((int *)&v25) = (v43 ? v40 : 1);
                v26 = v48;
                if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
                {
                    v10 = v3;
                    memcpy(&v9, &(char)v1, 16);
                }
                else
                {
                    v19 = v7;
                    v49 = *((int128_t *)&v0);
                    v18 = v6;
                    memcpy(&v17, &v3, 16);
                    *((int128_t *)&v15) = (int128_t)(&v1)[8];
                    v13 = v49;
                    starship::modules::python::module::{{closure}}(&v8, &v22, &(char)v13);
                    if (*((int *)&v8) != 1)
                    {
                        v27.set_segments(&(char)v9);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v32);
                        a0[64] = v31;
                        a0[48] = v30;
                        a0[32] = v29;
                        a0[16] = v28;
                        *(a0) = v27;
                        core::ptr::drop_in_place<starship::configs::python::PythonConfig>(&v34);
                        return;
                    }
                }
                v12 = v10;
                v11 = v9;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v20 = &v11;
                    v21 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v13 = &g_11f5d40;
                    v14 = 1;
                    v17 = 0;
                    v15 = &v20;
                    v16 = 1;
                    v0 = "starship::modules::pythonvirtualenvpyenv_prefixPYENV_VERSIONversion-name";
                    v1 = 25;
                    v2 = "starship::modules::pythonvirtualenvpyenv_prefixPYENV_VERSIONversion-name";
                    v3 = 25;
                    v4 = log::__private_api::loc(&g_11f5d50);
                    log::__private_api::log(&v13, 2, &v0);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v11);
                goto LABEL_bb56a4;
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
LABEL_bb56a4:
    core::ptr::drop_in_place<starship::configs::python::PythonConfig>(&v34);
    core::ptr::drop_in_place<starship::module::Module>(&v27);
    return;
}
