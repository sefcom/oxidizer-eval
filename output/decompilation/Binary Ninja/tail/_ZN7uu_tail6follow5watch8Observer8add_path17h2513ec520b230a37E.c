
  uint64_t uu_tail::follow::watch::Observer::add_path::h2513ec520b230a37(void* arg1, char* arg2, uint64_t arg3, int64_t arg4, uint64_t arg5, int64_t arg6, int64_t* arg7, char arg8)

{
    uint64_t r14;
    uint64_t var_18 = r14;
    int64_t* r13 = arg7;
    
    if (*(arg1 + 0x8e) != 2)
    {
        int64_t var_288;
        int64_t var_260;
        int64_t var_258;
        
        if (!std::path::Path::is_absolute::hf2dacc49683e82ac(arg2, arg3))
        {
            std::env::current_dir::h2d02f56ea8ff76eb(&var_260);
            int64_t r13_1 = var_260;
            int64_t r12_2 = var_258;
            
            if (-(r13_1) == -0x8000000000000000)
            {
                uint64_t result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(arg6, arg7);
                return result;
            }
            
            uint64_t var_250;
            std::path::Path::join::h5377cb3aaed3538a(&var_288, r12_2, var_250, arg2);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(r13_1, r12_2);
            r13 = arg7;
        }
        else
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_288, arg2, 
                arg3);
        
        char* var_280;
        std::fs::metadata::h5c248dd9820946eb(&var_260, var_280);
        int64_t r12_4 = var_260;
        void var_d8;
        
        if (r12_4 != 2)
            memcpy(&var_d8, &var_258, 0xa8);
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_260);
        
        int64_t var_188 = r12_4;
        void var_180;
        memcpy(&var_180, &var_d8, 0xa8);
        uu_tail::follow::files::PathData::new::h86625b3b593f4467(&var_260, arg6, r13, &var_188, 
            arg4, arg5);
        uint64_t var_278;
        uu_tail::follow::files::FileHandling::insert::h25f905215c20caac(arg1 + 0x38, var_280, 
            var_278, &var_260, arg8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_288, var_280);
    }
    else
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(arg6, r13);
    
    return 0;
}
