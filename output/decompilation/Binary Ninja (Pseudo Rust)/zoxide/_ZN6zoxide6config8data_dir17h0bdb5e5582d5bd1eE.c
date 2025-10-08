
  fn zoxide::config::data_dir::h0bdb5e5582d5bd1e(arg1: *mut i128) -> u64

{
    let mut var_68: i64;
    std::env::var_os::h745bce177e3d772b(&var_68, "_ZO_DATA_DIRcould not find data …");
    let mut result: u64;
    let mut var_88: i128;
    let mut result_1: u64;
    let mut var_50: *mut *mut [i8; 0xee];
    
    if !(0 + -(var_68))
    {
        let result_2: u64;
        result_1 = result_2;
        var_88 = var_68;
        'label_490a84:
        let r14_2: *mut i8 = *var_88[8];
        
        if std::path::Path::is_absolute::hf2dacc49683e82ac(r14_2, result_1) == 0
        {
            var_50 = &data_534980;
            let var_48: i64 = 1;
            let var_40: i64 = 8;
            let var_38: i128 = {0};
            *arg1.byte_offset(8) = anyhow::__private::format_err::h09b344f6a077676a(&var_50);
            *arg1 = -0x8000000000000000;
            /* tailcall */
            return core::mem::drop::h8efcdb4578edbe7f(var_88, r14_2);
        }
        
        result = result_1;
        arg1[1] = result;
        *arg1 = var_88;
    }
    else
    {
        dirs::data_local_dir::hc7e2cb36d3971fab(&var_50);
        result = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::context::ha597f3a4a7295cfd(&var_88, &var_50);
        let r15_1: i64 = var_88;
        let r14_1: i64 = *var_88[8];
        
        if r15_1 != -0x8000000000000000
        {
            std::path::Path::join::hb0fbf4f9ac9d7e75(&var_88, r14_1, result_1, 
                "zoxide1invalid unicode in _ZO_EX…");
            core::mem::drop::h8efcdb4578edbe7f(r15_1, r14_1);
            goto 'label_490a84;
        }
        
        *arg1.byte_offset(8) = r14_1;
        *arg1 = -0x8000000000000000;
    }
    result
}
