
  int512_t uu_join::parse_field_number_option::h48fa1297dd47f55b(int64_t* arg1, char* arg2, int64_t arg3)

{
    int512_t result;
    
    if (!arg2)
    {
        result = {0};
        *arg1 = {0};
    }
    else
    {
        int64_t var_18;
        result = uu_join::parse_field_number::h9316b11a89c3fc26(&var_18, arg2, arg3);
        int64_t rax_1 = var_18;
        int64_t var_10;
        
        if (!rax_1)
        {
            arg1[1] = 1;
            arg1[2] = var_10;
            *arg1 = 0;
        }
        else
        {
            arg1[1] = rax_1;
            arg1[2] = var_10;
            *arg1 = 1;
        }
    }
    
    return result;
}
