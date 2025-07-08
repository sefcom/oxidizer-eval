
  char const (**)[0x92] uu_cat::write_new_line::h703f4daf25cc548e(char const (*** arg1)[0x92], int64_t* arg2, char* arg3, int64_t* arg4, char arg5)

{
    char const (** result)[0x92];
    char const (** result_1)[0x92];
    
    if (!*(arg4 + 9))
    {
        result = arg4[1];
        
        if (!result || !*arg3 || !*(arg4 + 0xa))
        {
            *(arg4 + 0xa) = 1;
            
            if (!result || arg3[4] != 2)
                goto label_4b0aa5;
            
            int64_t* var_70 = arg4;
            uint64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            result_1 = 2;
            int64_t var_98 = 0;
            int64_t var_90_1 = 6;
            int64_t var_88_1 = 0;
            int64_t var_80_1 = 0x20;
            char var_78_1 = 3;
            void* const var_60 = &data_518728;
            int64_t var_58_1 = 2;
            char const (*** var_40_1)[0x92] = &result_1;
            int64_t var_38_1 = 1;
            int64_t** var_50_1 = &var_70;
            int64_t var_48_1 = 1;
            result = std::io::Write::write_fmt::h6cba046ccfa3b685(arg2, &var_60);
            
            if (result)
            {
                *arg1 = -0x8000000000000000;
                arg1[1] = result;
            }
            else
            {
                *arg4 += 1;
                label_4b0aa5:
                uint64_t rcx_1;
                char const* const rdx_1;
                int64_t* rdi_3;
                char r8_1;
                
                if (!arg3[2])
                {
                    r8_1 = arg5;
                    rdx_1 = "\n-src/uu/cat/src/cat.rs\t$\n^M^…";
                    rdi_3 = &result_1;
                    rcx_1 = 1;
                }
                else
                {
                    r8_1 = arg5;
                    rdx_1 = "$\n^M^I^?unknown filetype: Is a …";
                    rdi_3 = &result_1;
                    rcx_1 = 2;
                }
                
                uu_cat::write_end_of_line::h4ed837c9dff89e3f(rdi_3, arg2, rdx_1, rcx_1, r8_1);
                result = result_1;
                
                if (result != -0x7ffffffffffffffa)
                {
                    int128_t var_a0;
                    *(arg1 + 8) = var_a0;
                    *arg1 = result;
                }
                else
                    *arg1 = -0x8000000000000006;
            }
        }
        else
            *arg1 = -0x8000000000000006;
    }
    else
    {
        uint64_t rcx;
        char const* const rdx;
        int64_t* rdi_1;
        char r8;
        int64_t* r15_1;
        
        if (!arg3[2])
        {
            r15_1 = arg2;
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg2, "\r\n-src/uu/cat/src/cat.rs\t$\n^…", 1);
            
            if (!result)
            {
                *(arg4 + 9) = 0;
                r8 = arg5;
                rdx = "\n-src/uu/cat/src/cat.rs\t$\n^M^…";
                rdi_1 = &result_1;
                rcx = 1;
                label_4b0b04:
                result = uu_cat::write_end_of_line::h4ed837c9dff89e3f(rdi_1, r15_1, rdx, rcx, r8);
                
                if (result_1 == -0x7ffffffffffffffa)
                    *arg1 = -0x8000000000000006;
                else
                {
                    char const (** result_2)[0x92];
                    result = result_2;
                    arg1[2] = result;
                    *arg1 = result_1;
                }
            }
            else
            {
                *arg1 = -0x8000000000000000;
                arg1[1] = result;
            }
        }
        else
        {
            r15_1 = arg2;
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg2, "^M^I^?unknown filetype: Is a dir…", 2);
            
            if (!result)
            {
                *(arg4 + 9) = 0;
                r8 = arg5;
                rdx = "$\n^M^I^?unknown filetype: Is a …";
                rdi_1 = &result_1;
                rcx = 2;
                goto label_4b0b04;
            }
            
            *arg1 = -0x8000000000000000;
            arg1[1] = result;
        }
    }
    return result;
}
