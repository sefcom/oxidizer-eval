
  int64_t bat::assets::build_assets::asset_to_contents::h188d9b0cd47c3257(char* arg1, void* arg2, int64_t arg3)

{
    int64_t var_30 = arg3;
    int64_t rcx;
    int64_t var_28 = rcx;
    int64_t var_48 = 0;
    int64_t var_40 = 1;
    int64_t result = 0;
    uint64_t rax = bincode::internal::serialize_into::hb363b965fbda8e80(&var_48, arg2);
    
    if (!rax)
    {
        *(arg1 + 0x18) = result;
        *(arg1 + 8) = var_48;
        *arg1 = 0xd;
        return result;
    }
    
    int64_t var_20;
    bat::assets::build_assets::asset_to_contents::_$u7b$$u7b$closure$u7d$$u7d$::h0b2a00e838b9d5b1(
        &var_20, &var_30, rax);
    int64_t rax_1 = var_20;
    int128_t var_18;
    *(arg1 + 0x10) = var_18;
    *arg1 = 0xb;
    *(arg1 + 8) = rax_1;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_48, 
        var_40);
}
