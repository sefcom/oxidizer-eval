
  int64_t* fuel_core_client::client::schema::tx::_$LT$impl$u20$core..convert..TryFrom$LT$fuel_core_client..client..schema..tx..OpaqueTransaction$GT$$u20$for$u20$fuel_tx..transaction..Transaction$GT$::try_from::hbb1eb2c39a6cd705(int64_t* arg1, int64_t* arg2)

{
    int64_t r15 = *arg2;
    int64_t rbx = arg2[1];
    int64_t rax = arg2[2];
    int64_t var_1d8 = rbx;
    int64_t var_1d0 = rax;
    int64_t var_1c8;
    fuel_types::canonical::Deserialize::decode::h554db8a436d508db(&var_1c8, &var_1d8);
    
    if (var_1c8 != -0x7ffffffffffffffa)
        memcpy(arg1, &var_1c8, 0x1b0);
    else
    {
        int64_t var_1b0;
        arg1[4] = var_1b0;
        int128_t var_1c0;
        *(arg1 + 0x10) = var_1c0;
        arg1[1] = 6;
        *arg1 = -0x7ffffffffffffffa;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha84acb6fbde5c50f(r15, rbx);
    return arg1;
}
