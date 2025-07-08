
  fn uu_split::handle_preceding_options::ha9316461586fd0f7(arg1: *mut i8, arg2: u64, arg3: *mut i8, arg4: *mut i8) -> i64

{
    let mut rbx: u64;
    let var_30: u64 = rbx;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, arg2, 
        "---a-b-C-l-n-tsrc/uu/split/src/s…", 2) != 0
    {
        let mut rax_1: i64;
        let mut rdx: u64;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(arg1, arg2);
        
        if rax_1 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg1, arg2, 2, arg2);
            /* no return */
        }
        
        rbx = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rax_1, rdx, "bytesline-byteslinesadditional-s…", 5) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rax_1, rdx, 
            "line-byteslinesadditional-suffix…", 0xa) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rax_1, rdx, 
            "linesadditional-suffixfilternumb…", 5) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rax_1, rdx, 
            "additional-suffixfilternumber-dh…", 0x11) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rax_1, rdx, 
            "filternumber-dhex-suffixes-xsuff…", 6) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rax_1, rdx, 
            "number-dhex-suffixes-xsuffix-len…", 6) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rax_1, rdx, 
            "suffix-lengthverboseseparatoreli…", 0xd) == 0
        {
            rbx = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rax_1, rdx, "separatorelide-empty-files-io-bl…", 9);
        }
        
        *arg3 = rbx;
    }
    
    rbx = 1;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(arg1, arg2, "-b-C-l-n-tsrc/uu/split/src/split…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(arg1, arg2, 
        "-C-l-n-tsrc/uu/split/src/split.r…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(arg1, arg2, 
        "-l-n-tsrc/uu/split/src/split.rs0…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(arg1, arg2, 
        "-n-tsrc/uu/split/src/split.rs0.0…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(arg1, arg2, 
        "-a-b-C-l-n-tsrc/uu/split/src/spl…", 2) == 0
    {
        rbx = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(arg1, arg2, "-tsrc/uu/split/src/split.rs0.0.2…", 2);
    }
    
    *arg4 = rbx;
    let mut var_3c: i32 = 0;
    let result: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(
        arg1, arg2, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_3c), 1);
    
    if result == 0
    {
        *arg4 = 0;
        *arg3 = 0;
    }
    
    result
}
