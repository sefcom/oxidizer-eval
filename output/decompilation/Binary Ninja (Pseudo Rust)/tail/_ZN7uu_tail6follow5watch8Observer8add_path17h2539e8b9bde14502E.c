
  fn uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(arg1: *mut c_void, arg2: *mut i8, arg3: size_t, arg4: i64, arg5: u64, arg6: i64, arg7: *mut i64, arg8: i8) -> *mut i128

{
    let mut r14: size_t;
    let var_18: size_t = r14;
    
    if *arg1.byte_offset(0x8e) != 2
    {
        let mut var_280: ();
        let mut var_260: i64;
        let mut var_258: i64;
        let mut var_188: i64;
        let mut var_180: i64;
        
        if std::path::Path::is_absolute::h3431a23d91045560(arg2, arg3) == 0
        {
            std::env::current_dir::h8e5fbaefdf378c8c(&var_260);
            let rax_2: i64 = var_260;
            let rsi_3: i64 = var_258;
            
            if rax_2 == -0x8000000000000000
            {
                let result: *mut i128 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(arg6, arg7);
                return result;
            }
            
            var_188 = rax_2;
            var_180 = rsi_3;
            let var_250: size_t;
            let var_178_1: size_t = var_250;
            std::path::Path::join::hfe8bd1517fdb9512(&var_280, rsi_3, var_250, arg2);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_188);
        }
        else
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_280, arg2, 
                arg3);
        }
        
        let var_278: *mut i8;
        let mut rbp_1: *mut i8 = var_278;
        let var_270: size_t;
        r14 = var_270;
        let mut rbx: i64;
        rbx = 1;
        std::fs::metadata::h5a76b0b01e9dc15d(&var_260, rbp_1);
        let r12_1: i64 = var_260;
        let mut var_d8: ();
        
        if r12_1 != 2
        {
            memcpy(&var_d8, &var_258, 0xa8);
        }
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
        uu_tail::follow::files::FileHandling::insert::h8755548d7239df23(arg1.byte_offset(0x38), 
            rbp_1, r14, &var_260, arg8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_280);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(arg6, arg7);
    }
    
    nullptr
}
