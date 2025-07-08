
  int64_t uu_join::State::print_headers::hb47e9ff319dcdc6d(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t rax_1 = *(arg3 + 0x10);
    int64_t result;
    
    if (*(arg1 + 0x10))
    {
        if (!rax_1)
            goto label_471b88;
        
        result = uu_join::State::combine::h87fbb4174e657c14(arg1, arg2, arg3, arg4);
        
        if (result)
            return result;
    }
    else if (rax_1)
    {
        arg1 = arg3;
        label_471b88:
        result = uu_join::State::print_first_line::h7613f1add6e5ed81(arg1, arg2, arg4);
        
        if (result)
            return result;
    }
    return 0;
}
