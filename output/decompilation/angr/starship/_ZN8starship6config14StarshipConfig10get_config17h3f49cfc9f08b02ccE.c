long long starship::config::StarshipConfig::get_config(unsigned long long *a0, unsigned long long *a1, unsigned long long a2)
{
    char *v0;  // [bp-0x100]
    unsigned long long v1[2];  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    char *v4;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v5;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xc8]
    char *v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    char *v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x70]
    char v17;  // [bp-0x68]
    unsigned long long v18[2];  // [bp-0x50], Other Possible Types: char
    char v19;  // [bp-0x48]
    unsigned long long *v21;  // rbx
    unsigned long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r13
    unsigned long long v25;  // rcx
    unsigned long long *v26;  // rax
    unsigned long long *v28;  // r12
    unsigned long long v29;  // rax

    if ((char)(((0 ^ *(a0)) & (0 ^ -(*(a0)))) >> 63))
        return 0;
    v16 = a2;
    if (!a2)
    {
        v2 = &g_11f2660;
        v3 = 1;
        v4 = 8;
        *((uint128_t *)&v5) = 0;
        core::panicking::assert_failed(1, &v16, &g_523ff0, &v2, &g_11f26d0); /* do not return */
    }
    v21 = a0;
    v22 = a2 - 1;
    core::slice::<impl [T]>::split_at_unchecked(&v18, a1, a2, v22);
    if (*((long long *)&v19))
    {
        v23 = *((long long *)&v19) * 16;
        do
        {
            v24 = v23;
            v1[0] = v18;
            v26 = v21.get(v18[0], v18[1], v25);
            if (!v26)
            {
                v21 = v21;
                if (v21.get_index_of(v18[0], v18[1], v25) != 1)
                    continue;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) < 5)
                    return 0;
                alloc::str::join_generic_copy(&v17, a1, a2, "./rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/list.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/zero.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/array.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/waker.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/context.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rsfatal runtime error: something here is badly broken!, aborting\n", 1);
                v0 = &v1;
                v7 = &v17;
                v8 = <alloc::string::String as core::fmt::Display>::fmt;
                v9 = &v0;
                v10 = <&T as core::fmt::Display>::fmt;
                v2 = &g_11f2670;
                v3 = 3;
                v6 = 0;
                v4 = &v7;
                v5 = 2;
                v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                v12 = 16;
                v13 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                v14 = 16;
                v15 = log::__private_api::loc(&g_11f2718);
                log::__private_api::log(&v2, 5, &v11);
                goto LABEL_b627f5;
            }
            else
            {
                v21 = v26;
                if (*(v21) < 9223372036854775814)
                {
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) <= 4)
                        return 0;
                    alloc::str::join_generic_copy(&v17, a1, a2, "./rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/list.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/zero.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/array.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/waker.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/context.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rsfatal runtime error: something here is badly broken!, aborting\n", 1);
                    v0 = &v1;
                    v7 = &v17;
                    v8 = <alloc::string::String as core::fmt::Display>::fmt;
                    v9 = &v0;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v2 = &g_11f2670;
                    v3 = 3;
                    v6 = 0;
                    v4 = &v7;
                    v5 = 2;
                    v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                    v12 = 16;
                    v13 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
                    v14 = 16;
                    v15 = log::__private_api::loc(&g_11f2700);
                    log::__private_api::log(&v2, 5, &v11);
LABEL_b627f5:
                    core::ptr::drop_in_place<alloc::string::String>(&v17);
                    return 0;
                }
            }
            v18 += 1;
            v23 = v24 - 16;
        } while (v24 != 16);
    }
    v28 = v22 * 16;
    v1 = a1 + v28;
    v29 = v21.get(*((long long *)(a1 + v28)), *((long long *)(a1 + v28 + 8)), v25);
    if (v29)
    {
        return v29;
    }
    else if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
    {
        alloc::str::join_generic_copy(&v17, a1, a2, "./rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/list.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/zero.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/array.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/waker.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/mpmc/context.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rsfatal runtime error: something here is badly broken!, aborting\n", 1);
        v0 = &v1;
        v7 = &v17;
        v8 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = &v0;
        v10 = <&T as core::fmt::Display>::fmt;
        v2 = &g_11f26a0;
        v3 = 3;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        v11 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v12 = 16;
        v13 = "starship::configstruct RedConfignot_found_symbolMatchRuleInvalidfloating point `";
        v14 = 16;
        v15 = log::__private_api::loc(&g_11f26e8);
        log::__private_api::log(&v2, 5, &v11);
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        return 0;
    }
    else
    {
        return 0;
    }
}
