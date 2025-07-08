
  int128_t* uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(void* arg1, char* arg2, size_t arg3, int64_t arg4, uint64_t arg5, int64_t arg6, int64_t* arg7, char arg8)

{
    size_t r14;
    size_t var_18 = r14;
    
    if (*(arg1 + 0x8e) != 2)
    {
        void var_280;
        int64_t var_260;
        int64_t var_258;
        int64_t var_188;
        int64_t var_180;
        
        if (!std::path::Path::is_absolute::h3431a23d91045560(arg2, arg3))
        {
            std::env::current_dir::h8e5fbaefdf378c8c(&var_260);
            int64_t rax_2 = var_260;
            int64_t rsi_3 = var_258;
            
            if (rax_2 == -0x8000000000000000)
            {
                int128_t* result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(arg6, arg7);
                return result;
            }
            
            var_188 = rax_2;
            var_180 = rsi_3;
            size_t var_250;
            size_t var_178_1 = var_250;
            std::path::Path::join::hfe8bd1517fdb9512(&var_280, rsi_3, var_250, arg2);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_188);
        }
        else
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_280, arg2, 
                arg3);
        
        char* var_278;
        char* rbp_1 = var_278;
        size_t var_270;
        r14 = var_270;
        int64_t rbx;
        rbx = 1;
        std::fs::metadata::h5a76b0b01e9dc15d(&var_260, rbp_1);
        int64_t r12_1 = var_260;
        void var_d8;
        
        if (r12_1 != 2)
            memcpy(&var_d8, &var_258, 0xa8);
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_260);
            rbp_1 = var_278;
            r14 = var_270;
        }
        
        var_188 = r12_1;
        memcpy(&var_180, &var_d8, 0xa8);
        uu_tail::follow::files::PathData::new::h9cc9fab20487d2f9(&var_260, arg6, arg7, &var_188, 
            arg4, arg5);
        uu_tail::follow::files::FileHandling::insert::h8755548d7239df23(arg1 + 0x38, rbp_1, r14, 
            &var_260, arg8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_280);
    }
    else
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(arg6, arg7);
    
    return nullptr;
}
