void uu_env::string_expander::StringExpander::put_string(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rdx

    v1 = a1.as_ref();
    a0.spec_extend(v1, v2 + v1);
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000, v1);
    return;
}
