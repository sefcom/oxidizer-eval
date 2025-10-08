
  fn uu_sort::check::reader::he5a33cd1f4d4c531(arg1: i64, arg2: *mut i64, arg3: *mut i64, arg4: i64, arg5: *mut i64, arg6: *mut c_void) -> i64

{
    let mut var_108: i64 = arg1;
    let mut var_e8: i64 = 0;
    let var_e0: i64 = 1;
    let var_d8: i64 = 0;
    let mut result: i64 = 0;
    let r15: u64 = *arg6.byte_offset(0x99);
    let var_c8: i64;
    
    do
    {
        let mut var_c0: i64;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8677ff4d20c1e78d(&var_c0, arg3);
        
        if 0 + -(var_c0)
        {
            break;
        }
        
        let var_110_1: *mut c_void = arg6;
        let mut result_2: i64;
        uu_sort::chunks::read::he8360ac327e09de7(&result_2, arg4, arg5, &var_c0, &var_e8, &var_108, 
            r15);
        let result_1: i64 = result_2;
        
        if result_1 != 0
        {
            let var_f8: i64 = var_c8;
            result = result_1;
            break;
        }
    } while var_c8 != 0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf1471b789cf37b11(&var_e8);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hcc69def0910ab351(var_108, arg2);
    result
}
