
  int64_t zoxide::db::ouroboros_impl_database::Database::try_new::h74a6396062d45fa8(int64_t* arg1, int128_t* arg2, int128_t* arg3)

{
    int32_t var_58;
    zoxide::db::ouroboros_impl_database::Database::try_new_or_recover::h05961a2423eb4fc2(&var_58, 
        arg2, arg3);
    int64_t result;
    int128_t var_50;
    
    if (var_58 != 1)
    {
        int128_t zmm0_1 = var_50;
        int128_t var_20;
        *(arg1 + 0x38) = var_20;
        int128_t var_30;
        *(arg1 + 0x28) = var_30;
        int128_t var_40;
        *(arg1 + 0x18) = var_40;
        *(arg1 + 8) = zmm0_1;
        result = 0;
    }
    else
    {
        int64_t r14_1 = var_50;
        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Heads$GT$::hdba25c445e79ff0c(&*var_50[8]);
        arg1[1] = r14_1;
        result = 1;
    }
    *arg1 = result;
    return result;
}
