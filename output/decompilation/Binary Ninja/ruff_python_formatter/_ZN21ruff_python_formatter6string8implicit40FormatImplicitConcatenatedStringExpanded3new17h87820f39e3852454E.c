
  uint32_t* const ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringExpanded::new::h87820f39e3852454(int64_t* arg1, int64_t arg2, int64_t* arg3, char arg4)

{
    uint32_t* const result = &jump_table_487b8c;
    
    switch (arg2)
    {
        case 0:
        {
            result = nullptr;
            
            if (0 + -(*arg3))
            {
                label_726d1e:
                uint32_t* const result_1 = result;
                core::panicking::panic::h85d6dd562679980c("assertion failed: string.is_impl…");
                /* no return */
            }
            break;
        }
        case 1:
        {
            if (*arg3)
                goto label_726d1e;
            break;
        }
        case 2:
        {
            result = -0x8000000000000001;
            
            if (*arg3 != -0x7fffffffffffffff)
                goto label_726d1e;
            break;
        }
        case 3:
        {
            result = nullptr;
            
            if (!(0 + -(*arg3)))
                goto label_726d1e;
            break;
        }
    }
    
    *arg1 = arg2;
    arg1[1] = arg3;
    arg1[2] = arg4;
    return result;
}
