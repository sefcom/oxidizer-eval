void flealib::commandprocessor::CommandProcessor::set_ftp_params(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x140]
    unsigned long long v1[6];  // [bp-0x138]
    unsigned long long v2;  // [bp-0x130]
    int v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x118]
    int v5;  // [bp-0x108]
    int v6;  // [bp-0xf8]
    int v7;  // [bp-0xe8]
    char v8;  // [bp-0xd8]
    int v9;  // [bp-0xc8], Other Possible Types: char
    char v10;  // [bp-0xb8]
    int v11;  // [bp-0xa8]
    int v12;  // [bp-0x98]
    int v13;  // [bp-0x88]
    char v14;  // [bp-0x78]
    void* v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x60]
    char v17;  // [bp-0x58]
    unsigned short v18;  // [bp-0x28]
    unsigned long v20;  // r15
    unsigned long long v21;  // rsi
    unsigned long v22;  // r15
    unsigned long v23;  // r12
    unsigned long v24;  // r14
    unsigned long long v25;  // r8

    v17.into_searcher(a2, a3);
    v15 = 0;
    v16 = a3;
    v18 = 1;
    v0.from_iter(&v15, &g_b08700);
    if (v2 == 3)
    {
        v9.to_vec(v1[0], v1[1]);
        v4 = *((long long *)&v10);
        v3 = v9;
        v20 = (char *)&a1->field_30 + 8;
        ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v20);
        *((unsigned long long *)(v20 + 16)) = v4;
        *((void*)v20) = v3;
        if (v2 < 2)
            core::panicking::panic_bounds_check(1, v2, &g_b08778); /* do not return */
        v9.to_vec(v1[2], v1[3]);
        v22 = &(&a1->padding_0)[1];
        v4 = *((long long *)&v10);
        v3 = v9;
        ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v22);
        *((unsigned long long *)(v22 + 16)) = v4;
        *((void*)v22) = v3;
        if (v2 < 3)
            core::panicking::panic_bounds_check(2, v21, &g_b08790); /* do not return */
        v9.to_vec(v1[4], v1[5]);
        v4 = *((long long *)&v10);
        v3 = v9;
        v23 = &a1->field_28;
        ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v23);
        *((unsigned long long *)(v23 + 16)) = v4;
        *((void*)v23) = v3;
        v9.to_vec("Filesenter_smtp_user_nameenter_smtp_passwordenter_smtp_hostenter_email_address%Y-%m-%d_%H-%M-%Sscreenshot\r\nDirectory changedError: ", 5);
        v4 = *((long long *)&v10);
        v3 = v9;
        v24 = &a1->field_48;
        ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v24);
        *((unsigned long long *)(v24 + 16)) = v4;
        *((void*)v24) = v3;
        confy::store(&v3, "flea_confCurrent directory: /root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rsFrame captured0.jpgCouldn't remove a file: Captured frame removedError (video couldn't be read or camera is not available): frame-Creating FleaCommand..Configuration error ", 9, 0, v25, v22);
        if ((int)v3 == 10)
        {
            v9.to_vec("Ok/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2);
LABEL_76ddf9:
            a0->field_10 = *((long long *)&v10);
            *((void*)&a0->field_0) = v9;
        }
        else
        {
            memcpy(&v14, &v8, 16);
            v13 = v7;
            v12 = v6;
            v11 = v5;
            memcpy(&v10, &v4, 16);
            v9 = v3;
            a0.spec_to_string(&v9);
            core::ptr::drop_in_place<confy::ConfyError>(&v9);
        }
        ::0x76bda0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
        return;
    }
    (char)v9.to_vec("Wrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 26);
    goto LABEL_76ddf9;
}
