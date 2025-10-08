
  fn bat::assets::HighlightingAssets::get_syntax_for_path::h8c6faac8aea72411(arg1: *mut i8, arg2: *mut i64, arg3: *mut i64, arg4: *mut c_void) -> i64

{
    arg3[2];
    let mut rax: i64;
    let mut rdx: u64;
    rax = std::path::_$LT$impl$u20$core..convert..AsRef$LT$std..path..Path$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h38bd28293a94b618(arg3[1]);
    let mut var_60: i64;
    bat::syntax_mapping::SyntaxMapping::get_syntax_for::he16ae842b51a4bfc(&var_60, arg4, rax);
    let r14: i64 = var_60;
    let mut var_d0: i8;
    let var_cf: i32;
    let mut var_c8: i128;
    let var_b8: i128;
    let var_a8: i128;
    let var_98: i128;
    let var_88: i64;
    let mut rax_3: i8;
    let mut rax_4: i64;
    let mut rcx_4: i64;
    let mut rdx_3: *mut i8;
    let mut rdx_5: *mut i8;
    
    if r14 == 0
    {
        let var_58: *mut i8;
        let var_50: u64;
        bat::assets::HighlightingAssets::find_syntax_by_token::h2ed0326e3443b2e3(&var_d0, arg2, 
            var_58, var_50);
        rax_3 = var_d0;
        
        if rax_3 != 0xd
        {
            *arg1.byte_offset(4) = var_cf;
            *arg1.byte_offset(1) = var_cf;
            *arg1.byte_offset(0x18) = var_b8;
            *arg1.byte_offset(0x28) = var_a8;
            *arg1.byte_offset(0x38) = var_98;
            *arg1.byte_offset(0x48) = var_88;
            *arg1 = rax_3;
            *arg1.byte_offset(8) = var_c8;
        }
        else
        {
            rax_4 = var_c8;
            rdx_5 = arg1;
            
            if rax_4 == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_d0, var_58, var_50);
                let var_c9_2: i128 = var_d0;
                *var_c8[0xf] = *var_c8[8];
                rdx_3 = arg1;
                *rdx_3 = 8;
                'label_78f442:
                *rdx_3.byte_offset(1) = var_d0;
                *rdx_3.byte_offset(0x10) = *var_c8[7];
                *rdx_3.byte_offset(0x18) = *var_c8[0xf];
            }
            else
            {
                'label_78f499:
                rcx_4 = *var_c8[8];
                'label_78f502:
                *rdx_5.byte_offset(8) = rax_4;
                *rdx_5.byte_offset(0x10) = rcx_4;
                *rdx_5 = 0xd;
            }
        }
    }
    else
    {
        let mut var_78: i128;
        
        if r14 == 1
        {
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_d0, rax, rdx);
            _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_78, &var_d0);
            'label_78f419:
            let var_c9_1: i128 = var_78;
            let var_68: i64;
            *var_c8[0xf] = var_68;
            rdx_3 = arg1;
            *rdx_3 = 7;
            goto 'label_78f442;
        }
        
        let mut rax_5: *mut i8;
        let mut rdx_6: *mut i8;
        rax_5 = std::path::Path::file_name::h6d40d88bf3fb287a(rax, rdx);
        let mut rbx_2: *mut i8 = rdx_6;
        
        if rax_5 == 0
        {
            rbx_2 = rax_5;
        }
        
        let mut r13_1: *mut i8 = 1;
        
        if rax_5 != 0
        {
            r13_1 = rax_5;
        }
        
        bat::assets::HighlightingAssets::get_syntax_for_file_name::h8689a8930b60f613(&var_d0, arg2, 
            r13_1, rbx_2, arg4.byte_offset(0x18));
        rax_3 = var_d0;
        
        if rax_3 == 0xd
        {
            rax_4 = var_c8;
            
            if rax_4 != 0
            {
                rcx_4 = *var_c8[8];
                rdx_5 = arg1;
                goto 'label_78f502;
            }
            
            if r14 == 2
            {
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_d0, rax, rdx);
                _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_78, &var_d0);
                goto 'label_78f419;
            }
            
            bat::assets::HighlightingAssets::get_syntax_for_file_extension::hc845356bd5e7f68c(
                &var_d0, arg2, r13_1, rbx_2, arg4.byte_offset(0x18));
            rax_3 = var_d0;
            
            if rax_3 == 0xd
            {
                rax_4 = var_c8;
                rdx_5 = arg1;
                
                if rax_4 != 0
                {
                    goto 'label_78f499;
                }
                
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_d0, rax, rdx);
                _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_78, &var_d0);
                goto 'label_78f419;
            }
        }
        
        *arg1.byte_offset(4) = var_cf;
        *arg1.byte_offset(1) = var_cf;
        *arg1.byte_offset(0x28) = var_a8;
        *arg1.byte_offset(0x38) = var_98;
        *arg1.byte_offset(0x48) = var_88;
        *arg1.byte_offset(0x18) = var_b8;
        *arg1 = rax_3;
        *arg1.byte_offset(8) = var_c8;
    }
    /* tailcall */
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(arg3)
}
