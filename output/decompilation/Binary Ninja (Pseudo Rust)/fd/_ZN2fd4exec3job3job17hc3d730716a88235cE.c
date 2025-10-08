
  fn fd::exec::job::job::hc3d730716a88235c(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i8, arg5: *mut c_void) -> u64

{
    let rax: i64 = *arg5.byte_offset(0x1a0);
    let mut var_308: ();
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he05ad75fcea55ffb(
        &var_308, arg1);
    let mut var_380: i64 = 0;
    
    if !(0 + -(*arg5.byte_offset(0x168)))
    {
        var_380 = *arg5.byte_offset(0x170);
    }
    
    let rax_2: i8 = *arg5.byte_offset(0x1e7);
    let rdx: i64 = *arg5.byte_offset(0x178);
    let mut rbp: u64;
    rbp = 2;
    let mut var_348: i128;
    let mut var_2a0: i64;
    let mut var_298: i128;
    let mut var_260: ();
    let mut var_168: i64;
    let var_160: i128;
    let var_150: i128;
    let var_140: i128;
    let var_130: i64;
    let mut var_128: ();
    
    if (*arg5.byte_offset(0x1e6) & 1) == 0
    {
        loop
        {
            _$LT$core..iter..adapters..flatten..Flatten$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc38c5685e7f50b75(&var_168, &var_308);
            let rax_12: i64 = var_168;
            
            if rax_12 == 5
            {
                break;
            }
            
            if rax_12 != 4
            {
                var_2a0 = rax_12;
                let var_268_2: i64 = var_130;
                let var_278_2: i128 = var_140;
                let var_288_2: i128 = var_150;
                var_298 = var_160;
                memcpy(&var_260, &var_128, 0xf8);
                let mut rax_15: i64;
                let mut rdx_3: i64;
                rax_15 = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(&var_2a0, rax_2);
                let mut r10_2: i64;
                r10_2 = rax >= 2;
                let var_390_2: i64 = r10_2;
                rbp = fd::exit_codes::merge_exitcodes::h93e1d44106fac795(rbp |
                    fd::exec::CommandSet::execute::haf020f5cb9b7fb2f(arg2, arg3, rax_15, rdx_3, 
                    var_380, rdx, arg4) << 8);
                core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(
                    &var_2a0);
            }
            else
            {
                let var_318_2: i64 = var_130;
                let var_328_2: i128 = var_140;
                let var_338_2: i128 = var_150;
                var_348 = var_160;
                core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_348);
            }
        }
    }
    else
    {
        loop
        {
            _$LT$core..iter..adapters..flatten..Flatten$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc38c5685e7f50b75(&var_168, &var_308);
            let rax_4: i64 = var_168;
            
            if rax_4 == 5
            {
                break;
            }
            
            if rax_4 != 4
            {
                var_2a0 = rax_4;
                let var_268_1: i64 = var_130;
                let var_278_1: i128 = var_140;
                let var_288_1: i128 = var_150;
                var_298 = var_160;
                memcpy(&var_260, &var_128, 0xf8);
                let mut rax_7: i64;
                let mut rdx_1: i64;
                rax_7 = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(&var_2a0, rax_2);
                let mut r10_1: i64;
                r10_1 = rax >= 2;
                let var_390_1: i64 = r10_1;
                rbp = fd::exit_codes::merge_exitcodes::h93e1d44106fac795(rbp |
                    fd::exec::CommandSet::execute::haf020f5cb9b7fb2f(arg2, arg3, rax_7, rdx_1, 
                    var_380, rdx, arg4) << 8);
                core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(
                    &var_2a0);
            }
            else
            {
                let var_318_1: i64 = var_130;
                let var_328_1: i128 = var_140;
                let var_338_1: i128 = var_150;
                var_348 = var_160;
                let mut var_2b8: ();
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7dbe7d6fc55b9016(&var_2b8, &var_348);
                fd::error::print_error::h653511955bf98e50(&var_2b8);
                core::ptr::drop_in_place$LT$ignore..Error$GT$::hba255aab589c455f(&var_348);
            }
        }
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$crossbeam_channel..channel..IntoIter$LT$fd..walk..Batch$GT$$GT$$GT$::hdb508d9cf42bcfa6(&var_308);
    rbp
}
