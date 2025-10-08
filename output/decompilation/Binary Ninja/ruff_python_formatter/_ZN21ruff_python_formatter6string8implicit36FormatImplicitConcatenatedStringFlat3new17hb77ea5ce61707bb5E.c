
  void ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::hb77ea5ce61707bb5(int64_t* arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)

{
    switch (arg2)
    {
        case 0:
        {
            if (!(0 + -(*arg3)))
            {
                label_727153:
                char rax;
                char rdx_1;
                rax = ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::merge_flags::h859f9d81ac4b6b16(arg2, arg3, arg4);
                
                if (rax & 1)
                {
                    *arg1 = arg2;
                    arg1[1] = arg3;
                    arg1[2] = 0;
                    *(arg1 + 0x11) = rdx_1;
                    return;
                }
            }
            break;
        }
        case 1:
        {
            if (!*arg3)
                goto label_727153;
            break;
        }
        case 2:
        {
            if (*arg3 == -0x7fffffffffffffff)
                goto label_727153;
            break;
        }
        case 3:
        {
            if (0 + -(*arg3))
                goto label_727153;
            break;
        }
    }
    
    *arg1 = 4;
}
