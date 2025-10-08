
  int64_t* uu_df::filesystem::Filesystem::from_mount::h8c34ead0ca2ea541(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4, int64_t* arg5)

{
    if (!uu_df::filesystem::is_over_mounted::he031024296dde685(arg2, arg3, arg4))
    {
        void var_198;
        _$LT$uucore..features..fsext..MountInfo$u20$as$u20$core..clone..Clone$GT$::clone::h6d17af9e90a4bf91(&var_198, arg4);
        int64_t var_100;
        uu_df::filesystem::Filesystem::new::h176c4d07e180ea46(&var_100, &var_198, arg5);
        
        if (!(0 + -(var_100)))
            memcpy(arg1, &var_100, 0xe8);
        else
        {
            arg1[1] = 2;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        arg1[1] = 0;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hac58f874263dbc4e(arg5);
    }
    
    return arg1;
}
