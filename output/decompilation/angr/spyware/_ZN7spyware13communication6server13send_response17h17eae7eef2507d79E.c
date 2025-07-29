long long spyware::communication::server::send_response(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    char *v4;  // [bp-0x80]
    char v5;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x70]
    char *v7;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x60]
    void* v9;  // [bp-0x58]
    char *v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x30]
    unsigned long long v14;  // [bp-0x28]
    unsigned long long v15;  // [bp-0x20]
    unsigned long long v16;  // [bp-0x18]
    unsigned long long v18;  // rbx

    v3 = a1;
    spyware::communication::serialization::serialize_message(&v5, a0);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v1;
    v0 = v5;
    v1 = v6;
    v2 = v7;
    if (::0x44be40::core::sync::atomic::atomic_load() >= 4)
    {
        v4 = &v0;
        v10 = &v4;
        v11 = <&T as core::fmt::Debug>::fmt;
        v5 = &g_4b8ae8;
        v6 = 1;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        v12 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
        v13 = 30;
        v14 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
        v15 = 30;
        v16 = log::__private_api::loc(&g_4b8af8);
        log::__private_api::log(&v5, 4, &v12);
    }
    v18 = v3.write_all(v1, v2);
    ::0x44bac0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
    if (v18)
        return v18;
    return 0;
}
