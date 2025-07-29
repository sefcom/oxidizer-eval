long long uu_env::apply_unset_env_vars(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x120]
    int v1;  // [bp-0x118], Other Possible Types: char
    unsigned long long v2;  // [bp-0x108]
    unsigned int v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    int v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xb8]
    int v9;  // [bp-0xb0]
    char v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    int v13;  // [bp-0x80]
    char v14;  // [bp-0x70]
    int v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x58]
    int v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x40]
    unsigned long long v20;  // rdx
    void* v21;  // rax
    char v22;  // al
    char v23;  // al
    unsigned long long v24;  // rax

    v4 = a0 + 24.into_iter();
    v5 = v20;
    if (!v4.next())
        return 0;
    v0 = &g_5a9cb0;
    do
    {
        v8 = 0x8000000000000000;
        *((int128_t *)&v9) = *((int128_t *)v21);
        if (!(long long)v21[8])
        {
LABEL_4b8799:
            v1.to_vec("name", 4);
            v7 = v2;
            v6 = v1;
            v12 = 1;
            *((int128_t *)&v13) = *((int128_t *)v21);
            v14 = 1;
            v1.spec_to_string(&v12);
            v16 = v7;
            v15 = v6;
            v17 = v1;
            v18 = v2;
            v1.from_iter(&v15);
            uucore::mods::locale::get_message_with_args(&v10, "env-error-cannot-unset-invaliddirectoryenv-error-must-specify-command-with-chdirenv-error-cannot-change-directory: warning: valueenv-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClosingQuoteEnvInvalidBackslashAtEndOfStringInMinusSEn", 30, &v1);
            v3 = 125;
            memcpy(&v1, &v10, 16);
            v2 = v11;
            v24 = v1.new();
            core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&v8);
            return v24;
        }
        v22 = v8.contains(&g_432a28);
        if (v22 == 2)
            core::option::unwrap_failed(0x5a9cb0); /* do not return */
        if (!(!(v22 & 1)))
            goto LABEL_4b8799;
        v23 = v8.contains("=");
        if (v23 == 2)
        {
            v0 = &g_5a9cc8;
            v0 = &g_5a9cc8;
            core::option::unwrap_failed(&g_5a9cc8); /* do not return */
        }
        if (!(!(v23 & 1)))
            goto LABEL_4b8799;
        std::env::remove_var(v21);
        core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&v8);
        v21 = v4.next();
    } while (v21);
    return 0;
}
