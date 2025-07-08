
  int128_t* uu_join::State::reset_next_line::h05bf92bdc2a868ec(int128_t* arg1, int64_t* arg2, char* arg3)

{
    int64_t var_78;
    uu_join::State::next_line::hc7c703feb1ea580e(&var_78, arg2, arg3);
    int64_t rax = var_78;
    int128_t* result;
    int128_t var_70;
    int128_t* result_1;
    
    if (rax != -0x7fffffffffffffff)
    {
        int128_t var_58;
        int128_t var_28_1 = var_58;
        int64_t var_48 = rax;
        int128_t var_40_1 = var_70;
        int128_t* result_2 = result_1;
        result = uu_join::State::reset::h80c820df90bbe344(arg2, &var_48);
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        result = result_1;
        arg1[1] = result;
        *arg1 = var_70;
    }
    return result;
}
