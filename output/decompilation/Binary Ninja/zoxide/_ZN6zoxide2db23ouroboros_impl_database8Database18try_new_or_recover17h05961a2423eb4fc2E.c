
  int64_t zoxide::db::ouroboros_impl_database::Database::try_new_or_recover::h05961a2423eb4fc2(int64_t* arg1, int128_t* arg2, int128_t* arg3)

{
    uint64_t rax = alloc::boxed::Box$LT$T$GT$::new::ha23b455cb50264e0(arg3);
    uint64_t r14 = rax;
    int64_t var_80;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open_dir::_$u7b$$u7b$closure$u7d$$u7d$::he9f52b07fb200152(&var_80, *(rax + 8), *(rax + 0x10));
    int64_t result;
    int128_t zmm0;
    
    if (!(0 + -(var_80)))
    {
        zmm0 = var_80;
        int128_t var_68_1 = zmm0;
        int64_t rax_2 = arg2[1];
        int128_t zmm1_1 = *arg2;
        *(arg1 + 8) = zmm0;
        int64_t var_70;
        arg1[3] = var_70;
        arg1[4] = zmm1_1;
        arg1[5] = *zmm1_1[8];
        arg1[6] = rax_2;
        result = 0;
    }
    else
    {
        zmm0 = *arg2;
        uint64_t r15_1 = arg2[1];
        ouroboros::macro_help::unbox::h9bdf8fb819a80eaa(&arg1[2], r14);
        int64_t var_78;
        arg1[1] = var_78;
        *(arg1 + 0x28) = zmm0;
        result = 1;
        r14 = r15_1;
    }
    arg1[7] = r14;
    arg1[8] = 0;
    *arg1 = result;
    return result;
}
