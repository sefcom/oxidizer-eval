
  fn uu_more::Pager::load_visible_lines::hab6b7f963f4c8df4(arg1: *mut c_void) -> u64

{
    let rdi: *mut i64 = *arg1.byte_offset(0x18);
    let rsi: i64 = *arg1.byte_offset(0x20);
    *arg1.byte_offset(0x20) = 0;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u5d$$GT$::h6802b68d421aa63d(rdi, rsi);
    *arg1.byte_offset(0x78) = 0;
    let mut result: u64 =
        uu_more::Pager::seek_to_line::h869c7595a8249d8f(arg1, *arg1.byte_offset(0x50));
    
    if result == 0
    {
        let mut var_50: i64 = 0;
        let mut var_48_1: i64 = 1;
        let var_40_1: i64 = 0;
        
        if *arg1.byte_offset(0x58) == 0
        {
            'label_47b8f8:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_50);
            return 0;
        }
        
        loop
        {
            let var_40_2: i64 = 0;
            let mut rax_2: i8;
            let mut rdx_1: i64;
            rax_2 = (*(*arg1.byte_offset(0x48) + 0x80))(*arg1.byte_offset(0x40), &var_50);
            
            if (rax_2 & 1) != 0
            {
                let result_1: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_50);
                result = result_1;
                break;
            }
            
            if rdx_1 == 0
            {
                goto 'label_47b8f8;
            }
            
            if uu_more::Pager::should_squeeze_line::hcc3a424a86437f5a(arg1, var_48_1, var_40_2) != 0
            {
                *arg1.byte_offset(0x78) += 1;
            }
            else
            {
                let var_28_1: i64 = var_40_2;
                let mut var_38: i128 = var_50;
                var_50 = 0;
                var_48_1 = 1;
                let var_40_3: i64 = 0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h4de2a5e1402a45f2(arg1.byte_offset(0x10), 
                    &var_38);
            }
            
            if *arg1.byte_offset(0x20) >= *arg1.byte_offset(0x58)
            {
                goto 'label_47b8f8;
            }
        }
    }
    
    result
}
