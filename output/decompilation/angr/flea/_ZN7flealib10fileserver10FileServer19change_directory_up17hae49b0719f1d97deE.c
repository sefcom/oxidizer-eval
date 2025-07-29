long long flealib::fileserver::FileServer::change_directory_up(unsigned long long *a0, struct_0 *a1)
{
    char v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v4 = *((long long *)&a1->padding_1[7]).parent(a1->field_10);
    if (!v4)
    {
        a0.to_vec("Already at rootNot a directory/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 15);
        return a0;
    }
    v0.try_from(v4, v5);
    if ((v0 & 1))
        core::option::unwrap_failed(&g_b09910); /* do not return */
    v0.to_vec(v1, *((long long *)&v2));
    ::0x7789b0::core::ptr::drop_in_place<alloc::string::String>(a1);
    a1->field_10 = *((long long *)&v2);
    *((int128_t *)&a1->field_0) = *((int128_t *)&v0);
    *(a0) = 0x8000000000000000;
    return a0;
}
