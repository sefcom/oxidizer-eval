
  fn uu_uniq::handle_extract_obs_skip_chars::h23083a2c797a520a(arg1: *mut i128, arg2: i64, arg3: u64, arg4: *mut i64) -> i64

{
    let rbx: u64;
    let var_30: u64 = rbx;
    let mut var_88: i64 = 0;
    let var_80: i64 = 4;
    let var_78: i64 = 0;
    let mut var_58: i64 = arg2;
    let var_50: i64 = arg2 + arg3;
    core::str::validations::next_code_point::h563de53b3cb3d652(&var_58, rbx);
    let mut var_48: i128 = var_58;
    
    loop
    {
        let mut rax_1: i8;
        let mut rdx: i32;
        rax_1 = core::str::validations::next_code_point::h563de53b3cb3d652(&var_48, &var_88);
        let mut var_70: i128;
        let var_60: i64;
        
        if (rax_1 & 1) == 0
        {
            let mut r15_1: i64;
            
            if var_78 == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_70, arg2, arg3);
                arg1[1] = var_60;
                *arg1 = var_70;
                r15_1 = var_80;
            }
            else
            {
                r15_1 = var_80;
                core::iter::traits::iterator::Iterator::collect::h3b15c762db729d48(&var_70, r15_1);
                var_48 = var_70;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
                arg4[2] = var_60;
                *arg4 = var_48;
                *arg1 = -0x8000000000000000;
            }
            
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h341dc4a29c957248(
                var_88, r15_1);
        }
        
        if rdx - 0x30 >= 0xa
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
            *arg4 = -0x8000000000000000;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_70, arg2, arg3);
            arg1[1] = var_60;
            *arg1 = var_70;
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h341dc4a29c957248(
                var_88, var_80);
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h71471e6e1bce8529(&var_88, rdx);
    }
}
