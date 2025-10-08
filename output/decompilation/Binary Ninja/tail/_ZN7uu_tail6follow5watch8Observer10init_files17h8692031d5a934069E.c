
  uint64_t uu_tail::follow::watch::Observer::init_files::h8692031d5a934069(int32_t* arg1, void* arg2, int64_t arg3)

{
    if (*arg1 == 3 || !arg3)
        return 0;
    
    void* r13_3 = arg3 * 0x30 + arg2;
    void* rax_1 = arg2 + 0x30;
    uint64_t result = 0;
    void** const var_60 = &data_572f18;
    
    while (true)
    {
        void* r15_1 = rax_1;
        
        if (*(arg2 + 0x18) == -0x8000000000000000)
            goto label_4a3e0f;
        
        int64_t var_78;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_78, *(arg2 + 0x20), *(arg2 + 0x28));
        int64_t rbp_1 = var_78;
        char* var_70;
        char* r12_1 = var_70;
        uint64_t var_68;
        uint64_t r14_1 = var_68;
        
        if (std::path::Path::is_absolute::hf2dacc49683e82ac(r12_1, r14_1))
            goto label_4a3d6c;
        
        std::env::current_dir::h2d02f56ea8ff76eb(&var_78);
        int64_t rbp_2 = var_78;
        char* rbx_2 = var_70;
        uint64_t result_1;
        void** rdx_3;
        
        if (rbp_2 == -0x8000000000000000)
        {
            result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            label_4a3e5b:
            var_60 = rdx_3;
            result = result_1;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp_1, r12_1);
        }
        else
        {
            uint64_t rdx_1 = var_68;
            var_78 = rbp_1;
            var_70 = r12_1;
            var_68 = r14_1;
            int64_t var_48;
            std::path::Path::join::h1c57b3f402244323(&var_48, rbx_2, rdx_1, &var_78);
            uint64_t var_38;
            r14_1 = var_38;
            rbp_1 = var_48;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp_2, rbx_2);
            char* var_40;
            r12_1 = var_40;
            label_4a3d6c:
            
            if (_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::h8ddebe59fac1e02e(r12_1, r14_1))
            {
                result_1 = uu_tail::follow::watch::WatcherRx::watch_with_parent::ha42b5e61fec17468(
                    *(arg1 + 0x10), *(arg1 + 0x18), r12_1, r14_1);
                
                if (result_1)
                    goto label_4a3e5b;
                
                label_4a3e0a:
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp_1, r12_1);
                goto label_4a3e0f;
            }
            
            if (!_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h6fd6d482b353a62d(r12_1, r14_1))
            {
                char* rax_8;
                int64_t rdx_5;
                rax_8 = std::path::Path::parent::hef287f60afa56900(r12_1, r14_1);
                
                if (!rax_8)
                    break;
                
                result_1 = uu_tail::follow::watch::WatcherRx::watch::h0f775d7b205c66a4(
                    *(arg1 + 0x10), *(arg1 + 0x18), rax_8, rdx_5);
                
                if (!result_1)
                    goto label_4a3e0a;
                
                result = result_1;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp_1, r12_1);
            }
            else
            {
                var_78 = rbp_1;
                var_70 = r12_1;
                var_68 = r14_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hcd2b65ebabcd2f96(&arg1[8], &var_78);
                label_4a3e0f:
                rax_1 = r15_1 + 0x30;
                
                if (r15_1 == r13_3)
                    rax_1 = r15_1;
                
                if (r15_1 != r13_3)
                {
                    arg2 = r15_1;
                    
                    if (r15_1)
                        continue;
                }
            }
        }
        return result;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
