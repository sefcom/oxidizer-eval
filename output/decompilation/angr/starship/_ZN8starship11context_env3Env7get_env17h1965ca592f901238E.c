long long starship::context_env::Env::get_env(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    int v1;  // [bp-0x20]
    char v2;  // [bp-0x10]
    unsigned long long v5;  // rax

    std::env::var(&v0, a1.as_ref(a2), a2);
    if (!(v0 & 1))
    {
        v5 = *((long long *)&v2);
        *((unsigned long long *)&a0[16]) = v5;
        *(a0) = v1;
        return v5;
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
}
