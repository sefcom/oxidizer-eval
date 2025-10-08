
  fn uu_unexpand::expand_shortcuts::hf9e317c33afe99db(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> *mut i64

{
    let mut r14: *mut c_void = arg2;
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h0f389c1011ab4014(arg3, 8, 0x18);
    let mut var_d0: i64 = rax;
    let var_c0: i64 = 0;
    
    if arg3 != 0
    {
        let mut i_1: i64 = arg3 * 0x18;
        let mut var_d4_1: i8 = 0;
        let mut var_d8_1: i8 = 0;
        let mut var_b8: i32;
        let mut i: i64;
        
        do
        {
            let r15_1: *mut i8 = *r14.byte_offset(8);
            let rbx_2: u64 = *r14.byte_offset(0x10);
            var_b8 = 0;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8efff08fd85b21e0(r15_1, 
                rbx_2, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_b8)) == 0
            {
                'label_45c3cb:
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_b8, r14);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hd88ea85f4ae5c379(&var_d0, &var_b8);
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7c2f39b0c4e545c7(r15_1, rbx_2, "--all-a--tabs=(uutils coreutils)…", 5) != 0
                {
                    var_d4_1 = 1;
                }
                else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7c2f39b0c4e545c7(r15_1, rbx_2, "-a--tabs=(uutils coreutils) 0.0.…", 2) != 0
                {
                    var_d4_1 = 1;
                }
            }
            else
            {
                let mut rax_4: i64;
                let mut rdx_2: i64;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_1, rbx_2);
                
                if rax_4 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r15_1, rbx_2, 1, rbx_2);
                    /* no return */
                }
                
                var_b8 = rax_4;
                let var_b0_1: i64 = rax_4 + rdx_2;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h6d9bdb0da19e3277(core::iter::traits::iterator::Iterator::try_fold::h5635a8b1e58caf26(&var_b8))
                    == 0
                {
                    goto 'label_45c3cb;
                }
                
                let mut var_68: ();
                _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, rax_4, rdx_2);
                let mut var_78: i64 = 0;
                let var_70_1: i64 = rdx_2;
                let var_38_1: i16 = 1;
                var_d8_1 = 1;
                core::iter::traits::iterator::Iterator::fold::hfcc987b97c2fdfd0(&var_78, &var_d0);
            }
            
            r14 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while i != 0x18;
        
        if ((!var_d8_1 | var_d4_1) & 1) == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc756f0904f45cd83(&var_b8, "--first-only--all-a--tabs=(uutil…", 0xc);
            let var_a8: i64;
            let var_88_1: i64 = var_a8;
            let mut var_98: i128 = var_b8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd88ea85f4ae5c379(&var_d0, &var_98);
        }
    }
    
    arg1[2] = var_c0;
    *arg1 = var_d0;
    arg1[1] = rdx;
    arg1
}
