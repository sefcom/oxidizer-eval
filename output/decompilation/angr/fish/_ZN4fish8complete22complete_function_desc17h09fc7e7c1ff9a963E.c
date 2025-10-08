long long fish::complete::complete_function_desc(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    int v1;  // [bp-0x20], Other Possible Types: char
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    v4 = fish::function::get_props(a1, a2);
    if (!v4)
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = 0;
        return 0;
    }
    v0 = v4;
    v1.to_vec(v4 + 40.localize(), a2);
    *((long long *)&a0[16]) = *((long long *)&v2);
    *(a0) = v1;
    return core::ptr::drop_in_place<alloc::sync::Arc<fish::function::FunctionProperties>>(&v0);
}
