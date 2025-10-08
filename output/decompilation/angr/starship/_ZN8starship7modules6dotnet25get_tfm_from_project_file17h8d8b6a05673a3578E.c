void starship::modules::dotnet::get_tfm_from_project_file(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x1d0]
    unsigned long long v1;  // [bp-0x1c8]
    unsigned long long v2;  // [bp-0x1c0]
    unsigned long long v3;  // [bp-0x1b8]
    unsigned long long v4;  // [bp-0x1b0]
    unsigned long long v5;  // [bp-0x1a8]
    char *v6;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x198]
    char *v8;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x188]
    char *v10;  // [bp-0x180]
    unsigned long long v11;  // [bp-0x178]
    void* v12;  // [bp-0x170]
    unsigned long long v13;  // [bp-0x168]
    void* v14;  // [bp-0x160]
    int v15;  // [bp-0x158]
    unsigned long long v16;  // [bp-0x150]
    char *v17;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x140]
    void* v19;  // [bp-0x138]
    unsigned long long v20;  // [bp-0x120]
    int v21;  // [bp-0x118], Other Possible Types: char
    unsigned long long v22;  // [bp-0x108]
    void* v23;  // [bp-0x100], Other Possible Types: char, unsigned long long
    char v24;  // [bp-0xf8], Other Possible Types: unsigned long long
    uint128_t v25;  // [bp-0xf0]
    unsigned long long v26;  // [bp-0xe0]
    void* v27;  // [bp-0xd8]
    unsigned long long v28;  // [bp-0xd1]
    char v29;  // [bp-0xc9]
    uint128_t v30;  // [bp-0xc8]
    char v31;  // [bp-0xb8]
    int v32;  // [bp-0xb0]
    unsigned long long v33;  // [bp-0xa0]
    unsigned long long v34;  // [bp-0x98]
    unsigned long long v35;  // [bp-0x90]
    unsigned long long v36;  // [bp-0x88]
    unsigned long long v37;  // [bp-0x80]
    unsigned long long v38;  // [bp-0x78]
    unsigned long long v39;  // [bp-0x70]
    char v40;  // [bp-0x68]
    char v41;  // [bp-0x58]
    char v42;  // [bp-0x48]
    char v44;  // r14b
    char v45[15];  // rax
    unsigned long v46;  // rdx
    char v47;  // cl
    char v48[15];  // rdx
    unsigned long long v49;  // [bp-0x158]

    v33 = a1;
    v34 = a2;
    starship::utils::read_file(&v23, a1, a2);
    if ((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v23);
        a0[0] = 0x8000000000000000;
        return;
    }
    memcpy(&v21, &v24, 16);
    v20 = v23;
    v32 = v21;
    v23 = 0;
    v24 = 1;
    v25 = 0;
    v26 = 8;
    v28 = 0x101000100000000;
    v27 = 0;
    v30 = 0;
    v31 = 0;
    v29 = 1;
    v12 = 0;
    v13 = 1;
    while (true)
    {
        v14 = 0;
        v0.read_event_impl(&v23, &v12);
        if (v0 != 9223372036854775822)
        {
            memcpy(&v42, &v4, 16);
            memcpy(&v41, &v2, 16);
            memcpy(&v40, &v0, 16);
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0))
            {
                v22 = (long long)v30 - 0;
                v6 = &v33;
                v7 = <&T as core::fmt::Debug>::fmt;
                v8 = &v22;
                v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v10 = &v40;
                v11 = <quick_xml::errors::Error as core::fmt::Debug>::fmt;
                v49 = &g_11f4438;
                v16 = 3;
                v19 = 0;
                v17 = &v6;
                v18 = 3;
                v35 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
                v36 = 25;
                v37 = "starship::modules::dotnettfmError parsing project file  at position /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rsChecking if global.json exists at: Checking if .NET SDK version is pinned in: ";
                v38 = 25;
                v39 = log::__private_api::loc(&g_11f4480);
                log::__private_api::log(&v49, 1, &v35);
            }
            a0[0] = 0x8000000000000000;
            core::ptr::drop_in_place<quick_xml::errors::Error>(&v40);
            if (v0 != 9223372036854775822)
                break;
            goto LABEL_b913b9;
        }
        if (v1)
        {
            if ((unsigned int)v1 != 3)
            {
                if ((unsigned int)v1 == 10)
                {
                    core::ptr::drop_in_place<quick_xml::events::Event>(&v1);
                    a0[0] = 0x8000000000000000;
                    break;
                }
                if (v1 == 3)
                    goto LABEL_b91229;
                goto LABEL_b91030;
            }
            else
            {
                v17 = v4;
                *((int128_t *)&v15) = *((int128_t *)&v2);
                if ((v44 & 1))
                {
                    (char)v6.decode(&v49);
                    if (v6 == 9223372036854775809)
                    {
                        core::ptr::drop_in_place<core::result::Result<alloc::borrow::Cow<str>,quick_xml::encoding::EncodingError>>(&(char)v6);
                        a0[0] = 0x8000000000000000;
                    }
                    else
                    {
                        if (v6 == 0x8000000000000000)
                            (char)v6.to_vec(v7, v8);
                        a0[0] = v6;
                        a0[1] = v7;
                        a0[2] = v8;
                    }
                    core::ptr::drop_in_place<quick_xml::events::BytesEnd>(&v49);
                    if (v0 != 9223372036854775822)
                        break;
LABEL_b913b9:
                    if (v1 != 3)
                    {
                        core::ptr::drop_in_place<quick_xml::events::Event>(&v1);
                        break;
                    }
                }
                core::ptr::drop_in_place<quick_xml::events::BytesEnd>(&v49);
                if (v0 != 9223372036854775822)
                {
                    goto LABEL_b91240;
                }
                else if ((int)v1 == 3)
                {
                    continue;
                }
            }
        }
        v45 = 0.index(v5, v3, v4, &g_11f4468);
        if (v46 != 15)
        {
            if (...)
                goto LABEL_b91210;
            v47 = 115;
            v48 = 15;
            goto LABEL_b91201;
        }
        else if (v45[0] == 84 && v45[1] == 97 && v45[2] == 114 && v45[3] == 103 && v45[4] == 101 && v45[5] == 116 && v45[6] == 70 && v45[7] == 114 && v45[8] == 97 && v45[9] == 109 && v45[10] == 101 && v45[11] == 119 && v45[12] == 111 && v45[13] == 114)
        {
            v47 = 107;
            v48 = 14;
LABEL_b91201:
            v44 = *((char *)(v45 + v48)) == v47;
            goto LABEL_b91210;
        }
        else
        {
LABEL_b91210:
            if (v0 == 9223372036854775822)
            {
                if (v1 == 3)
                {
LABEL_b91229:
                    core::ptr::drop_in_place<quick_xml::events::BytesEnd>(&v2);
                    continue;
                }
LABEL_b91030:
                core::ptr::drop_in_place<quick_xml::events::Event>(&v1);
            }
            else
            {
LABEL_b91240:
                core::ptr::drop_in_place<quick_xml::errors::Error>(&v0);
            }
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v12);
    core::ptr::drop_in_place<quick_xml::reader::Reader<&[u8]>>(&v23);
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    return;
}
