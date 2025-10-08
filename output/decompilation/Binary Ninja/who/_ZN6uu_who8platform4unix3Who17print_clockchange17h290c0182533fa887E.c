
  int64_t uu_who::platform::unix::Who::print_clockchange::h290c0182533fa887(void* arg1, void* arg2)

{
    void var_20;
    uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_20, arg2);
    int64_t var_30 = 0;
    int64_t var_40 = 0;
    int64_t var_50 = 0;
    int64_t var_60 = 0;
    int128_t var_18;
    uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 1, 0, 0x20, 
        "clock changeid=LOGINterm= exit=s…", var_18, 1, 1, 1, 1);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_20);
}
