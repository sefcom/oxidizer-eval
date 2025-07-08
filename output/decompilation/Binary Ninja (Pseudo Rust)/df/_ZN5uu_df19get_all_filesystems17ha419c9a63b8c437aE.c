
  fn uu_df::get_all_filesystems::ha419c9a63b8c437a(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    if *arg2.byte_offset(0x52) != 0
    {
        sync();
    }
    
    let mut var_90: i64;
    uucore::features::fsext::read_fs_list::h424e364609cbd5d3(&var_90);
    let rdx: i64 = var_90;
    let var_88: i64;
    let var_80: i64;
    
    if rdx != -0x8000000000000000
    {
        let mut var_78: i64 = rdx;
        let var_70_1: i64 = var_88;
        let var_68_1: i64 = var_80;
        let mut var_38: ();
        uu_df::filter_mount_list::h552d57bf732d9983(&var_38, &var_78, arg2);
        let mut var_60: ();
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h16be972b538517f1(&var_60, &var_38);
        let var_40_1: *mut c_void = arg2;
        alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h5775629d250cad33(arg1, &var_60);
    }
    else
    {
        arg1[1] = var_88;
        arg1[2] = var_80;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
