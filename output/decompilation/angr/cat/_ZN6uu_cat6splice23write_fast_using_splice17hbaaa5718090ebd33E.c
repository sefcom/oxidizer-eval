long long uu_cat::splice::write_fast_using_splice::hbaaa5718090ebd33(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x50]
    unsigned int v1;  // [sp-0x4c]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rbx
    unsigned int v8;  // eax
    struct_0 *v9;  // rcx
    struct_0 *v10;  // rax
    struct_0 *v11;  // rdx

    v5 = uucore::features::pipes::pipe::h14b45b9735c770a8();
    if ((unsigned int)v5 == -1)
    {
        a0->field_0 = 9223372036854775809;
        *((unsigned int *)&a0->field_8) = v1;
        return 9223372036854775809;
    }
    v0 = v5;
    v1 = v5 >> 32;
    do
    {
        nix::fcntl::splice::h210f4cbb79b6fbd6(&v2, a1, 0, &v1, 0, 0x20000, 0);
        if (*((int *)&v2))
        {
            v9 = a0;
            v9->field_8 = 1;
            v9->field_0 = 9223372036854775814;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v1);
            vvar_180{reg 16} = core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v0);
            return v6;
        }
        v7 = *((long long *)&v3);
        if (!v7)
        {
            v9 = a0;
            v9->field_8 = 0;
            v9->field_0 = 9223372036854775814;
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v1);
            vvar_173{reg 16} = core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v0);
            return v6;
        }
    } while ((int)uucore::features::pipes::splice_exact::hf182302f6fbd70e2(&v0, a2, v7) == 134);
    v8 = uu_cat::splice::copy_exact::h7c8774a5e534cde3(v0, a2, v7);
    if (v8 == 134)
    {
        v10 = a0;
        v10->field_8 = 1;
        v10->field_0 = 9223372036854775814;
    }
    else
    {
        v11 = a0;
        v11->field_0 = 9223372036854775809;
        *((unsigned int *)&v11->field_8) = v8;
    }
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v1);
    v6 = core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(v0);
    return v6;
}
