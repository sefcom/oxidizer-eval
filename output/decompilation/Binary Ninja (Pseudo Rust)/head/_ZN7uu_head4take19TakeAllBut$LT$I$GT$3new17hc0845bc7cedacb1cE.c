
  fn uu_head::take::TakeAllBut$LT$I$GT$::new::hc0845bc7cedacb1c(arg1: *mut i64, arg2: i64, arg3: i8, arg4: i64) -> *mut i64

{
    let mut var_98: i64 = arg2;
    let mut var_88: i64 = 0;
    let var_80: i64 = 8;
    let var_78: i128 = {0};
    
    if arg4 != 0
    {
        let mut r13_1: i64 = 0;
        
        do
        {
            r13_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r13_1);
            let mut var_60: i64;
            _$LT$uucore..features..lines..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he245392b5a345364(&var_60, &var_98);
            
            if var_60 == -0x7fffffffffffffff
            {
                break;
            }
            
            let var_50: i64;
            let var_38_1: i64 = var_50;
            let mut var_48: i128 = var_60;
            uucore::features::ringbuffer::RingBuffer$LT$T$GT$::push_back::hae07e5fa5289e66a(
                &var_60, &var_88, &var_48);
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$$GT$::h665ed2cb8fd55ceb(&var_60);
        } while r13_1 < arg4;
    }
    
    let rax_3: i64 = var_98;
    arg1[4] = arg4;
    let rdx_2: i64 = var_88;
    *arg1.byte_offset(0x10) = var_78;
    *arg1 = rdx_2;
    arg1[1] = var_80;
    arg1[5] = rax_3;
    arg1[6] = arg3;
    arg1
}
