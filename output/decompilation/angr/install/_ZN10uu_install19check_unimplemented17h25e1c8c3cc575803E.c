long long uu_install::check_unimplemented(unsigned long long a0)
{
    void* v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char *v3;  // rdi
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdx

    if ((char)a0.get_flag("preserve-context", 16))
    {
        v3 = &v1;
        v4 = "--preserve-context, -P--context, -ZOptions --target-directory and --no-target-directory are mutually exclusive\nOptions --compare and --preserve-timestamps are mutually exclusive\nOptions --compare and --strip are mutually exclusive\nInvalid mode string: crea";
        v5 = 22;
    }
    else if ((char)a0.get_flag("contextinnerUUsageErrormessagechanging : ", 7))
    {
        v3 = &v1;
        v4 = "--context, -ZOptions --target-directory and --no-target-directory are mutually exclusive\nOptions --compare and --preserve-timestamps are mutually exclusive\nOptions --compare and --strip are mutually exclusive\nInvalid mode string: creating directory src/uu/install/src/install.rs";
        v5 = 13;
    }
    else
    {
        return 0;
    }
    v3.to_vec(v4, v5);
    v0 = 0;
    return v0.new();
}
