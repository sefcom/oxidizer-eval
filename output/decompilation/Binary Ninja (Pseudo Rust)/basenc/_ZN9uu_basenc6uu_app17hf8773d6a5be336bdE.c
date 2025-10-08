
  fn uu_basenc::uu_app::hf8773d6a5be336bd(arg1: i64) -> i64

{
    let mut var_7e8: ();
    uu_base32::base_common::base_app::hf62dc1f5a26396f2(&var_7e8, 
        "Encode/decode data and print to …", 0x129, "{} [OPTION]... [FILE]base64same …", 0x15);
    let mut var_ab0: ();
    clap_builder::builder::arg::Arg::new::h1f8c2db82ca22d91(&var_ab0, 
        "base64same as 'base64' programba…");
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::long::h1b0d770fd536ad44(&var_2a0, &var_ab0, 
        "base64same as 'base64' programba…");
    let mut var_fb0: ();
    clap_builder::builder::arg::Arg::help::hf221cb535377cfbe(&var_fb0, &var_2a0, 
        "same as 'base64' programbase64ur…", 0x18);
    let mut var_520: ();
    clap_builder::builder::arg::Arg::action::h75f9294667bf6f81(&var_520, &var_fb0);
    let mut var_d30: ();
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h256b271d75ae46c1(&var_d30);
    memcpy(&var_ab0, &var_7e8, 0x2c8);
    clap_builder::builder::command::Command::arg::ha5d99f6751f86f1e(&var_7e8, &var_ab0, &var_d30);
    clap_builder::builder::arg::Arg::new::h1f8c2db82ca22d91(&var_ab0, 
        "base64urlfile- and url-safe base…");
    clap_builder::builder::arg::Arg::long::h1b0d770fd536ad44(&var_2a0, &var_ab0, 
        "base64urlfile- and url-safe base…");
    clap_builder::builder::arg::Arg::help::hf221cb535377cfbe(&var_fb0, &var_2a0, 
        "file- and url-safe base64base32s…", 0x19);
    clap_builder::builder::arg::Arg::action::h75f9294667bf6f81(&var_520, &var_fb0);
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h256b271d75ae46c1(&var_d30);
    memcpy(&var_ab0, &var_7e8, 0x2c8);
    clap_builder::builder::command::Command::arg::ha5d99f6751f86f1e(&var_7e8, &var_ab0, &var_d30);
    clap_builder::builder::arg::Arg::new::h1f8c2db82ca22d91(&var_ab0, 
        "base32same as 'base32' programba…");
    clap_builder::builder::arg::Arg::long::h1b0d770fd536ad44(&var_2a0, &var_ab0, 
        "base32same as 'base32' programba…");
    clap_builder::builder::arg::Arg::help::hf221cb535377cfbe(&var_fb0, &var_2a0, 
        "same as 'base32' programbase32he…", 0x18);
    clap_builder::builder::arg::Arg::action::h75f9294667bf6f81(&var_520, &var_fb0);
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h256b271d75ae46c1(&var_d30);
    memcpy(&var_ab0, &var_7e8, 0x2c8);
    clap_builder::builder::command::Command::arg::ha5d99f6751f86f1e(&var_7e8, &var_ab0, &var_d30);
    clap_builder::builder::arg::Arg::new::h1f8c2db82ca22d91(&var_ab0, 
        "base32hexextended hex alphabet b…");
    clap_builder::builder::arg::Arg::long::h1b0d770fd536ad44(&var_2a0, &var_ab0, 
        "base32hexextended hex alphabet b…");
    clap_builder::builder::arg::Arg::help::hf221cb535377cfbe(&var_fb0, &var_2a0, 
        "extended hex alphabet base32base…", 0x1c);
    clap_builder::builder::arg::Arg::action::h75f9294667bf6f81(&var_520, &var_fb0);
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h256b271d75ae46c1(&var_d30);
    memcpy(&var_ab0, &var_7e8, 0x2c8);
    clap_builder::builder::command::Command::arg::ha5d99f6751f86f1e(&var_7e8, &var_ab0, &var_d30);
    clap_builder::builder::arg::Arg::new::h1f8c2db82ca22d91(&var_ab0, 
        "base16hex encodingbase2lsbfbit s…");
    clap_builder::builder::arg::Arg::long::h1b0d770fd536ad44(&var_2a0, &var_ab0, 
        "base16hex encodingbase2lsbfbit s…");
    clap_builder::builder::arg::Arg::help::hf221cb535377cfbe(&var_fb0, &var_2a0, 
        "hex encodingbase2lsbfbit string …", 0xc);
    clap_builder::builder::arg::Arg::action::h75f9294667bf6f81(&var_520, &var_fb0);
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h256b271d75ae46c1(&var_d30);
    memcpy(&var_ab0, &var_7e8, 0x2c8);
    clap_builder::builder::command::Command::arg::ha5d99f6751f86f1e(&var_7e8, &var_ab0, &var_d30);
    clap_builder::builder::arg::Arg::new::h1f8c2db82ca22d91(&var_ab0, 
        "base2lsbfbit string with least s…");
    clap_builder::builder::arg::Arg::long::h1b0d770fd536ad44(&var_2a0, &var_ab0, 
        "base2lsbfbit string with least s…");
    clap_builder::builder::arg::Arg::help::hf221cb535377cfbe(&var_fb0, &var_2a0, 
        "bit string with least significan…", 0x31);
    clap_builder::builder::arg::Arg::action::h75f9294667bf6f81(&var_520, &var_fb0);
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h256b271d75ae46c1(&var_d30);
    memcpy(&var_ab0, &var_7e8, 0x2c8);
    clap_builder::builder::command::Command::arg::ha5d99f6751f86f1e(&var_7e8, &var_ab0, &var_d30);
    clap_builder::builder::arg::Arg::new::h1f8c2db82ca22d91(&var_ab0, 
        "base2msbfbit string with most si…");
    clap_builder::builder::arg::Arg::long::h1b0d770fd536ad44(&var_2a0, &var_ab0, 
        "base2msbfbit string with most si…");
    clap_builder::builder::arg::Arg::help::hf221cb535377cfbe(&var_fb0, &var_2a0, 
        "bit string with most significant…", 0x30);
    clap_builder::builder::arg::Arg::action::h75f9294667bf6f81(&var_520, &var_fb0);
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h256b271d75ae46c1(&var_d30);
    memcpy(&var_ab0, &var_7e8, 0x2c8);
    clap_builder::builder::command::Command::arg::ha5d99f6751f86f1e(&var_7e8, &var_ab0, &var_d30);
    clap_builder::builder::arg::Arg::new::h1f8c2db82ca22d91(&var_ab0, 
        "z85ascii85-like encoding;\nwhen …");
    clap_builder::builder::arg::Arg::long::h1b0d770fd536ad44(&var_2a0, &var_ab0, 
        "z85ascii85-like encoding;\nwhen …");
    clap_builder::builder::arg::Arg::help::hf221cb535377cfbe(&var_fb0, &var_2a0, 
        "ascii85-like encoding;\nwhen enc…", 0x7f);
    clap_builder::builder::arg::Arg::action::h75f9294667bf6f81(&var_520, &var_fb0);
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h256b271d75ae46c1(&var_d30);
    memcpy(&var_ab0, &var_7e8, 0x2c8);
    clap_builder::builder::command::Command::arg::ha5d99f6751f86f1e(&var_7e8, &var_ab0, &var_d30);
    memcpy(arg1, &var_7e8, 0x2c8);
    arg1
}
