long long uu_hashsum::hashsum(struct_3 *a0)
{
    struct struct_0 v0[8];  // [bp-0x1a0]
    struct struct_0 v1[8];  // [bp-0x1a0], Other Possible Types: char *, unsigned long long
    unsigned long long v2;  // [bp-0x198]
    char *v4;  // [bp-0x190]
    unsigned long long v5;  // [bp-0x188]
    void* v6;  // [sp-0x180], Other Possible Types: char *
    unsigned long long v7;  // [sp-0x178]
    char *v8;  // [bp-0x170]
    unsigned long long v9;  // [bp-0x168]
    struct_3 *v10;  // [bp-0x160]
    unsigned long v11;  // [bp-0x158]
    char *v12;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x148]
    char *v14;  // [bp-0x140]
    char *v16;  // [bp-0x138]
    unsigned long long v17;  // [sp-0x130]
    char *v18;  // [bp-0x128]
    unsigned long long v19;  // [sp-0x120]
    void* v20;  // [sp-0x118]
    int v21;  // [bp-0xf8], Other Possible Types: char
    unsigned int v22;  // [bp-0xf4]
    unsigned long long v23;  // [bp-0xf0]
    char *v24;  // [bp-0xe8]
    unsigned long long v25;  // [bp-0xe0]
    unsigned long long v26;  // [bp-0xd8]
    unsigned long long v27;  // [bp-0xd0]
    unsigned long long v28;  // [bp-0xc8]
    unsigned long long v29;  // [bp-0xc0]
    unsigned long v30;  // [bp-0xb0]
    unsigned long long v31;  // [bp-0xa8]
    unsigned long v32;  // [bp-0xa0]
    unsigned long v33;  // [bp-0x98]
    unsigned long long v34;  // [bp-0x90]
    unsigned long long v35;  // [bp-0x88]
    unsigned long long v36;  // [bp-0x80]
    char v37;  // [bp-0x78]
    char v38;  // [bp-0x68]
    struct_3 *v40;  // rbx
    unsigned long long v41;  // rax
    unsigned long long v42;  // r15
    char *v43;  // r13
    unsigned long long v44;  // rdx
    unsigned long long v45;  // r14
    unsigned long long v46;  // r14
    unsigned long long v47;  // rax
    unsigned long long v48;  // rcx
    unsigned long long v49;  // r15
    unsigned long v50;  // r13
    void* v52;  // r15
    unsigned long v53;  // rax

    v40 = a0;
    *((int *)&v33) = (a0->field_38 ? "*blake2bdescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOT" : " *blake2bdescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENO");
    v34 = 1;
    v26 = 16;
    v35 = "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rsb2sumlengthbinary) = TermwarnZeromany";
    v36 = 1;
    v41 = v35.next();
    if (v41)
    {
        v42 = v41;
        v32 = &a0->padding_20;
        v11 = &a0->field_10;
        v30 = &a0->field_18;
        v25 = 16;
        v43 = &v0;
        v10 = a0;
        do
        {
            v46 = v45;
            v16.components(v42, v46);
            v43.components("-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rsb2sumlengthbinary) = TermwarnZeromany", 1);
            if (v16.eq(v43))
            {
                v47 = std::io::stdio::stdin().new();
                v48 = &g_5f8760;
            }
            else
            {
                v21.open(v42, v46);
                if ((v21 & 1))
                {
                    v12 = v23;
                    v28.to_string_lossy(v42, v46);
                    *((unsigned long *)&v1[0]) = v32;
                    v2 = <&T as core::fmt::Display>::fmt;
                    v4 = &v28;
                    v5 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v6 = &v12;
                    v7 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v16 = &g_5f8578;
                    v17 = 4;
                    v20 = 0;
                    v18 = v43;
                    v19 = 3;
                    std::io::stdio::_eprint(&v16);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v28);
                    v49 = v12;
                    core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::ChecksumError>>(&v26);
                    v26 = 15;
                    v31 = v49;
                    v27 = v49;
                    v25 = 15;
                    continue;
                }
                else
                {
                    v47 = v22.new();
                    v48 = &g_5f8708;
                }
            }
            v38.with_capacity(0x2000, v47, v48);
            uucore::features::checksum::digest_reader(v43, v11, &v38, v40->field_38, v40->field_30);
            v16.map_err_context(v43);
            if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
            {
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v38);
                core::ptr::drop_in_place<core::option::Option<uucore::features::checksum::ChecksumError>>(&v26);
                core::ptr::drop_in_place<uu_hashsum::Options>(*((long long *)v11), *((long long *)v30));
                return v13;
            }
            v12 = v16;
            v14 = v18;
            v40 = v10;
            uucore::features::checksum::escape_filename(v43, v42, v46);
            v24 = v4;
            *((int128_t *)&v21) = *((int128_t *)&v1);
            memcpy(&v37, &v5, 16);
            if (v10->field_39)
            {
                if (!(char)v10->field_0.equal(v10->field_8, "blake2bdescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTB", 7))
                {
                    alloc::str::<impl str>::to_ascii_uppercase(&v28, v10->field_0, v10->field_8);
                    v1 = &v37;
                    v2 = <&T as core::fmt::Display>::fmt;
                    v4 = &v28;
                    v5 = <alloc::string::String as core::fmt::Display>::fmt;
                    v6 = &(char)v21;
                    v7 = <alloc::string::String as core::fmt::Display>::fmt;
                    v8 = &v12;
                    v9 = <alloc::string::String as core::fmt::Display>::fmt;
                    v16 = &g_5f8628;
                    v17 = 5;
                    v20 = 0;
                    v18 = v43;
                    v19 = 4;
                    std::io::stdio::_print(&v16);
                    ::0x4c56f0::core::ptr::drop_in_place<alloc::string::String>(&v28);
                }
                else if (*((long long *)(*((long long *)v30) + 48))(*((long long *)v11)) == 0x200)
                {
                    v16 = &(char)v21;
                    v17 = <alloc::string::String as core::fmt::Display>::fmt;
                    v18 = &v12;
                    v19 = <alloc::string::String as core::fmt::Display>::fmt;
                    v1 = &g_5f85b8;
                    v2 = 3;
                    v6 = 0;
                    v4 = &v16;
                    v5 = 2;
                    std::io::stdio::_print(v43);
                }
                else
                {
                    v28 = *((long long *)(*((long long *)v30) + 48))(*((long long *)v11));
                    v1 = &v28;
                    v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v4 = &(char)v21;
                    v5 = <alloc::string::String as core::fmt::Display>::fmt;
                    v6 = &v12;
                    v7 = <alloc::string::String as core::fmt::Display>::fmt;
                    v16 = &g_5f85e8;
                    v17 = 4;
                    v20 = 0;
                    v18 = v43;
                    v19 = 3;
                    std::io::stdio::_print(&v16);
                }
            }
            else
            {
                if (v10->field_3a)
                {
                    v16 = &v12;
                    v17 = <alloc::string::String as core::fmt::Display>::fmt;
                    v1 = &g_5f8468;
                    v2 = 2;
                    v6 = 0;
                    v4 = &v16;
                    v5 = 1;
                    std::io::stdio::_print(v43);
                }
                else if (v10->field_3b)
                {
                    v28 = v42;
                    v29 = v46;
                    v1 = &v12;
                    v2 = <alloc::string::String as core::fmt::Display>::fmt;
                    v4 = &v33;
                    v5 = <&T as core::fmt::Display>::fmt;
                    v6 = &v28;
                    v7 = <std::path::Display as core::fmt::Display>::fmt;
                    v16 = &g_5f8678;
                    v17 = 4;
                    v20 = 0;
                    v18 = v43;
                    v19 = 3;
                    std::io::stdio::_print(&v16);
                }
                else
                {
                    v1 = &v37;
                    v2 = <&T as core::fmt::Display>::fmt;
                    v4 = &v12;
                    v5 = <alloc::string::String as core::fmt::Display>::fmt;
                    v6 = &v33;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v8 = &(char)v21;
                    v9 = <alloc::string::String as core::fmt::Display>::fmt;
                    v16 = &g_5f86b8;
                    v17 = 5;
                    v20 = 0;
                    v18 = v43;
                    v19 = 4;
                    std::io::stdio::_print(&v16);
                }
            }
            ::0x4c56f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v21);
            ::0x4c56f0::core::ptr::drop_in_place<alloc::string::String>(&v12);
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v38);
            v42 = v35.next();
            v44 = v44;
        } while (v42);
        if (v25 == 16)
            goto LABEL_4c4b27;
        v52 = v25.new(v31);
    }
    else
    {
LABEL_4c4b27:
        v52 = 0;
    }
    v50 = &v40->field_10;
    v53 = &v40->field_18;
    core::ptr::drop_in_place<uu_hashsum::Options>(*((long long *)v50), *((long long *)v53));
    return v52;
}
