
  fn uu_tail::uu_tail::h84841135fb1b0c3f(arg1: *mut i64) -> *mut i128

{
    let r13: i64;
    let var_20: i64 = r13;
    let mut var_19a: i8 = *arg1.byte_offset(0x4a);
    let var_199: i8 = 1;
    let mut var_150: ();
    uu_tail::follow::watch::Observer::from::h487da06aa235f7f0(&var_150, arg1);
    let mut result_1: *mut i128;
    let mut rdx: i64;
    result_1 = uu_tail::follow::watch::Observer::start::h087097f796044307(&var_150, arg1);
    let mut result: *mut i128 = result_1;
    
    if result_1 == 0
    {
        let mut var_178: ();
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4778a48a6f997702(&var_178, &arg1[3]);
        let var_170: i64;
        let mut var_160: i64 = var_170;
        let var_168: i64;
        let var_158_1: i64 = var_168 * 0x30 + var_170;
        let result_2: *mut i128 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&var_160);
        let mut var_c0: i128;
        
        if result_2 == 0
        {
            'label_50005c:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&var_178);
            let mut rax_3: i8;
            
            if *arg1.byte_offset(0x4c) != 2
            {
                rax_3 = uu_tail::args::Settings::has_only_stdin::h95a526b27c276cb7(arg1);
            }
            
            if *arg1.byte_offset(0x4c) == 2 || rax_3 != 0
            {
                result = nullptr;
                'label_500076:
                uucore::mods::error::get_exit_code::he41365fe4dc666e7();
                
                if result == 0
                {
                    core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(&var_150);
                }
                
                return nullptr;
            }
            
            memcpy(&var_c0, &var_150, 0x90);
            let mut result_5: *mut i128;
            let mut rdx_6: i64;
            result_5 = uu_tail::follow::watch::follow::hde16143c14d7b9fc(&var_c0, arg1);
            
            if result_5 == 0
            {
                result = 1;
                goto 'label_500076;
            }
            
            result = result_5;
        }
        else
        {
            result = result_2;
            
            loop
            {
                let mut result_3: *mut i128;
                let mut rdx_3: i64;
                
                if *result.byte_offset(0x18) == -0x8000000000000000
                {
                    result_3 =
                        uu_tail::tail_stdin::h2faea1a609e9111a(arg1, &var_19a, result, &var_150);
                }
                else
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c0, 
                        "/dev/stdin: \ncannot open '' for…", 0xa);
                    let var_b0: i64;
                    let var_188_1: i64 = var_b0;
                    let mut var_198: i128 = var_c0;
                    
                    if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(result[2], *result.byte_offset(0x28), *var_198[8], var_b0) == 0
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(
                            &var_198);
                        result_3 = uu_tail::tail_file::he6a88cf1ecd2d2b4(arg1, &var_19a, result, 
                            result[2], *result.byte_offset(0x28), &var_150, 0);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(
                            &var_198);
                        result_3 = uu_tail::tail_stdin::h2faea1a609e9111a(arg1, &var_19a, result, 
                            &var_150);
                    }
                }
                result = result_3;
                
                if result_3 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&var_178);
                    break;
                }
                
                let result_4: *mut i128 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&var_160);
                result = result_4;
                
                if result_4 == 0
                {
                    goto 'label_50005c;
                }
            }
            
            core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(
                &var_150);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(
            &var_150);
    }
    
    result
}
