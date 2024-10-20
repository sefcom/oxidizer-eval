long long uu_du::parse_depth::h2a38a124abbaaad3(unsigned long long a0[3], void* a1, unsigned long a2, char a3)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r15
    unsigned long long v7[4];  // rax

    if (!a1)
    {
        a0[1] = 0;
        a0[2] = v4;
        a0[0] = 0;
        return a0;
    }
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, a1, a2);
    if (!v0)
    {
        if (!a3)
        {
            v4 = *((long long *)&v1);
            a0[1] = 1;
            a0[2] = v4;
            a0[0] = 0;
            return a0;
        }
LABEL_4b10ac:
        if (!a2)
        {
            v5 = 1;
            goto LABEL_4b1102;
        }
        else if (a2 >= 0)
        {
            v5 = __rust_alloc(a2, 1);
            if (!v5)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_4b1102:
            memcpy(v5, a1, a2);
            v7 = __rust_alloc(32, 8);
            if (v7)
            {
                v7[0] = 1;
                v7[1] = a2;
                v7[2] = v5;
                v7[3] = a2;
                a0[1] = v7;
                a0[2] = &g_5349c0;
                a0[0] = 1;
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
    }
    else
    {
        if (!(!a3))
            goto LABEL_4b10ac;
        if (!a2)
        {
            v5 = 1;
            goto LABEL_4b1143;
        }
        else if (a2 >= 0)
        {
            v5 = __rust_alloc(a2, 1);
            if (!v5)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_4b1143:
            memcpy(v5, a1, a2);
            v7 = __rust_alloc(32, 8);
            if (v7)
            {
                v7[0] = 0;
                v7[1] = a2;
                v7[2] = v5;
                v7[3] = a2;
                a0[1] = v7;
                a0[2] = &g_5349c0;
                a0[0] = 1;
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
}
