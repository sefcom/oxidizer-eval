
  int64_t uu_ls::dired::calculate_and_update_positions::ha13b4b5d54cc4d09(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t rax = arg1[2];
    int64_t* rdi = nullptr;
    
    if (rax >= 1)
        rdi = ((rax - 1) << 4) + arg1[1];
    
    int64_t rax_1 = core::option::Option$LT$T$GT$::map_or::h6db8c3714c85d15c(rdi);
    /* tailcall */
    return uu_ls::dired::update_positions::h1dc8b030d29268c5(arg1, arg2 + rax_1 + 2, 
        arg3 + arg2 + rax_1 + 2);
}
