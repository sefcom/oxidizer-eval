long long starship::modules::package::get_maven_version(unsigned long long *a0, unsigned long long a1[25], unsigned long long a2[8])
{
    unsigned long long v0;  // [bp-0x190]
    unsigned long long v1;  // [bp-0x190]
    unsigned long long v2;  // [bp-0x188]
    char *v3;  // [bp-0x180], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x178]
    void* v5;  // [bp-0x170]
    unsigned long long v6;  // [bp-0x160]
    unsigned long long v7;  // [bp-0x158]
    unsigned long long v8;  // [bp-0x150]
    unsigned long long v9;  // [bp-0x148]
    unsigned long long v10;  // [bp-0x140]
    unsigned long long v11;  // [bp-0x138]
    void* v12;  // [bp-0x130]
    unsigned long long v13;  // [bp-0x128]
    void* v14;  // [bp-0x120]
    unsigned long long v15;  // [bp-0x110]
    int v16;  // [bp-0x108], Other Possible Types: char
    char v17;  // [bp-0xf8]
    char v18;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v19;  // [bp-0xd8]
    unsigned int v20;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0xc0]
    unsigned long long v22;  // [bp-0xb8]
    unsigned long long v23;  // [bp-0xb0]
    unsigned long long v24;  // [bp-0xa8]
    char *v25;  // [bp-0xa0]
    unsigned long long v26;  // [bp-0x98]
    void* v27;  // [bp-0x90], Other Possible Types: char, unsigned long long
    char v28;  // [bp-0x88], Other Possible Types: unsigned long long
    uint128_t v29;  // [bp-0x80]
    unsigned long long v30;  // [bp-0x70]
    void* v31;  // [bp-0x68]
    unsigned long long v32;  // [bp-0x61]
    char v33;  // [bp-0x59]
    uint128_t v34;  // [bp-0x58]
    char v35;  // [bp-0x48]
    int v36;  // [bp-0x40]
    unsigned int v38;  // ebx
    char v39;  // r13b
    struct_0 *v40;  // rax
    unsigned long long v41;  // rdx
    unsigned long long *v42;  // rbx
    unsigned long long v43;  // r15
    unsigned long long v44;  // r14

    v27.read_file_from_pwd(a1, "pom.xmlbuild.sbt.java-versionproject.cljbuild.boot.sdkmanrcred dimmed[$symbol$number]($style) ", 7);
    if ((char)(((0 ^ v27) & (0 ^ -(v27))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    memcpy(&v16, &v28, 16);
    v15 = v27;
    v36 = v16;
    v27 = 0;
    v28 = 1;
    v29 = 0;
    v30 = 8;
    v32 = 0x101000100000000;
    v31 = 0;
    v34 = 0;
    v35 = 0;
    v33 = 1;
    v12 = 0;
    v13 = 1;
    v14 = 0;
    v38 = 0;
    while (true)
    {
LABEL_bb0020:
        while (true)
        {
            v6.read_event_impl(&v27, &v12);
            if (v6 != 9223372036854775822)
            {
                memcpy(&v19, &v10, 16);
                memcpy(&v18, &v8, 16);
                memcpy(&v17, &v6, 16);
                v42 = a0;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v25 = &v17;
                    v26 = <quick_xml::errors::Error as core::fmt::Display>::fmt;
                    v0 = &g_11f58e8;
                    v2 = 1;
                    v5 = 0;
                    v3 = &v25;
                    v4 = 1;
                    v20 = "starship::modules::packagev0.0.0-semanticprivatev0.0.0-development.jsoncjsr.jsoncpoetryattr:file:setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"";
                    v21 = 26;
                    v22 = "starship::modules::packagev0.0.0-semanticprivatev0.0.0-development.jsoncjsr.jsoncpoetryattr:file:setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"";
                    v23 = 26;
                    v24 = log::__private_api::loc(&g_11f58f8);
                    log::__private_api::log(&v0, 2, &v20);
                }
                core::ptr::drop_in_place<quick_xml::errors::Error>(&v17);
                goto LABEL_bb01f1;
            }
            switch (v7)
            {
            case 0:
                if (v38 == 1)
                {
                    v40 = 0.index(v11, v9, v10, &g_11f4468);
                    if (v41 != 7)
                        goto LABEL_bb00c4;
                    v39 = (v40->field_0 | (v40->field_6 * 0x10000 | v40->field_4) * 0x100000000) == 31084746137298294;
                    v38 += 1;
                    goto LABEL_bb0035;
                }
                else
                {
LABEL_bb00c4:
                    v38 += 1;
                    goto LABEL_bb0035;
                }
            case 1:
                v38 -= 1;
                goto LABEL_bb0035;
            case 3:
                if (!(v39 & 1))
                {
                    core::ptr::drop_in_place<quick_xml::events::BytesEnd>(&v8);
                    goto LABEL_bb0020;
                }
                else
                {
                    v18 = v10;
                    memcpy(&v17, &v8, 16);
                    (char)v0.decode(&v17);
                    v42 = a0;
                    if (v0 == 9223372036854775809)
                    {
                        core::ptr::drop_in_place<core::result::Result<alloc::borrow::Cow<str>,quick_xml::encoding::EncodingError>>(&(char)v0);
                        v1 = 0x8000000000000000;
                        break;
                    }
                    else
                    {
                        v43 = v2;
                        v44 = v3;
                        if (v0 == 0x8000000000000000)
                        {
                            (char)v0.to_vec(v2, v3);
                            v43 = v2;
                            v44 = v3;
                            v1 = v0;
                            v2 = v43;
                            v3 = v44;
                            if (v0 == 0x8000000000000000)
                                break;
                        }
                        else
                        {
                            v2 = v43;
                            v3 = v44;
                            v1 = v0;
                        }
                        v20 = 0;
                        if (!(char)core::slice::<impl [T]>::starts_with(v43, v44, ::0xa7eb90::core::char::methods::encode_utf8_raw(36, &v20, 4), v41))
                        {
                            starship::modules::package::format_version(a0, v43, v44, a2[6], a2[7]);
LABEL_bb0334:
                            core::ptr::drop_in_place<regex::error::Error>(&v1);
                            core::ptr::drop_in_place<quick_xml::events::BytesEnd>(&v17);
LABEL_bb01f4:
                            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v12);
                            core::ptr::drop_in_place<quick_xml::reader::Reader<&[u8]>>(&v27);
                            core::ptr::drop_in_place<alloc::string::String>(&v15);
                            return v42;
                        }
                    }
                    *(a0) = 0x8000000000000000;
                    goto LABEL_bb0334;
                }
            case 10:
                core::ptr::drop_in_place<quick_xml::events::Event>(&v7);
                v42 = a0;
LABEL_bb01f1:
                *(v42) = 0x8000000000000000;
                goto LABEL_bb01f4;
            default:
LABEL_bb0035:
                core::ptr::drop_in_place<quick_xml::events::Event>(&v7);
            }
        }
    }
}
