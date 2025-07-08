
  int64_t* uu_df::get_all_filesystems::ha419c9a63b8c437a(int64_t* arg1, void* arg2)

{
    if (*(arg2 + 0x52))
        sync();
    
    int64_t var_90;
    uucore::features::fsext::read_fs_list::h424e364609cbd5d3(&var_90);
    int64_t rdx = var_90;
    int64_t var_88;
    int64_t var_80;
    
    if (rdx != -0x8000000000000000)
    {
        int64_t var_78 = rdx;
        int64_t var_70_1 = var_88;
        int64_t var_68_1 = var_80;
        void var_38;
        uu_df::filter_mount_list::h552d57bf732d9983(&var_38, &var_78, arg2);
        void var_60;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h16be972b538517f1(&var_60, &var_38);
        void* var_40_1 = arg2;
        alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h5775629d250cad33(arg1, &var_60);
    }
    else
    {
        arg1[1] = var_88;
        arg1[2] = var_80;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
