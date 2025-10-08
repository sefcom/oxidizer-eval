
  fn uu_pinky::platform::unix::Pinky::short_pinky::h4032f022447522d5(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x19) != 0
    {
        uu_pinky::platform::unix::Pinky::print_heading::h9e43dbe96a7248f7(arg1);
    }
    
    let mut rax: i64;
    let mut rdx: i8;
    rax = uucore::features::utmpx::Utmpx::iter_all_records::hde307d126e33fb30();
    let mut var_368: i64 = rax;
    let var_360: i8 = rdx & 1;
    let rax_1: i64 = *arg1.byte_offset(0x10);
    let mut result_1: i64;
    let mut result: i64;
    let mut var_334: i32;
    let mut var_330: ();
    let mut var_1b0: ();
    
    if rax_1 == 0
    {
        loop
        {
            _$LT$uucore..features..utmpx..UtmpxIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0874e3c7200a2ada(&var_334);
            
            if var_334 != 1
            {
                'label_46393f:
                result = 0;
                goto 'label_463944;
            }
            
            memcpy(&var_1b0, &var_330, 0x180);
            
            if uucore::features::utmpx::Utmpx::is_user_process::h30a2442fae430ce7(&var_1b0) != 0
            {
                result_1 =
                    uu_pinky::platform::unix::Pinky::print_entry::h41deaa8dc6a9a73e(arg1, &var_1b0);
                
                if result_1 != 0
                {
                    break;
                }
            }
        }
    }
    else
    {
        let r14_1: i64 = *arg1.byte_offset(8);
        
        loop
        {
            _$LT$uucore..features..utmpx..UtmpxIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0874e3c7200a2ada(&var_334);
            
            if var_334 != 1
            {
                goto 'label_46393f;
            }
            
            memcpy(&var_1b0, &var_330, 0x180);
            
            if uucore::features::utmpx::Utmpx::is_user_process::h30a2442fae430ce7(&var_1b0) != 0
            {
                let mut var_348: i64 = r14_1;
                let var_340_1: i64 = r14_1 + rax_1 * 0x18;
                
                if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h87c328f0d4d945fc(&var_348, &var_1b0) != 0
                {
                    result_1 = uu_pinky::platform::unix::Pinky::print_entry::h41deaa8dc6a9a73e(
                        arg1, &var_1b0);
                    
                    if result_1 != 0
                    {
                        break;
                    }
                }
            }
        }
    }
    result = result_1;
    'label_463944:
    core::ptr::drop_in_place$LT$uucore..features..utmpx..UtmpxIter$GT$::hcbbad6d0fc2eb594(&var_368);
    result
}
