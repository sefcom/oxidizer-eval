
  fn uu_tail::follow::watch::Observer::init_files::h8692031d5a934069(arg1: *mut i32, arg2: *mut c_void, arg3: i64) -> u64

{
    if *arg1 == 3 || arg3 == 0
    {
        return 0;
    }
    
    let r13_3: *mut c_void = arg3 * 0x30 + arg2;
    let mut rax_1: *mut c_void = arg2.byte_offset(0x30);
    let mut result: u64 = 0;
    let mut var_60: *mut *mut c_void = &data_572f18;
    
    loop
    {
        let r15_1: *mut c_void = rax_1;
        
        if *arg2.byte_offset(0x18) == -0x8000000000000000
        {
            goto 'label_4a3e0f;
        }
        
        let mut var_78: i64;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_78, *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
        let mut rbp_1: i64 = var_78;
        let mut var_70: *mut i8;
        let mut r12_1: *mut i8 = var_70;
        let mut var_68: u64;
        let mut r14_1: u64 = var_68;
        
        if std::path::Path::is_absolute::hf2dacc49683e82ac(r12_1, r14_1) != 0
        {
            goto 'label_4a3d6c;
        }
        
        std::env::current_dir::h2d02f56ea8ff76eb(&var_78);
        let rbp_2: i64 = var_78;
        let rbx_2: *mut i8 = var_70;
        let mut result_1: u64;
        let mut rdx_3: *mut *mut c_void;
        
        if rbp_2 == -0x8000000000000000
        {
            result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            'label_4a3e5b:
            var_60 = rdx_3;
            result = result_1;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp_1, r12_1);
        }
        else
        {
            let rdx_1: u64 = var_68;
            var_78 = rbp_1;
            var_70 = r12_1;
            var_68 = r14_1;
            let mut var_48: i64;
            std::path::Path::join::h1c57b3f402244323(&var_48, rbx_2, rdx_1, &var_78);
            let var_38: u64;
            r14_1 = var_38;
            rbp_1 = var_48;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp_2, rbx_2);
            let var_40: *mut i8;
            r12_1 = var_40;
            'label_4a3d6c:
            
            if _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::h8ddebe59fac1e02e(r12_1, r14_1) != 0
            {
                result_1 = uu_tail::follow::watch::WatcherRx::watch_with_parent::ha42b5e61fec17468(
                    *arg1.byte_offset(0x10), *arg1.byte_offset(0x18), r12_1, r14_1);
                
                if result_1 != 0
                {
                    goto 'label_4a3e5b;
                }
                
                'label_4a3e0a:
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp_1, r12_1);
                goto 'label_4a3e0f;
            }
            
            if _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h6fd6d482b353a62d(r12_1, r14_1) == 0
            {
                let mut rax_8: *mut i8;
                let mut rdx_5: i64;
                rax_8 = std::path::Path::parent::hef287f60afa56900(r12_1, r14_1);
                
                if rax_8 == 0
                {
                    break;
                }
                
                result_1 = uu_tail::follow::watch::WatcherRx::watch::h0f775d7b205c66a4(
                    *arg1.byte_offset(0x10), *arg1.byte_offset(0x18), rax_8, rdx_5);
                
                if result_1 == 0
                {
                    goto 'label_4a3e0a;
                }
                
                result = result_1;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp_1, r12_1);
            }
            else
            {
                var_78 = rbp_1;
                var_70 = r12_1;
                var_68 = r14_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&arg1[8], &var_78);
                'label_4a3e0f:
                rax_1 = r15_1.byte_offset(0x30);
                
                if r15_1 == r13_3
                {
                    rax_1 = r15_1;
                }
                
                if r15_1 != r13_3
                {
                    arg2 = r15_1;
                    
                    if r15_1 != 0
                    {
                        continue;
                    }
                }
            }
        }
        return result;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
