
  int128_t* uu_wc::escape_name_wrapper::haaae7e5c159f0dd0(int128_t* arg1, char* arg2, uint64_t arg3)

{
    void var_28;
    uucore::features::quoting_style::escape_name::h942044e1943bd5af(&var_28, arg2, arg3, 
        &data_41a13f);
    int64_t var_50;
    alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_50, &var_28);
    bool o = 0 + -(var_50);
    int64_t rcx;
    rcx = o;
    int64_t rdx;
    rdx = !o;
    int128_t var_48;
    int64_t rax = *(&*var_48[8] + (rcx << 3));
    int64_t var_18 = rax;
    var_48 = *(&var_50 + (rcx << 3));
    int64_t var_38 = rax;
    var_50 = rdx;
    core::result::Result$LT$T$C$E$GT$::expect::h9cf535346213a901(arg1, &var_50);
    return arg1;
}
