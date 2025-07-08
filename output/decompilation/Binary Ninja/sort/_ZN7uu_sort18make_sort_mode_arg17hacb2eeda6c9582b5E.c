
  int64_t uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(int64_t arg1, int64_t arg2, int64_t arg3, int32_t arg4, int64_t arg5, int64_t arg6)

{
    void var_280;
    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&var_280, arg2);
    char const (** const var_720)[0x8b];
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&var_720, &var_280, arg4);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&var_280, &var_720, arg2);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&var_720, &var_280, arg5, arg6);
    void var_4d0;
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&var_4d0, &var_720, 2);
    var_720 = &data_5ffbf8;
    void** const var_718 = &data_5ffc58;
    int64_t* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha02eaed260a898f9(&var_720);
    
    if (i_2)
    {
        int64_t* i_1 = i_2;
        int64_t* i;
        
        do
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb9af56cf5f49fd41(*i_1, i_1[1], arg2, arg3))
            {
                memcpy(&var_280, &var_4d0, 0x250);
                clap_builder::builder::arg::Arg::conflicts_with::h4d943ad74ef2fd17(&var_4d0, 
                    &var_280, i_1);
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha02eaed260a898f9(&var_720);
            i_1 = i;
        } while (i);
    }
    
    return memcpy(arg1, &var_4d0, 0x250);
}
