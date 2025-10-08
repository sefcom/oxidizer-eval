
  fn uu_cp::copy_helper::hc581f8ab4f6e163d(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut i8, arg5: u64, arg6: *mut c_void, arg7: u64, arg8: i64, arg9: i8, arg10: i8, arg11: *mut *mut i8, arg12: i8) -> *mut u64

{
    let r13: i64 = -0x7ffffffffffffff4;
    let mut result: *mut u64;
    
    if *arg6.byte_offset(0x5c) != 0
    {
        let mut rax_1: *mut i8;
        let mut rdx: u64;
        rax_1 = std::path::Path::parent::hef287f60afa56900(arg4, arg5);
        
        if rax_1 == 0
        {
            rax_1 = arg4;
        }
        
        result = std::fs::create_dir_all::h55eae5e2d660073f(rax_1);
    }
    
    if *arg6.byte_offset(0x5c) != 0 && result != 0
    {
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = result;
    }
    else if arg5 == 0
    {
        'label_4a50eb:
        let mut result_1: *mut u64;
        
        if arg10 != 0 && *arg6.byte_offset(0x5e) == 1 && *arg6.byte_offset(0x57) == 0
        {
            result = uu_cp::copy_fifo::he922d06a7cbac9e7(&result_1, arg4, arg5, 
                *arg6.byte_offset(0x54), *arg6.byte_offset(0x5f));
            
            if result_1 != -0x7ffffffffffffff4
            {
                goto 'label_4a5233;
            }
            
            *arg1 = r13;
        }
        else
        {
            let var_5d: i128;
            let var_4d: i128;
            
            if arg9 == 0
            {
                uu_cp::platform::linux::copy_on_write::h34431c68bfa64cd2(&result_1, arg2, arg3, 
                    arg4, arg5, *arg6.byte_offset(0x64), *arg6.byte_offset(0x63), arg7, arg8, 
                    arg10, arg12);
                result = result_1;
                let var_60: i16;
                let result_2: i8;
                
                if result != -0x7ffffffffffffff4
                {
                    *arg1.byte_offset(0x28) = var_4d;
                    *arg1.byte_offset(0x1b) = var_4d;
                    *arg1.byte_offset(0xb) = var_5d;
                    *arg1.byte_offset(0xa) = result_2;
                    arg1[1] = var_60;
                    *arg1 = result;
                }
                else
                {
                    let mut var_74: i16 = var_60;
                    result = result_2;
                    let var_72_1: i8 = result;
                    
                    if *arg6.byte_offset(0x56) == 0 && *arg6.byte_offset(0x5f) != 0
                    {
                        result = uu_cp::show_debug::h47a442e1933f80ee(&var_74);
                    }
                    
                    *arg1 = r13;
                }
            }
            else
            {
                result =
                    uu_cp::copy_link::h25042d5280b1628e(&result_1, arg2, arg3, arg4, arg5, arg11);
                
                if result_1 == -0x7ffffffffffffff4
                {
                    *arg1 = r13;
                }
                else
                {
                    'label_4a5233:
                    let result_3: *mut u64;
                    result = result_3;
                    arg1[6] = result;
                    let zmm0_1: i128 = result_1;
                    *arg1.byte_offset(0x20) = var_4d;
                    *arg1.byte_offset(0x10) = var_5d;
                    *arg1 = zmm0_1;
                }
            }
        }
    }
    else
    {
        let rax_2: u32 = arg4[arg5 - 1];
        
        if rax_2 != 0x2f && rax_2 != 0x5c
        {
            goto 'label_4a50eb;
        }
        
        if std::path::Path::is_dir::h02edbc48c38d7d9e(arg4, arg5) != 0
        {
            goto 'label_4a50eb;
        }
        
        result = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&arg1[1], 
            arg4, arg5);
        *arg1 = -0x7ffffffffffffff5;
    }
    
    result
}
