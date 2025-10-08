
  fn uu_tail::follow::watch::Observer::add_path::h2513ec520b230a37(arg1: *mut c_void, arg2: *mut i8, arg3: u64, arg4: i64, arg5: u64, arg6: i64, arg7: *mut i64, arg8: i8) -> u64

{
    let r14: u64;
    let var_18: u64 = r14;
    let mut r13: *mut i64 = arg7;
    
    if *arg1.byte_offset(0x8e) != 2
    {
        let mut var_288: i64;
        let mut var_260: i64;
        let mut var_258: i64;
        
        if std::path::Path::is_absolute::hf2dacc49683e82ac(arg2, arg3) == 0
        {
            std::env::current_dir::h2d02f56ea8ff76eb(&var_260);
            let r13_1: i64 = var_260;
            let r12_2: i64 = var_258;
            
            if -(r13_1) == -0x8000000000000000
            {
                let result: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(arg6, arg7);
                return result;
            }
            
            let var_250: u64;
            std::path::Path::join::h5377cb3aaed3538a(&var_288, r12_2, var_250, arg2);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(r13_1, r12_2);
            r13 = arg7;
        }
        else
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_288, arg2, 
                arg3);
        }
        
        let var_280: *mut i8;
        std::fs::metadata::h5c248dd9820946eb(&var_260, var_280);
        let r12_4: i64 = var_260;
        let mut var_d8: ();
        
        if r12_4 != 2
        {
            memcpy(&var_d8, &var_258, 0xa8);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_260);
        }
        
        let mut var_188: i64 = r12_4;
        let mut var_180: ();
        memcpy(&var_180, &var_d8, 0xa8);
        uu_tail::follow::files::PathData::new::h86625b3b593f4467(&var_260, arg6, r13, &var_188, 
            arg4, arg5);
        let var_278: u64;
        uu_tail::follow::files::FileHandling::insert::h25f905215c20caac(arg1.byte_offset(0x38), 
            var_280, var_278, &var_260, arg8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_288, var_280);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(arg6, r13);
    }
    
    0
}
