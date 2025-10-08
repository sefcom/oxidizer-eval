
  int64_t* uu_cut::get_delimiters::hcb390251ab0b3ea3(int64_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "whitespace-delimiteddelimiter''", 0x14);
    int32_t var_58;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3ff74e05d0cadf2b(&var_58, 
        arg2, "delimiter''", 9);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h3e44d99a4fa5a9d3(
        "delimiter''", 9, &var_58);
    char const* const r15_1;
    
    if (!rax_1)
    {
        r15_1 = nullptr;
        
        if (!rax)
            r15_1 = "\t-: \n: Is a directory\ninvalid…";
        
        goto label_46a130;
    }
    
    int64_t rax_5;
    uint64_t rdx_1;
    char const* const rsi_1;
    
    if (!rax)
    {
        char* r13_1 = *(rax_1 + 8);
        uint64_t r12_1 = *(rax_1 + 0x10);
        int64_t r12_2;
        
        if (!(!r12_1 | _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(r13_1, r12_1)))
        {
            int32_t zmm0_1[0x4] =
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_58, r13_1, r12_1);
            
            if (var_58 != 1)
            {
                char* var_50;
                void* var_48;
                
                if (_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_50, var_48 + var_50, zmm0_1) <= 1)
                    goto label_46a1c8;
                
                label_46a1db:
                rsi_1 = "the delimiter must be a single c…";
                rdx_1 = 0x28;
                goto label_46a1ed;
            }
            
            label_46a1c8:
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_58, *(rax_1 + 8), 
                *(rax_1 + 0x10));
            
            if (r12_1 != 1 && var_58)
                goto label_46a1db;
            
            char* rax_9;
            int64_t rdx_5;
            rax_9 = _$LT$uu_cut..Delimiter$u20$as$u20$core..convert..From$LT$$RF$std..ffi..os_str..OsString$GT$$GT$::from::h9cfa98f4095a0128(rax_1);
            r15_1 = rax_9;
            r12_2 = rdx_5;
        }
        else
        {
            r15_1 = &data_41ec8f[0x90];
            label_46a130:
            r12_2 = 1;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3ff74e05d0cadf2b(
            &var_58, arg2, "output-delimiterClapErrorWrapper…", 0x10);
        int32_t* rdx_2 = &var_58;
        void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::h3e44d99a4fa5a9d3(
            "output-delimiterClapErrorWrapper…", 0x10, rdx_2);
        void* rax_4;
        
        if (!rax_3)
            rax_4 = nullptr;
        else
            rax_4 = uu_cut::get_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::hb8cb5833204c5644(
                *(rax_3 + 8), *(rax_3 + 0x10));
        
        arg1[1] = r15_1;
        arg1[2] = r12_2;
        arg1[3] = rax_4;
        arg1[4] = rdx_2;
        rax_5 = 0;
    }
    else
    {
        rsi_1 = "invalid input: Only one of --del…";
        rdx_1 = 0x49;
        label_46a1ed:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hdd477e9923447a3c(&var_58, rsi_1, rdx_1);
        int32_t var_40_1 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h8c28acd2624e9f9f(&var_58);
        arg1[2] = &data_4f9218;
        rax_5 = 1;
    }
    *arg1 = rax_5;
    return arg1;
}
