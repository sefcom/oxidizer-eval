
  int32_t* ruff_python_formatter::comments::visitor::CommentPlacement::or_else::h1eeeae6cff7d3bf8(int64_t* arg1, int32_t* arg2, char* arg3, int64_t arg4)

{
    if (*arg2 <= 0x5d)
        /* tailcall */
        return ruff_python_formatter::comments::placement::handle_own_line_comment_around_body::_$u7b$$u7b$closure$u7d$$u7d$::h485e9d6a5f0dc71a(arg1, arg3, arg4, arg2);
    
    *(arg1 + 0x40) = *(arg2 + 0x40);
    int128_t zmm0 = *arg2;
    int128_t zmm1 = *(arg2 + 0x10);
    int128_t zmm2 = *(arg2 + 0x20);
    *(arg1 + 0x30) = *(arg2 + 0x30);
    *(arg1 + 0x20) = zmm2;
    *(arg1 + 0x10) = zmm1;
    *arg1 = zmm0;
    return arg2;
}
