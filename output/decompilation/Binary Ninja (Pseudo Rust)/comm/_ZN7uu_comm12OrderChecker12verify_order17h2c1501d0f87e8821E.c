
  fn uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(arg1: *mut i64, arg2: i64, arg3: u64) -> u64

{
    let rcx: u64 = arg1[2];
    let mut result: u64;
    let mut var_70: i128;
    let mut var_60: u64;
    let mut rsi_2: i64;
    let mut rdi_2: i64;
    
    if rcx == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_70, arg2, arg3);
        rdi_2 = *arg1;
        rsi_2 = arg1[1];
        'label_45740c:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he0a0047fc625cdb7(rdi_2, rsi_2);
        arg1[2] = var_60;
        *arg1 = var_70;
        result = 1;
    }
    else
    {
        let r14_1: i64 = arg1[1];
        
        if _$LT$A$u20$as$u20$core..slice..cmp..SliceChain$GT$::chaining_ge::hfc119572dc8ad81e(arg2, 
            arg3, r14_1, rcx) != 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_70, arg2, arg3);
            rdi_2 = *arg1;
            rsi_2 = r14_1;
            goto 'label_45740c;
        }
        
        if *arg1.byte_offset(0x1a) != 1
        {
            let mut rcx_1: *const i8 = "12";
            
            if arg1[3] != 0
            {
                rcx_1 = "2";
            }
            
            let mut var_30: *const i8 = rcx_1;
            let var_28_1: i64 = 1;
            let mut var_40: *const *const i8 = &var_30;
            let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4b6cb7d1e879db89;
            var_70 = &data_4e0c58;
            *var_70[8] = 2;
            let var_50_1: i64 = 0;
            var_60 = &var_40;
            let var_58_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            *arg1.byte_offset(0x1a) = 1;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_70, arg2, arg3);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he0a0047fc625cdb7(*arg1, r14_1);
        arg1[2] = var_60;
        *arg1 = var_70;
        result = *arg1.byte_offset(0x19) ^ 1;
    }
    result
}
