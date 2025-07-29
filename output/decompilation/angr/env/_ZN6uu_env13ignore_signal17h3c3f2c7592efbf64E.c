long long uu_env::ignore_signal(unsigned int a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x10c]
    int v1;  // [bp-0x108], Other Possible Types: char
    unsigned long long v2;  // [bp-0xf8]
    int v3;  // [bp-0xf0]
    unsigned long long v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    int v6;  // [bp-0xd8], Other Possible Types: char
    int v7;  // [bp-0xc8], Other Possible Types: char
    unsigned int v8;  // [bp-0xc0]
    int v9;  // [bp-0xb8]
    int v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    int v15;  // [bp-0x78], Other Possible Types: char
    unsigned long long v16;  // [bp-0x68]
    char v17;  // [bp-0x58]
    char v18;  // [bp-0x50]
    int v19;  // [bp-0x48]
    unsigned long long v20;  // [bp-0x38]
    int v21;  // [bp-0x30]
    unsigned long long v22;  // [bp-0x20]
    char v24;  // bl
    int v26;  // xmm3

    nix::sys::signal::signal(&v17, a0, 1, a3);
    if (*((int *)&v17) != 4)
        return 0;
    v24 = *((int *)&v18);
    v1.to_vec("signalenv-error-invalid-signal/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v0 = a0;
    v6.spec_to_string(&v0);
    v20 = v2;
    v19 = v1;
    v21 = v6;
    v22 = *((long long *)&v7);
    v6.to_vec("errorenv-error-config-fileuu_env(uutils coreutils) 0.1.0env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringarg", 5);
    v16 = *((long long *)&v7);
    memcpy(&v15, &v6, 16);
    v6.to_vec(v24.desc(), a2);
    v5 = *((long long *)&v7);
    v3 = v6;
    v2 = v16;
    v1 = v15;
    v26 = (int128_t)(&v21)[8];
    memcpy(&v6, &v19, 16);
    *((int128_t *)&v7) = *((int128_t *)&v20);
    v9 = v26;
    v13 = v4;
    v14 = v5;
    v11 = v2;
    v12 = (long long)v3;
    v10 = v1;
    v1.from_iter(&v6);
    uucore::mods::locale::get_message_with_args(&v6, "env-error-failed-set-signal-actionEnvMissingClosingQuoteEnvInvalidBackslashAtEndOfStringInMinusSEnvBackslashCNotAllowedInDoubleQuotesEnvInvalidSequenceBackslashXInMinusSEnvParsingOfVariableMissingClosingBraceEnvParsingOfMissingVariableEnvParsingOfVariableM", 34, &v1);
    v8 = 125;
    return v6.new();
}
