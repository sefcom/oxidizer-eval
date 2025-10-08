
  uint64_t zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_first::h2951b26d66defb32(void* arg1, void* arg2)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_98 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    char rax_1;
    uint64_t result_2;
    rax_1 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::context::h633182c7939166ca(zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2), 
        "no match foundyou are already in…", 0xe);
    uint64_t result = result_2;
    
    if (rax_1 & 1)
        return result;
    
    if (!(0 + -(*(arg1 + 0x18))))
    {
        int64_t r13_1 = *(arg1 + 0x20);
        int64_t rbp_1 = *(arg1 + 0x28);
        
        while (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(*(result + 8), *(result + 0x10), r13_1, rbp_1))
        {
            char rax_6;
            uint64_t result_3;
            rax_6 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::context::h633182c7939166ca(zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2), 
                "you are already in the only matc…", 0x21);
            result = result_3;
            
            if (rax_6 & 1)
                return result;
        }
    }
    
    int64_t rax_3;
    
    if (!*(arg1 + 0x4b))
        rax_3 = 0;
    else
    {
        int64_t rdx;
        int64_t var_78_1 = rdx;
        rax_3 = 1;
    }
    
    int64_t var_80 = rax_3;
    uint64_t result_1 = result;
    int32_t var_68_1 = 0x20;
    int64_t* var_90 = &var_80;
    int64_t (* var_88_1)(char* arg1, int64_t* arg2) =
        _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
    void* const var_60 = &data_534950;
    int64_t var_58_1 = 2;
    int64_t var_40_1 = 0;
    int64_t** var_50_1 = &var_90;
    int64_t var_48_1 = 1;
    return _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
            &var_98, &var_60), 
        "stdoutcould not read selection f…", 6);
}
