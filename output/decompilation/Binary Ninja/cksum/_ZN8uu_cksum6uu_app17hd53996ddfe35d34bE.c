
  int64_t uu_cksum::uu_app::hd53996ddfe35d34b(int64_t arg1)

{
    char const* const var_7f8;
    clap_builder::builder::command::Command::new::h86bca4edd46ce944(&var_7f8, 
        uucore::util_name::h074417a1e6395129());
    char const* const var_ac0;
    clap_builder::builder::command::Command::version::h4696be916ffd3e36(&var_ac0, &var_7f8);
    clap_builder::builder::command::Command::about::h371ec2c1bae9bec7(&var_7f8, &var_ac0);
    void var_530;
    uucore::format_usage::he053403a896311ed(&var_530, "{} [OPTIONS] [FILE]...algorithms…", 0x16);
    clap_builder::builder::command::Command::override_usage::h9e547c574281f7cf(&var_ac0, &var_7f8, 
        &var_530);
    memcpy(&var_7f8, &var_ac0, 0x2bc);
    int64_t var_804;
    int64_t var_53c = 0x8800000088 | var_804;
    int32_t var_7fc;
    int32_t var_534 = var_7fc;
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_ac0, &data_4119a4);
    memcpy(&var_530, &var_ac0, 0x278);
    int32_t var_848;
    int32_t var_2b8 = var_848 | 4;
    int32_t var_844;
    int32_t var_2b4 = var_844;
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_ac0, &var_530, 1);
    char const* const var_2b0 = 2;
    clap_builder::builder::arg::Arg::value_parser::hc09459d7ca46cdbb(&var_530, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::value_hint::h6e1714ef82cfbba4(&var_2b0, &var_530);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_ac0, &var_7f8, &var_2b0);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_7f8, 
        "algorithmselect the digest type …");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_7f8, 
        "algorithmselect the digest type …");
    clap_builder::builder::arg::Arg::short::h733728afe724fc49(&var_7f8, &var_530, 0x61);
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_530, &var_7f8, 
        "select the digest type to use. S…", 0x2f);
    clap_builder::builder::arg::Arg::value_name::h0871b1f3d27c73cc(&var_7f8, &var_530);
    clap_builder::builder::arg::Arg::value_parser::h83d1a6acb8f9671a(&var_530, &var_7f8, 
        &data_563a28);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_7f8, &var_ac0, &var_530);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_ac0, "untagged0");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_ac0, "untagged0");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_ac0, &var_530, 
        "create a reversed style checksum…", 0x35);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_ac0, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5d3dca822e971d95(&var_2b0, &var_530, 
        "tagcreate a BSD style checksum, …");
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_ac0, &var_7f8, &var_2b0);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_7f8, 
        "tagcreate a BSD style checksum, …");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_7f8, 
        "tagcreate a BSD style checksum, …");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_7f8, &var_530, 
        "create a BSD style checksum, und…", 0x36);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_7f8, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5d3dca822e971d95(&var_2b0, &var_530, 
        "untagged0");
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_7f8, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_ac0, 
        "lengthdigest length in bits; mus…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_ac0, 
        "lengthdigest length in bits; mus…");
    uint64_t rax_4 = alloc::boxed::Box$LT$T$GT$::new::ha89766014a00d51d(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::he7963e1397bf94db);
    var_2b0 = 4;
    uint64_t var_2a8 = rax_4;
    void* const var_2a0 = &data_5639a0;
    clap_builder::builder::arg::Arg::value_parser::hb36bfb2bf239caa7(&var_ac0, &var_530, &var_2b0);
    clap_builder::builder::arg::Arg::short::h733728afe724fc49(&var_530, &var_ac0, 0x6c);
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_ac0, &var_530, 
        "digest length in bits; must not …", 0x63);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_ac0, 0);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_ac0, &var_7f8, &var_530);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_7f8, 
        "rawemit a raw binary digest, not…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_7f8, 
        "rawemit a raw binary digest, not…");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_7f8, &var_530, 
        "emit a raw binary digest, not he…", 0x29);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_7f8, &var_ac0, &var_530);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_ac0, 
        "strictexit non-zero for improper…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_ac0, 
        "strictexit non-zero for improper…");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_ac0, &var_530, 
        "exit non-zero for improperly for…", 0x35);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_ac0, &var_7f8, &var_530);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_7f8, 
        "checkread hashsums from the FILE…");
    clap_builder::builder::arg::Arg::short::h733728afe724fc49(&var_530, &var_7f8, 0x63);
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_7f8, &var_530, 
        "checkread hashsums from the FILE…");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_530, &var_7f8, 
        "read hashsums from the FILEs and…", 0x2b);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_2b0, &var_530, 2);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_7f8, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_ac0, 
        "base64emit a base64 digest, not …");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_ac0, 
        "base64emit a base64 digest, not …");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_ac0, &var_530, 
        "emit a base64 digest, not hexade…", 0x25);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_ac0, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h1d1d9aaf39fd9027(&var_2b0, &var_530);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_ac0, &var_7f8, &var_2b0);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_7f8, 
        "textdumb\x1b[5m\x1b[9m <= trueTE…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_7f8, 
        "textdumb\x1b[5m\x1b[9m <= trueTE…");
    clap_builder::builder::arg::Arg::short::h733728afe724fc49(&var_7f8, &var_530, 0x74);
    memcpy(&var_530, &var_7f8, 0x278);
    int32_t var_580;
    int32_t var_2b8_1 = var_580 | 4;
    int32_t var_57c;
    int32_t var_2b4_1 = var_57c;
    clap_builder::builder::arg::Arg::overrides_with::h5d3dca822e971d95(&var_7f8, &var_530, 
        "binarywarn about improperly form…");
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_7f8, &var_ac0, &var_530);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_ac0, 
        "binarywarn about improperly form…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_ac0, 
        "binarywarn about improperly form…");
    clap_builder::builder::arg::Arg::short::h733728afe724fc49(&var_ac0, &var_530, 0x62);
    memcpy(&var_530, &var_ac0, 0x278);
    int32_t var_2b8_2 = var_848 | 4;
    int32_t var_2b4_2 = var_844;
    clap_builder::builder::arg::Arg::overrides_with::h5d3dca822e971d95(&var_ac0, &var_530, 
        "textdumb\x1b[5m\x1b[9m <= trueTE…");
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_ac0, &var_7f8, &var_530);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_7f8, "warn\x1b[7mBool");
    clap_builder::builder::arg::Arg::short::h733728afe724fc49(&var_530, &var_7f8, 0x77);
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_7f8, &var_530, "warn\x1b[7mBool");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_530, &var_7f8, 
        "warn about improperly formatted …", 0x2e);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_7f8, &var_530, 2);
    var_2b0 = "statusquietdon't output anything…";
    int64_t var_2a8_1 = 6;
    char const* const var_2a0_1 = "quietdon't output anything, stat…";
    int64_t var_298 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h29da6af960708cfc(&var_530, &var_7f8, 
        &var_2b0);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_7f8, &var_ac0, &var_530);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_ac0, 
        "statusquietdon't output anything…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_ac0, 
        "statusquietdon't output anything…");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_ac0, &var_530, 
        "don't output anything, status co…", 0x30);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_ac0, 2);
    var_ac0 = "warn\x1b[7mBool";
    int64_t var_ab8 = 4;
    char const* const var_ab0 = "quietdon't output anything, stat…";
    int64_t var_aa8 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::h29da6af960708cfc(&var_2b0, &var_530, 
        &var_ac0);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_ac0, &var_7f8, &var_2b0);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_7f8, 
        "quietdon't output anything, stat…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_7f8, 
        "quietdon't output anything, stat…");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_7f8, &var_530, 
        "don't print OK for each successf…", 0x32);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_7f8, 2);
    var_7f8 = "warn\x1b[7mBool";
    int64_t var_7f0 = 4;
    char const* const var_7e8 = "statusquietdon't output anything…";
    int64_t var_7e0 = 6;
    clap_builder::builder::arg::Arg::overrides_with_all::h29da6af960708cfc(&var_2b0, &var_530, 
        &var_7f8);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_7f8, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_ac0, 
        "ignore-missingdon't fail or repo…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_ac0, 
        "ignore-missingdon't fail or repo…");
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_ac0, &var_530, 
        "don't fail or report status for …", 0x2d);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_530, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_ac0, &var_7f8, &var_530);
    clap_builder::builder::arg::Arg::new::h8b2ba3a0c9b96a28(&var_7f8, 
        "zeroAnsi -- \x1b[8mhelpNonesha1s…");
    clap_builder::builder::arg::Arg::long::h85cad3c224406cd8(&var_530, &var_7f8, 
        "zeroAnsi -- \x1b[8mhelpNonesha1s…");
    clap_builder::builder::arg::Arg::short::h733728afe724fc49(&var_7f8, &var_530, 0x7a);
    clap_builder::builder::arg::Arg::help::h11dda4755e33f1c5(&var_530, &var_7f8, 
        "end each output line with NUL, n…", 0x4b);
    clap_builder::builder::arg::Arg::action::hafff6befccbb07d8(&var_2b0, &var_530, 2);
    clap_builder::builder::command::Command::arg::h36db2069cadd3667(&var_7f8, &var_ac0, &var_2b0);
    clap_builder::builder::command::Command::after_help::h21e4264e3efad3b2(arg1, &var_7f8);
    return arg1;
}
