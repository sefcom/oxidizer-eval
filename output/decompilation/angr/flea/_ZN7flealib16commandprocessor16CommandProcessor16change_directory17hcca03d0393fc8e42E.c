long long flealib::commandprocessor::CommandProcessor::change_directory(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    char v5;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    char *v9;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x98]
    int v11;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x88]
    int v13;  // [bp-0x78], Other Possible Types: char
    unsigned long long v14;  // [bp-0x68]
    char *v15;  // [bp-0x58]
    unsigned long long v16;  // [bp-0x50]
    char v17;  // [bp-0x48]
    char v18;  // [bp-0x38]
    unsigned long long v20;  // r14
    char v21;  // dl
    char v22;  // bpl
    char v23;  // dl
    int v25;  // xmm0

    if ((char)a1.equal(a2, "..flealib/src/commandprocessor.rs", 2))
    {
        v5.lock(a3 + 16);
        v20 = v5.unwrap(&g_b086b8);
        v22 = v21 & 1;
        v17.change_directory_up(v20 + 8);
        if ((char)(((0 ^ *((long long *)&v17)) & (0 ^ -(*((long long *)&v17)))) >> 63))
        {
            if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
            {
                v7 = &g_b08628;
                v8 = 1;
                v10 = 8;
                *((uint128_t *)&v11) = 0;
                v0 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v1 = 25;
                v2 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v3 = 25;
                v4 = log::__private_api::loc(&g_b086d0);
                log::__private_api::log(&v7, 4, &v0);
            }
            v5.to_vec("Directory changedError: ", 17);
            goto LABEL_76d52a;
        }
        else
        {
            v14 = *((long long *)&v18);
            memcpy(&v13, &v17, 16);
            if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
            {
                v15 = &v13;
                v16 = <alloc::string::String as core::fmt::Display>::fmt;
                v5 = &g_b08638;
                v8 = 1;
                v12 = 0;
                v9 = &v15;
                v11 = 1;
                v0 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v1 = 25;
                v2 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v3 = 25;
                v4 = log::__private_api::loc(&g_b086e8);
                log::__private_api::log(&v5, 1, &v0);
                goto LABEL_76d76c;
            }
        }
    }
    else
    {
        if (!a2)
        {
            if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) < 4)
                return a0.to_vec("Directory name is empty..flealib/src/commandprocessor.rs", 23);
            v5 = &g_b08648;
            v8 = 1;
            v9 = 8;
            *((uint128_t *)&v11) = 0;
            v0 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
            v1 = 25;
            v2 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
            v3 = 25;
            v4 = log::__private_api::loc(&g_b08658);
            log::__private_api::log(&v5, 4, &v0);
            return a0.to_vec("Directory name is empty..flealib/src/commandprocessor.rs", 23);
        }
        (char)v5.lock(a3 + 16);
        v20 = (char)v5.unwrap(&g_b08670);
        v22 = v23 & 1;
        v17.change_directory(v20 + 8, a1, a2);
        if ((char)(((0 ^ *((long long *)&v17)) & (0 ^ -(*((long long *)&v17)))) >> 63))
        {
            if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
            {
                v6 = &g_b08628;
                v8 = 1;
                v10 = 8;
                *((uint128_t *)&v11) = 0;
                v0 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v1 = 25;
                v2 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v3 = 25;
                v4 = log::__private_api::loc(&g_b08688);
                log::__private_api::log(&v6, 4, &v0);
            }
            (char)v5.to_vec("Directory changedError: ", 17);
LABEL_76d52a:
            a0->field_10 = v10;
            v25 = *((int128_t *)&v7);
        }
        else
        {
            v14 = *((long long *)&v18);
            memcpy(&v13, &v17, 16);
            if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
            {
                v15 = &v13;
                v16 = <alloc::string::String as core::fmt::Display>::fmt;
                v5 = &g_b08638;
                v8 = 1;
                v12 = 0;
                v9 = &v15;
                v11 = 1;
                v0 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v1 = 25;
                v2 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v3 = 25;
                v4 = log::__private_api::loc(&g_b086a0);
                log::__private_api::log(&v5, 1, &v0);
            }
LABEL_76d76c:
            a0->field_10 = v14;
            v25 = v13;
        }
        *((void*)&a0->field_0) = v25;
        return core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::fileserver::FileServer>>(v20, v22);
    }
}
