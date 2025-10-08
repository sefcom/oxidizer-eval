void starship::modules::nats::module(void* a0, unsigned long a1)
{
    int v0;  // [bp-0x208], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x200]
    int v2;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1f0]
    int v4;  // [bp-0x1e8], Other Possible Types: unsigned long long
    int v5;  // [bp-0x1d8]
    char v6;  // [bp-0x1c8]
    int v7;  // [bp-0x1b8]
    unsigned long long v8;  // [bp-0x1a8]
    int v9;  // [bp-0x198]
    void* v10;  // [bp-0x188]
    unsigned long long v11;  // [bp-0x180]
    unsigned long long v12[1];  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x170]
    int v14;  // [bp-0x168], Other Possible Types: char *, char
    unsigned long long v15;  // [bp-0x160]
    void* v16;  // [bp-0x158], Other Possible Types: int
    int v17;  // [bp-0x148]
    unsigned long long v18;  // [bp-0x138]
    char v19;  // [bp-0x128]
    int v20;  // [bp-0x127]
    char v21;  // [bp-0x118]
    char v22;  // [bp-0x108]
    unsigned long long v23;  // [bp-0xf8]
    char *v24;  // [bp-0xe8]
    unsigned long long v25;  // [bp-0xe0]
    char v26;  // [bp-0xd8]
    char *v27;  // [bp-0xc8]
    char *v28;  // [bp-0xc0]
    unsigned long v29;  // [bp-0xb8]
    int v30;  // [bp-0xb0], Other Possible Types: char
    int v31;  // [bp-0xa0]
    int v32;  // [bp-0x90]
    int v33;  // [bp-0x80]
    int v34;  // [bp-0x70]
    char v35;  // [bp-0x60]
    unsigned long long v36;  // [bp-0x58]
    char v37;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v38;  // [bp-0x48]
    char v39;  // [bp-0x40]
    char v40;  // [bp-0x30]
    char v41;  // [bp-0x20]
    int v43;  // xmm0
    char v44;  // dl
    int v45;  // xmm1
    int v46;  // xmm0
    unsigned long long v47;  // rax

    v30.new_module(a1, "natsinitalseJulyRulepod6porthebrougrpalmpauctakrtaluteluraku", 4);
    v37.try_load(v36);
    if (v41)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v12.exec_cmd(a1, "natsinitalseJulyRulepod6porthebrougrpalmpauctakrtaluteluraku", 4, &g_11f54b8, 3);
        if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v43 = *((int128_t *)&v12);
            v4 = v16;
            *((int128_t *)&v2) = *((int128_t *)&v14);
            v0 = v43;
            v7 = v43;
            v8 = v2;
            core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
            *((int128_t *)&v9) = (int128_t)(&v7)[8];
            v10 = 0;
            serde_json::de::from_trait(&v12, &(char)v9, v44);
            if ((char)v12 == 6)
            {
                starship::modules::nats::module::{{closure}}(v13);
                v0 = 6;
LABEL_ba9e69:
                core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v0);
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            else
            {
                v45 = *((int128_t *)&v14);
                *((int128_t *)&v0) = *((int128_t *)&v12);
                v2 = v45;
                if (v0 == 6)
                    goto LABEL_ba9e69;
                memcpy(&v21, &v2, 16);
                *((int128_t *)&v20) = (int128_t)(&v0)[1];
                v19 = v0;
                (char)v0.new(v37, v38);
                memcpy(&v26, &v39, 16);
                v27 = &v40;
                v28 = &v19;
                v29 = a1;
                if (*((long long *)&v0) == 0x8000000000000000)
                {
                    v11 = v3;
                    memcpy(&(char)v9, &(char)v0, 16);
                }
                else
                {
                    v18 = *((long long *)&v6);
                    v46 = (int128_t)v0;
                    v17 = v5;
                    v16 = v4;
                    *((int128_t *)&v14) = (int128_t)v2;
                    *((void*)v12) = v46;
                    starship::modules::nats::module::{{closure}}(&(char)v9, &v26, &v12);
                    if ((int)v9 != 1)
                    {
                        v30.set_segments(&(char)v9);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v35);
                        a0[64] = v34;
                        a0[48] = v33;
                        a0[32] = v32;
                        a0[16] = v31;
                        *(a0) = v30;
                        core::ptr::drop_in_place<serde_json::value::Value>(&v19);
                        core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
                        return;
                    }
                }
                v23 = v11;
                memcpy(&v22, &v9, 16);
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v24 = &v22;
                    v25 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    v12 = &g_11f54a8;
                    v13 = 1;
                    v16 = 0;
                    v14 = &v24;
                    v15 = 1;
                    v47 = log::__private_api::loc(&g_11f54e8);
                    v0 = "starship::modules::natsError parsing nats context JSON: Error in module `netns`: \nsrc/modules/netns.rs";
                    v1 = 23;
                    v2 = "starship::modules::natsError parsing nats context JSON: Error in module `netns`: \nsrc/modules/netns.rs";
                    v3 = 23;
                    v4 = v47;
                    log::__private_api::log(&v12, 2, &(char)v0);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v22);
                core::ptr::drop_in_place<serde_json::value::Value>(&v19);
            }
            core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
        }
    }
    core::ptr::drop_in_place<starship::module::Module>(&v30);
    return;
}
