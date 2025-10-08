
  int64_t uu_join::State::reset_next_line::h0d342ae7cfd1067f(int128_t* arg1, int64_t* arg2, char* arg3)

{
    int64_t var_78;
    uu_join::State::next_line::hfd4e253149903024(&var_78, arg2, arg3);
    int64_t rax = var_78;
    int64_t result;
    int128_t var_70;
    int64_t result_1;
    
    if (rax != -0x7fffffffffffffff)
    {
        int128_t var_58;
        int128_t var_28_1 = var_58;
        int64_t var_48 = rax;
        int128_t var_40_1 = var_70;
        int64_t result_2 = result_1;
        result = uu_join::State::reset::hf11a3d581915b2af(arg2, &var_48);
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
