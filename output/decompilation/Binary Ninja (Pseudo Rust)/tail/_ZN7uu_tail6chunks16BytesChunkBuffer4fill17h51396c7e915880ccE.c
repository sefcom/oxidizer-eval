
  fn uu_tail::chunks::BytesChunkBuffer::fill::h51396c7e915880cc(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let var_1030: i64 = 0;
    let mut var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let result: i64 = 0;
    let rax: i64;
    let mut var_4038: i64 = rax;
    memset(&var_2030, 0, 0x2000);
    memset(&var_4038, 0, 0x2008);
    let mut rbx: *mut i8 = alloc::boxed::Box$LT$T$GT$::new::h958a01d6c3ae3733(&var_4038);
    
    loop
    {
        uu_tail::chunks::BytesChunk::fill::hab8028dceae793ac(&var_4038, rbx, arg2);
        
        if var_4038 == 1
        {
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::hb5d926151bf464c4(rbx);
            return result;
        }
        
        if result == 0
        {
            if arg1[3] != 0
            {
                let rax_8: *mut i64 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hd5b4041d930bbd14(arg1);
                
                if rax_8 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                let rax_9: i64 = arg1[5];
                let mut rdx_2: i64 = 0;
                
                if rax_9 >= arg1[4]
                {
                    rdx_2 = rax_9 - arg1[4];
                }
                
                uu_tail::chunks::BytesChunk::from_chunk::hf1adf92578b17e1c(&var_4038, rax_8, rdx_2);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hc8a1db566e4d6108(
                    arg1, alloc::boxed::Box$LT$T$GT$::new::h958a01d6c3ae3733(&var_4038));
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::hb5d926151bf464c4(rax_8);
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::hb5d926151bf464c4(rbx);
            return 0;
        }
        
        arg1[5] += *rbx.byte_offset(0x2000);
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h0beb4a69f6ee6b50(arg1, 
            rbx);
        let rax_4: *mut i64 =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5243bf9f45df5514(arg1);
        
        if rax_4 == 0
        {
            core::option::expect_failed::h3f620cfb8545dc61("Out of bounds accesssrc/uu/tail/…");
            /* no return */
        }
        
        if arg1[5] - *(*rax_4).byte_offset(0x2000) <= arg1[4]
        {
            memcpy(&var_4038, &var_2030, 0x2000);
            let var_2038_1: i64 = 0;
            rbx = alloc::boxed::Box$LT$T$GT$::new::h958a01d6c3ae3733(&var_4038);
        }
        else
        {
            let rax_6: *mut i8 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hd5b4041d930bbd14(
                arg1);
            
            if rax_6 == 0
            {
                break;
            }
            
            rbx = rax_6;
            arg1[5] -= *rax_6.byte_offset(0x2000);
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
