void harry::exec(struct_1 *a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x1f8]
    unsigned long long v1;  // [bp-0x1f0]
    unsigned long long v2;  // [bp-0x1e8]
    char *v3;  // [bp-0x1e0]
    unsigned long long v4;  // [bp-0x1d8]
    int v5;  // [bp-0x1d0]
    int v6;  // [bp-0x1c0]
    unsigned long long v7;  // [bp-0x1b0]
    unsigned long long v8[3];  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v9;  // [bp-0x1a0]
    char *v10;  // [bp-0x198]
    unsigned long long v11;  // [bp-0x190]
    char v12;  // [bp-0x188]
    unsigned long long v13;  // [bp-0x178]
    unsigned long long v14;  // [bp-0x168]
    int v15;  // [bp-0x160]
    int v16;  // [bp-0x138]
    int v17;  // [bp-0x128]
    unsigned long long v18;  // [bp-0x120]
    int v19;  // [bp-0x118]
    unsigned long long v20;  // [bp-0x110]
    unsigned long long v21;  // [bp-0x108]
    int v22;  // [bp-0xf8], Other Possible Types: char
    unsigned long v23;  // [bp-0xe8]
    char v24;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0xd8]
    char v26;  // [bp-0xd0]
    unsigned long long v28[4];  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rdx
    int v32;  // xmm0

    v28 = alloc::alloc::exchange_malloc();
    v29 = a1[0];
    v30 = a1[2];
    v28[0] = "-cshFailed to run command '': ";
    v28[1] = 2;
    v28[2] = v29;
    v28[3] = v30;
    alloc::slice::hack::into_vec(&v24, v28, 2);
    v13 = *((long long *)&v26);
    memcpy(&v12, &v24, 16);
    v1 = "shFailed to run command '': ";
    v2 = 2;
    v3 = &v1;
    v4 = <&T as core::fmt::Display>::fmt;
    v24.new_v1(&g_474108, 2, &v3, 1);
    std::io::stdio::_print(&v24);
    v24.new(v1, 2);
    v3.output(v24.args(&v12));
    if (v3)
    {
        v21 = v7;
        v32 = *((int128_t *)&v3);
        v19 = v6;
        v17 = v5;
        v16 = v32;
        core::ptr::drop_in_place<std::process::Command>(&v24);
        v14 = 1;
        *((uint128_t *)&v15) = 0;
        v3.with_capacity(0x2000, (long long)v16, (long long)v17);
        v24.with_capacity(0x2000, v18, v20);
        v8.read_to_string(&v3, &v14);
        v8.unwrap(&g_474128);
        v8.read_to_string(&v24, &v14);
        v8.unwrap(&g_474140);
        a0->field_10 = (long long)(&v15)[8];
        a0->field_0 = *((int128_t *)&v14);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(v24, v25);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(v3, v4);
        core::ptr::drop_in_place<std::process::Output>(&v16);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v12);
    }
    else
    {
        v0 = v4;
        v8[0] = a1;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v10 = &v0;
        v11 = <std::io::error::Error as core::fmt::Display>::fmt;
        (char)v14.new_v1(&g_474158, 2, &v8, 2);
        alloc::fmt::format(&v22, &(char)v14);
        a0->field_10 = v23;
        *((void*)&a0->field_0) = v22;
        ::0x40af10::core::ptr::drop_in_place<std::io::error::Error>(&v0);
        core::ptr::drop_in_place<std::process::Command>(&v24);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v12);
    }
    core::ptr::drop_in_place<alloc::string::String>(a1);
    return;
}
