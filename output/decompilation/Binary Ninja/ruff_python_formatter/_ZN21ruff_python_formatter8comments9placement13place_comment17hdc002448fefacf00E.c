
  int32_t* ruff_python_formatter::comments::placement::place_comment::hdc002448fefacf00(int128_t* arg1, int32_t* arg2, int64_t arg3, char* arg4, uint64_t arg5)

{
    void var_80;
    ruff_python_formatter::comments::placement::handle_parenthesized_comment::h8e0502a789509c98(
        &var_80, arg2, arg4, arg5);
    int64_t var_d0;
    ruff_python_formatter::comments::visitor::CommentPlacement::or_else::hd26c0204f9ea4061(&var_d0, 
        &var_80, arg4, arg5);
    ruff_python_formatter::comments::visitor::CommentPlacement::or_else::h6c4df664162ac8d3(&var_80, 
        &var_d0, arg4, arg5);
    var_d0 = arg3;
    char* var_c8 = arg4;
    uint64_t var_c0 = arg5;
    return ruff_python_formatter::comments::visitor::CommentPlacement::or_else::hc3d15522a75fe24c(
        arg1, &var_80, &var_d0);
}
