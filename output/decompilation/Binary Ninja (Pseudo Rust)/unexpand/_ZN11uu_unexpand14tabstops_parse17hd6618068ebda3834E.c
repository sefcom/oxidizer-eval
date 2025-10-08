
  fn uu_unexpand::tabstops_parse::hd6618068ebda3834(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut c_void

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        arg2, arg3);
    let mut var_b8: i64 = 0;
    let var_b0: i64 = 8;
    let var_a8: i64 = 0;
    let mut var_78: i64 = 0;
    let var_70: i64 = arg3;
    let var_38: i16 = 1;
    
    loop
    {
        let mut rax_1: *mut i8;
        let mut rdx: i64;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h7e3823b43e930040(&var_78);
        let mut rax_3: i64;
        
        if rax_1 == 0
        {
            if _$LT$usize$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5183ddd93362b17d(var_b0, var_a8) == 0
            {
                if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::he3583de373be94d7(var_b0, var_b0 + (var_a8 << 3)) & 1) != 0
                {
                    let result: *mut c_void = &arg1[1];
                    *result.byte_offset(0x10) = var_a8;
                    *result = var_b8;
                    *arg1 = 0;
                    return result;
                }
                
                rax_3 = -0x7ffffffffffffffe;
            }
            else
            {
                rax_3 = -0x8000000000000000;
            }
            
            goto 'label_45beda;
        }
        
        let mut var_a0: i8;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_a0, rax_1, 
            rdx);
        
        if var_a0 != 0
        {
            let var_9f: i8;
            
            if var_9f == 2
            {
                rax_3 = -0x7fffffffffffffff;
                'label_45beda:
                arg1[1] = rax_3;
                *arg1 = 1;
                return 
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc24bb36679b53478(
                    var_b8, var_b0);
            }
            
            let mut rax_6: i64;
            let mut rdx_1: u64;
            rax_6 =
                core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hf9870a4d295deabb(rax_1, rdx);
            let mut var_90: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc756f0904f45cd83(&var_90, rax_6, rdx_1);
            let var_80: i64;
            arg1[3] = var_80;
            *arg1.byte_offset(8) = var_90;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hc24bb36679b53478(
                var_b8, var_b0);
        }
        
        let var_98: i64;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h69a9a8bac04a407a(&var_b8, var_98);
    }
}
