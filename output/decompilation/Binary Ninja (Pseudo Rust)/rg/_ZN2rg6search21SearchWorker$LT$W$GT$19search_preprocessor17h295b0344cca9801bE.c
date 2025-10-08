
  fn rg::search::SearchWorker$LT$W$GT$::search_preprocessor::h295b0344cca9801b(arg1: *mut i64, arg2: *mut i32, arg3: i64) -> i64

{
    if 0 + -(*arg2.byte_offset(0x260))
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_108: ();
    std::process::Command::new::hf0673b88a585bfee(&var_108, &arg2[0x98]);
    std::process::Command::arg::h12e56d6aa56d7810(&var_108, arg3);
    let mut var_1f8: i32;
    std::fs::File::open::hbf43b83d6cee906c(&var_1f8, arg3);
    let var_1f0: i64;
    
    if var_1f8 != 1
    {
        let var_1f4: i32;
        std::process::Command::stdin::hf2e58e20c85050ff(&var_108, 3, var_1f4);
        let rdx_4: u64 = grep_cli::process::CommandReaderBuilder::build::h096992ea7f6eb603(
            &var_1f8, &arg2[0xca], &var_108);
        let rax_1: i32 = var_1f8;
        let mut var_1e8: i128;
        let mut var_1a8: i128;
        
        if rax_1 != 2
        {
            let var_180_1: i128 = var_1e8;
            let mut var_1d8: i128;
            let var_170_1: i128 = var_1d8;
            let mut var_1c8: i128;
            let var_160_1: i128 = var_1c8;
            let mut var_190: i32 = rax_1;
            let var_18c_1: i32 = var_1f4;
            let var_188_1: i64 = var_1f0;
            let var_208_1: *mut i32 = &var_190;
            let mut var_150: i128;
            let rdx_7: u64 = rg::search::search_reader::h64074cc9b87c5257(&var_150, &arg2[0xb0], 
                arg2, &arg2[0x42], arg3);
            let mut var_1b8: i64;
            let var_118: i32;
            
            if var_118 != 0x3b9aca01
            {
                let var_110: i64;
                var_1b8 = var_110;
                let var_120: i128;
                var_1c8 = var_120;
                let var_130: i128;
                var_1d8 = var_130;
                let var_140: i128;
                var_1e8 = var_140;
                var_1f8 = var_150;
            }
            else
            {
                var_1f8 = rg::search::SearchWorker$LT$W$GT$::search_preprocessor::_$u7b$$u7b$closure$u7d$$u7d$::h481170515aa8cd57(&var_108, var_150, rdx_7);
                *var_1c8[8] = 0x3b9aca01;
            }
            
            let rax_5: i64 = grep_cli::process::CommandReader::close::h135975e7dd1c0241(&var_190);
            var_1a8 = rax_5;
            let rdx_8: i64 = var_1f8;
            let rcx_3: i32 = *var_1c8[8];
            
            if rcx_3 == 0x3b9aca01
            {
                *arg1 = rdx_8;
                arg1[7] = 0x3b9aca01;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_1a8);
                core::ptr::drop_in_place$LT$grep_cli..process..CommandReader$GT$::h9848abec419dbb07(
                    &var_190);
            }
            else if rax_5 == 0
            {
                *arg1 = rdx_8;
                *arg1.byte_offset(8) = var_1f0;
                *arg1.byte_offset(0x18) = var_1e8;
                *arg1.byte_offset(0x28) = var_1d8;
                arg1[7] = rcx_3;
                *arg1.byte_offset(0x3c) = *var_1c8[0xc];
                *arg1.byte_offset(0x44) = *var_1b8[4];
                core::ptr::drop_in_place$LT$grep_cli..process..CommandReader$GT$::h9848abec419dbb07(
                    &var_190);
            }
            else
            {
                *arg1 = rax_5;
                arg1[7] = 0x3b9aca01;
                core::ptr::drop_in_place$LT$grep_cli..process..CommandReader$GT$::h9848abec419dbb07(
                    &var_190);
            }
        }
        else
        {
            let var_198_1: i64 = *var_1e8[8];
            var_1a8 = var_1f0;
            *arg1 = rg::search::SearchWorker$LT$W$GT$::search_preprocessor::_$u7b$$u7b$closure$u7d$$u7d$::hacef556950bacdab(&var_108, &var_1a8, rdx_4);
            arg1[7] = 0x3b9aca01;
        }
    }
    else
    {
        *arg1 = var_1f0;
        arg1[7] = 0x3b9aca01;
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_108)
}
