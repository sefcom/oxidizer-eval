
  void uu_join::parse_field_number_option::hc351970518f2dd89(int64_t* arg1, char* arg2, int64_t arg3)

{
    if (!arg2)
    {
        *arg1 = {0};
        return;
    }
    
    int64_t var_18;
    uu_join::parse_field_number::h7876c58ca785f0e6(&var_18, arg2, arg3);
    int64_t rax = var_18;
    int64_t var_10;
    
    if (rax)
    {
        arg1[1] = rax;
        arg1[2] = var_10;
        *arg1 = 1;
        return;
    }
    
    arg1[1] = 1;
    arg1[2] = var_10;
    *arg1 = 0;
}
