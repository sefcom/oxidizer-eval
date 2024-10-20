long long uu_split::number::FixedWidthNumber::new::h793aeeade07fec3f(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long v2;  // rax
    unsigned long long v3;  // rbp
    char *v4;  // r15
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    char *v8;  // rdi
    unsigned long long v9;  // r12
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    char v12;  // dl
    unsigned int v13;  // eax

    v0 = v2;
    v3 = a1;
    if (!a2)
    {
        v4 = 1;
        if (!(!(v3 & 255 & 255)))
            goto LABEL_4a9fd2;
        if (a3)
        {
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
    }
    else
    {
        if (a2 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v4 = __rust_alloc_zeroed(a2, 1);
        if (!v4)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else if (!(char)v3)
        {
            core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
        }
LABEL_4a9fd2:
        v7 = v3 & 4294967295;
        v8 = a2 - 1;
        do
        {
            v9 = a3;
            if (v8 == -1)
            {
                if (v9)
                {
                    a0->field_0 = 0x8000000000000000;
                    if (a2)
                    {
                        __rust_dealloc(v4);
                        return a0;
                    }
                    return a0;
                }
                break;
            }
            if (!a2)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            if (v9 >> 32)
            {
                v10 = v9;
                v11 = (0 CONCAT v10) /m v7;
                v12 = (0 CONCAT v10) /m v7 >> 64;
            }
            else
            {
                v13 = v9;
                v11 = (0 CONCAT v13) /m (unsigned int)v7 & 4294967295;
                v12 = (0 CONCAT v13) /m (unsigned int)v7 >> 32 & 4294967295;
            }
            *((char *)(v4 + v8)) = v12;
            v8 += 1;
        } while (v9 >= v7);
    }
    a0->field_0 = v6;
    a0->field_8 = v4;
    a0->field_10 = a2;
    a0->field_18 = v3;
    return a0;
}
