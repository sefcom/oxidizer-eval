
  fn uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(arg1: i64, arg2: i64, arg3: i64, arg4: i32, arg5: i64, arg6: i64) -> i64

{
    let mut var_280: ();
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_280, arg2);
    let mut var_720: *mut *mut [i8; 0x8b];
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_720, &var_280, arg4);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_280, &var_720, arg2);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_720, &var_280, arg5, arg6);
    let mut var_4d0: ();
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_4d0, &var_720, 2);
    var_720 = &data_5ffbf8;
    let var_718: *mut *mut c_void = &data_5ffc58;
    let i_2: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha02eaed260a898f9(&var_720);
    
    if i_2 != 0
    {
        let mut i_1: *mut i64 = i_2;
        let mut i: *mut i64;
        
        do
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb9af56cf5f49fd41(*i_1, i_1[1], arg2, arg3) == 0
            {
                memcpy(&var_280, &var_4d0, 0x250);
                clap_builder::builder::arg::Arg::conflicts_with::h4d943ad74ef2fd17(&var_4d0, 
                    &var_280, i_1);
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha02eaed260a898f9(&var_720);
            i_1 = i;
        } while i != 0;
    }
    
    memcpy(arg1, &var_4d0, 0x250)
}
