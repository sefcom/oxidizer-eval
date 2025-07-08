
  fn uu_unexpand::expand_shortcuts::he534dbf7f6ef5d0b(arg1: *mut i128, arg2: i64, arg3: i64) -> *mut i128

{
    let mut var_c8: u64;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h1ee9d91d0a67d274(&var_c8, arg3, 0);
    let var_c0: i64;
    
    if var_c8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_c0);
        /* no return */
    }
    
    let mut var_b0: i64 = var_c0;
    let var_b8: i64;
    let var_a8: i64 = var_b8;
    let var_a0: i64 = 0;
    let mut var_98: i64 = arg2;
    let var_90: i64 = arg2 + arg3 * 0x18;
    let i_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&var_98);
    
    if i_2 != 0
    {
        let mut i_1: *mut c_void = i_2;
        let mut var_d0_1: i8 = 0;
        let mut var_cc_1: i8 = 0;
        let mut i: *mut c_void;
        
        do
        {
            let rbx_1: *mut i8 = *i_1.byte_offset(8);
            let r12_1: u64 = *i_1.byte_offset(0x10);
            var_c8 = 0;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd1511ca1e7aacce(rbx_1, 
                r12_1, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_c8), 1) == 0
            {
                'label_4b1f56:
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_c8, i_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::ha604323ce627ac89(&var_b0, &var_c8);
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h62532d3932070b7a(rbx_1, r12_1, "--all-a--tabs=0.0.28{} [OPTION].…", 5) != 0
                {
                    var_cc_1 = 1;
                }
                else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h62532d3932070b7a(rbx_1, r12_1, "-a--tabs=0.0.28{} [OPTION]... [F…", 2) != 0
                {
                    var_cc_1 = 1;
                }
            }
            else
            {
                let mut rax_6: u64;
                let mut rdx_1: i64;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(rbx_1, r12_1);
                
                if rax_6 == 0
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(rbx_1, r12_1, 1, r12_1);
                    /* no return */
                }
                
                var_c8 = rax_6;
                let var_c0_1: i64 = rax_6 + rdx_1;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h354a0f58b173540a(core::iter::traits::iterator::Iterator::try_fold::h4425103eb2b7f21c(&var_c8))
                    == 0
                {
                    goto 'label_4b1f56;
                }
                
                let mut var_68: ();
                _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, rax_6, rdx_1);
                let mut var_78: i64 = 0;
                let var_70_1: i64 = rdx_1;
                let var_38_1: i16 = 1;
                var_d0_1 = 1;
                core::iter::traits::iterator::Iterator::fold::hdc2d68cddeb53a65(&var_78, &var_b0);
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&var_98);
            i_1 = i;
        } while i != 0;
        
        if (var_d0_1 & 1) != 0 && (var_cc_1 & 1) == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hde6101a7564f34fb(
                &var_c8, "--first-onlysrc/uu/unexpand/src/…", 0xc);
            let var_88_1: i64 = var_b8;
            var_98 = var_c8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::ha604323ce627ac89(&var_b0, &var_98);
        }
    }
    
    arg1[1] = var_a0;
    *arg1 = var_b0;
    arg1
}
