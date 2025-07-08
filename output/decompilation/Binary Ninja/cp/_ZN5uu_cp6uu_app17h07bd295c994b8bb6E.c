
  int64_t uu_cp::uu_app::h07bd295c994b8bb6(int64_t arg1)

{
    void* const var_558;
    clap_builder::builder::command::Command::new::h2bdc837409817e5f(&var_558, 
        uucore::util_name::h60d842bf27b05e82());
    char const* const var_820;
    clap_builder::builder::command::Command::version::hf5d23409933cbf81(&var_820, &var_558, 
        "0.0.28Copy SOURCE to DEST, or mu…");
    clap_builder::builder::command::Command::about::hf6807aed0e4a68c3(&var_558, &var_820, 
        "Copy SOURCE to DEST, or multiple…", 0x38);
    void** const var_a70;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a70, "{} [OPTION]... [-T] SOURCE DEST\n…", 0x68);
    clap_builder::builder::command::Command::override_usage::hb925896944b21ab7(&var_820, &var_558, 
        &var_a70);
    var_a70 = &data_5b5bc0;
    int64_t (* var_a68)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
    char const (** const var_a60)[0xbb] = &data_5b5bb0;
    int64_t (* var_a58)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
    var_558 = &data_5b5bd0;
    int64_t var_550 = 2;
    int64_t var_538 = 0;
    void** const* var_548 = &var_a70;
    int64_t var_540 = 2;
    void var_290;
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_290, &var_558);
    clap_builder::builder::command::Command::after_help::h24742e0eb86c1def(&var_558, &var_820, 
        &var_290);
    memcpy(&var_820, &var_558, 0x2bc);
    int64_t var_29c;
    int64_t var_564 = 0x8800000088 | var_29c;
    int32_t var_294;
    int32_t var_55c = var_294;
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, "target-directory/");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x74);
    clap_builder::builder::arg::Arg::conflicts_with::h9f8f59e8a1d46781(&var_558, &var_a70, 
        "no-target-directorycopy all SOUR…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_558, 
        "target-directory/");
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&var_558, &var_a70, 
        "target-directory/");
    clap_builder::builder::arg::Arg::value_hint::h909b89e502ddfc03(&var_a70, &var_558, 4);
    int64_t var_278 = 3;
    clap_builder::builder::arg::Arg::value_parser::h3f95aebc62bb149f(&var_558, &var_a70, &var_278);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "copy all SOURCE arguments into t…", 0x2f);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "no-target-directorycopy all SOUR…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_820, 0x54);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_820, &var_a70, 
        "no-target-directorycopy all SOUR…");
    clap_builder::builder::arg::Arg::conflicts_with::h9f8f59e8a1d46781(&var_a70, &var_820, 
        "target-directory/");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_820, &var_a70, 
        "Treat DEST as a regular file and…", 0x30);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "interactiveno-clobberask before …");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x69);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_558, &var_a70, 
        "interactiveno-clobberask before …");
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&var_a70, &var_558, 
        "no-clobberask before overwriting…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_558, &var_a70, 
        "ask before overwriting filesrefl…", 0x1c);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_558, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "linkBOLDBlue\x1b[4mcyanSome of d…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_820, 0x6c);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_820, &var_a70, 
        "linkBOLDBlue\x1b[4mcyanSome of d…");
    clap_builder::builder::arg::Arg::overrides_with_all::hc22e0e4512b020a1(&var_a70, &var_820, 
        &data_5b5bf0, 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_820, &var_a70, 
        "hard-link files instead of copyi…", 0x22);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "no-clobberask before overwriting…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x6e);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_558, &var_a70, 
        "no-clobberask before overwriting…");
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&var_a70, &var_558, 
        "interactiveno-clobberask before …");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_558, &var_a70, 
        "don't overwrite a file that alre…", 0x2a);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_558, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "recursivecopy directories recurs…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_820, 0x52);
    clap_builder::builder::arg::Arg::visible_short_alias::hd967a993c23685f5(&var_820, &var_a70, 
        0x72);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_820, 
        "recursivecopy directories recurs…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_820, &var_a70, 
        "copy directories recursivelystri…", 0x1c);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "strip-trailing-slashesremove any…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_558, 
        "strip-trailing-slashesremove any…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_558, &var_a70, 
        "remove any trailing slashes from…", 0x35);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_558, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "debugexplain how a file is copie…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_820, 
        "debugexplain how a file is copie…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_820, &var_a70, 
        "explain how a file is copied. Im…", 0x28);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "verboseexplicitly state what is …");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x76);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_558, &var_a70, 
        "verboseexplicitly state what is …");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "explicitly state what is being d…", 0x23);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "symbolic-linkattributes-onlycopy…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_820, 0x73);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_820, &var_a70, 
        "symbolic-linkattributes-onlycopy…");
    clap_builder::builder::arg::Arg::overrides_with_all::hc22e0e4512b020a1(&var_a70, &var_820, 
        &data_5b5bf0, 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_820, &var_a70, 
        "make symbolic links instead of c…", 0x26);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "forceif an existing destination …");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x66);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_558, &var_a70, 
        "forceif an existing destination …");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "if an existing destination file …", 0xaa);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "remove-destinationremove each ex…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_820, 
        "remove-destinationremove each ex…");
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&var_820, &var_a70, 
        "forceif an existing destination …");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_820, 
        "remove each existing destination…", 0x91);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_278);
    uucore::features::backup_control::arguments::backup::h804b9c4d220a6bfa(&var_a70);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_a70);
    uucore::features::backup_control::arguments::backup_no_args::h7f5ee465b0f6b670(&var_a70);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    uucore::features::backup_control::arguments::suffix::h659b6e9a409bb614(&var_a70);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_a70);
    uucore::features::update_control::arguments::update::h43d52bfaa3e04136(&var_a70);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    uucore::features::update_control::arguments::update_no_args::h0df581fe31ef9923(&var_a70);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "reflinksymbolic-linkattributes-o…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_820, 
        "reflinksymbolic-linkattributes-o…");
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&var_820, &var_a70, 
        "WHENkeysu128for<Kindboolmut \x1b…");
    clap_builder::builder::arg::Arg::overrides_with_all::hc22e0e4512b020a1(&var_a70, &var_820, 
        &data_5b5bf0, 5);
    memcpy(&var_820, &var_a70, 0x248);
    int32_t var_828;
    int32_t var_5d8 = 0x80 | var_828;
    int32_t var_824;
    int32_t var_5d4 = var_824;
    clap_builder::builder::arg::Arg::default_missing_value::h9470ec4a0f010e70(&var_a70, &var_820, 
        "alwaysnevercontrol clone/CoW cop…");
    var_820 = "auto";
    int64_t var_818 = 4;
    char const* const var_810 = "alwaysnevercontrol clone/CoW cop…";
    int64_t var_808 = 6;
    char const* const var_800 = "nevercontrol clone/CoW copies. S…";
    int64_t var_7f8 = 5;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5479b6a793fc35d5(&var_278, &var_820);
    clap_builder::builder::arg::Arg::value_parser::h35d251af9fa43760(&var_820, &var_a70, &var_278);
    var_278 = 0;
    int64_t var_270 = 1;
    char var_268 = 0;
    clap_builder::builder::arg::Arg::num_args::ha657edc7ac01ffd3(&var_a70, &var_820, &var_278);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_278, &var_a70, 
        "control clone/CoW copies. See be…", 0x23);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "attributes-onlycopy-contentshard…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_558, 
        "attributes-onlycopy-contentshard…");
    clap_builder::builder::arg::Arg::overrides_with_all::hc22e0e4512b020a1(&var_558, &var_a70, 
        &data_5b5bf0, 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "Don't copy the file data, just t…", 0x2d);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, "preserveENETDOWNOption '");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_820, 
        "preserveENETDOWNOption '");
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_820, &var_a70, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&var_a70, &var_820, 1);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc716d1b08cb9a98e(&var_278, &data_5b5b40, 7);
    clap_builder::builder::arg::Arg::value_parser::h35d251af9fa43760(&var_820, &var_a70, &var_278);
    clap_builder::builder::arg::Arg::num_args::h480a688d62002bcf(&var_a70, &var_820, 0);
    memcpy(&var_820, &var_a70, 0x248);
    int32_t var_5d8_1 = 0x80 | var_828;
    int32_t var_5d4_1 = var_824;
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&var_a70, &var_820, 
        "ATTR_LISTmode,ownership,timestam…");
    clap_builder::builder::arg::Arg::default_missing_value::h9470ec4a0f010e70(&var_820, &var_a70, 
        "mode,ownership,timestampPreserve…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_820, 
        "Preserve the specified attribute…", 0x93);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "preserve-default-attributessame …");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x70);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_558, &var_a70, 
        "preserve-default-attributessame …");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "same as --preserve=mode,ownershi…", 0x37);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "no-preservedon't preserve the sp…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_820, 
        "no-preservedon't preserve the sp…");
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_820, &var_a70, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&var_a70, &var_820, 1);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc716d1b08cb9a98e(&var_278, &data_5b5b40, 7);
    clap_builder::builder::arg::Arg::value_parser::h35d251af9fa43760(&var_820, &var_a70, &var_278);
    clap_builder::builder::arg::Arg::num_args::h480a688d62002bcf(&var_a70, &var_820, 0);
    memcpy(&var_820, &var_a70, 0x248);
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&var_a70, &var_820, 
        "ATTR_LISTmode,ownership,timestam…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_278, &var_a70, 
        "don't preserve the specified att…", 0x27);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "parentsparentuse full source fil…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_558, 
        "parentsparentuse full source fil…");
    clap_builder::builder::arg::Arg::alias::ha7b1f7201d9a47a3(&var_558, &var_a70, 
        "parentuse full source file name …");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "use full source file name under …", 0x29);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "no-dereferencedereferencenever f…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_820, 0x50);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_820, &var_a70, 
        "no-dereferencedereferencenever f…");
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&var_a70, &var_820, 
        "dereferencenever follow symbolic…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_820, &var_a70, 
        "never follow symbolic links in S…", 0x25);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "dereferencenever follow symbolic…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x4c);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_558, &var_a70, 
        "dereferencenever follow symbolic…");
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&var_a70, &var_558, 
        "no-dereferencedereferencenever f…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_558, &var_a70, 
        "always follow symbolic links in …", 0x26);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_558, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "cli-symbolic-linksfollow command…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_820, 0x48);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_820, &var_a70, 
        "follow command-line symbolic lin…", 0x2c);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "archiveSame as -dR --preserve=al…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x61);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_558, &var_a70, 
        "archiveSame as -dR --preserve=al…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "Same as -dR --preserve=allno-der…", 0x1a);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "no-dereference-preserve-linkssam…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_820, 0x64);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_820, &var_a70, 
        "same as --no-dereference --prese…", 0x29);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "one-file-systemstay on this file…");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_a70, &var_558, 0x78);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_558, &var_a70, 
        "one-file-systemstay on this file…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "stay on this file systemsparseco…", 0x18);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "sparsecontrol creation of sparse…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_820, 
        "sparsecontrol creation of sparse…");
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&var_820, &var_a70, 
        "WHENkeysu128for<Kindboolmut \x1b…");
    var_a70 = "nevercontrol clone/CoW copies. S…";
    int64_t var_a68_1 = 5;
    char const* const var_a60_1 = "auto";
    int64_t var_a58_1 = 4;
    char const* const var_a50 = "alwaysnevercontrol clone/CoW cop…";
    int64_t var_a48 = 6;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5479b6a793fc35d5(&var_278, &var_a70);
    clap_builder::builder::arg::Arg::value_parser::h35d251af9fa43760(&var_a70, &var_820, &var_278);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_278, &var_a70, 
        "control creation of sparse files…", 0x2b);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, 
        "copy-contentshard-link files ins…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_558, 
        "copy-contentshard-link files ins…");
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&var_558, &var_a70, 
        "attributes-onlycopy-contentshard…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_558, 
        "NotImplemented: copy contents of…", 0x3d);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_278, &var_a70, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "contextlinksxattrallThe backup s…");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_820, 
        "contextlinksxattrallThe backup s…");
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&var_820, &var_a70, 
        "CTXNotImplemented: set SELinux s…");
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_a70, &var_820, 
        "NotImplemented: set SELinux secu…", 0x50);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_820, &var_558, &var_a70);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_558, "progress");
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&var_a70, &var_558, "progress");
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&var_558, &var_a70, 0x67);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_558, 2);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&var_278, &var_a70, 
        "Display a progress bar. \nNote: …", 0x4e);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&var_558, &var_820, &var_278);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&var_820, 
        "pathsinvalid attribute SELinux w…");
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&var_a70, &var_820, 1);
    clap_builder::builder::arg::Arg::num_args::h480a688d62002bcf(&var_820, &var_a70, 1);
    memcpy(&var_a70, &var_820, 0x248);
    int32_t var_828_1 = 0x80 | var_828 | 1;
    int32_t var_824_1 = var_824;
    clap_builder::builder::arg::Arg::value_hint::h909b89e502ddfc03(&var_820, &var_a70, 2);
    var_278 = 2;
    clap_builder::builder::arg::Arg::value_parser::h3f95aebc62bb149f(&var_a70, &var_820, &var_278);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(arg1, &var_558, &var_a70);
    return arg1;
}
