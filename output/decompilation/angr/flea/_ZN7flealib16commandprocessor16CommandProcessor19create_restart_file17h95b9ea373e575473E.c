int flealib::commandprocessor::CommandProcessor::create_restart_file(struct_0 *a0, unsigned long long a1)
{
    char *v0;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x90]
    int v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    char *v5;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x70]
    void* v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    int v13;  // [bp-0x28], Other Possible Types: char
    char v14;  // [bp-0x18]

    v13.clone(a1);
    if (::0x76c300::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4)
    {
        v0 = &v13;
        v1 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v3 = &g_b087a8;
        v4 = 1;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        v8 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
        v9 = 25;
        v10 = "flealib::commandprocessorWrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
        v11 = 25;
        v12 = log::__private_api::loc(&g_b087d0);
        log::__private_api::log(&v3, 4, &v8);
    }
    v13.push("flea.rst@", 8);
    v5 = *((long long *)&v14);
    v2 = v13;
    v8.create(&(unsigned long long)v2);
    if ((int)v8 != 1)
    {
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v8);
    }
    v0 = v9;
    (unsigned long long)v2.spec_to_string(&v0);
    a0->field_10 = v5;
    *((int128_t *)&a0->field_0) = (int128_t)v2;
    return (unsigned int)::0x76bb50::core::ptr::drop_in_place<std::io::error::Error>(v0);
}
