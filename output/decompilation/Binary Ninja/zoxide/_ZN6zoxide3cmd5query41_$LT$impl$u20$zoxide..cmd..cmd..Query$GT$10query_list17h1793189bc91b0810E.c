
  uint64_t zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_list::h1793189bc91b0810(void* arg1, void* arg2)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_60 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* var_98 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_60);
    int64_t rax_1 = *(arg1 + 0x18);
    int64_t r15 = *(arg1 + 0x20);
    int64_t r12 = *(arg1 + 0x28);
    uint64_t i;
    uint64_t result;
    int64_t* var_90;
    int64_t var_80;
    
    if (!(*(arg1 + 0x4b) & 1))
    {
        if (-(rax_1) != -0x8000000000000000)
        {
            while (true)
            {
                void* rax_11 = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
                
                if (!rax_11)
                    goto label_490261;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(*(rax_11 + 8), *(rax_11 + 0x10), r15, r12))
                {
                    void* var_70_4 = rax_11;
                    var_80 = 0;
                    int32_t var_68_4 = 0x20;
                    var_90 = &var_80;
                    int64_t (* var_88_4)(char* arg1, int64_t* arg2) = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                    var_60 = &data_534950;
                    int64_t var_58_4 = 2;
                    int64_t var_40_4 = 0;
                    int64_t** var_50_4 = &var_90;
                    int64_t var_48_4 = 1;
                    i = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(std::io::Write::write_fmt::h90c817d01f5acb46(&var_98, &var_60), 
                        "stdoutcould not read selection f…", 6);
                    
                    if (i)
                        break;
                }
            }
        }
        else
        {
            do
            {
                int64_t rax_6 = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
                
                if (!rax_6)
                    goto label_490261;
                
                int64_t var_70_2 = rax_6;
                var_80 = 0;
                int32_t var_68_2 = 0x20;
                var_90 = &var_80;
                int64_t (* var_88_2)(char* arg1, int64_t* arg2) = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                var_60 = &data_534950;
                int64_t var_58_2 = 2;
                int64_t var_40_2 = 0;
                int64_t** var_50_2 = &var_90;
                int64_t var_48_2 = 1;
                i = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(std::io::Write::write_fmt::h90c817d01f5acb46(&var_98, &var_60), 
                    "stdoutcould not read selection f…", 6);
            } while (!i);
        }
    }
    else
    {
        int64_t rdx;
        
        if (-(rax_1) != -0x8000000000000000)
        {
            while (true)
            {
                void* rax_8 = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
                
                if (!rax_8)
                    goto label_490261;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(*(rax_8 + 8), *(rax_8 + 0x10), r15, r12))
                {
                    var_80 = 1;
                    int64_t var_78_2 = rdx;
                    void* var_70_3 = rax_8;
                    int32_t var_68_3 = 0x20;
                    var_90 = &var_80;
                    int64_t (* var_88_3)(char* arg1, int64_t* arg2) = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                    var_60 = &data_534950;
                    int64_t var_58_3 = 2;
                    int64_t var_40_3 = 0;
                    int64_t** var_50_3 = &var_90;
                    int64_t var_48_3 = 1;
                    i = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(std::io::Write::write_fmt::h90c817d01f5acb46(&var_98, &var_60), 
                        "stdoutcould not read selection f…", 6);
                    
                    if (i)
                        break;
                }
            }
        }
        else
        {
            do
            {
                int64_t rax_3 = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
                
                if (!rax_3)
                {
                    label_490261:
                    result = 0;
                    goto label_490267;
                }
                
                var_80 = 1;
                int64_t var_78_1 = rdx;
                int64_t var_70_1 = rax_3;
                int32_t var_68_1 = 0x20;
                var_90 = &var_80;
                int64_t (* var_88_1)(char* arg1, int64_t* arg2) = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                var_60 = &data_534950;
                int64_t var_58_1 = 2;
                int64_t var_40_1 = 0;
                int64_t** var_50_1 = &var_90;
                int64_t var_48_1 = 1;
                i = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(std::io::Write::write_fmt::h90c817d01f5acb46(&var_98, &var_60), 
                    "stdoutcould not read selection f…", 6);
            } while (!i);
        }
    }
    result = i;
    label_490267:
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h5b7e4e16b06d2aa7(var_98);
    return result;
}
