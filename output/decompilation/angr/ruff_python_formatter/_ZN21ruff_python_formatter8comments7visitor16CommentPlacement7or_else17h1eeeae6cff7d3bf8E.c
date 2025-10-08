double ruff_python_formatter::comments::visitor::CommentPlacement::or_else(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long v1;  // xmm0lq
    int v2;  // xmm0
    int v3;  // xmm1
    int v4;  // xmm2

    if (*((int *)a1) > 93)
    {
        a0[4] = (int128_t)a1[64];
        v2 = *((int128_t *)a1);
        v3 = (int128_t)a1[16];
        v4 = (int128_t)a1[32];
        a0[3] = (int128_t)a1[48];
        *((void*)&a0[2]) = v4;
        *((void*)&a0[1]) = v3;
        *((void*)&a0[0]) = v2;
        return (unsigned long long)v2;
    }
    ruff_python_formatter::comments::placement::handle_own_line_comment_around_body::{{closure}}(a0, a2, a3, a1);
    return v1;
}
