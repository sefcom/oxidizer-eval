long long uu_touch::parse_timestamp(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x1e4]
    unsigned long v2;  // [bp-0x1e0], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x1dc]
    char *v4;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x1d0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x1c8]
    char *v7;  // [bp-0x1b8], Other Possible Types: void*, char
    int v8;  // [bp-0x1b8]
    int v9;  // [bp-0x1b0], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x1a8], Other Possible Types: unsigned long long
    char v11;  // [bp-0x1a0], Other Possible Types: unsigned int, unsigned long long
    int v12;  // [bp-0x198], Other Possible Types: void*, unsigned int
    int v13;  // [bp-0x190]
    char *v14;  // [bp-0x188]
    char v15;  // [bp-0x180]
    int v16;  // [bp-0x178]
    unsigned long long v17;  // [bp-0x160]
    unsigned long long v18;  // [bp-0x158]
    char *v19;  // [bp-0x150]
    unsigned long long v20;  // [bp-0x148]
    unsigned long long v21;  // [bp-0x140]
    unsigned int v22;  // [bp-0x134]
    unsigned long long v23;  // [bp-0x130]
    unsigned long long v24;  // [bp-0x128]
    unsigned int v25;  // [bp-0x120]
    char v26;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x110]
    char *v28;  // [bp-0x108]
    char v29;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0xf8]
    char *v31;  // [bp-0xf0]
    int v32;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v33;  // [bp-0xd8]
    char v36;  // [bp-0xb8]
    unsigned long long v37;  // [bp-0xa8]
    char v38;  // [bp-0xa0]
    unsigned long long v39;  // [bp-0x90]
    char v40;  // [bp-0x88]
    char *v41;  // [bp-0x78]
    char v42;  // [bp-0x70]
    char *v43;  // [bp-0x60]
    unsigned long long v49;  // rax
    unsigned long long v50;  // rsi
    unsigned long long v51;  // r8
    unsigned long long v52;  // rcx
    char *v53;  // rdx
    unsigned long long v54;  // rax
    char *v55;  // edx

    v20 = a1;
    v21 = a2;
    a1.count(a1 + a2);
    switch (a1.count(a1 + a2))
    {
    case 8:
        (char)v0.now();
        v7.overflowing_add_offset(&(char)v0, v3);
        v12 = *((int *)&v7) >> 13;
        v7 = &v12;
        v9 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v10 = &v20;
        v11 = <&T as core::fmt::Display>::fmt;
        v0 = &g_462520;
        v2 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        v29.map_or_else(&(char)v0);
        v49 = v29;
        v50 = v30;
        v51 = 10;
        v52 = "%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs";
        v53 = v31;
        break;
    case 10:
        uu_touch::prepend_century(&(char)v0, a1, a2);
        v49 = v0;
        v50 = v2;
        v53 = v4;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            a0->field_8 = v2;
            a0->field_10 = v53;
            a0->field_0 = 1;
            return a0;
        }
        goto LABEL_5b6cd4;
    case 11:
        (char)v0.now();
        v7.overflowing_add_offset(&(char)v0, v3);
        v12 = (int)v7 >> 13;
        v7 = &v12;
        v9 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v10 = &v20;
        v11 = <&T as core::fmt::Display>::fmt;
        v0 = &g_462520;
        v2 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        v26.map_or_else(&(char)v0);
        v49 = v26;
        v50 = v27;
        v51 = 13;
        v52 = "%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs";
        v53 = v28;
        break;
    case 12:
        (char)v0.to_vec(a1, a2);
        v49 = v0;
        v50 = v2;
        v4 = v53;
LABEL_5b6cd4:
        v51 = 10;
        v52 = "%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs";
        break;
    case 13:
        uu_touch::prepend_century(&(char)v0, a1, a2);
        v49 = v0;
        v50 = v2;
        v53 = v4;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            a0->field_8 = v50;
            a0->field_10 = v53;
            a0->field_0 = 1;
            return a0;
        }
LABEL_5b6d1b:
        v51 = 13;
        v52 = "%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs";
        break;
    case 15:
        (char)v0.to_vec(a1, a2);
        v49 = v0;
        v50 = v2;
        v4 = v53;
        goto LABEL_5b6d1b;
    default:
        (char)v7.to_vec("datethur]", 4);
        v12 = 0;
        *((int128_t *)&v13) = *((int128_t *)&v20);
        v15 = 1;
        (char)v0.spec_to_string(&v12);
        v37 = v10;
        memcpy(&v36, &v7, 16);
        memcpy(&v38, &(char)v0, 16);
        v39 = v4;
        (char)v0.from_iter(&v36);
        uucore::mods::locale::get_message_with_args(&(char)v7, "touch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 31, &(char)v0);
        v11 = 1;
        *((double *)&a0->field_8) = (char)v7.new();
        a0->field_10 = &g_770528;
        a0->field_0 = 1;
        return a0;
    }
    v17 = v49;
    v18 = v50;
    v19 = v53;
    (char)v0.parse_from_str(v50, v53, v52, v51);
    if ((int)v0)
    {
        v22 = v0;
        v23 = *((long long *)&v1);
        (unsigned long long)v8.offset_from_local_datetime(1, &v22);
        (char)v0.and_then(&(unsigned long long)v8, &v22);
        if ((int)v0)
        {
            (char)v0.to_vec("datethur]", 4);
            v14 = v4;
            *((int128_t *)&v12) = *((int128_t *)&v0);
            v7 = 0;
            *((int128_t *)&v9) = *((int128_t *)&v18);
            v11 = 1;
            (char)v0.spec_to_string(&v7);
            v41 = v14;
            memcpy(&v40, &v12, 16);
            memcpy(&v42, &v0, 16);
            v43 = v4;
            (char)v0.from_iter(&v40);
            uucore::mods::locale::get_message_with_args(&v32, "touch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mo", 34, &(char)v0);
            v5 = 1;
            v0 = v32;
            v4 = v33;
            v54 = (char)v0.new();
LABEL_5b7089:
            a0->field_8 = v54;
            a0->field_10 = &g_770528;
            a0->field_0 = 1;
        }
        else
        {
            *((int128_t *)&v16) = *((int128_t *)&v1);
            (char)v0.overflowing_add_offset(&(char)v16, (int)(&v16)[12]);
            if ((v1 * 4008636143 - 286331157 >> 2 | (v1 * 4008636143 - 286331157) * 0x40000000) <= 71582787 && (char)core::slice::<impl [T]>::ends_with(v18, v19, ".60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 3))
                (char)v16.add_assign();
            (char)v0.checked_add_signed(&(char)v16);
            if (!(int)v0)
                core::option::expect_failed("`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/builder/command.rs", 33, &g_7705d8); /* do not return */
            *((int128_t *)&v8) = *((int128_t *)&v0);
            (char)v0.checked_sub_signed(&(unsigned long long)v8);
            if (!(int)v0)
                core::option::expect_failed("`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 33, &g_7705f0); /* do not return */
            v25 = v2;
            v24 = v0;
            (char)v0.overflowing_add_offset(&(char)v16, (int)(&v16)[12]);
            (char)v0.overflowing_add_offset(&v24, v3);
            a0->field_8 = uu_touch::datetime_to_filetime(&(char)v16);
            a0->field_10 = v55;
            a0->field_0 = 0;
        }
        ::0x5b1e90::core::ptr::drop_in_place<alloc::string::String>(&v17);
        return a0;
    }
    v54 = uu_touch::parse_timestamp::{{closure}}(v18, v19);
    goto LABEL_5b7089;
}
