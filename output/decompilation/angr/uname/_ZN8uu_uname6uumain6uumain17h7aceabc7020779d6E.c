long long uu_uname::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x43a]
    char v1;  // [bp-0x439]
    unsigned long long v2;  // [bp-0x438]
    char v3;  // [bp-0x430]
    unsigned long long v4;  // [bp-0x428]
    unsigned long long v5;  // [bp-0x420]
    char v6;  // [bp-0x418]
    char v7;  // [bp-0x408]
    unsigned long long v8;  // [bp-0x3f8]
    char v9;  // [bp-0x3f0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x3e8]
    unsigned long long v11;  // [bp-0x3e0]
    char *v12;  // [bp-0x3d8]
    unsigned long long v13;  // [bp-0x3d0]
    unsigned long long v14;  // [bp-0x3c8]
    unsigned long long v15;  // [bp-0x3c0]
    char v16;  // [bp-0x3b8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x3b0]
    char v18;  // [bp-0x3a8], Other Possible Types: unsigned long long
    char v19;  // [bp-0x3a0]
    char v20;  // [bp-0x398]
    char v21;  // [bp-0x388]
    char v22;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x2f0]
    char *v24;  // [bp-0x2e8], Other Possible Types: unsigned long long
    char v25;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v26;  // [bp-0x2d8]
    unsigned int v28;  // eax
    unsigned short v29;  // ax
    unsigned int v30;  // eax
    unsigned short v31;  // ax
    unsigned short v32;  // ax
    unsigned long long v33;  // rdx

    uu_uname::uu_app(&v22);
    v16.try_get_matches_from(&v22, a0, a1);
    if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
        return v5.from();
    v8 = *((long long *)&v21);
    memcpy(&v7, &v20, 16);
    memcpy(&v6, &v18, 16);
    v4 = v16;
    v5 = v17;
    v1 = v4.get_flag(_ZN8uu_uname7options3ALL17haabcdd4476d20968E, g_4da090);
    v0 = v4.get_flag(_ZN8uu_uname7options11KERNEL_NAME17h78d334e645184c09E, g_4da0a0);
    v28 = v4.get_flag(_ZN8uu_uname7options8NODENAME17h453bacc09e501817E, g_4da0b0);
    v29 = v4.get_flag(_ZN8uu_uname7options14KERNEL_RELEASE17h01c2bfcabb04e2f4E, g_4da0d0);
    v30 = v4.get_flag(_ZN8uu_uname7options14KERNEL_VERSION17h3c7ca358447cda74E, g_4da0c0);
    v31 = v4.get_flag(_ZN8uu_uname7options7MACHINE17h9ff0cb9ef2dc676cE, g_4da0e0);
    v32 = v4.get_flag(_ZN8uu_uname7options9PROCESSOR17he2cbef3058cabd62E, g_4da0f0);
    v2 = (0 CONCAT ((short)v4.get_flag(_ZN8uu_uname7options17HARDWARE_PLATFORM17h0a1e55ff84c4c273E, g_4da100) * 0x100 | v32) * 0x1000000000000) | ((0 CONCAT (v31 * 0x100 | v29) * 0x100000000) | v30 * 0x1000000 | v28 * 0x10000 | v0 * 0x100 | v1) & 281474976710655;
    v3 = v4.get_flag(_ZN8uu_uname7options2OS17h85e9c59c89e25749E, g_4da110);
    v22.new(&v2);
    if (v22 != 9223372036854775809)
    {
        memcpy(&v19, &v25, 168);
        v16 = v22;
        v17 = v23;
        v18 = v24;
        v9.display(&v16);
        v14 = core::str::<impl str>::trim_end_matches(v10, v11);
        v15 = v33;
        v12 = &v14;
        v13 = <&T as core::fmt::Display>::fmt;
        v22 = &g_4d9788;
        v23 = 2;
        v26 = 0;
        v24 = &v12;
        v25 = 1;
        std::io::stdio::_print(&v22);
        core::ptr::drop_in_place<alloc::string::String>(v9, v10);
        core::ptr::drop_in_place<uu_uname::UNameOutput>(&v16);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v4);
        return 0;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v4);
    return v23;
}
