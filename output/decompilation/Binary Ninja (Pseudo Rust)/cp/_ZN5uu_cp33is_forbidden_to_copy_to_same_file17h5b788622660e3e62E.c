
  fn uu_cp::is_forbidden_to_copy_to_same_file::h5b788622660e3e62(arg1: i64, arg2: u64, arg3: i64, arg4: u64, arg5: *mut c_void, arg6: i8) -> u64

{
    let rax: i8 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg1, arg2);
    let rax_1: i8 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4);
    let rbx: i8 = *arg5.byte_offset(0x59);
    let mut rcx: i8 = 1;
    
    if rbx == 0 && (arg6 == 0 || *arg5.byte_offset(0x58) == 0)
    {
        rcx = (rax & rax_1) ^ 1;
    }
    
    if uucore::features::fs::paths_refer_to_same_file::h63765c86a5a0b9e6(arg1, arg2, arg3, arg4, 
        rcx) != 0
    {
        let mut rcx_2: i8 = rax_1;
        
        if *arg5.byte_offset(0x65) == 0
        {
            'label_4a2778:
            let mut result: u64 = *arg5.byte_offset(0x67);
            
            if result != 0
            {
                if result != 1
                {
                    if (rax & rcx_2) == 0
                    {
                        result = 1;
                        return result;
                    }
                    
                    let mut rax_7: i64;
                    let mut rdx_3: u64;
                    rax_7 = std::path::Path::file_name::h6d40d88bf3fb287a(arg1, arg2);
                    let mut rdx_4: i64;
                    result = std::path::Path::file_name::h6d40d88bf3fb287a(arg3, arg4);
                    
                    if rax_7 == 0
                    {
                        result = result == 0;
                        result |= rbx;
                        
                        if result != 0
                        {
                            result = 1;
                            return result;
                        }
                    }
                    else if result != 0
                    {
                        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rax_7, rdx_3, result, rdx_4) | rbx;
                        
                        if result != 0
                        {
                            result = 1;
                            return result;
                        }
                    }
                    else if rbx != 0
                    {
                        result = 1;
                        return result;
                    }
                }
                else if rcx_2 == 0
                {
                    result = 1;
                    return result;
                }
            }
        }
        else if (*arg5.byte_offset(0x55) | *arg5.byte_offset(0x54)) != 0
        {
            if rax == 0
            {
                if rcx_2 == 0
                {
                    let mut var_b0: ();
                    std::path::Path::components::hd0346d362206f2e9(&var_b0, arg3, arg4);
                    let mut var_70: ();
                    std::path::Path::components::hd0346d362206f2e9(&var_70, arg1, arg2);
                    rcx_2 = rax_1;
                    
                    if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&var_b0, &var_70) != 0
                    {
                        goto 'label_4a2778;
                    }
                }
            }
            else if ((rbx ^ 1) | rcx_2) == 0
            {
                goto 'label_4a2778;
            }
        }
        else if (((rax & rbx) ^ 1) | rcx_2) == 0
        {
            goto 'label_4a2778;
        }
    }
    
    0
}
