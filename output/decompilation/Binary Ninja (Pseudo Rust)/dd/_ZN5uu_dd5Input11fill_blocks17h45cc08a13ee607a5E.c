
  fn uu_dd::Input::fill_blocks::h45cc08a13ee607a5(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: i8) -> i64

{
    let mut r13: i64 = *arg3.byte_offset(0x10);
    let mut s: i64;
    let mut var_d0_1: i64;
    let mut result: i64;
    let mut rcx_2: *mut i64;
    let mut rbx_1: i64;
    let mut r12: i64;
    
    if r13 == 0
    {
        rbx_1 = 0;
        r12 = 0;
        s = 0;
        var_d0_1 = 0;
    }
    else
    {
        let mut rdi: i64 = *(*arg2.byte_offset(8)).byte_offset(0x70);
        __builtin_memset(&s, 0, 0x18);
        r12 = 0;
        
        do
        {
            let rax_4: i64 = core::cmp::min_by::hf29fead33a8278ec(rdi + r12, r13);
            let mut rax_5: i64;
            let mut rdx_2: i64;
            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h56fc8485fa379185(r12, rax_4, *arg3.byte_offset(8), r13);
            let mut rax_6: i64;
            let mut rdx_3: i64;
            rax_6 = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h91bb47559be41a26(arg2, 
                rax_5, rdx_2);
            
            if rax_6 != 0
            {
                rcx_2 = arg1;
                rcx_2[1] = rdx_3;
                result = 1;
                goto 'label_4d7300;
            }
            
            let var_c8: i64;
            
            if rdx_3 == 0
            {
                rbx_1 = var_c8;
                break;
            }
            
            let rdx_5: i64 = rax_4 - r12;
            
            if rdx_5 > rdx_3
            {
                s += 1;
                let mut var_b0: ();
                _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1a0e457649d60ac2(&var_b0, arg4, rdx_5 - rdx_3);
                let mut var_98: ();
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9f073f067a0e9b2e(&var_98, &var_b0);
                let mut var_78: ();
                alloc::vec::Vec$LT$T$C$A$GT$::splice::h0fd839b9d32da106(&var_78, arg3, r12 + rdx_3, 
                    rax_4, &var_98);
                core::ptr::drop_in_place$LT$alloc..vec..splice..Splice$LT$alloc..vec..into_iter..IntoIter$LT$u8$GT$$GT$$GT$::hfe92d49d1adc9d71(&var_78);
            }
            else
            {
                var_d0_1 += 1;
            }
            
            rbx_1 = var_c8 + rdx_3;
            rdi = *(*arg2.byte_offset(8)).byte_offset(0x70);
            r12 += rdi;
            r13 = *arg3.byte_offset(0x10);
        } while r12 < r13;
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::truncate::h705e1c902b347a7b(arg3, r12);
    rcx_2 = arg1;
    rcx_2[1] = var_d0_1;
    rcx_2[2] = s;
    rcx_2[3] = rbx_1;
    rcx_2[4] = 0;
    result = 0;
    'label_4d7300:
    *rcx_2 = result;
    result
}
