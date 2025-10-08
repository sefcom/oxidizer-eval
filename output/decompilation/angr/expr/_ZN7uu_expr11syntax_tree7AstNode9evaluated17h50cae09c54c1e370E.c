long long uu_expr::syntax_tree::AstNode::evaluated(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    unsigned int v6;  // eax

    v6 = uu_expr::syntax_tree::get_next_id();
    v2.eval(a1);
    memcpy(&v0, &v3, 16);
    memcpy(&v1, &v4, 16);
    if (*((int *)&v2) == 1)
    {
        *((int128_t *)&a0[24]) = *((int128_t *)&v1);
        a0[8] = v0;
        *((unsigned long long *)a0) = 9223372036854775813;
    }
    else
    {
        *((int128_t *)&a0[16]) = *((int128_t *)&v1);
        *(a0) = v0;
        *((unsigned int *)&a0[32]) = v6;
    }
    core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(a1);
    return a0;
}
