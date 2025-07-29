void flealib::commandprocessor::CommandProcessor::get_camera_frame(struct_0 *a0, unsigned long a1)
{
    char v0;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x170]
    char *v2;  // [sp-0x168], Other Possible Types: unsigned long long
    int v3;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x158]
    unsigned long long v5;  // [sp-0x148]
    unsigned long long v6;  // [sp-0x140]
    unsigned long long v7;  // [sp-0x138]
    unsigned long long v8;  // [sp-0x130]
    unsigned long long v9;  // [sp-0x128]
    char *v10;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x118]
    unsigned long v12;  // [bp-0x110]
    char *v13;  // [sp-0x108]
    unsigned long long v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf8]
    unsigned long long v16;  // [bp-0xf0]
    char v17;  // [bp-0xe8]
    unsigned long long v18;  // [bp-0xe0]
    unsigned long long v19;  // [bp-0xd8]
    char v20;  // [bp-0xd0]
    unsigned long long v21;  // [bp-0xc0]
    int v22;  // [bp-0xb8]
    unsigned long long v23;  // [bp-0xb0]
    unsigned long long v24;  // [bp-0xa8]
    int v25;  // [bp-0x98]
    unsigned long long v26;  // [bp-0x90]
    unsigned long long v27;  // [bp-0x88]
    char v28;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long long v29;  // [bp-0x78]
    unsigned int v30;  // [bp-0x70]
    char *v31;  // [bp-0x68]
    unsigned long long v32;  // [bp-0x60]
    char v33;  // [bp-0x58]
    unsigned long long v34;  // [bp-0x48]
    char v35;  // [bp-0x40]
    unsigned long long v37;  // rax
    char v38;  // r15b
    unsigned long long v39;  // r15
    char v40;  // dl

    std::env::temp_dir(&v17);
    v0.try_from(v18, v19);
    if (*((int *)&v0) == 1)
        core::option::unwrap_failed(&g_b08848); /* do not return */
    v0.to_vec(v1, v2);
    v24 = v2;
    *((int128_t *)&v22) = *((int128_t *)&v0);
    flealib::camera::save_camera_frames(&v33, 1, v23, v2);
    if ((char)(((0 ^ *((long long *)&v33)) & (0 ^ -(*((long long *)&v33)))) >> 63))
    {
        if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
        {
            v0 = &g_b087e8;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            v5 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
            v6 = 25;
            v7 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
            v8 = 25;
            v9 = log::__private_api::loc(&g_b08860);
            log::__private_api::log(&v0, 4, &v5);
        }
        v5 = &g_b08878;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = &g_b087f8;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        v35.map_or_else(&v0);
        v20.join(v18, v19, &v35);
        v0.lock(a1 + 16);
        v37 = v0.unwrap(&g_b08888);
        v28.read_binary_file_by_path(v37 + 8, &v20);
        if (v28 == 0x8000000000000000)
        {
            v10 = v29;
            if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
            {
                v13 = &v10;
                v14 = <std::io::error::Error as core::fmt::Display>::fmt;
                v0 = &g_b08838;
                v1 = 1;
                v4 = 0;
                v2 = &v13;
                v3 = 1;
                v5 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v6 = 25;
                v7 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                v8 = 25;
                v9 = log::__private_api::loc(&g_b088d0);
                log::__private_api::log(&v0, 1, &v5);
            }
            a0.spec_to_string(&v10);
            ::0x76bb50::core::ptr::drop_in_place<std::io::error::Error>(v10);
            v38 = 1;
        }
        else
        {
            *((unsigned int *)&v27) = v30;
            *((int128_t *)&v25) = *((int128_t *)&v28);
            (char)v10.bytes_to_string(v26, v30);
            v2 = v21;
            memcpy(&v0, &v20, 16);
            v39 = std::fs::remove_file(&v0);
            if (v39)
            {
                v16 = v39;
                if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
                {
                    (char)v13.spec_to_string(&v16);
                    v31 = &(char)v13;
                    v32 = <alloc::string::String as core::fmt::Display>::fmt;
                    v0 = &g_b08818;
                    v1 = 1;
                    v4 = 0;
                    v2 = &v31;
                    v3 = 1;
                    v5 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                    v6 = 25;
                    v7 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                    v8 = 25;
                    v9 = log::__private_api::loc(&g_b088a0);
                    log::__private_api::log(&v0, 1, &v5);
                    ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(&(char)v13);
                    v39 = v16;
                }
                a0->field_10 = v12;
                a0->field_0 = *((int128_t *)&v10);
                ::0x76bb50::core::ptr::drop_in_place<std::io::error::Error>(v39);
            }
            else
            {
                if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
                {
                    v0 = &g_b08828;
                    v1 = 1;
                    v2 = 8;
                    *((uint128_t *)&v3) = 0;
                    v5 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                    v6 = 25;
                    v7 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
                    v8 = 25;
                    v9 = log::__private_api::loc(&g_b088b8);
                    log::__private_api::log(&v0, 4, &v5);
                }
                a0->field_10 = v12;
                a0->field_0 = *((int128_t *)&v10);
            }
            ::0x76bcb0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v25);
        }
        core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::fileserver::FileServer>>(v37, v40 & 1);
        if (v38)
            ::0x76ba80::core::ptr::drop_in_place<std::path::PathBuf>(&v20);
    }
    else
    {
        v15 = v34;
        memcpy(&(char)v13, &v33, 16);
        if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E))
        {
            v10 = &(char)v13;
            v11 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_b08638;
            v1 = 1;
            v4 = 0;
            v2 = &v10;
            v3 = 1;
            v5 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
            v6 = 25;
            v7 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
            v8 = 25;
            v9 = log::__private_api::loc(&g_b088e8);
            log::__private_api::log(&v0, 1, &v5);
        }
        a0->field_10 = v15;
        a0->field_0 = *((int128_t *)&v13);
    }
    ::0x76ba80::core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(&(char)v22);
    return;
}
