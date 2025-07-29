long long uu_tail::args::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xae8]
    unsigned long long v1;  // [bp-0xae0]
    unsigned long long v2;  // [bp-0xad8]
    char v3;  // [bp-0xad0]
    unsigned long long v4;  // [bp-0xac0]
    char v5;  // [bp-0xab8]
    unsigned int v6;  // [bp-0x840]
    unsigned int v7;  // [bp-0x83c]
    char v8;  // [bp-0x838], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x830]
    unsigned long long v10;  // [bp-0x828]
    unsigned long long v11;  // [bp-0x820]
    unsigned int v12;  // [bp-0x5c0]
    char v13;  // [bp-0x5bc]
    unsigned long long v14;  // [bp-0x57c]
    unsigned int v15;  // [bp-0x574]
    char v16;  // [bp-0x570]
    unsigned int v17;  // [bp-0x2f8]
    char v18;  // [bp-0x2f4]
    unsigned long v19;  // [bp-0x2b4]
    unsigned int v20;  // [bp-0x2ac]
    void* v21;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x2a0]
    char v23;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x290]
    unsigned long long v27;  // rdx

    uucore::mods::locale::get_message(&v3, "tail-help-polling-linux(uutils coreutils) 0.1.0tail-abouttail-usagetail-help-bytesdescriptortail-help-linesPIDtail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-ret", 23);
    v8.new(uucore::util_name(), v27);
    v16.version(&v8, "(uutils coreutils) 0.1.0tail-abouttail-usagetail-help-bytesdescriptortail-help-linesPIDtail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retr", 24);
    uucore::mods::locale::get_message(&v5, "tail-abouttail-usagetail-help-bytesdescriptortail-help-linesPIDtail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 10);
    v8.about(&v16, &v5);
    uucore::mods::locale::get_message(&v0, "tail-usagetail-help-bytesdescriptortail-help-linesPIDtail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 10);
    uucore::format_usage(&v5, v1, v2);
    v16.override_usage(&v8, &v5);
    memcpy(&v8, &v16, 700);
    v14 = 549755814016 | v19;
    v15 = v20;
    v16.new("bytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 5);
    v5.short(&v16, 99);
    v16.long(&v5, "bytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 5);
    memcpy(&v5, &v16, 632);
    v6 = v17 | 32;
    v7 = *((int *)&v18);
    v21 = "bytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs";
    v22 = 5;
    v23 = "linestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs";
    v24 = 5;
    v16.overrides_with_all(&v5, &v21);
    uucore::mods::locale::get_message(&v21, "tail-help-bytesdescriptortail-help-linesPIDtail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 15);
    v5.help(&v16, &v21);
    v16.arg(&v8, &v5);
    v8.new("followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only", 6);
    v5.short(&v8, 102);
    v8.long(&v5, "followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only", 6);
    v5.default_missing_value(&v8);
    v21 = 0;
    v22 = 1;
    v23 = 0;
    v8.num_args(&v5, &v21);
    memcpy(&v5, &v8, 632);
    v6 = 128 | v12;
    v7 = *((int *)&v13);
    v8 = "descriptortail-help-linesPIDtail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe";
    v9 = 10;
    v10 = "name";
    v11 = 4;
    v21.from(&v8);
    v8.value_parser(&v5, &v21);
    v5.overrides_with(&v8, "followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only", 6);
    uucore::mods::locale::get_message(&v8, "tail-help-followConnection resetDivision by zero", 16);
    v21.help(&v5, &v8);
    v8.arg(&v16, &v21);
    v16.new("linestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 5);
    v5.short(&v16, 110);
    v16.long(&v5, "linestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 5);
    memcpy(&v5, &v16, 632);
    v6 = v17 | 32;
    v7 = *((int *)&v18);
    v21 = "bytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs";
    v22 = 5;
    v23 = "linestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs";
    v24 = 5;
    v16.overrides_with_all(&v5, &v21);
    uucore::mods::locale::get_message(&v21, "tail-help-linesPIDtail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 15);
    v5.help(&v16, &v21);
    v16.arg(&v8, &v5);
    v8.new("piderrorFretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warn", 3);
    v5.long(&v8, "piderrorFretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warn", 3);
    v8.value_name(&v5, "PIDtail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 3);
    uucore::mods::locale::get_message(&v21, "tail-help-pidsilenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 13);
    v5.help(&v8, &v21);
    v21.overrides_with(&v5, "piderrorFretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warn", 3);
    v8.arg(&v16, &v21);
    v16.new("quietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-warning-pid-not-supportedtail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-range", 5);
    v5.short(&v16, 113);
    v16.long(&v5, "quietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-warning-pid-not-supportedtail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-range", 5);
    v5.visible_alias(&v16, "silenttail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 6);
    v21 = "quietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-warning-pid-not-supportedtail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-range";
    v22 = 5;
    v23 = "verbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-wa";
    v24 = 7;
    v16.overrides_with_all(&v5, &v21);
    uucore::mods::locale::get_message(&v21, "tail-help-quietNtail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 15);
    v5.help(&v16, &v21);
    v21.action(&v5, 2);
    v16.arg(&v8, &v21);
    v8.new("sleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-wa", 14);
    v5.short(&v8, 115);
    v8.value_name(&v5, "Ntail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 1);
    v5.long(&v8, "sleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-wa", 14);
    uucore::mods::locale::get_message(&v8, "tail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 24);
    v21.help(&v5, &v8);
    v8.arg(&v16, &v21);
    v16.new("max-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-warning-pid-not-", 19);
    v5.value_name(&v16, "Ntail-help-sleep-intervaltail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 1);
    v16.long(&v5, "max-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-warning-pid-not-", 19);
    uucore::mods::locale::get_message(&v21, "tail-help-max-unchanged-statstail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 29);
    v5.help(&v16, &v21);
    v16.arg(&v8, &v5);
    v8.new("verbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-wa", 7);
    v5.short(&v8, 118);
    v8.long(&v5, "verbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-wa", 7);
    v21 = "quietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-warning-pid-not-supportedtail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-range";
    v22 = 5;
    v23 = "verbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-wa";
    v24 = 7;
    v5.overrides_with_all(&v8, &v21);
    uucore::mods::locale::get_message(&v21, "tail-help-verbosetail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 17);
    v8.help(&v5, &v21);
    v5.action(&v8, 2);
    v8.arg(&v16, &v5);
    v16.new("zero-terminatedbytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 15);
    v5.short(&v16, 122);
    v16.long(&v5, "zero-terminatedbytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 15);
    uucore::mods::locale::get_message(&v21, "tail-help-zero-terminateddistail-help-retrytail-help-follow-retrypresume-input-pipe", 25);
    v5.help(&v16, &v21);
    v21.action(&v5, 2);
    v16.arg(&v8, &v21);
    v8.new("use-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effec", 11);
    v5.alias(&v8, "-disable-inotify", 16);
    v8.alias(&v5, "distail-help-retrytail-help-follow-retrypresume-input-pipe", 3);
    v5.long(&v8, "use-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effec", 11);
    v23 = v4;
    memcpy(&v21, &v3, 16);
    v8.help(&v5, &v21);
    v5.action(&v8, 2);
    v8.arg(&v16, &v5);
    v16.new("retryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry", 5);
    v5.long(&v16, "retryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry", 5);
    uucore::mods::locale::get_message(&v21, "tail-help-retrytail-help-follow-retrypresume-input-pipe", 15);
    v16.help(&v5, &v21);
    v5.overrides_with(&v16, "retryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry", 5);
    v21.action(&v5, 2);
    v16.arg(&v8, &v21);
    v8.new("Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retr", 1);
    v5.short(&v8, 70);
    uucore::mods::locale::get_message(&v21, "tail-help-follow-retrypresume-input-pipe", 22);
    v8.help(&v5, &v21);
    v5.overrides_with(&v8, "Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retr", 1);
    v21.action(&v5, 2);
    v8.arg(&v16, &v21);
    v16.new("-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-r", 19);
    v5.long(&v16, "presume-input-pipe", 18);
    v16.alias(&v5, "-presume-input-pipesleep-intervalmax-unchanged-statstail-error-invalid-max-unchanged-statstail-error-invalid-pidtail-error-invalid-pid-with-errorfilesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-r", 19);
    memcpy(&v5, &v16, 632);
    v6 = v17 | 4;
    v7 = *((int *)&v18);
    v21.action(&v5, 2);
    v16.arg(&v8, &v21);
    v8.new("filesquietsourcetail-error-invalid-number-of-seconds: warning: \ntail-warning-retry-only-effectivetail-warning-retry-ignoredtail-warning-pid-not-supportedtail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-", 5);
    v5.action(&v8, 1);
    v8.num_args(&v5);
    v21 = 2;
    v5.value_parser(&v8, &v21);
    v8.value_hint(&v5, 3);
    a0.arg(&v16, &v8);
    ::0x4ee340::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
