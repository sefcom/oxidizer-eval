long long uu_env::parse_program_opt(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x10]

    if (!a0->field_99)
    {
        uucore::mods::locale::get_message(&v0, "env-error-cannot-specify-null-with-commandsignalenv-error-invalid-signal/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 42);
        v1 = 125;
        return v0.new();
    }
    a0->padding_0[72].push(a1, a2, &g_5a98f0);
    return 0;
}
