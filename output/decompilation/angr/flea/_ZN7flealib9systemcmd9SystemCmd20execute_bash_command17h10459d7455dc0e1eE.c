long long flealib::systemcmd::SystemCmd::execute_bash_command(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x310]
    char *v2;  // [bp-0x308]
    unsigned long long v3;  // [bp-0x300]
    char *v4;  // [bp-0x2f8], Other Possible Types: void*
    unsigned long long v5;  // [bp-0x2f0]
    int v6;  // [bp-0x2e8], Other Possible Types: char
    char *v7;  // [bp-0x2d8], Other Possible Types: unsigned long long
    struct struct_1 v8[16];  // [bp-0x2c8]
    char *v9;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x2b0]
    char *v11;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x2a0]
    void* v13;  // [bp-0x298]
    unsigned long long v14;  // [bp-0x288]
    int v15;  // [bp-0x288]
    unsigned long long v16;  // [bp-0x280]
    int v17;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x270]
    int v19;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x260]
    unsigned long long v21;  // [bp-0x258]
    int v22;  // [bp-0x250], Other Possible Types: char
    unsigned long long v23;  // [bp-0x240]
    char *v24;  // [bp-0x238]
    int v25;  // [bp-0x238]
    unsigned long long v26;  // [bp-0x230]
    unsigned long long v27;  // [bp-0x228]
    char v28;  // [bp-0x220]
    unsigned long v29;  // [bp-0x210]
    int v30;  // [bp-0x208]
    unsigned long long v31;  // [bp-0x1f8]
    char *v32;  // [bp-0x1f0]
    unsigned long long v33;  // [bp-0x1e8]
    char *v34;  // [bp-0x1e0]
    unsigned long long v35;  // [bp-0x1d8]
    int v36;  // [bp-0x1d0]
    int v37;  // [bp-0x1c0]
    unsigned long long v38;  // [bp-0x1b0]
    int v39;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v40;  // [bp-0x198]
    int v41;  // [bp-0x190], Other Possible Types: char
    char *v42;  // [bp-0x180]
    unsigned long long v43;  // [bp-0x178]
    unsigned long long v44;  // [bp-0x170]
    char *v45;  // [bp-0x168]
    unsigned long long v46;  // [bp-0x160]
    void* v47;  // [bp-0x158]
    char v48;  // [bp-0xa8]
    void* v49;  // [bp-0x40]
    unsigned long long v50;  // [bp-0x38]
    unsigned short v51;  // [bp-0x30]
    unsigned long long v53;  // 4096
    unsigned long long v54;  // 4096
    unsigned long long v56;  // r14
    int v57;  // xmm0

    *((unsigned long long *)&v8[0]) = a2;
    v53 = a2;
    v54 = a3;
    if (::0x772480::core::sync::atomic::atomic_load() >= 4)
    {
        v0 = &v8[0].field_0;
        v34 = &v0;
        v35 = <&T as core::fmt::Display>::fmt;
        v43 = &g_b08f50;
        v44 = 1;
        v47 = 0;
        v45 = &v34;
        v46 = 1;
        v14 = "flealib::systemcmd/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
        v16 = 18;
        v17 = "flealib::systemcmd/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
        v18 = 18;
        v19 = log::__private_api::loc(&g_b08fb0);
        log::__private_api::log(&v43, 4, &v14);
        *((struct struct_1 [16])&v53) = v8;
        v54 = a3;
    }
    v56 = v54;
    v48.new(v53, v56, "cd Use 'cd' command to change a directory", 3);
    v49 = 0;
    v50 = v56;
    v51 = 1;
    v28.from_iter(&v48, &g_b08fc8);
    if (v29 > 1)
    {
        v43.to_vec("Use 'cd' command to change a directory", 38);
        a0->field_10 = v45;
        a0->field_0 = *((int128_t *)&v43);
        ::0x771c70::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v28);
        return a0;
    }
    v43.new(v8, a3);
    v34.output(&v43);
    if ((char)(((0 ^ v34) & (0 ^ -(v34))) >> 63))
    {
        v14 = v35;
        a0.spec_to_string(&v14);
        ::0x771ac0::core::ptr::drop_in_place<std::io::error::Error>(v35);
    }
    else
    {
        v21 = v38;
        v57 = *((int128_t *)&v34);
        v19 = v37;
        v17 = v36;
        v15 = v57;
        v9 = &v21;
        v10 = <std::process::ExitStatus as core::fmt::Display>::fmt;
        v0 = &g_b08f60;
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        v39.map_or_else(&v0);
        v30 = v39;
        v31 = v40;
        v9.from_utf8_lossy(v19, v20);
        v0.to_vec(v10, v11);
        v7 = v2;
        memcpy(&v6, &v0, 16);
        v24 = &v6;
        v26 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_b08f80;
        v1 = 2;
        v4 = 0;
        v2 = &v24;
        v3 = 1;
        v22.map_or_else(&v0);
        ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v6);
        ::0x771c60::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v9);
        v25 = v22;
        v27 = v23;
        v9.from_utf8_lossy(v16, v17);
        v0.to_vec(v10, v11);
        v7 = v2;
        memcpy(&v6, &v0, 16);
        v32 = &v6;
        v33 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_b08fa0;
        v1 = 1;
        v4 = 0;
        v2 = &v32;
        v3 = 1;
        v22.map_or_else(&v0);
        ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v6);
        ::0x771c60::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v9);
        v6 = v22;
        v7 = v23;
        v0 = &v30;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &v24;
        v3 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &v6;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = &g_46a830;
        v10 = 3;
        v13 = 0;
        v11 = &v0;
        v12 = 3;
        v41.map_or_else(&v9);
        a0->field_10 = v42;
        *((void*)&a0->field_0) = v41;
        ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v6);
        ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v24);
        ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v30);
        core::ptr::drop_in_place<std::process::Output>(&v14);
    }
    ::0x771c70::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v28);
    core::ptr::drop_in_place<std::process::Command>(&v43);
    return a0;
}
