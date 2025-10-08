
  int64_t ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter::h462e49ccaf522bd7(int128_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int32_t i;
    
    do
    {
        int64_t rbx_1 = arg3[1];
        uint64_t rbp_1 = arg3[2];
        bool cond:0_1 = *arg3 & 1;
        *arg3 = 0;
        
        if (!cond:0_1)
        {
            int64_t rax_1;
            uint64_t rdx_1;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h3fa9a8e3da590a31(&arg3[3]);
            rbx_1 = rax_1;
            rbp_1 = rdx_1;
        }
        
        if (!rbx_1)
        {
            ruff_python_formatter::string::docstring::CodeExample::finish::hfd3e9aa3b4f5a7b9(
                &arg2[4], arg2);
            /* tailcall */
            return ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::h5e595196a30effb1(arg1, arg2);
        }
        
        int32_t r13_1 = arg2[0x12];
        int128_t zmm0_2 = *
            core::option::Option$LT$T$GT$::get_or_insert_with::hfe9154ba007c2a9a(arg3, arg3 + 0x18);
        int64_t var_58 = rbx_1;
        uint64_t var_50_1 = rbp_1;
        int32_t var_38_1 = r13_1;
        int128_t var_48_1 = zmm0_2;
        
        if (rbp_1 >> 0x20)
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(1);
        else
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
            rbp_1 = rbp_1 + 1;
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
        arg2[0x12] += rbp_1;
        ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one::hae2c629763b1b7f5(
            &i, arg2, &var_58);
    } while (i == 4);
    
    int64_t result;
    arg1[1] = result;
    *arg1 = i;
    return result;
}
