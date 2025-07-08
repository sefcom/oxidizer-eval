
  fn uu_tail::follow::watch::Observer::init_files::ha6088192ed8373cd(arg1: *mut i32, arg2: i64, arg3: i64) -> *mut i128

{
    let r14: *mut i32;
    let var_18: *mut i32 = r14;
    
    if *arg1 != 3
    {
        let mut var_58: i64 = arg2;
        let var_50_1: i64 = arg3 * 0x30 + arg2;
        
        loop
        {
            let rax_7: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&var_58);
            
            if rax_7 == 0
            {
                break;
            }
            
            if *rax_7.byte_offset(0x18) != -0x8000000000000000
            {
                let mut var_98: i128;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_98, rax_7.byte_offset(0x18));
                let mut var_88: size_t;
                let mut var_a8_1: size_t = var_88;
                let mut var_b8: i128 = var_98;
                
                if std::path::Path::is_absolute::h3431a23d91045560(*var_b8[8], var_88) != 0
                {
                    goto 'label_505b4e;
                }
                
                std::env::current_dir::h8e5fbaefdf378c8c(&var_98);
                let rax_10: i64 = var_98;
                let rsi_3: i64 = *var_98[8];
                let mut result: *mut i128;
                let mut rdx_3: *mut i32;
                
                if rax_10 == -0x8000000000000000
                {
                    let mut result_3: *mut i128;
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    result = result_3;
                }
                else
                {
                    let rdx_1: size_t = var_88;
                    let mut var_70: i64 = rax_10;
                    let var_68_1: i64 = rsi_3;
                    let var_60_1: size_t = rdx_1;
                    var_88 = var_a8_1;
                    var_98 = var_b8;
                    let mut var_48: i128;
                    std::path::Path::join::h568adc6ac393441e(&var_48, rsi_3, rdx_1, &var_98);
                    var_b8 = var_48;
                    let var_38: size_t;
                    var_a8_1 = var_38;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_70);
                    'label_505b4e:
                    let rax_13: i8 = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::hfd31d73cfedfa97d(*var_b8[8], var_a8_1);
                    let rdx_2: i64 = *var_b8[8];
                    
                    if rax_13 == 0
                    {
                        if _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h65c9528458cf452d(rdx_2, var_a8_1) != 0
                        {
                            var_88 = var_a8_1;
                            var_98 = var_b8;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&arg1[8], 
                                &var_98);
                            continue;
                        }
                        else
                        {
                            let mut rax_15: *mut i8;
                            let mut rdx_4: i64;
                            rax_15 =
                                std::path::Path::parent::h65c9a340a6266f2d(*var_b8[8], var_a8_1);
                            
                            if rax_15 == 0
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa();
                                /* no return */
                            }
                            
                            let result_2: *mut i128 =
                                uu_tail::follow::watch::WatcherRx::watch::h12bff18e757f3bf5(
                                *arg1.byte_offset(0x10), *arg1.byte_offset(0x18), rax_15, rdx_4);
                            result = result_2;
                            
                            if result_2 == 0
                            {
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
                                continue;
                            }
                        }
                    }
                    else
                    {
                        let mut result_1: *mut i128;
                        result_1 =
                            uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(
                            *arg1.byte_offset(0x10), *arg1.byte_offset(0x18), rdx_2, var_a8_1);
                        result = result_1;
                        
                        if result_1 == 0
                        {
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(
                                &var_b8);
                            continue;
                        }
                    }
                }
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
                return result;
            }
        }
    }
    
    nullptr
}
