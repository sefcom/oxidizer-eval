long long uu_split::number::Number::increment::h59675fef7aec53bb(struct_0 *a0)
{
    void* v1;  // r14
    unsigned long v2;  // rbx
    char v3;  // al
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rcx
    char v6;  // dl
    unsigned int v8;  // ebp
    void* v9;  // rax
    unsigned long long v10;  // r15

    if (a0->field_0 == 0x8000000000000000)
    {
        a0->field_8 = a0->field_8 + 1;
        return 0;
    }
    v1 = a0->field_8;
    v2 = a0->field_10;
    if (!v2)
    {
        v8 = vvar_51{reg 56} | -0x100 | !bcmp(v1, 0x1, v2);
        return v8;
    }
    v3 = a0->field_18;
    do
    {
        v5 = v4;
        v6 = *(-1 + (char *)v1 + v5);
        *(-1 + (char *)v1 + v5) = v6 + 1;
    } while (v6 + 1 == v3 && (*((char *)(-1 + (char *)v1 + v5)) = 0, v5 != 1));
    if (v2 < 0)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v9 = __rust_alloc_zeroed(v2, 1);
    if (v9)
    {
        v10 = v9;
        if (!bcmp(v1, v9, v2))
        {
            v8 = vvar_51{reg 56} | -0x100 | 1;
            if (!v2)
                return v8;
            __rust_dealloc(v10);
        }
        else
        {
            if (!v2)
                return 0;
            __rust_dealloc(v10);
        }
    }
}
