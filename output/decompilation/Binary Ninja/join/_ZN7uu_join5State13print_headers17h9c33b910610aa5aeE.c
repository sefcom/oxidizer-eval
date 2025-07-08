
  int64_t uu_join::State::print_headers::h9c33b910610aa5ae(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t rax_1 = *(arg3 + 0x10);
    int64_t result;
    
    if (*(arg1 + 0x10))
    {
        if (!rax_1)
            goto label_471b48;
        
        result = uu_join::State::combine::he1c3f6ec163eb0f7(arg1, arg2, arg3, arg4);
        
        if (result)
            return result;
    }
    else if (rax_1)
    {
        arg1 = arg3;
        label_471b48:
        result = uu_join::State::print_first_line::h93d7e60e203eff8f(arg1, arg2, arg4);
        
        if (result)
            return result;
    }
    return 0;
}
