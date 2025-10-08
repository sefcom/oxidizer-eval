
  fn uu_wc::Inputs::try_iter::he119dd3efc5b2af1(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> u64

{
    let rax: i64 = *arg2;
    let mut result: u64;
    let mut var_e0: i64;
    let mut var_d8: i8;
    let mut r12_1: i64;
    let mut r13_1: *mut c_void;
    let mut result_2: u64;
    
    if rax == 0
    {
        var_e0 = -0x7fffffffffffffff;
        var_d8 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hc8f9ee86409043e7(&var_e0);
        result_2 = result;
        r13_1 = &data_4f9100;
        r12_1 = -0x7ffffffffffffffe;
        
        if *arg3 == -0x7ffffffffffffffe
        {
            goto 'label_4652b7;
        }
        
        'label_4652a3:
        result = uu_wc::Input::as_borrowed::h5b6a21267d9a4cf1(&var_e0, arg3);
        r12_1 = var_e0;
        let var_88: i128 = var_d8;
        'label_4652b7:
        *arg1 = r12_1;
        *arg1.byte_offset(8) = var_88;
        arg1[3] = result_2;
        arg1[4] = r13_1;
        arg1[5] = 0;
    }
    else
    {
        if rax == 1
        {
            let rdi: i64 = arg2[2];
            result = alloc::boxed::Box$LT$T$GT$::new::hea3a62daa29b61e1(rdi, rdi + arg2[3] * 0x18);
            result_2 = result;
            r13_1 = &data_4f9138;
            r12_1 = -0x7ffffffffffffffe;
            
            if *arg3 != -0x7ffffffffffffffe
            {
                goto 'label_4652a3;
            }
            
            goto 'label_4652b7;
        }
        
        if arg2[1] == -0x7fffffffffffffff
        {
            uu_wc::files0_iter_stdin::hd59bc0c5728ca01b(&var_e0);
            result = alloc::boxed::Box$LT$T$GT$::new::h26709cbd1181a0f4(&var_e0);
            result_2 = result;
            r13_1 = &data_4f91a8;
            r12_1 = -0x7ffffffffffffffe;
            
            if *arg3 == -0x7ffffffffffffffe
            {
                goto 'label_4652b7;
            }
            
            goto 'label_4652a3;
        }
        
        uu_wc::files0_iter_file::hc5b7d8d6cb685047(&var_e0, arg2[2], arg2[3]);
        let rdx_1: i64 = var_e0;
        result = var_d8;
        let var_d0: i64;
        
        if rdx_1 != -0x7fffffffffffffff
        {
            let var_98: i64;
            let var_30_1: i64 = var_98;
            let var_a8: i128;
            let var_40_1: i128 = var_a8;
            let var_b8: i128;
            let var_50_1: i128 = var_b8;
            let var_c8: i128;
            let var_60_1: i128 = var_c8;
            let mut var_78: i64 = rdx_1;
            let result_1: u64 = result;
            let var_68_1: i64 = var_d0;
            result = alloc::boxed::Box$LT$T$GT$::new::hc3cf6e304f3dfe6c(&var_78);
            result_2 = result;
            r13_1 = &data_4f9170;
            r12_1 = -0x7ffffffffffffffe;
            
            if *arg3 != -0x7ffffffffffffffe
            {
                goto 'label_4652a3;
            }
            
            goto 'label_4652b7;
        }
        
        arg1[1] = result;
        arg1[2] = var_d0;
        *arg1 = -0x7ffffffffffffffd;
    }
    result
}
