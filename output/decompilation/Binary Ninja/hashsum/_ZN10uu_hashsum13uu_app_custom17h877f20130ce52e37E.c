
  int64_t uu_hashsum::uu_app_custom::h877f20130ce52e37(int64_t arg1)

{
    void var_810;
    uu_hashsum::uu_app_common::haf156add4ae409e5(&var_810);
    void var_548;
    uu_hashsum::uu_app_opt_bits::h1604bb86d678b504(&var_548, &var_810);
    void var_ad8;
    uu_hashsum::uu_app_b3sum_opts::h6d29bf312f544a29(&var_ad8, &var_548);
    char const (** const var_ae8)[0x57] = &data_73ecd0;
    void* const var_ae0 = &data_73eeb0;
    int64_t* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h105803dcb30d73e6(&var_ae8);
    
    if (i_2)
    {
        int64_t* i_1 = i_2;
        int64_t* i;
        
        do
        {
            memcpy(&var_810, &var_ad8, 0x2c8);
            i_1[1];
            clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_548, *i_1);
            void var_280;
            clap_builder::builder::arg::Arg::long::hda6187eaf5c6dd54(&var_280, &var_548, i_1);
            clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_548, &var_280, i_1[2], 
                i_1[3]);
            clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_280, &var_548, 2);
            clap_builder::builder::command::Command::arg::h001132be747f46b6(&var_ad8, &var_810, 
                &var_280);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h105803dcb30d73e6(&var_ae8);
            i_1 = i;
        } while (i);
    }
    
    memcpy(arg1, &var_ad8, 0x2c8);
    return arg1;
}
