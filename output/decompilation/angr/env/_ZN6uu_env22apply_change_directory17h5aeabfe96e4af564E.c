long long uu_env::apply_change_directory(unsigned long long a0[17])
{
    unsigned long long v0;  // [bp-0x130]
    int v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x118]
    int v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    int v6;  // [bp-0xf8], Other Possible Types: char
    int v7;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned int v8;  // [bp-0xe0]
    int v9;  // [bp-0xd8]
    int v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0xb0]
    unsigned long long v13;  // [bp-0xa8]
    unsigned long long v14;  // [bp-0xa0]
    int v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x88]
    int v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x68]
    int v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x50]
    unsigned long long v21;  // [bp-0x48]
    unsigned long v22;  // [bp-0x40]
    unsigned long v23;  // [bp-0x38]
    char v24;  // [bp-0x30]
    char v25;  // [bp-0x28]
    char v26;  // [bp-0x18]
    unsigned long v28;  // rbx
    unsigned long long v29;  // rax
    int v30;  // xmm3
    unsigned long long v31;  // rax

    v28 = a0[15];
    if (!(!v28 || a0[11]))
    {
        uucore::mods::locale::get_message(&v6, "env-error-must-specify-command-with-chdirenv-error-cannot-change-directory: warning: valueenv-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClosingQuoteEnvInvalidBackslashAtEndOfStringInMinusSEnvBackslashCNotAllowedInDoubleQuotesEnvI", 41);
        v8 = 125;
        return v6.new();
    }
    else if (v28)
    {
        v29 = std::env::set_current_dir(v28, a0[16]);
        if (!v29)
            return 0;
        v0 = v29;
        v6.to_vec("directoryenv-error-must-specify-command-with-chdirenv-error-cannot-change-directory: warning: valueenv-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClosingQuoteEnvInvalidBackslashAtEndOfStringInMinusSEnvBackslashCNotAllowedInDoubleQ", 9);
        v2 = v7;
        v1 = v6;
        v21 = 1;
        v22 = v28;
        v23 = a0[16];
        v24 = 1;
        v6.spec_to_string(&v21);
        v18 = v2;
        v17 = v1;
        v19 = v6;
        v20 = v7;
        v6.to_vec("errorenv-error-config-fileuu_env(uutils coreutils) 0.1.0env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringarg", 5);
        v16 = v7;
        v15 = v6;
        v6.spec_to_string(&v0);
        v2 = v16;
        v1 = v15;
        v3 = v6;
        v5 = v7;
        v30 = (int128_t)(&v19)[8];
        memcpy(&v6, &v17, 16);
        *((int128_t *)&v7) = *((int128_t *)&v18);
        v9 = v30;
        v13 = v4;
        v14 = v5;
        v11 = v2;
        v12 = (long long)v3;
        v10 = v1;
        v1.from_iter(&v6);
        uucore::mods::locale::get_message_with_args(&v25, "env-error-cannot-change-directory: warning: valueenv-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClosingQuoteEnvInvalidBackslashAtEndOfStringInMinusSEnvBackslashCNotAllowedInDoubleQuotesEnvInvalidSequenceBackslashXInMinusSEnvParsin", 33, &v1);
        v8 = 125;
        memcpy(&v6, &v25, 16);
        v7 = *((long long *)&v26);
        v31 = v6.new();
        ::0x4b2820::core::ptr::drop_in_place<std::io::error::Error>(&v0);
        return v31;
    }
    else
    {
        return 0;
    }
}
