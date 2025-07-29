long long uu_hashsum::hashsum(struct_3 *a0, uint128_t a1[4])
{
    unsigned int v0;  // [bp-0x1dc]
    struct struct_0 v1[8];  // [bp-0x1d0]
    struct struct_0 v2[8];  // [bp-0x1d0], Other Possible Types: char *, unsigned long long
    struct struct_0 v3[8];  // [bp-0x1d0]
    unsigned long long v4;  // [bp-0x1c8]
    char *v5;  // [bp-0x1c0]
    char v6;  // [bp-0x1b8], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x1b0], Other Possible Types: char *
    unsigned long long v8;  // [bp-0x1a8]
    char *v9;  // [bp-0x1a0]
    unsigned long long v10;  // [bp-0x198]
    char *v11;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x188]
    char *v13;  // [bp-0x180]
    char *v14;  // [bp-0x178]
    unsigned long long v15;  // [bp-0x170]
    char *v16;  // [bp-0x168]
    unsigned long long v17;  // [bp-0x160]
    void* v18;  // [bp-0x158]
    int v19;  // [bp-0x138], Other Possible Types: char
    unsigned int v20;  // [bp-0x134]
    unsigned long long v21;  // [bp-0x130]
    char *v22;  // [bp-0x128]
    unsigned long long v23;  // [bp-0x118]
    unsigned long long v24;  // [bp-0x110]
    unsigned long long v25;  // [bp-0x108]
    unsigned long long v26;  // [bp-0x100]
    unsigned long long v27;  // [bp-0xf0]
    unsigned long long v28;  // [bp-0xe8]
    unsigned long v29;  // [bp-0xe0]
    unsigned long v30;  // [bp-0xd8]
    unsigned long v31;  // [bp-0xd0]
    unsigned long long v32;  // [bp-0xc8]
    char v33;  // [bp-0xc0]
    int v34;  // [bp-0xb0]
    int v35;  // [bp-0x78]
    int v36;  // [bp-0x68]
    int v37;  // [bp-0x58]
    int v38;  // [bp-0x48]
    struct_3 *v40;  // rbp
    char *v41;  // rbx
    unsigned long long v42;  // r15
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rcx
    unsigned long long v46;  // rbx

    v40 = a0;
    *((int *)&v31) = (a0->field_38 ? "*blake2bdescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOT" : " *blake2bdescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENO");
    v32 = 1;
    v23 = 16;
    *((uint128_t *)&v38) = a1[3];
    *((uint128_t *)&v37) = a1[2];
    *((uint128_t *)&v36) = a1[1];
    *((uint128_t *)&v35) = a1[0];
    v29 = &a0->padding_20;
    v30 = &a0->field_10;
    v27 = 16;
    v0 = 1;
    v41 = &v1;
    while (true)
    {
        v42 = v35.next();
        if (!v42)
        {
            v46 = (!((char)v0 & 1) ? v27.new(v28) : 0);
            break;
        }
        v14.components(v42, v43);
        v41.components("-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rsb2sumlengthbinary) = TermwarnZeromany", 1);
        if (v14.eq(v41))
        {
            v44 = std::io::stdio::stdin().new();
            v45 = &g_5f8760;
            goto LABEL_4c4dd4;
        }
        else
        {
            v19.open(v42, v43);
            if (!(v19 & 1))
            {
                v44 = v20.new();
                v45 = &g_5f8708;
LABEL_4c4dd4:
                v34.with_capacity(0x2000, v44, v45);
                uucore::features::checksum::digest_reader(v41, v30, &v34, v40->field_38, v40->field_30);
                v14.map_err_context(v41);
                v46 = v15;
                if (!((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63)))
                {
                    v11 = v14;
                    v12 = v46;
                    v13 = v16;
                    v40 = a0;
                    uucore::features::checksum::escape_filename(v41, v42, v43);
                    v22 = v5;
                    *((int128_t *)&v19) = *((int128_t *)&v2);
                    memcpy(&v33, &v6, 16);
                    if (a0->field_39)
                    {
                        if (!(char)a0->field_0.equal(a0->field_8, "blake2bdescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTB", 7))
                        {
                            alloc::str::<impl str>::to_ascii_uppercase(&v25, a0->field_0, a0->field_8);
                            v2 = &v33;
                            v4 = <&T as core::fmt::Display>::fmt;
                            v5 = &v25;
                            v6 = <alloc::string::String as core::fmt::Display>::fmt;
                            v7 = &(char)v19;
                            v8 = <alloc::string::String as core::fmt::Display>::fmt;
                            v9 = &v11;
                            v10 = <alloc::string::String as core::fmt::Display>::fmt;
                            v14 = &g_5f8628;
                            v15 = 5;
                            v18 = 0;
                            v16 = v41;
                            v17 = 4;
                            std::io::stdio::_print(&v14);
                            ::0x4c56f0::core::ptr::drop_in_place<alloc::string::String>(&v25);
                        }
                        else if (a0->field_18->field_30(a0->field_10) == 0x200)
                        {
                            v14 = &(char)v19;
                            v15 = <alloc::string::String as core::fmt::Display>::fmt;
                            v16 = &v11;
                            v17 = <alloc::string::String as core::fmt::Display>::fmt;
                            v2 = &g_5f85b8;
                            v4 = 3;
                            v7 = 0;
                            v5 = &v14;
                            v6 = 2;
                            std::io::stdio::_print(v41);
                        }
                        else
                        {
                            v25 = a0->field_18->field_30(a0->field_10);
                            v2 = &v25;
                            v4 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v5 = &(char)v19;
                            v6 = <alloc::string::String as core::fmt::Display>::fmt;
                            v7 = &v11;
                            v8 = <alloc::string::String as core::fmt::Display>::fmt;
                            v14 = &g_5f85e8;
                            v15 = 4;
                            v18 = 0;
                            v16 = v41;
                            v17 = 3;
                            std::io::stdio::_print(&v14);
                        }
                    }
                    else
                    {
                        if (a0->field_3a)
                        {
                            v14 = &v11;
                            v15 = <alloc::string::String as core::fmt::Display>::fmt;
                            v2 = &g_5f8468;
                            v4 = 2;
                            v7 = 0;
                            v5 = &v14;
                            v6 = 1;
                            std::io::stdio::_print(v41);
                        }
                        else if (a0->field_3b)
                        {
                            v25 = v42;
                            v26 = v43;
                            v2 = &v11;
                            v4 = <alloc::string::String as core::fmt::Display>::fmt;
                            v5 = &v31;
                            v6 = <&T as core::fmt::Display>::fmt;
                            v7 = &v25;
                            v8 = <std::path::Display as core::fmt::Display>::fmt;
                            v14 = &g_5f8678;
                            v15 = 4;
                            v18 = 0;
                            v16 = v41;
                            v17 = 3;
                            std::io::stdio::_print(&v14);
                        }
                        else
                        {
                            v2 = &v33;
                            v4 = <&T as core::fmt::Display>::fmt;
                            v5 = &v11;
                            v6 = <alloc::string::String as core::fmt::Display>::fmt;
                            v7 = &v31;
                            v8 = <&T as core::fmt::Display>::fmt;
                            v9 = &(char)v19;
                            v10 = <alloc::string::String as core::fmt::Display>::fmt;
                            v14 = &g_5f86b8;
                            v15 = 5;
                            v18 = 0;
                            v16 = v41;
                            v17 = 4;
                            std::io::stdio::_print(&v14);
                        }
                    }
                    ::0x4c56f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v19);
                    ::0x4c56f0::core::ptr::drop_in_place<alloc::string::String>(&v11);
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v34);
                }
                else
                {
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v34);
                    core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::ChecksumError>>(&v23);
                    break;
                }
            }
            else
            {
                v11 = v21;
                v25.to_string_lossy(v42, v43);
                *((unsigned long *)&v3[0]) = v29;
                v4 = <&T as core::fmt::Display>::fmt;
                v5 = &v25;
                v6 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                v7 = &v11;
                v8 = <std::io::error::Error as core::fmt::Display>::fmt;
                v14 = &g_5f8578;
                v15 = 4;
                v18 = 0;
                v16 = v41;
                v17 = 3;
                std::io::stdio::_eprint(&v14);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v25);
                core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::ChecksumError>>(&v23);
                v23 = 15;
                v28 = v11;
                v24 = v28;
                v27 = 15;
                v0 = 0;
            }
        }
    }
    core::ptr::drop_in_place<uu_hashsum::Options>(a0->field_10, a0->field_18);
    return v46;
}
