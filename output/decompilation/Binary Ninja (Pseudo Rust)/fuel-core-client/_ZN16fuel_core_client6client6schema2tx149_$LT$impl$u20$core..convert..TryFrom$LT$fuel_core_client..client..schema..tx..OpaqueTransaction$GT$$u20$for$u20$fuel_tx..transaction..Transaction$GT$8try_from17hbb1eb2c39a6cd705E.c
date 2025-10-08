
  fn fuel_core_client::client::schema::tx::_$LT$impl$u20$core..convert..TryFrom$LT$fuel_core_client..client..schema..tx..OpaqueTransaction$GT$$u20$for$u20$fuel_tx..transaction..Transaction$GT$::try_from::hbb1eb2c39a6cd705(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let r15: i64 = *arg2;
    let rbx: i64 = arg2[1];
    let rax: i64 = arg2[2];
    let mut var_1d8: i64 = rbx;
    let var_1d0: i64 = rax;
    let mut var_1c8: i64;
    fuel_types::canonical::Deserialize::decode::h554db8a436d508db(&var_1c8, &var_1d8);
    
    if var_1c8 != -0x7ffffffffffffffa
    {
        memcpy(arg1, &var_1c8, 0x1b0);
    }
    else
    {
        let var_1b0: i64;
        arg1[4] = var_1b0;
        let var_1c0: i128;
        *arg1.byte_offset(0x10) = var_1c0;
        arg1[1] = 6;
        *arg1 = -0x7ffffffffffffffa;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha84acb6fbde5c50f(r15, rbx);
    arg1
}
