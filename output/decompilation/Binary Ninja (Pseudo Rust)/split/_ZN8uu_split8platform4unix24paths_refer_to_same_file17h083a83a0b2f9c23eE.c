
  fn uu_split::platform::unix::paths_refer_to_same_file::h083a83a0b2f9c23e(arg1: i64, arg2: u64, arg3: i64, arg4: i64) -> u64

{
    let mut var_150: ();
    let mut var_b8: *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(arg1, arg2, "-", 1) == 0
    {
        uucore::features::fs::FileInformation::from_path::h686b487309c4fcb4(&var_150, arg1, arg2, 
            1);
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        var_b8 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
        uucore::features::fs::FileInformation::from_file::h236d795e60a1b5ff(&var_150);
    }
    
    uucore::features::fs::FileInformation::from_path::h686b487309c4fcb4(&var_b8, arg3, arg4, 1);
    uucore::features::fs::infos_refer_to_same_file::hac0be2843bccd14e(&var_150, &var_b8)
}
