
  fn uu_du::parse_time_style::ha80c5924fa1465d3(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut rax_3: i64;
    
    if arg2 == 0
    {
        'label_498969:
        arg1[1] = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.…";
        arg1[2] = 0xe;
        rax_3 = 0;
    }
    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h99bb5143d53920f6(arg2, arg3, "full-isoENOTSOCK", 8) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h99bb5143d53920f6(arg2, arg3, "long-isoDateTimetimezone", 8) != 0
        {
            goto 'label_498969;
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h99bb5143d53920f6(arg2, arg3, "iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M:…", 3) == 0
        {
            let mut var_30: ();
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hac1b67b8d5e5f2cf(&var_30, arg2, arg3);
            let mut var_38: i64 = 2;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h8a707cc2bcbdfcb0(&var_38);
            arg1[2] = &data_545d90;
            rax_3 = 1;
        }
        else
        {
            arg1[1] = "%Y-%m-%dENETDOWNThursday\n      …";
            arg1[2] = 8;
            rax_3 = 0;
        }
    }
    else
    {
        arg1[1] = "%Y-%m-%d %H:%M:%S.%f %zatimectim…";
        arg1[2] = 0x17;
        rax_3 = 0;
    }
    
    *arg1 = rax_3;
    arg1
}
