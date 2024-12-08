long long uu_tail::args::uu_app::hbeea4360f6bbac39(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xa88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa80]
    unsigned long long v2;  // [sp-0xa78]
    unsigned long long v3;  // [sp-0xa70]
    unsigned long v4;  // [sp-0xa68], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xa60]
    unsigned long long v6;  // [sp-0xa58]
    unsigned long long v7;  // [sp-0xa50]
    char v8;  // [bp-0xa48]
    unsigned int v9;  // [sp-0x800]
    unsigned int v10;  // [sp-0x7fc]
    char v11;  // [bp-0x7f8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x7f0]
    unsigned long long v13;  // [sp-0x7e8]
    unsigned long long v14;  // [sp-0x7e0]
    char v15;  // [bp-0x5b0]
    char v16;  // [bp-0x5ac]
    unsigned long long v17;  // [sp-0x53c]
    unsigned int v18;  // [sp-0x534]
    char v19;  // [bp-0x530]
    char v20;  // [bp-0x2e8]
    char v21;  // [bp-0x2e4]
    char v22;  // [bp-0x274]
    char v23;  // [bp-0x26c]
    void* v24;  // [sp-0x268], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v25;  // [sp-0x260]
    char v26;  // [bp-0x258], Other Possible Types: unsigned long
    unsigned long long v27;  // [sp-0x250]
    unsigned long long v29;  // rdx

    clap_builder::builder::command::Command::new::h5d88bd2594617906(&v11, uucore::util_name::h412db5e565a079f3(), v29);
    clap_builder::builder::command::Command::version::h6f671c2caef85762(&v19, &v11, "0.0.28Print the last 10 lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags ", 6);
    clap_builder::builder::command::Command::about::hd746a80a95ac5d7a(&v11, &v19, "Print the last 10 lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too.{}", 254);
    uucore::format_usage::h00b69bae12d8ac9c(&v8, "{} [FLAG]... [FILE]...Number of bytes to printdescriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when ", 22);
    clap_builder::builder::command::Command::override_usage::hedaa9b25bb502d09(&v19, &v11, &v8);
    memcpy(&v11, &v19, 700);
    v17 = 549755814016 | *((long long *)&v22);
    v18 = *((int *)&v23);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v19, "bytesinvalid number of bytes: ''", 5);
    clap_builder::builder::arg::Arg::short::h62de770ec793ac31(&v8, &v19, 99);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v19, &v8, "bytesinvalid number of bytes: ''", 5);
    memcpy(&v8, &v19, 584);
    v9 = *((int *)&v20) | 32;
    v10 = *((int *)&v21);
    v0 = "bytesinvalid number of bytes: ''";
    v1 = 5;
    v2 = "linesinvalid number of lines: ";
    v3 = 5;
    v26 = v2;
    v27 = v3;
    v24 = v0;
    v25 = v1;
    clap_builder::builder::arg::Arg::overrides_with_all::h24cb28d1ed777f67(&v19, &v8, &v24);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v8, &v19, "Number of bytes to printdescriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen ", 24);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v19, &v11, &v8);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v11, "followuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 6);
    clap_builder::builder::arg::Arg::short::h62de770ec793ac31(&v8, &v11, 102);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v11, &v8, "followuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 6);
    clap_builder::builder::arg::Arg::default_missing_value::hef2c032b91e893ee(&v8, &v11, v29);
    v24 = 0;
    v25 = 1;
    v26 = 0;
    clap_builder::builder::arg::Arg::num_args::hebda3bde1b5d143c(&v11, &v8, &v24);
    memcpy(&v8, &v11, 584);
    v9 = 128 | *((int *)&v15);
    v10 = *((int *)&v16);
    v11 = "descriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not cha";
    v12 = 10;
    v13 = "name";
    v14 = 4;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h0e5b6d230a5b0394(&v24, &v11);
    clap_builder::builder::arg::Arg::value_parser::h5fbcfa3898c61164(&v11, &v8, &v24);
    clap_builder::builder::arg::Arg::overrides_with::h7ebcc4f9d2fd1296(&v8, &v11, "followuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 6);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v24, &v8, "Print the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size ", 26);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v19, "linesinvalid number of lines: ", 5);
    clap_builder::builder::arg::Arg::short::h62de770ec793ac31(&v8, &v19, 110);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v19, &v8, "linesinvalid number of lines: ", 5);
    memcpy(&v8, &v19, 584);
    v9 = *((int *)&v20) | 32;
    v10 = *((int *)&v21);
    clap_builder::builder::arg::Arg::overrides_with_all::h24cb28d1ed777f67(&v19, &v8, &v0);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v8, &v19, "Number of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterat", 24);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v19, &v11, &v8);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v11, "pidinvalid PID: : ", 3);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v8, &v11, "pidinvalid PID: : ", 3);
    clap_builder::builder::arg::Arg::value_name::he17b8e1066ef177d(&v11, &v8, "PIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has be", 3);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v8, &v11, "With -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been ", 45);
    clap_builder::builder::arg::Arg::overrides_with::h7ebcc4f9d2fd1296(&v24, &v8, "pidinvalid PID: : ", 3);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v19, "quiet: warning: --retry only effective for the initial open\n--retry ignored; --retry is useful only when following\n--pid=PID is not supported on this system\nPID ignored; --pid=PID is useful only when following\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs", 5);
    clap_builder::builder::arg::Arg::short::h62de770ec793ac31(&v8, &v19, 113);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v19, &v8, "quiet: warning: --retry only effective for the initial open\n--retry ignored; --retry is useful only when following\n--pid=PID is not supported on this system\nPID ignored; --pid=PID is useful only when following\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs", 5);
    clap_builder::builder::arg::Arg::visible_alias::hab6a9d98e26ad2dc(&v8, &v19, "silentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case o", 6);
    v4 = "quiet: warning: --retry only effective for the initial open\n--retry ignored; --retry is useful only when following\n--pid=PID is not supported on this system\nPID ignored; --pid=PID is useful only when following\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs";
    v5 = 5;
    v6 = "verbose-presume-input-pipesleep-intervalinvalid number of seconds: '";
    v7 = 7;
    v26 = v6;
    v27 = v7;
    v24 = v4;
    v25 = v5;
    clap_builder::builder::arg::Arg::overrides_with_all::h24cb28d1ed777f67(&v19, &v8, &v24);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v8, &v19, "Never output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rota", 38);
    clap_builder::builder::arg::Arg::action::h0e9b2e10fbfa72d7(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v19, &v11, &v24);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v11, "sleep-intervalinvalid number of seconds: '", 14);
    clap_builder::builder::arg::Arg::short::h62de770ec793ac31(&v8, &v11, 115);
    clap_builder::builder::arg::Arg::value_name::he17b8e1066ef177d(&v11, &v8, "NNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaning", 1);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v8, &v11, "sleep-intervalinvalid number of seconds: '", 14);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v24, &v8, "Number of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningf", 72);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v19, "max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19);
    clap_builder::builder::arg::Arg::value_name::he17b8e1066ef177d(&v8, &v19, "NNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaning", 1);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v19, &v8, "max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v8, &v19, "Reopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningful only when polling (i.e., with --use-polling) and when --follow=nameAl", 254);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v19, &v11, &v8);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v11, "verbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 7);
    clap_builder::builder::arg::Arg::short::h62de770ec793ac31(&v8, &v11, 118);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v11, &v8, "verbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 7);
    clap_builder::builder::arg::Arg::overrides_with_all::h24cb28d1ed777f67(&v8, &v11, &v4);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v11, &v8, "Always output headers giving file namesLine delimiter is NUL, not newlinedisDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipeThe exponent must have at least one ", 39);
    clap_builder::builder::arg::Arg::action::h0e9b2e10fbfa72d7(&v8, &v11, 2);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v11, &v19, &v8);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v19, "zero-terminatedbytesinvalid number of bytes: ''", 15);
    clap_builder::builder::arg::Arg::short::h62de770ec793ac31(&v8, &v19, 122);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v19, &v8, "zero-terminatedbytesinvalid number of bytes: ''", 15);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v8, &v19, "Line delimiter is NUL, not newlinedisDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipeThe exponent must have at least one digitExpected exponent but reached end ", 34);
    clap_builder::builder::arg::Arg::action::h0e9b2e10fbfa72d7(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v19, &v11, &v24);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v11, "use-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 11);
    clap_builder::builder::arg::Arg::alias::h1cbd6366b882bfda(&v8, &v11, "-disable-inotify", 16);
    clap_builder::builder::arg::Arg::alias::h1cbd6366b882bfda(&v11, &v8, "disDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipeThe exponent must have at least one digitExpected exponent but reached end of inputUnexpected end of input. S", 3);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v8, &v11, "use-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 11);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v11, &v8, "Disable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipeThe exponent must have at least one digitExpected exponent but reached end of inputUnexpected end of input. Sign", 49);
    clap_builder::builder::arg::Arg::action::h0e9b2e10fbfa72d7(&v8, &v11, 2);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v11, &v19, &v8);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v19, "retryfollowuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 5);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v8, &v19, "retryfollowuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 5);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v19, &v8, "Keep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipeThe exponent must have at least one digitExpected exponent but reached end of inputUnexpected end of input. Sign without a numberNo exponent allowedEither the wh", 48);
    clap_builder::builder::arg::Arg::overrides_with::h7ebcc4f9d2fd1296(&v8, &v19, "retryfollowuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 5);
    clap_builder::builder::arg::Arg::action::h0e9b2e10fbfa72d7(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v19, &v11, &v24);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v11, "Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 1);
    clap_builder::builder::arg::Arg::short::h62de770ec793ac31(&v8, &v11, 70);
    clap_builder::builder::arg::Arg::help::he18440cbd3c4c084(&v11, &v8, "Same as --follow=name --retrypresume-input-pipeThe exponent must have at least one digitExpected exponent but reached end of inputUnexpected end of input. Sign without a numberNo exponent allowedEither the whole number part or the fraction must be presentN", 29);
    clap_builder::builder::arg::Arg::overrides_with::h7ebcc4f9d2fd1296(&v8, &v11, "Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 1);
    clap_builder::builder::arg::Arg::action::h0e9b2e10fbfa72d7(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v19, "-presume-input-pipesleep-intervalinvalid number of seconds: '", 19);
    clap_builder::builder::arg::Arg::long::h6de81941426a05c0(&v8, &v19, "presume-input-pipeThe exponent must have at least one digitExpected exponent but reached end of inputUnexpected end of input. Sign without a numberNo exponent allowedEither the whole number part or the fraction must be presentNo fraction allowedUnexpected ", 18);
    clap_builder::builder::arg::Arg::alias::h1cbd6366b882bfda(&v19, &v8, "-presume-input-pipesleep-intervalinvalid number of seconds: '", 19);
    memcpy(&v8, &v19, 584);
    v9 = *((int *)&v20) | 4;
    v10 = *((int *)&v21);
    clap_builder::builder::arg::Arg::action::h0e9b2e10fbfa72d7(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(&v19, &v11, &v24);
    clap_builder::builder::arg::Arg::new::hc2dc8ee4d6a6c3dc(&v11, "filesquiet: warning: --retry only effective for the initial open\n--retry ignored; --retry is useful only when following\n--pid=PID is not supported on this system\nPID ignored; --pid=PID is useful only when following\nfollowing standard input indefinitely is ", 5);
    clap_builder::builder::arg::Arg::action::h0e9b2e10fbfa72d7(&v8, &v11, 1);
    clap_builder::builder::arg::Arg::num_args::h14af06042e3f8309(&v11, &v8);
    v24 = 2;
    clap_builder::builder::arg::Arg::value_parser::h19222ffe9278c3d5(&v8, &v11, &v24);
    clap_builder::builder::arg::Arg::value_hint::h25dde313fbe89be2(&v11, &v8, 3);
    clap_builder::builder::command::Command::arg::haa22f49d1d1e1277(a0, &v19, &v11);
    return a0;
}
