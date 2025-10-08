
  fn zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_first::h2951b26d66defb32(arg1: *mut c_void, arg2: *mut c_void) -> u64

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_98: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut rax_1: i8;
    let mut result_2: u64;
    rax_1 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::context::h633182c7939166ca(zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2), 
        "no match foundyou are already in…", 0xe);
    let mut result: u64 = result_2;
    
    if (rax_1 & 1) != 0
    {
        return result;
    }
    
    if !(0 + -(*arg1.byte_offset(0x18)))
    {
        let r13_1: i64 = *arg1.byte_offset(0x20);
        let rbp_1: i64 = *arg1.byte_offset(0x28);
        
        while _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(*(result + 8), *(result + 0x10), r13_1, rbp_1) != 0
        {
            let mut rax_6: i8;
            let mut result_3: u64;
            rax_6 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::context::h633182c7939166ca(zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2), 
                "you are already in the only matc…", 0x21);
            result = result_3;
            
            if (rax_6 & 1) != 0
            {
                return result;
            }
        }
    }
    
    let mut rax_3: i64;
    
    if *arg1.byte_offset(0x4b) == 0
    {
        rax_3 = 0;
    }
    else
    {
        let rdx: i64;
        let var_78_1: i64 = rdx;
        rax_3 = 1;
    }
    
    let mut var_80: i64 = rax_3;
    let result_1: u64 = result;
    let var_68_1: i32 = 0x20;
    let mut var_90: *mut i64 = &var_80;
    let var_88_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
        _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
    let mut var_60: *mut c_void = &data_534950;
    let var_58_1: i64 = 2;
    let var_40_1: i64 = 0;
    let var_50_1: *mut *mut i64 = &var_90;
    let var_48_1: i64 = 1;
    _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        &var_98, &var_60), "stdoutcould not read selection f…", 6)
}
