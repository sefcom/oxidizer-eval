long long flealib::email::EMail::send_email(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9, unsigned long long a10, unsigned long long a11, unsigned long long a12, unsigned long long a13, unsigned long long a14)
{
    unsigned long long v0;  // [bp-0x310]
    int v1;  // [bp-0x308], Other Possible Types: char
    unsigned long long v2;  // [bp-0x2f8]
    int v3;  // [bp-0x2f0]
    unsigned long long v4;  // [bp-0x2e0]
    void* v5;  // [bp-0x2d8]
    int v6;  // [bp-0x2d8]
    unsigned long long v7;  // [bp-0x2d0]
    int v8;  // [bp-0x2c8]
    void* v9;  // [bp-0x2c8]
    unsigned long long v10;  // [bp-0x2c0]
    int v11;  // [bp-0x2b8]
    int v12;  // [bp-0x2a8]
    int v13;  // [bp-0x298]
    char v14;  // [bp-0x288], Other Possible Types: unsigned long
    int v15;  // [bp-0x1f8], Other Possible Types: char
    char v16;  // [bp-0x1e8]
    char v17;  // [bp-0x1d8]
    int v18;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x190]
    unsigned long long v20;  // [bp-0x188]
    char v21;  // [bp-0xb8]

    *((unsigned long long *)&v6) = 0;
    v7 = 8;
    *((unsigned long long *)&v8) = 0;
    v10 = 0x8000000000000000;
    v14 = 1;
    (char)v18.from_str(a3, a4);
    v15.unwrap(&(char)v18, &g_b0a348);
    (char)v18.from(&(unsigned long long)v6, &v15);
    (unsigned long long)v6.from_str(a1, a2);
    v15.unwrap(&(unsigned long long)v6, &g_b0a360);
    (unsigned long long)v6.to(&(char)v18, &v15);
    (char)v18.subject(&(unsigned long long)v6, a5, a6);
    v14 = g_b0a3c8;
    *((uint128_t *)&v13) = g_b0a3b8;
    *((uint128_t *)&v12) = g_b0a3a8;
    *((uint128_t *)&v11) = g_b0a398;
    *((uint128_t *)&v8) = g_b0a388;
    *((uint128_t *)&v6) = g_b0a378;
    v15.header(&(char)v18, &(unsigned long long)v6);
    (unsigned long long)v6.to_vec(a7, a8);
    v20 = v9;
    *((int128_t *)&v18) = (int128_t)v6;
    (unsigned long long)v6.body(&v15, &(char)v18);
    v21.unwrap(&(unsigned long long)v6);
    (unsigned long long)v6.to_vec(a9, a10);
    v20 = v9;
    *((int128_t *)&v18) = (int128_t)v6;
    (unsigned long long)v6.to_vec(a11, a12);
    v4 = v9;
    *((int128_t *)&v3) = (int128_t)v6;
    memcpy(&v1, &v18, 16);
    v2 = v20;
    (unsigned long long)v6.relay(a13, a14);
    (char)v18.unwrap(&(unsigned long long)v6);
    memcpy(&v17, &(char)v3, 16);
    memcpy(&v16, &v2, 16);
    v15 = v1;
    (unsigned long long)v6.credentials(&(char)v18, &v15);
    v0 = (unsigned long long)v6.build();
    (unsigned long long)v6.send(&v0, &v21);
    if (v5 != 0x8000000000000000)
    {
        memcpy(&v20, &(unsigned long long)v8, 16);
        v18 = v5;
        v19 = 8;
        core::ptr::drop_in_place<lettre::transport::smtp::response::Response>(&v18);
        core::ptr::drop_in_place<lettre::transport::smtp::transport::SmtpTransport>(&v0);
        core::ptr::drop_in_place<lettre::message::Message>(&v21);
        return 0;
    }
    core::ptr::drop_in_place<lettre::transport::smtp::transport::SmtpTransport>(&v0);
    core::ptr::drop_in_place<lettre::message::Message>(&v21);
    return 8;
}
