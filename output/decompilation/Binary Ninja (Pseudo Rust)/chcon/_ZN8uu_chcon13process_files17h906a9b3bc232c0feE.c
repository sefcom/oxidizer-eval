
  fn uu_chcon::process_files::h906a9b3bc232c0fe(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i32, arg4: *mut i32) -> *mut i128

{
    let rsi: i64 = *arg2.byte_offset(8);
    let mut var_108: i32;
    uu_chcon::fts::FTS::new::h1ba0cd59aadc0d7f(&var_108, rsi, rsi + *arg2.byte_offset(0x10) * 0x18, 
        *(&data_419bd0).byte_offset(*arg2.byte_offset(0x7b) << 2));
    let var_100: i128;
    
    if var_108 != 0x12
    {
        let rax_3: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x48);
        
        if rax_3 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        let zmm0_2: i128 = var_108;
        let var_c8: i64;
        *(rax_3 + 0x40) = var_c8;
        let var_d8: i128;
        *(rax_3 + 0x30) = var_d8;
        let var_e8: i128;
        *(rax_3 + 0x20) = var_e8;
        *(rax_3 + 0x10) = var_100;
        *rax_3 = zmm0_2;
        *arg1 = 1;
        *arg1.byte_offset(8) = rax_3;
        arg1[1] = 1;
        return arg1;
    }
    
    let mut var_118: i128 = var_100;
    let mut var_130: i64 = 0;
    let var_128_1: i64 = 8;
    let var_120_1: i64 = 0;
    
    loop
    {
        let mut var_c0: i32;
        uu_chcon::fts::FTS::read_next_entry::h61830a73507cb09a(&var_c0, &var_118);
        
        if var_c0 != 0x12
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h394a0ecf89d44a6f(&var_130, &var_c0);
            'label_46442c:
            arg1[1] = var_120_1;
            *arg1 = var_130;
            core::ptr::drop_in_place$LT$uu_chcon..fts..FTS$GT$::hf3c3ebc386ffa52d(&var_118);
            return arg1;
        }
        
        let var_bc: i8;
        
        if var_bc == 0
        {
            goto 'label_46442c;
        }
        
        let mut var_78: i32;
        uu_chcon::process_file::h1368cd6f12435f91(&var_78, arg2, arg3, &var_118, arg4);
        
        if var_78 != 0x12
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h394a0ecf89d44a6f(&var_130, &var_78);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$uu_chcon..errors..Error$GT$$GT$::h4eb00232c8be16dd(&var_78);
        }
    }
}
