long long uu_env::apply_specified_env_vars(unsigned long a0)
{
    char v0;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xe0]
    char *v2;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xd0]
    int v4;  // [bp-0xd0]
    void* v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    char *v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    int v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x70]
    int v17;  // [bp-0x68]
    char *v18;  // [bp-0x50], Other Possible Types: unsigned long long
    int v19;  // [bp-0x48], Other Possible Types: unsigned long long
    char v20;  // [bp-0x38]
    unsigned long long v22;  // rdx
    struct_0 *v23;  // rax
    struct_0 *v24;  // rbp
    char *v25;  // rbx
    char *v26;  // r14
    int v27;  // xmm1

    v7 = a0 + 48.into_iter();
    v8 = v22;
    v23 = v7.next();
    if (!v23)
        return v23;
    v24 = v23;
    v25 = &v0;
    v26 = &v7;
    do
    {
        if (v24->field_10)
        {
            std::env::set_var(v24, &v24->padding_18);
        }
        else
        {
            v13 = uucore::util_name();
            v14 = v22;
            v18 = &v13;
            v19 = <&T as core::fmt::Display>::fmt;
            v0 = &g_5a9ce0;
            v1 = 2;
            v5 = 0;
            v2 = &v18;
            v3 = 1;
            std::io::stdio::_eprint(v25);
            v9.to_vec("valueenv-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClosingQuoteEnvInvalidBackslashAtEndOfStringInMinusSEnvBackslashCNotAllowedInDoubleQuotesEnvInvalidSequenceBackslashXInMinusSEnvParsingOfVariableMissingClosingBraceEnvParsingOfMi", 5);
            v18 = 1;
            *((uint128_t *)&v19) = v24->field_20;
            v20 = 1;
            v13.spec_to_string(&v18);
            v2 = v11;
            memcpy(&v0, &v9, 16);
            v6 = v15;
            *((int128_t *)&v4) = *((int128_t *)&v13);
            v27 = (int128_t)(&v4)[8];
            *((int128_t *)&v12) = *((int128_t *)&v0);
            v15 = v2;
            v16 = v3;
            v17 = v27;
            v25.from_iter(&v13);
            uucore::mods::locale::get_message_with_args(&v13, "env-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClosingQuoteEnvInvalidBackslashAtEndOfStringInMinusSEnvBackslashCNotAllowedInDoubleQuotesEnvInvalidSequenceBackslashXInMinusSEnvParsingOfVariableMissingClosingBraceEnvParsingOfMissing", 29, v25);
            v9 = &v13;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_5a9af0;
            v1 = 2;
            v5 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint(v25);
            v26 = &v7;
            ::0x4b2810::core::ptr::drop_in_place<alloc::string::String>(&v13);
        }
        v24 = v26.next();
    } while (v24);
    return v24;
}
