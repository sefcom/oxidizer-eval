
  fn bat::assets::build_assets::asset_to_contents::h188d9b0cd47c3257(arg1: *mut i8, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_30: i64 = arg3;
    let rcx: i64;
    let var_28: i64 = rcx;
    let mut var_48: i64 = 0;
    let var_40: i64 = 1;
    let result: i64 = 0;
    let rax: u64 = bincode::internal::serialize_into::hb363b965fbda8e80(&var_48, arg2);
    
    if rax == 0
    {
        *arg1.byte_offset(0x18) = result;
        *arg1.byte_offset(8) = var_48;
        *arg1 = 0xd;
        return result;
    }
    
    let mut var_20: i64;
    bat::assets::build_assets::asset_to_contents::_$u7b$$u7b$closure$u7d$$u7d$::h0b2a00e838b9d5b1(
        &var_20, &var_30, rax);
    let rax_1: i64 = var_20;
    let var_18: i128;
    *arg1.byte_offset(0x10) = var_18;
    *arg1 = 0xb;
    *arg1.byte_offset(8) = rax_1;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_48, var_40)
}
