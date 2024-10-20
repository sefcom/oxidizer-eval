long long uu_base32::base_common::get_input::ha11e56733db80fc2(unsigned long long a0[3], unsigned long long a1[5], unsigned long a2)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned int v1;  // [bp-0x30], Other Possible Types: char
    unsigned short v2;  // [sp-0x2c]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x24]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rax
    char v8;  // dl
    struct_0 *v9;  // rax
    unsigned long long v12;  // rcx

    if (a1[2] != 0x8000000000000000)
    {
        v0 = 0x1b600000000;
        v1 = 0;
        v2 = 0;
        v1 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v3, &v0, a1[3], a1[4]);
        if (*((int *)&v3))
        {
            v9 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h7b5f38dee5f702ca(*((long long *)&v5), &a1[2]);
            a0[1] = v9;
            a0[2] = &anon.aee8d0926622a1c6e97588a73d77e694.9.llvm.9973493521462227259;
            a0[0] = 1;
            return a0;
        }
        v9 = __rust_alloc(4, 4);
        if (!v9)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v9->field_0 = *((int *)&v4);
        v12 = &g_501ba8;
    }
    else
    {
        v0 = std::io::stdio::stdin::h7215cc131abb55d8();
        v7 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v0);
        v0 = v7;
        v1 = v8 & 1;
        v9 = __rust_alloc(16, 8);
        if (!v9)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *((unsigned long long *)&v9->field_0) = v7;
        v9->field_8 = v8 & 1;
        v12 = &g_501b50;
    }
    a0[1] = v9;
    a0[2] = v12;
    a0[0] = 0;
    return a0;
}
