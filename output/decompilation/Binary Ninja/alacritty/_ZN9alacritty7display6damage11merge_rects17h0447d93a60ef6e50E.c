
  int64_t alacritty::display::damage::merge_rects::h0447d93a60ef6e50(int32_t* arg1, int32_t* arg2, int32_t* arg3)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t r12 = *arg2;
    int32_t r13 = *arg3;
    int32_t rax_1 = core::cmp::Ord::min::h3552534d3430b892(r12, r13);
    int32_t rax_2 = core::cmp::Ord::max::h485505c56320f468(r12 + arg2[2], r13 + arg3[2]);
    int32_t r13_2 = arg2[1];
    int32_t r15_1 = arg3[1];
    int32_t rax_3 = core::cmp::Ord::max::h485505c56320f468(arg2[3] + r13_2, arg3[3] + r15_1);
    int32_t result = core::cmp::Ord::min::h3552534d3430b892(r13_2, r15_1);
    *arg1 = rax_1;
    arg1[1] = result;
    arg1[2] = rax_2 - rax_1;
    arg1[3] = rax_3 - result;
    return result;
}
