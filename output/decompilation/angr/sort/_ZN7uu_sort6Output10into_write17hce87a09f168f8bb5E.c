long long uu_sort::Output::into_write(unsigned long long a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    if (!((char)(((0 ^ a1->field_0) & (0 ^ -(a1->field_0))) >> 63)))
    {
        v0 = a1->field_18;
        v1 = v0.set_len(0);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v1);
        v3 = v0.new();
        core::ptr::drop_in_place<alloc::string::String>(a1);
        return a0.with_capacity(v3, &g_58cc50);
    }
    return a0.with_capacity(std::io::stdio::stdout().new(), &g_58cc00);
}
