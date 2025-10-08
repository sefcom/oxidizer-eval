
  fn forc_fmt::get_sway_dirs::h0903804508cd19d8(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let mut var_1a0: i64 = 0;
    let var_198: i64 = 8;
    let var_190: i64 = 0;
    let rax: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *(rax + 0x10) = arg2[1];
    *rax = *arg2;
    let mut var_188: i64 = 1;
    let mut rax_1: i64 = 1;
    let mut var_158: i128;
    
    loop
    {
        let rax_3: i64 = (rax_1 - 1) * 3;
        var_158 = *(rax + (rax_3 << 3));
        let var_148_1: i64 = *(rax + (rax_3 << 3) + 0x10);
        
        if var_158 == -0x8000000000000000
        {
            break;
        }
        
        let rax_4: i64 = rax + (rax_3 << 3);
        let var_118_1: i64 = *(rax_4 + 0x10);
        let mut var_128: i128 = *rax_4;
        let mut var_1c8: i64;
        std::fs::read_dir::he4fdf1a64c10550e(&var_1c8, &var_128);
        let var_1c0: i8;
        
        if var_1c0 == 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h8ea57a731913fa78(&var_1c8);
        }
        else
        {
            let mut var_170: i64 = var_1c8;
            let var_168_1: i8 = var_1c0;
            let mut var_e0: i64;
            
            loop
            {
                core::iter::traits::iterator::Iterator::try_fold::h7f3722e40557a69d(&var_e0, 
                    &var_170);
                let rax_6: i64 = var_e0;
                
                if rax_6 == 0
                {
                    break;
                }
                
                let var_c8: i128;
                let var_f0_1: i128 = var_c8;
                let var_d8: i128;
                let var_100_1: i128 = var_d8;
                let mut var_108: i64 = rax_6;
                let mut var_140: ();
                std::fs::DirEntry::path::hc95af67dccb42f03(&var_140, &var_108);
                let var_138: *mut i8;
                let var_130: u64;
                let rax_7: i8 = std::path::Path::is_dir::h02edbc48c38d7d9e(var_138, var_130);
                let mut r14_2: i32;
                
                if rax_7 != 0
                {
                    _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(&var_e0, var_138, var_130);
                    let var_1a8_1: i64 = *var_d8[8];
                    let mut var_1b8: i128 = var_e0;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3b0815cfe83d17a1(&var_188, &var_1b8);
                    std::path::Path::join::hc5b6364c54a49269(&var_1b8, var_138, var_130, 
                        "Forc.tomlmissing field `workspac…");
                    std::fs::metadata::h97dab4a00eb77849(&var_e0, *var_1b8[8]);
                    r14_2 = var_e0;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8cfd35c98471ce16(&var_e0);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_1b8);
                }
                
                if rax_7 == 0 || r14_2 == 2
                {
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_140);
                }
                else
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3b0815cfe83d17a1(&var_1a0, &var_140);
                }
                
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h514fcfad11dd4245(&var_108);
            }
            
            core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$std..fs..DirEntry$GT$$GT$::hd74c6e31ced06899(&var_e0);
            core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$std..fs..ReadDir$C$forc_fmt..get_sway_dirs..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h936e97883cb7423e(&var_170);
            
            if var_1c0 == 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h8ea57a731913fa78(&var_1c8);
            }
        }
        
        rax_1 -= 1;
        
        if rax_1 == 0
        {
            var_158 = -0x8000000000000000;
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb4ce02790f884662(&var_158);
    arg1[1] = var_190;
    *arg1 = var_1a0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h19296ef7f0436d93(
        &var_188)
}
