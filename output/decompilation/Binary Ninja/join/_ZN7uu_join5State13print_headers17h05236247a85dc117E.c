
  int64_t uu_join::State::print_headers::h05236247a85dc117(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t rax_1 = *(arg3 + 0x10);
    int64_t result;
    
    if (*(arg1 + 0x10))
    {
        if (!rax_1)
            goto label_471ac8;
        
        result = uu_join::State::combine::hef9cb824dfbe07fa(arg1, arg2, arg3, arg4);
        
        if (result)
            return result;
    }
    else if (rax_1)
    {
        arg1 = arg3;
        label_471ac8:
        result = uu_join::State::print_first_line::h5910ce581bed7f0a(arg1, arg2, arg4);
        
        if (result)
            return result;
    }
    return 0;
}
