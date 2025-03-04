long long uu_cat::splice::write_fast_using_splice::h8d35de54429b343d(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x58]
    unsigned int v1;  // [sp-0x50]
    unsigned int v2;  // [sp-0x4c]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    unsigned int v9;  // eax
    struct_0 *v10;  // rcx
    struct_0 *v11;  // rax
    struct_0 *v12;  // rdx

    v6 = uucore::features::pipes::pipe::h14b45b9735c770a8();
    if ((unsigned int)v6 == -1)
    {
        a0->field_0 = 9223372036854775809;
        *((unsigned int *)&a0->field_8) = v2;
        return 9223372036854775809;
    }
    v1 = v6;
    v2 = v6 >> 32;
    do
    {
        v0 = 0;
        nix::fcntl::splice::h6b265cd6d4b59480(&v3, a1, 0, &v2, 0, 0x20000);
        if (*((int *)&v3))
        {
            v10 = a0;
            v10->field_8 = 1;
            v10->field_0 = 9223372036854775814;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v2);
            vvar_180{reg 16} = core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v1);
            return v7;
        }
        v8 = *((long long *)&v4);
        if (!v8)
        {
            v10 = a0;
            v10->field_8 = 0;
            v10->field_0 = 9223372036854775814;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v2);
            vvar_173{reg 16} = core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v1);
            return v7;
        }
    } while ((int)uucore::features::pipes::splice_exact::hf182302f6fbd70e2(&v1, a2, v8) == 134);
    v9 = uu_cat::splice::copy_exact::h7c8774a5e534cde3(v1, a2, v8);
    if (v9 == 134)
    {
        v11 = a0;
        v11->field_8 = 1;
        v11->field_0 = 9223372036854775814;
    }
    else
    {
        v12 = a0;
        v12->field_0 = 9223372036854775809;
        *((unsigned int *)&v12->field_8) = v9;
    }
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v2);
    v7 = core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v1);
    return v7;
}
