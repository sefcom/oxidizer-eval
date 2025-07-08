
  fn uu_sort::check::reader::h7e571c894e062be1(arg1: i64, arg2: *mut i64, arg3: i64, arg4: *mut i64, arg5: *mut c_void) -> i64

{
    let mut var_e8: i64 = arg1;
    let mut var_d8: i64 = 0;
    let var_d0: i64 = 1;
    let var_c8: i64 = 0;
    let mut var_c0: i64 = arg3;
    let r13: u64 = *arg5.byte_offset(0x99);
    let mut result: i64;
    
    loop
    {
        let mut var_a8: i64;
        let r8: i64 = _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75521e5ebc43ed35(&var_a8, &var_c0);
        
        if var_a8 != -0x8000000000000000
        {
            let var_100_1: *mut c_void = arg5;
            let var_108_1: u64 = r13;
            let mut var_e9: ();
            let mut result_1: i64;
            uu_sort::chunks::read::h4da7a75b34a6d647(&result_1, arg4, &var_a8, 0, r8, &var_d8, 
                &var_e8, &var_e9);
            result = result_1;
            
            if result != 0
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(
                    &var_d8);
                break;
            }
            
            let var_b0: *mut c_void;
            
            if var_b0 != 0
            {
                continue;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&var_d8);
        result = 0;
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(var_e8, arg2);
    result
}
