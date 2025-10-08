
  int64_t uu_cp::uu_app::h625d3e37003a837d(int64_t arg1)

{
    void* const var_590;
    clap_builder::builder::command::Command::new::hc99276f3dca80dd9(&var_590, 
        uucore::util_name::h074417a1e6395129());
    char const* const var_858;
    clap_builder::builder::command::Command::version::ha377766369da11d3(&var_858, &var_590);
    clap_builder::builder::command::Command::about::h6c02d340335b54b4(&var_590, &var_858);
    char const (** const var_ad8)[0xc0];
    uucore::format_usage::he053403a896311ed(&var_ad8, "{} [OPTION]... [-T] SOURCE DEST\n…", 0x68);
    clap_builder::builder::command::Command::override_usage::h784f4a435dbfd3ab(&var_858, &var_590, 
        &var_ad8);
    var_ad8 = &data_55e938;
    int64_t (* var_ad0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
    void** const var_ac8 = &data_55e928;
    int64_t (* var_ac0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
    var_590 = &data_55e908;
    int64_t var_588 = 2;
    int64_t var_570 = 0;
    char const (** const* var_580)[0xc0] = &var_ad8;
    int64_t var_578 = 2;
    void var_2c8;
    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_2c8, &var_590);
    clap_builder::builder::command::Command::after_help::he39af2a693fd6357(&var_590, &var_858, 
        &var_2c8);
    memcpy(&var_858, &var_590, 0x2bc);
    int64_t var_2d4;
    int64_t var_59c = 0x8800000088 | var_2d4;
    int32_t var_2cc;
    int32_t var_594 = var_2cc;
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, &data_420a80);
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x74);
    clap_builder::builder::arg::Arg::conflicts_with::h3a9812deb98f96d9(&var_590, &var_ad8, 
        "no-target-directorycopy all SOUR…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_590, &data_420a80);
    clap_builder::builder::arg::Arg::value_name::h2d78e7864a70a71a(&var_590, &var_ad8, 
        &data_420a80);
    clap_builder::builder::arg::Arg::value_hint::had66afd17aa71df0(&var_ad8, &var_590, 4);
    int64_t var_2b0 = 3;
    clap_builder::builder::arg::Arg::value_parser::h9428519d57848c14(&var_590, &var_ad8, &var_2b0);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_590, 
        "copy all SOURCE arguments into t…", 0x2f);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "no-target-directorycopy all SOUR…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_858, 0x54);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_858, &var_ad8, 
        "no-target-directorycopy all SOUR…");
    clap_builder::builder::arg::Arg::conflicts_with::h3a9812deb98f96d9(&var_ad8, &var_858, 
        &data_420a80);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "Treat DEST as a regular file and…", 0x30);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_858, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "interactiveno-clobberask before …");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x69);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_590, &var_ad8, 
        "interactiveno-clobberask before …");
    clap_builder::builder::arg::Arg::overrides_with::hbaf111a17e6e3fd6(&var_ad8, &var_590, 
        "no-clobberask before overwriting…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_590, &var_ad8, 
        "ask before overwriting filesrefl…", 0x1c);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_590, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, "link/");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_858, 0x6c);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_858, &var_ad8, "link/");
    clap_builder::builder::arg::Arg::overrides_with_all::h6650a898546d90c6(&var_ad8, &var_858);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "hard-link files instead of copyi…", 0x22);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_858, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "no-clobberask before overwriting…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x6e);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_590, &var_ad8, 
        "no-clobberask before overwriting…");
    clap_builder::builder::arg::Arg::overrides_with::hbaf111a17e6e3fd6(&var_ad8, &var_590, 
        "interactiveno-clobberask before …");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_590, &var_ad8, 
        "don't overwrite a file that alre…", 0x2a);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_590, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "recursivecopy directories recurs…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_858, 0x52);
    clap_builder::builder::arg::Arg::visible_short_alias::h5c4e4b19901dda50(&var_858, &var_ad8);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "recursivecopy directories recurs…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "copy directories recursivelystri…", 0x1c);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_858, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "strip-trailing-slashesremove any…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_590, 
        "strip-trailing-slashesremove any…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_590, &var_ad8, 
        "remove any trailing slashes from…", 0x35);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_590, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "debugexplain how a file is copie…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "debugexplain how a file is copie…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "explain how a file is copied. Im…", 0x28);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_858, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "verboseexplicitly state what is …");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x76);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_590, &var_ad8, 
        "verboseexplicitly state what is …");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_590, 
        "explicitly state what is being d…", 0x23);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "symbolic-linkattributes-onlycopy…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_858, 0x73);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_858, &var_ad8, 
        "symbolic-linkattributes-onlycopy…");
    clap_builder::builder::arg::Arg::overrides_with_all::h6650a898546d90c6(&var_ad8, &var_858);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "make symbolic links instead of c…", 0x26);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_858, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "forceif an existing destination …");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x66);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_590, &var_ad8, 
        "forceif an existing destination …");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_590, 
        "if an existing destination file …", 0xaa);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "remove-destinationremove each ex…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "remove-destinationremove each ex…");
    clap_builder::builder::arg::Arg::overrides_with::hbaf111a17e6e3fd6(&var_858, &var_ad8, 
        "forceif an existing destination …");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_858, 
        "remove each existing destination…", 0x91);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_2b0);
    uucore::features::backup_control::arguments::backup::h97e05fc730627326(&var_ad8);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    uucore::features::backup_control::arguments::backup_no_args::hfb21d07466a7545a(&var_ad8);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    uucore::features::backup_control::arguments::suffix::h87e85728d219a77f(&var_ad8);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    uucore::features::update_control::arguments::update::h042cd58a51ead532(&var_ad8);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    uucore::features::update_control::arguments::update_no_args::hb4e4463f3f7510d7(&var_ad8);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "reflinksymbolic-linkattributes-o…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "reflinksymbolic-linkattributes-o…");
    clap_builder::builder::arg::Arg::value_name::h2d78e7864a70a71a(&var_858, &var_ad8, 
        "WHENkeysu128for<\x1b[1mKindboolm…");
    clap_builder::builder::arg::Arg::overrides_with_all::h6650a898546d90c6(&var_ad8, &var_858);
    memcpy(&var_858, &var_ad8, 0x278);
    int32_t var_860;
    int32_t var_5e0 = 0x80 | var_860;
    int32_t var_85c;
    int32_t var_5dc = var_85c;
    clap_builder::builder::arg::Arg::default_missing_value::h8b3b8a676a6dddb2(&var_ad8, &var_858, 
        "alwaysnevercontrol clone/CoW cop…");
    var_858 = "auto";
    int64_t var_850 = 4;
    char const* const var_848 = "alwaysnevercontrol clone/CoW cop…";
    int64_t var_840 = 6;
    char const* const var_838 = "nevercontrol clone/CoW copies. S…";
    int64_t var_830 = 5;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h419ee950dc80f9b2(&var_2b0, &var_858);
    clap_builder::builder::arg::Arg::value_parser::h266f577f5d32e118(&var_858, &var_ad8, &var_2b0);
    clap_builder::builder::arg::Arg::num_args::h59b8910fc2c9d690(&var_ad8, &var_858, 0);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_2b0, &var_ad8, 
        "control clone/CoW copies. See be…", 0x23);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "attributes-onlycopy-contentshard…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_590, 
        "attributes-onlycopy-contentshard…");
    clap_builder::builder::arg::Arg::overrides_with_all::h6650a898546d90c6(&var_590, &var_ad8);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_590, 
        "Don't copy the file data, just t…", 0x2d);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, "preserveENETDOWNOption '");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "preserveENETDOWNOption '");
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_858, &var_ad8, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter::hbc9e6ac97bf7a88b(&var_ad8, &var_858, 1);
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::he961522e222ab679(&var_2b0);
    clap_builder::builder::arg::Arg::value_parser::h266f577f5d32e118(&var_858, &var_ad8, &var_2b0);
    clap_builder::builder::arg::Arg::num_args::h3c060b7ce4033c91(&var_ad8, &var_858, 0);
    memcpy(&var_858, &var_ad8, 0x278);
    int32_t var_5e0_1 = 0x80 | var_860;
    int32_t var_5dc_1 = var_85c;
    clap_builder::builder::arg::Arg::value_name::h2d78e7864a70a71a(&var_ad8, &var_858, 
        "ATTR_LISTmode,ownership,timestam…");
    clap_builder::builder::arg::Arg::default_missing_value::h8b3b8a676a6dddb2(&var_858, &var_ad8, 
        "mode,ownership,timestampPreserve…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_858, 
        "Preserve the specified attribute…", 0x93);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "preserve-default-attributessame …");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x70);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_590, &var_ad8, 
        "preserve-default-attributessame …");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_590, 
        "same as --preserve=mode,ownershi…", 0x37);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "no-preservedon't preserve the sp…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "no-preservedon't preserve the sp…");
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_858, &var_ad8, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter::hbc9e6ac97bf7a88b(&var_ad8, &var_858, 1);
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::he961522e222ab679(&var_2b0);
    clap_builder::builder::arg::Arg::value_parser::h266f577f5d32e118(&var_858, &var_ad8, &var_2b0);
    clap_builder::builder::arg::Arg::num_args::h3c060b7ce4033c91(&var_ad8, &var_858, 0);
    memcpy(&var_858, &var_ad8, 0x278);
    int32_t var_5e0_2 = 0x80 | var_860;
    int32_t var_5dc_2 = var_85c;
    clap_builder::builder::arg::Arg::value_name::h2d78e7864a70a71a(&var_ad8, &var_858, 
        "ATTR_LISTmode,ownership,timestam…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_2b0, &var_ad8, 
        "don't preserve the specified att…", 0x27);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "parentsparentuse full source fil…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_590, 
        "parentsparentuse full source fil…");
    clap_builder::builder::arg::Arg::alias::h1a7c9aaf6b5f8806(&var_590, &var_ad8);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_590, 
        "use full source file name under …", 0x29);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "no-dereferencedereferencenever f…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_858, 0x50);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_858, &var_ad8, 
        "no-dereferencedereferencenever f…");
    clap_builder::builder::arg::Arg::overrides_with::hbaf111a17e6e3fd6(&var_ad8, &var_858, 
        "dereferencenever follow symbolic…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "never follow symbolic links in S…", 0x25);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_858, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "dereferencenever follow symbolic…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x4c);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_590, &var_ad8, 
        "dereferencenever follow symbolic…");
    clap_builder::builder::arg::Arg::overrides_with::hbaf111a17e6e3fd6(&var_ad8, &var_590, 
        "no-dereferencedereferencenever f…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_590, &var_ad8, 
        "always follow symbolic links in …", 0x26);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_590, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "cli-symbolic-linksfollow command…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_858, 0x48);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "follow command-line symbolic lin…", 0x2c);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_858, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "archiveSame as -dR --preserve=al…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x61);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_590, &var_ad8, 
        "archiveSame as -dR --preserve=al…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_590, 
        "Same as -dR --preserve=allno-der…", 0x1a);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "no-dereference-preserve-linkssam…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_858, 0x64);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "same as --no-dereference --prese…", 0x29);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_858, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "one-file-systemstay on this file…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x78);
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_590, &var_ad8, 
        "one-file-systemstay on this file…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_590, 
        "stay on this file systemsparseco…", 0x18);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "sparsecontrol creation of sparse…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "sparsecontrol creation of sparse…");
    clap_builder::builder::arg::Arg::value_name::h2d78e7864a70a71a(&var_858, &var_ad8, 
        "WHENkeysu128for<\x1b[1mKindboolm…");
    var_ad8 = "nevercontrol clone/CoW copies. S…";
    int64_t var_ad0_1 = 5;
    char const* const var_ac8_1 = "auto";
    int64_t var_ac0_1 = 4;
    char const* const var_ab8 = "alwaysnevercontrol clone/CoW cop…";
    int64_t var_ab0 = 6;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h419ee950dc80f9b2(&var_2b0, &var_ad8);
    clap_builder::builder::arg::Arg::value_parser::h266f577f5d32e118(&var_ad8, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_2b0, &var_ad8, 
        "control creation of sparse files…", 0x2b);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "Zset SELinux security context of…");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_ad8, &var_590, 0x5a);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_590, &var_ad8, 
        "set SELinux security context of …", 0x40);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_590, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "contextTemplateErrorstate/home/3…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "contextTemplateErrorstate/home/3…");
    clap_builder::builder::arg::Arg::value_name::h2d78e7864a70a71a(&var_858, &var_ad8, 
        "CTXlike -Z, or if CTX is specifi…");
    var_2b0 = 1;
    clap_builder::builder::arg::Arg::value_parser::h9428519d57848c14(&var_ad8, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_858, &var_ad8, 
        "like -Z, or if CTX is specified …", 0x55);
    clap_builder::builder::arg::Arg::num_args::h59b8910fc2c9d690(&var_ad8, &var_858, 0);
    memcpy(&var_858, &var_ad8, 0x278);
    int32_t var_5e0_3 = 0x80 | var_860;
    int32_t var_5dc_3 = var_85c;
    clap_builder::builder::arg::Arg::default_missing_value::h8b3b8a676a6dddb2(&var_ad8, &var_858, 
        1);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_ad8);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, "progress");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_590, "progress");
    clap_builder::builder::arg::Arg::short::hf6223e43e4c27034(&var_590, &var_ad8, 0x67);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_590, 2);
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_2b0, &var_ad8, 
        "Display a progress bar. \nNote: …", 0x4e);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_590, &var_858, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_858, 
        "copy-contentshard-link files ins…");
    clap_builder::builder::arg::Arg::long::hcce0d53ef438b739(&var_ad8, &var_858, 
        "copy-contentshard-link files ins…");
    clap_builder::builder::arg::Arg::overrides_with::hbaf111a17e6e3fd6(&var_858, &var_ad8, 
        "attributes-onlycopy-contentshard…");
    clap_builder::builder::arg::Arg::help::h4e6540dc10fba197(&var_ad8, &var_858, 
        "NotImplemented: copy contents of…", 0x3d);
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_2b0, &var_ad8, 2);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(&var_858, &var_590, &var_2b0);
    clap_builder::builder::arg::Arg::new::hc2ddf9c6f1414dc9(&var_590, 
        "pathsinvalid attribute --backup …");
    clap_builder::builder::arg::Arg::action::he62196abb477c5de(&var_ad8, &var_590, 1);
    clap_builder::builder::arg::Arg::num_args::h3c060b7ce4033c91(&var_590, &var_ad8, 1);
    memcpy(&var_ad8, &var_590, 0x278);
    int32_t var_318;
    int32_t var_860_1 = var_318 | 1;
    int32_t var_314;
    int32_t var_85c_1 = var_314;
    clap_builder::builder::arg::Arg::value_hint::had66afd17aa71df0(&var_590, &var_ad8, 2);
    var_2b0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h9428519d57848c14(&var_ad8, &var_590, &var_2b0);
    clap_builder::builder::command::Command::arg::hf4f6327b64aac807(arg1, &var_858, &var_ad8);
    return arg1;
}
