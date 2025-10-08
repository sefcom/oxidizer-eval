
  fn uu_dd::Input::fill_blocks::h1db18295bd354b67(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: i8) -> i64

{
    let mut r13: i64 = *arg3.byte_offset(0x10);
    let mut var_d8: i64;
    let mut rax_6: i64;
    let mut result: i64;
    let mut rdx: i64;
    
    if r13 == 0
    {
        var_d8 = 0;
        rax_6 = 0;
        rdx = 0;
        *arg3.byte_offset(0x10) = 0;
    }
    else
    {
        let mut rbp_1: *mut c_void = arg2;
        let mut rdi: i64 = *(*arg2.byte_offset(8)).byte_offset(0x70);
        var_d8 = 0;
        let mut var_c0_1: i64 = 0;
        let mut r15: i64 = 0;
        rdx = 0;
        
        do
        {
            let rax_3: i64 = core::cmp::Ord::min::h1162548a3a8ea989(rdi + r15, r13);
            let mut rax_4: i64;
            let mut rdx_4: i64;
            rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::haf08713dd75fcb35(r15, rax_3, *arg3.byte_offset(8), r13);
            let r12_1: *mut c_void = rbp_1;
            let mut rax_5: i8;
            let mut rdx_5: i64;
            rax_5 = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h4a29ff4f57f9a098(rbp_1, 
                rax_4, rdx_4);
            
            if (rax_5 & 1) != 0
            {
                arg1[1] = rdx_5;
                result = 1;
                goto 'label_4902ea;
            }
            
            if rdx_5 == 0
            {
                r13 = *arg3.byte_offset(0x10);
                break;
            }
            
            let rdx_7: i64 = rax_3 - r15;
            
            if rdx_7 > rdx_5
            {
                var_c0_1 += 1;
                let mut var_b0: ();
                _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h06af5c098bf34970(&var_b0, arg4, rdx_7 - rdx_5);
                let mut var_98: ();
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h205179070021ab91(&var_98, &var_b0);
                let mut var_78: ();
                alloc::vec::Vec$LT$T$C$A$GT$::splice::h643d28211cf1428b(&var_78, arg3, r15 + rdx_5, 
                    rax_3, &var_98);
                core::ptr::drop_in_place$LT$alloc..vec..splice..Splice$LT$alloc..vec..into_iter..IntoIter$LT$u8$GT$$GT$$GT$::h9d1a40dd01e986fb(&var_78);
            }
            else
            {
                var_d8 += 1;
            }
            
            rbp_1 = r12_1;
            rdx += rdx_5;
            rdi = *(*r12_1.byte_offset(8)).byte_offset(0x70);
            r15 += rdi;
            r13 = *arg3.byte_offset(0x10);
        } while r15 < r13;
        
        rax_6 = var_c0_1;
        
        if r15 <= r13
        {
            *arg3.byte_offset(0x10) = r15;
        }
    }
    
    arg1[1] = var_d8;
    arg1[2] = rax_6;
    arg1[3] = rdx;
    arg1[4] = 0;
    result = 0;
    'label_4902ea:
    *arg1 = result;
    result
}
