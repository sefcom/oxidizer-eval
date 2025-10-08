
  fn uu_chmod::Chmoder::walk_dir::ha01070efe2a4054d(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> u64

{
    let mut result_1: u64;
    let mut rdx: *mut i64;
    result_1 = uu_chmod::Chmoder::chmod_file::h265d0431d919c569(arg1, arg2, arg3);
    let mut result: u64 = result_1;
    let mut r15: *mut i64 = rdx;
    let mut rax: u32 = *arg1.byte_offset(0x26);
    let mut var_bc_1: i8;
    let mut var_b8: i64;
    let var_b0: *mut i8;
    let var_a8: u64;
    let mut var_88: i64;
    let mut var_60: i64;
    
    if rax == 0
    {
        if std::path::Path::is_symlink::h004cfac91d04dbc0(arg2, arg3) == 0
        {
            var_bc_1 = 0;
            'label_45e6fc:
            
            if std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3) != 0
            {
                std::fs::read_dir::hc6faba6b58851c77(&var_60, arg2);
                let var_58: i8;
                let mut result_2: u64;
                
                if var_58 != 2
                {
                    let mut result_3: u64 = result;
                    let mut r13_1: *mut i64 = r15;
                    let mut var_98: i64 = var_60;
                    let var_90_1: i8 = var_58;
                    
                    loop
                    {
                        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_60, &var_98);
                        
                        if var_60 != 1
                        {
                            result = result_3;
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hf0e11a7c1da473a3(
                                &var_98);
                            goto 'label_45e8ac;
                        }
                        
                        let rax_7: i64 = var_58;
                        
                        if rax_7 == 0
                        {
                            r15 = r13_1;
                            result = result_3;
                            result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hf0e11a7c1da473a3(
                                &var_98);
                            break;
                        }
                        
                        let var_38: i64;
                        let var_68_1: i64 = var_38;
                        let var_48: i128;
                        let var_78_1: i128 = var_48;
                        var_88 = rax_7;
                        let var_50: i64;
                        let var_80_1: i64 = var_50;
                        std::fs::DirEntry::path::hc95af67dccb42f03(&var_b8, &var_88);
                        r15 = 1;
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hd18785c6a939759c(
                            &var_88);
                        let mut rbx_2: *mut i64;
                        let mut result_4: u64;
                        
                        if std::path::Path::is_symlink::h004cfac91d04dbc0(var_b0, var_a8) == 0
                        {
                            let mut result_6: u64;
                            let mut rdx_11: *mut i64;
                            result_6 = uu_chmod::Chmoder::walk_dir::ha01070efe2a4054d(arg1, var_b0, 
                                var_a8);
                            result_4 = result_6;
                            rbx_2 = rdx_11;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h9fbd8f8cb57f1996(result_3, r13_1);
                        }
                        else if var_bc_1 == 0
                        {
                            result_4 = result_3;
                            rbx_2 = r13_1;
                        }
                        else
                        {
                            let mut rax_9: u64;
                            let mut rdx_7: *mut i64;
                            rax_9 = uu_chmod::Chmoder::chmod_file::h265d0431d919c569(arg1, var_b0, 
                                var_a8);
                            let mut result_5: u64;
                            let mut rdx_9: *mut i64;
                            result_5 = core::result::Result$LT$T$C$E$GT$::and::h77e5678da19ca805(
                                rax_9, rdx_7, result_3, r13_1);
                            result_4 = result_5;
                            rbx_2 = rdx_9;
                        }
                        
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hfbefb63f29142bf4(
                            var_b8, var_b0);
                        result_3 = result_4;
                        r13_1 = rbx_2;
                    }
                }
                else
                {
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h9fbd8f8cb57f1996(result, r15);
                result = result_2;
            }
        }
    }
    else
    {
        if rax != 1
        {
            rax = 1;
            var_bc_1 = rax;
            std::path::Path::is_symlink::h004cfac91d04dbc0(arg2, arg3);
            goto 'label_45e6fc;
        }
        
        std::fs::canonicalize::h5ddb1f5aac699172(&var_88, arg2);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_60, arg2, arg3);
        core::result::Result$LT$T$C$E$GT$::unwrap_or::ha619ba9845797d03(&var_b8, &var_88, &var_60);
        var_bc_1 = _$LT$$RF$std..path..Path$u20$as$u20$core..cmp..PartialEq$LT$std..path..PathBuf$GT$$GT$::eq::h04d9502e2354ca3e(arg2, arg3, var_b0, var_a8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hfbefb63f29142bf4(var_b8, var_b0);
        
        if ((std::path::Path::is_symlink::h004cfac91d04dbc0(arg2, arg3) ^ 1) | var_bc_1) != 0
        {
            goto 'label_45e6fc;
        }
    }
    'label_45e8ac:
    result
}
