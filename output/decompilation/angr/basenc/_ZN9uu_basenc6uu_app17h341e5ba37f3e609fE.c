long long uu_basenc::uu_app(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xdc8]
    void* v1;  // [bp-0xdc0]
    unsigned long long v2;  // [bp-0xdb8]
    unsigned long long v3;  // [bp-0xdb0]
    unsigned long long v4;  // [bp-0xda8]
    char v5;  // [bp-0xda0]
    unsigned long long v6;  // [bp-0xd98]
    unsigned long long v7;  // [bp-0xd90]
    char v8;  // [bp-0xd88]
    char v9;  // [bp-0xac0]
    int v10;  // [bp-0x7f8]
    struct struct_0 v11[640];  // [bp-0x578]
    char v12;  // [bp-0x2f8]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rbx
    unsigned long long v18[2];  // rax
    char *v19;  // r14

    uucore::mods::locale::get_message(&v9, "basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 12);
    v14 = v9.into_boxed_slice();
    uucore::mods::locale::get_message(&v9, "basenc-usage", 12);
    v15 = v9.into_boxed_slice();
    uu_basenc::get_encodings(&v5);
    uu_base32::base_common::base_app(&v8, v14, v16, v15, v16);
    v17 = v7;
    v0 = v6;
    v3 = v6.into_iter(v17);
    v4 = v16;
    if (v3.next())
    {
        v2 = v17 * 48 + v0;
        v19 = &v11;
        do
        {
            v9.new(v18[0], v18[1]);
            v12.long(&v9, v18[0], v18[1]);
            v9.help(&v12, &v18[1 + 1]);
            v10.action(&v9);
            v19.fold(v0, v2, &v10);
            memcpy(&v9, &v8, 712);
            v12.arg(&v9, v19);
            memcpy(&v8, &v12, 712);
            v18 = v3.next();
        } while (v18);
    }
    memcpy(v1, &v8, 712);
    core::ptr::drop_in_place<alloc::vec::Vec<(&str,uucore::features::encoding::Format,alloc::string::String)>>(&v5);
    return a0;
}
