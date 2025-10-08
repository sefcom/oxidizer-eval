
  fn uu_tail::chunks::LinesChunkBuffer::fill::h58244c51965137fa(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let var_1030: i64 = 0;
    let mut var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let var_4030: i64 = 0;
    let var_5030: i64 = 0;
    let var_6030: i64 = 0;
    let rbx: i8 = arg1[6];
    memset(&var_2030, 0, 0x2000);
    let mut var_6060: i32;
    memset(&var_6060, 0, 0x2010);
    let var_4050: i8 = rbx;
    let mut rbx_1: *mut i8 = alloc::boxed::Box$LT$T$GT$::new::h82a98b3c862552f0(&var_6060);
    
    loop
    {
        uu_tail::chunks::LinesChunk::fill::h8372a98993d49080(&var_6060, rbx_1, arg2);
        let result: i64;
        
        if var_6060 == 1
        {
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h474ceeda76e59e5d(rbx_1);
            return result;
        }
        
        if result == 0
        {
            let rsi_3: i64 = arg1[3];
            
            if rsi_3 != 0
            {
                let rax_7: *mut i64 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get_mut::hf762308d8975c277(arg1, rsi_3 - 1);
                
                if rax_7 == 0
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "Out of bounds accesssrc/uu/tail/…");
                    /* no return */
                }
                
                let mut rax_8: i64;
                let mut rdx_2: i64;
                rax_8 = uu_tail::chunks::LinesChunk::get_buffer::h12c5d003f1f481a3(*rax_7);
                var_6060 = arg1[6];
                
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6cb95a248a5db6d2(rax_8, 
                    rdx_2, &var_6060) == 0
                {
                    let rax_10: *mut c_void = *rax_7;
                    *rax_10.byte_offset(0x2008) += 1;
                    arg1[4] += 1;
                }
                
                let mut rax_11: *mut i64;
                let mut rcx_4: i64;
                let mut rsi_6: i64;
                
                loop
                {
                    rax_11 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hd5b4041d930bbd14(arg1);
                    
                    if rax_11 == 0
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    rcx_4 = arg1[4];
                    rsi_6 = arg1[5];
                    let rdx_5: i64 = rcx_4 - rax_11[0x401];
                    
                    if rdx_5 <= rsi_6
                    {
                        break;
                    }
                    
                    arg1[4] = rdx_5;
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h474ceeda76e59e5d(rax_11);
                }
                
                let mut rdx_6: i64 = 0;
                
                if rcx_4 >= rsi_6
                {
                    rdx_6 = rcx_4 - rsi_6;
                }
                
                let mut var_4048: ();
                uu_tail::chunks::LinesChunk::from_chunk::h9998bcc032f5fdde(&var_4048, rax_11, 
                    rdx_6);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hfd9a2cbb18528385(
                    arg1, alloc::boxed::Box$LT$T$GT$::new::h82a98b3c862552f0(&var_4048));
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h474ceeda76e59e5d(rax_11);
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h474ceeda76e59e5d(rbx_1);
            return 0;
        }
        
        arg1[4] += *rbx_1.byte_offset(0x2008);
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h4f6adea6ad81cf89(arg1, 
            rbx_1);
        let rax_3: *mut i64 =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5243bf9f45df5514(arg1);
        
        if rax_3 == 0
        {
            core::option::expect_failed::h3f620cfb8545dc61("Out of bounds accesssrc/uu/tail/…");
            /* no return */
        }
        
        if arg1[4] - *(*rax_3).byte_offset(0x2008) <= arg1[5]
        {
            let rbx_2: i8 = arg1[6];
            memcpy(&var_6060, &var_2030, 0x2000);
            let var_4060_1: i128 = {0};
            let var_4050_1: i8 = rbx_2;
            rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h82a98b3c862552f0(&var_6060);
        }
        else
        {
            let rax_5: *mut i8 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hd5b4041d930bbd14(
                arg1);
            
            if rax_5 == 0
            {
                break;
            }
            
            rbx_1 = rax_5;
            arg1[4] -= *rax_5.byte_offset(0x2008);
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
