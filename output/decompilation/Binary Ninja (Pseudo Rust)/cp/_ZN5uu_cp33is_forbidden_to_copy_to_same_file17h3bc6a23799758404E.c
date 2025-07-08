
  fn uu_cp::is_forbidden_to_copy_to_same_file::h3bc6a23799758404(arg1: *mut i8, arg2: u64, arg3: *mut i8, arg4: u64, arg5: *mut c_void, arg6: i8) -> u32

{
    let rax: i8 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg1, arg2);
    let r15: i8 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4);
    let rcx: i8 = *arg5.byte_offset(0x41);
    let mut rax_1: i8 = 1;
    
    if rcx == 0 && (arg6 == 0 || *arg5.byte_offset(0x40) == 0)
    {
        rax_1 = (rax & r15) ^ 1;
    }
    
    if uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(arg1, arg2, arg3, arg4, 
        rax_1) != 0
    {
        let mut rdx_1: i8 = rax;
        
        if *arg5.byte_offset(0x4c) == 0
        {
            'label_505b3e:
            let mut result: u32 = *arg5.byte_offset(0x4e);
            
            if result != 0
            {
                if result != 1
                {
                    if rcx != 0 || (rdx_1 & r15) == 0
                    {
                        result = 1;
                        return result;
                    }
                }
                else if r15 == 0
                {
                    result = 1;
                    return result;
                }
            }
        }
        else if (*arg5.byte_offset(0x3c) | *arg5.byte_offset(0x3d)) != 0
        {
            if ((rcx == 0 & rdx_1) | r15) == 0
            {
                'label_505afe:
                
                if rdx_1 != 0
                {
                    goto 'label_505b3e;
                }
                
                let mut var_b0: ();
                std::path::Path::components::h4f3217acf0fc8653(&var_b0, arg3, arg4);
                let mut var_70: ();
                std::path::Path::components::h4f3217acf0fc8653(&var_70, arg1, arg2);
                rdx_1 = rax;
                
                if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_b0, &var_70) != 0
                {
                    goto 'label_505b3e;
                }
            }
        }
        else if ((rdx_1 ^ 1) | rcx == 0 | r15) == 0
        {
            goto 'label_505afe;
        }
    }
    
    0
}
