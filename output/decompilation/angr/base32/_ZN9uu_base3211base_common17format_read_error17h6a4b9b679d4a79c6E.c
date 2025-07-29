long long uu_base32::base_common::format_read_error(unsigned long a0, char a1)
{
    char v0;  // [bp-0x109]
    unsigned long long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    void* v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xf0]
    char v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    void* v10;  // [bp-0xc0]
    int v11;  // [bp-0xb8]
    int v12;  // [bp-0xa8]
    int v13;  // [bp-0x88]
    char v14;  // [bp-0x78]
    int v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x58]
    char v17;  // [bp-0x50]
    void* v18;  // [bp-0x40]
    unsigned long long v20;  // r14
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned int v23;  // edx
    unsigned int v24;  // edx
    unsigned int v25;  // eax

    v0 = a1;
    v5.spec_to_string(&v0);
    v20 = v7;
    v1 = v20.with_capacity_in(&g_5a28d0);
    v2 = v21;
    v3 = 0;
    v8 = v6;
    v9 = v20 + v6;
    v10 = 0;
    v22 = v8.next();
    if ((unsigned int)v21 != 0x110000)
    {
        do
        {
            v24 = v23;
            if (v22)
            {
                v1.push(v24);
            }
            else
            {
                core::unicode::unicode_data::conversions::to_upper(&v13, v24);
                v11.new(&v13);
                memcpy(&v14, &v12, 16);
                v13 = v11;
                while (true)
                {
                    v25 = v13.next();
                    if (v25 == 0x110000)
                        break;
                    v1.push(v25);
                }
                core::ptr::drop_in_place<core::char::ToUppercase>();
            }
            v22 = v8.next();
            v23 = v21;
        } while ((unsigned int)v21 != 0x110000);
    }
    v11.to_vec("errorbase-common-read-errorcapacity overflow/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 5);
    v16 = (long long)v12;
    v15 = v11;
    memcpy(&v17, &v1, 16);
    v18 = 0;
    v11.from_iter(&v15);
    uucore::mods::locale::get_message_with_args(v4, "base-common-read-errorcapacity overflow/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs", 22, &v11);
    ::0x4ac090::core::ptr::drop_in_place<alloc::string::String>(&v5);
    return a0;
}
