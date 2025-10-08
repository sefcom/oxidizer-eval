long long uu_expr::syntax_tree::Parser<S>::parse(void* a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x90]
    int v1;  // [bp-0x88]
    int v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x70]
    int v5;  // [bp-0x68], Other Possible Types: char
    char v6;  // [bp-0x58]
    char v7;  // [bp-0x40], Other Possible Types: unsigned long long
    char v8;  // [bp-0x38]
    unsigned long v9;  // [bp-0x30]
    char v10;  // [bp-0x28]
    unsigned long long v12;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rcx

    if (a1[1])
    {
        v7.parse_precedence(a1, 0);
        memcpy(&v5, &v8, 16);
        memcpy(&v6, &v10, 16);
        if (v7 == 9223372036854775813)
        {
            *((int128_t *)&a0[24]) = *((int128_t *)&v6);
            a0[8] = v5;
        }
        else
        {
            memcpy(&v3, &v6, 16);
            v1 = v5;
            v0 = v7;
            if (a1[2] >= a1[1])
            {
                *((unsigned long *)&a0[32]) = v4;
                v15 = (long long)v1;
                a0[16] = v2;
                *((unsigned long long *)a0) = v0;
                *((unsigned long long *)&a0[8]) = v15;
                return v0;
            }
            v12 = a1[2] * 3;
            v7.to_vec(*((long long *)(a1[0] + v12 * 8 + 8)).as_ref(*((long long *)(a1[0] + v12 * 8 + 16))), v14);
            *((unsigned long *)&a0[32]) = v9;
            *((int128_t *)&a0[16]) = *((int128_t *)&v7);
            *((unsigned long long *)&a0[8]) = 0;
            *((unsigned long long *)a0) = 9223372036854775813;
            return (unsigned long long)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v0);
        }
    }
    else
    {
        *((unsigned long long *)&a0[8]) = 3;
    }
    *((unsigned long long *)a0) = 9223372036854775813;
    return v0;
}
