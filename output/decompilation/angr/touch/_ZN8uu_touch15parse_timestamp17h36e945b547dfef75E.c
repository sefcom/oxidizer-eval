long long uu_touch::parse_timestamp(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[3];  // [bp-0x148]
    unsigned int v1;  // [bp-0x144]
    unsigned long long v2;  // [bp-0x140]
    unsigned long long v3;  // [bp-0x140], Other Possible Types: unsigned long
    unsigned int v4;  // [bp-0x13c]
    char *v5;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x128]
    int v8;  // [bp-0x118], Other Possible Types: void*, char
    char *v9;  // [bp-0x118]
    unsigned long v10;  // [bp-0x110], Other Possible Types: unsigned long long
    char *v11;  // [bp-0x108], Other Possible Types: unsigned long long
    char v12;  // [bp-0x100], Other Possible Types: unsigned int, unsigned long long
    char *v13;  // [bp-0xf8]
    unsigned long long v14;  // [bp-0xf0]
    int v15;  // [bp-0xe8]
    unsigned int v16;  // [bp-0xdc]
    void* v17;  // [bp-0xd8], Other Possible Types: unsigned long long, unsigned int
    unsigned long v18;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0xc8]
    char v20;  // [bp-0xc0]
    unsigned int v21;  // [bp-0xb4]
    unsigned long long v22;  // [bp-0xb0]
    unsigned long long v23;  // [bp-0xa8]
    unsigned long long v24;  // [bp-0xa0]
    unsigned long long v25;  // [bp-0x98]
    unsigned int v26;  // [bp-0x90]
    char v27;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long v28;  // [bp-0x80]
    unsigned long long v29;  // [bp-0x78]
    char v30;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long v31;  // [bp-0x68]
    unsigned long long v32;  // [bp-0x60]
    int v33;  // [bp-0x58], Other Possible Types: char
    unsigned long long v34;  // [bp-0x48]
    unsigned long long v38;  // rax
    unsigned long v39;  // r14
    unsigned long long v40;  // r8
    unsigned long long v41;  // rcx
    unsigned long long v42;  // r15
    unsigned long v43;  // rax
    unsigned int v44;  // edx

    v23 = a1;
    v24 = a2;
    a1.count(a1 + a2);
    switch (a1.count(a1 + a2))
    {
    case 8:
        (char)v0.now();
        v8.overflowing_add_offset(&(char)v0, v4);
        v17 = *((int *)&v8) >> 13;
        v9 = &v17;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v11 = &v23;
        v12 = <&T as core::fmt::Display>::fmt;
        *(v0) = &g_4574b0;
        v3 = 2;
        v7 = 0;
        v5 = &v9;
        v6 = 2;
        v30.map_or_else(&(char)v0);
        v38 = v30;
        v39 = v31;
        v40 = 10;
        v41 = "%Y%m%d%H%M%Y%m%dUTC%#z%#z";
        v42 = v32;
        break;
    case 10:
        uu_touch::prepend_century(&(char)v0, a1, a2);
        v38 = v0[0];
        v39 = v3;
        v42 = v5;
        if ((char)(((0 ^ v0[0]) & (0 ^ -(v0[0]))) >> 63))
        {
            *((unsigned long *)&a0[8]) = v3;
            *((unsigned long long *)&a0[16]) = v42;
            *((unsigned long long *)a0) = 1;
            return a0;
        }
        goto LABEL_53b1d9;
    case 11:
        (char)v0.now();
        v8.overflowing_add_offset(&(char)v0, v4);
        v17 = (int)v9 >> 13;
        v9 = &v17;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v11 = &v23;
        v12 = <&T as core::fmt::Display>::fmt;
        *(v0) = &g_4574b0;
        v3 = 2;
        v7 = 0;
        v5 = &v9;
        v6 = 2;
        v27.map_or_else(&(char)v0);
        v38 = v27;
        v39 = v28;
        v40 = 13;
        v41 = "%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC%#z%#z";
        v42 = v29;
        break;
    case 12:
        (char)v0.to_vec(a1, a2);
        v38 = v0[0];
        v39 = v3;
LABEL_53b1d9:
        v40 = 10;
        v41 = "%Y%m%d%H%M%Y%m%dUTC%#z%#z";
        break;
    case 13:
        uu_touch::prepend_century(&(char)v0, a1, a2);
        v38 = v0[0];
        v39 = v3;
        v42 = v5;
        if ((char)(((0 ^ v0[0]) & (0 ^ -(v0[0]))) >> 63))
        {
            *((unsigned long *)&a0[8]) = v39;
            *((unsigned long long *)&a0[16]) = v42;
            *((unsigned long long *)a0) = 1;
            return a0;
        }
LABEL_53b220:
        v40 = 13;
        v41 = "%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC%#z%#z";
        break;
    case 15:
        (char)v0.to_vec(a1, a2);
        v38 = v0[0];
        v39 = v3;
        goto LABEL_53b220;
    default:
        v17 = 0;
        v18 = a1;
        v19 = a2;
        v20 = 1;
        v13 = &v17;
        v14 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(v0) = &g_679f00;
        v2 = 1;
        v7 = 0;
        v5 = &v13;
        v6 = 1;
        (char)v8.map_or_else(&(char)v0);
        v12 = 1;
        *((double *)&a0[8]) = (char)v8.new();
        *((unsigned long long **)&a0[16]) = &g_679e10;
        *((unsigned long long *)a0) = 1;
        return a0;
    }
    v17 = v38;
    v18 = v39;
    v19 = v42;
    (char)v0.parse_from_str(v39, v42, v41, v40);
    if ((int)v0[0])
    {
        v21 = v0[0];
        v22 = *((long long *)&v1);
        (unsigned long long)v8.offset_from_local_datetime(1, &v21);
        (char)v0.and_then(&(unsigned long long)v8, &v21);
        if ((int)v0[0])
        {
            v8 = 0;
            v10 = v39;
            v11 = v42;
            v12 = 1;
            v13 = &v8;
            v14 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(v0) = &g_679ef0;
            v2 = 1;
            v7 = 0;
            v5 = &v13;
            v6 = 1;
            v33.map_or_else(&(char)v0);
            v6 = 1;
            *((void*)v0) = v33;
            v5 = v34;
            v43 = (char)v0.new();
LABEL_53b4f0:
            *((unsigned long *)&a0[8]) = v43;
            *((unsigned long long **)&a0[16]) = &g_679e10;
            *((unsigned long long *)a0) = 1;
        }
        else
        {
            *((int128_t *)&v15) = *((int128_t *)&v1);
            (char)v0.overflowing_add_offset(&(char)v15, v16);
            if ((v1 * 4008636143 - 286331157 >> 2 | (v1 * 4008636143 - 286331157) * 0x40000000) <= 71582787 && (char)core::slice::<impl [T]>::ends_with(v39, v42))
                (char)v15.add_assign(1);
            (char)v0.checked_add_signed(&(char)v15);
            if (!(int)v0[0])
                core::option::expect_failed("`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/error.rs", 33, &g_679f10); /* do not return */
            *((int128_t *)&v8) = *((int128_t *)&v0[0]);
            (char)v0.checked_sub_signed(&(unsigned long long)v8);
            if (!(int)v0[0])
                core::option::expect_failed("`DateTime - TimeDelta` overflowed/dev/stdoutUnable to parse date: Source has invalid access or modification time: GetFinalPathNameByHandleW failed with code ", 33, &g_679f28); /* do not return */
            v26 = v3;
            v25 = v0[0];
            (char)v0.overflowing_add_offset(&(char)v15, v16);
            (char)v0.overflowing_add_offset(&v25, v4);
            *((long long *)&a0[8]) = uu_touch::datetime_to_filetime(&(char)v15);
            *((unsigned int *)&a0[16]) = v44;
            *((unsigned long long *)a0) = 0;
        }
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        return a0;
    }
    v43 = uu_touch::parse_timestamp::{{closure}}(v39, v42);
    goto LABEL_53b4f0;
}
