
  char* uu_rmdir::uumain::uumain::points_to_directory::h618067cf6122ffc7(char* arg1, int64_t arg2)

{
    int32_t var_b8;
    std::fs::metadata::h57d3e19175266609(&var_b8, arg2);
    int64_t rax;
    
    if (var_b8 != 2)
    {
        int32_t var_80;
        arg1[1] = (0xf000 & var_80) == 0x4000;
        rax = 0;
    }
    else
    {
        int64_t var_b0;
        *(arg1 + 8) = var_b0;
        rax = 1;
    }
    
    *arg1 = rax;
    return arg1;
}
