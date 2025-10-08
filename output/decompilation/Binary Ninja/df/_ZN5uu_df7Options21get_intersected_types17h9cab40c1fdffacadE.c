
  int64_t uu_df::Options::get_intersected_types::h9cab40c1fdffacad(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_70 = 0;
    int64_t var_68 = 8;
    int64_t result = 0;
    int64_t var_58;
    
    if (!arg3)
    {
        int64_t var_48 = 0;
        var_58 = var_70;
        int64_t var_50_1 = var_68;
    }
    else
    {
        void* r12_1 = arg2;
        int64_t i_1 = arg3 * 0x18;
        int64_t i;
        
        do
        {
            if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h51781a1e8c4dac70(r12_1, arg4, arg5))
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_58, r12_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h4b8ce3b04144c5a5(&var_70, &var_58);
            }
            
            r12_1 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while (i != 0x18);
        int64_t result_1 = result;
        var_58 = var_70;
        
        if (result)
        {
            arg1[1] = result;
            *arg1 = var_70;
            return result;
        }
    }
    
    *arg1 = -0x8000000000000000;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3cde21800b3ef049(&var_58);
}
