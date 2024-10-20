long long uu_nproc::available_parallelism::h6be64c127e86c75e(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    struct_2 *v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r15
    struct_1 *v7;  // r12
    struct struct_0 **v8;  // rax

    v0 = v2;
    if (!std::thread::available_parallelism::he1b307f401d49c64())
        return v5;
    v4 = (unsigned int)v3 & 3;
    if (v4 - 2 < 2)
    {
        return 1;
    }
    else if (!v4)
    {
        return 1;
    }
    else
    {
        v6 = *((long long *)((char *)&v3->field_-1 + 1));
        v7 = *((long long *)((char *)&v3->field_-1 + 7));
        if (v7->field_0)
            v8(v6);
        if (v7->field_8)
            __rust_dealloc(v6);
        __rust_dealloc((char *)&v3->field_-1 + 1);
        return 1;
    }
}
