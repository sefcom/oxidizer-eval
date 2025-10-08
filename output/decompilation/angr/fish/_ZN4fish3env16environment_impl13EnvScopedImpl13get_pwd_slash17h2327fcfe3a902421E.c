long long fish::env::environment_impl::EnvScopedImpl::get_pwd_slash(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a1, a2);
    if (!v1.ends_with(*((long long *)&v2), 47))
        v0.push(47);
    v4 = *((long long *)&v2);
    a0->field_10 = v4;
    a0->field_0 = *((int128_t *)&v0);
    return v4;
}
