
  int64_t uu_ls::dired::calculate_and_update_positions::h95a9ea6d492d96cc(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t* rcx = arg1[2];
    int64_t* rdi = arg1[1] + (rcx << 4) - 0x10;
    
    if (!rcx)
        rdi = rcx;
    
    int64_t rax_1 = core::option::Option$LT$T$GT$::map_or::h9541ece648ea5431(rdi);
    /* tailcall */
    return uu_ls::dired::update_positions::hea3b08d96622b01c(arg1, arg2 + rax_1 + 2, 
        arg3 + arg2 + rax_1 + 2);
}
