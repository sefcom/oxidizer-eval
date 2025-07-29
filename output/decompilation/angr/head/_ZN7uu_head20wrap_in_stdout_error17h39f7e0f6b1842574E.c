long long uu_head::wrap_in_stdout_error(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x90]
    int v1;  // [bp-0x88], Other Possible Types: char
    unsigned long long v2;  // [bp-0x78]
    char v3;  // [bp-0x68]
    char v4;  // [bp-0x58]
    int v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x28]
    char v7;  // [bp-0x20]
    unsigned long long v8;  // [bp-0x10]
    unsigned int v10;  // eax
    unsigned long long v11;  // rax

    v0 = a0;
    v10 = (unsigned int)a0.kind();
    v3.to_vec("errhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3);
    v2 = *((long long *)&v4);
    memcpy(&v1, &v3, 16);
    v3.spec_to_string(&v0);
    v6 = v2;
    v5 = v1;
    memcpy(&v7, &v3, 16);
    v8 = *((long long *)&v4);
    v3.from_iter(&v5);
    uucore::mods::locale::get_message_with_args(&v1, "head-error-writing-stdoutsrc/uu/head/src/head.rs\n:  <==\n", 25, &v3);
    v11 = v10.new(&v1);
    ::0x4ac100::core::ptr::drop_in_place<std::io::error::Error>(&v0);
    return v11;
}
