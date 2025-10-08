
  fn uu_cksum::handle_tag_text_binary_flags::h483042924fc20423(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let var_48: i128 = arg2[1];
    let mut var_58: i128 = *arg2;
    let mut i_1: i64;
    _$LT$std..env..ArgsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfc73b5786eb10db9(&i_1, &var_58);
    let mut i: i64 = i_1;
    let mut r12: u64;
    r12 = 1;
    let mut result_1: i8 = 0;
    
    if -(i) != -0x8000000000000000
    {
        do
        {
            let var_68: i64;
            let mut rax_2: i64;
            let mut rdx_1: u64;
            rax_2 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$$u5b$u8$u5d$$GT$$GT$::as_ref::h6c2a555f71a2b08a(var_68);
            let rax_3: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rax_2, rdx_1, "-b--tag--untagged-: \ncrcbsdcrc3…", 2);
            let mut rax_4: i8;
            
            if rax_3 == 0
            {
                rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rax_2, rdx_1, "--bina", 8);
            }
            
            if rax_3 != 0 || rax_4 != 0
            {
                result_1 = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rax_2, rdx_1, "--tag--untagged-: \ncrcbsdcrc32b…", 5) == 0
            {
                r12 = r12;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rax_2, rdx_1, "--untagged-: \ncrcbsdcrc32bblake…", 0xa) != 0
                {
                    r12 = 0;
                }
            }
            else
            {
                r12 = 1;
                result_1 = 0;
            }
            
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hddf6d5007c2de64b(i, 
                var_68);
            _$LT$std..env..ArgsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfc73b5786eb10db9(&i_1, &var_58);
            i = i_1;
        } while i != -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::he735fd9805f0296c(&var_58);
    let mut result: i8 = result_1;
    r12 &= 1;
    
    if r12 != 0
    {
        result = 0;
    }
    
    arg1[1] = r12;
    *arg1.byte_offset(9) = result;
    *arg1 = 0;
    result
}
