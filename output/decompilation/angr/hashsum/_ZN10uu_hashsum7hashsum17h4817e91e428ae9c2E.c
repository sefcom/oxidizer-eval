long long uu_hashsum::hashsum(struct_2 *a0)
{
    char *v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    char *v2;  // [bp-0x158]
    char v3;  // [bp-0x150], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x148], Other Possible Types: char *
    unsigned long long v5;  // [bp-0x140]
    char *v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    char *v8;  // [bp-0x128]
    char *v9;  // [bp-0x120], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x118]
    unsigned long long v11;  // [bp-0x110]
    void* v12;  // [bp-0x108]
    char *v13;  // [bp-0xe8]
    char *v14;  // [bp-0xe0]
    char *v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xd0]
    unsigned long long v17;  // [bp-0xc8]
    int v18;  // [bp-0xb8]
    unsigned long long v19;  // [bp-0xb0]
    char *v20;  // [bp-0xa8]
    unsigned long v21;  // [bp-0xa0]
    unsigned long v22;  // [bp-0x98]
    unsigned long long v23;  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x80]
    char v26;  // [bp-0x78]
    char v27;  // [bp-0x68]
    unsigned long long v29;  // rax
    unsigned long long v30;  // r12
    unsigned long long v31;  // rdx
    unsigned long long v32;  // r14
    unsigned long long v33;  // r14
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    char *v36;  // r15

    *((int *)&v22) = (a0->field_28 ? "*blake2bfailed to read inputfailed to open filecapacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/ind" : " *blake2bfailed to read inputfailed to open filecapacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/in");
    v23 = 1;
    v24 = "-b2sumlengthbinary";
    v25 = 1;
    v29 = v24.next();
    if (v29)
    {
        v30 = v29;
        v21 = &a0->field_10;
        do
        {
            v33 = v32;
            v8.components(v30, v33);
            v0.components("-b2sumlengthbinary", 1);
            if (v8.eq(&v0))
            {
                v34 = std::io::stdio::stdin().new();
                v35 = &g_550640;
            }
            else
            {
                v0.open(v30, v33);
                v8.map_err_context(&v0);
                if (v8)
                {
                    core::ptr::drop_in_place<uu_hashsum::Options>(a0->field_10, a0->field_18);
                    return v8;
                }
                v34 = v9 & 4294967295.new();
                v35 = &g_5505e8;
            }
            v27.with_capacity(v34, v35);
            uucore::features::checksum::digest_reader(&v0, v21, &v27, a0->field_28, a0->field_20);
            v8.map_err_context(&v0);
            v36 = v9;
            if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
            {
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v27);
                core::ptr::drop_in_place<uu_hashsum::Options>(a0->field_10, a0->field_18);
                return v36;
            }
            v13 = v8;
            v14 = v36;
            v15 = v10;
            uucore::features::checksum::escape_filename(&v0, v30, v33);
            v20 = v2;
            *((int128_t *)&v18) = *((int128_t *)&v0);
            memcpy(&v26, &v3, 16);
            if (a0->field_29)
            {
                if (!(char)a0->field_0.equal(a0->field_8, "blake2bfailed to read inputfailed to open filecapacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/inde", 7))
                {
                    alloc::str::<impl str>::to_ascii_uppercase(&v16, a0->field_0, a0->field_8);
                    v0 = &v26;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v16;
                    v3 = <alloc::string::String as core::fmt::Display>::fmt;
                    v4 = &(char)v18;
                    v5 = <alloc::string::String as core::fmt::Display>::fmt;
                    v6 = &v13;
                    v7 = <alloc::string::String as core::fmt::Display>::fmt;
                    v8 = &g_550508;
                    v9 = 5;
                    v12 = 0;
                    v10 = &v0;
                    v11 = 4;
                    std::io::stdio::_print(&v8);
                    core::ptr::drop_in_place<alloc::string::String>(v16, v17);
                }
                else if (a0->field_18->field_30(a0->field_10) == 0x200)
                {
                    v8 = &(char)v18;
                    v9 = <alloc::string::String as core::fmt::Display>::fmt;
                    v10 = &v13;
                    v11 = <alloc::string::String as core::fmt::Display>::fmt;
                    v0 = &g_550498;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v8;
                    v3 = 2;
                    std::io::stdio::_print(&v0);
                }
                else
                {
                    v16 = a0->field_18->field_30(a0->field_10);
                    v0 = &v16;
                    v1 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v2 = &(char)v18;
                    v3 = <alloc::string::String as core::fmt::Display>::fmt;
                    v4 = &v13;
                    v5 = <alloc::string::String as core::fmt::Display>::fmt;
                    v8 = &g_5504c8;
                    v9 = 4;
                    v12 = 0;
                    v10 = &v0;
                    v11 = 3;
                    std::io::stdio::_print(&v8);
                }
            }
            else
            {
                if (a0->field_2a)
                {
                    v8 = &v13;
                    v9 = <alloc::string::String as core::fmt::Display>::fmt;
                    v0 = &g_5503b8;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v8;
                    v3 = 1;
                    std::io::stdio::_print(&v0);
                }
                else if (a0->field_2b)
                {
                    v16 = v30;
                    v17 = v33;
                    v0 = &v13;
                    v1 = <alloc::string::String as core::fmt::Display>::fmt;
                    v2 = &v22;
                    v3 = <&T as core::fmt::Display>::fmt;
                    v4 = &v16;
                    v5 = <std::path::Display as core::fmt::Display>::fmt;
                    v8 = &g_550558;
                    v9 = 4;
                    v12 = 0;
                    v10 = &v0;
                    v11 = 3;
                    std::io::stdio::_print(&v8);
                }
                else
                {
                    v0 = &v26;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v2 = &v13;
                    v3 = <alloc::string::String as core::fmt::Display>::fmt;
                    v4 = &v22;
                    v5 = <&T as core::fmt::Display>::fmt;
                    v6 = &(char)v18;
                    v7 = <alloc::string::String as core::fmt::Display>::fmt;
                    v8 = &g_550598;
                    v9 = 5;
                    v12 = 0;
                    v10 = &v0;
                    v11 = 4;
                    std::io::stdio::_print(&v8);
                }
            }
            core::ptr::drop_in_place<alloc::string::String>((long long)v18, v19);
            core::ptr::drop_in_place<alloc::string::String>(v13, v14);
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v27);
            v30 = v24.next();
            v32 = v31;
        } while (v30);
    }
    core::ptr::drop_in_place<uu_hashsum::Options>(a0->field_10, a0->field_18);
    return 0;
}
