
  fn zoxide::db::ouroboros_impl_database::Database::try_new::h74a6396062d45fa8(arg1: *mut i64, arg2: *mut i128, arg3: *mut i128) -> i64

{
    let mut var_58: i32;
    zoxide::db::ouroboros_impl_database::Database::try_new_or_recover::h05961a2423eb4fc2(&var_58, 
        arg2, arg3);
    let mut result: i64;
    let mut var_50: i128;
    
    if var_58 != 1
    {
        let zmm0_1: i128 = var_50;
        let var_20: i128;
        *arg1.byte_offset(0x38) = var_20;
        let var_30: i128;
        *arg1.byte_offset(0x28) = var_30;
        let var_40: i128;
        *arg1.byte_offset(0x18) = var_40;
        *arg1.byte_offset(8) = zmm0_1;
        result = 0;
    }
    else
    {
        let r14_1: i64 = var_50;
        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Heads$GT$::hdba25c445e79ff0c(&*var_50[8]);
        arg1[1] = r14_1;
        result = 1;
    }
    *arg1 = result;
    result
}
