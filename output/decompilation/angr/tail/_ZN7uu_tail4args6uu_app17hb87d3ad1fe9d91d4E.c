long long uu_tail::args::uu_app::hb87d3ad1fe9d91d4(unsigned long long a0)
{
    unsigned long v0;  // [sp-0xa88]
    unsigned long long v1;  // [sp-0xa80]
    unsigned long long v2;  // [sp-0xa78]
    unsigned long long v3;  // [sp-0xa70]
    unsigned long v4;  // [sp-0xa68]
    unsigned long long v5;  // [sp-0xa60]
    unsigned long long v6;  // [sp-0xa58]
    unsigned long long v7;  // [sp-0xa50]
    char v8;  // [bp-0xa48]
    unsigned int v9;  // [sp-0x800]
    unsigned int v10;  // [sp-0x7fc]
    char v11;  // [bp-0x7f8], Other Possible Types: unsigned long
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
    void* v24;  // [sp-0x268], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v25;  // [sp-0x260]
    char v26;  // [bp-0x258], Other Possible Types: unsigned long
    unsigned long long v27;  // [sp-0x250]
    unsigned long long v29;  // rdx

    clap_builder::builder::command::Command::new::hb4f8a8e57c4fa669(&v11, uucore::util_name::h60d842bf27b05e82(), v29);
    clap_builder::builder::command::Command::version::h26f608ccb67720a9(&v19, &v11, "0.0.28Print the last 10 lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags ", 6);
    clap_builder::builder::command::Command::about::h47256b0c9b865ff6(&v11, &v19, "Print the last 10 lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too.{}", 254);
    uucore::format_usage::h76fcb2d15fbabc58(&v8, "{} [FLAG]... [FILE]...Number of bytes to printdescriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when ", 22);
    clap_builder::builder::command::Command::override_usage::h5f1fe1f379890508(&v19, &v11, &v8);
    memcpy(&v11, &v19, 700);
    v17 = 549755814016 | *((long long *)&v22);
    v18 = *((int *)&v23);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v19, "bytesinvalid number of bytes: ''", 5);
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&v8, &v19, 99);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v19, &v8, "bytesinvalid number of bytes: ''", 5);
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
    clap_builder::builder::arg::Arg::overrides_with_all::h5e05e5f2ef80c953(&v19, &v8, &v24);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v8, &v19, "Number of bytes to printdescriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen ", 24);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v19, &v11, &v8);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v11, "followsleep-intervalinvalid number of seconds: '", 6);
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&v8, &v11, 102);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v11, &v8, "followsleep-intervalinvalid number of seconds: '", 6);
    clap_builder::builder::arg::Arg::default_missing_value::h7684e6667c2ff356(&v8, &v11);
    v24 = 0;
    v25 = 1;
    v26 = 0;
    clap_builder::builder::arg::Arg::num_args::h0d64d401db275127(&v11, &v8, &v24);
    memcpy(&v8, &v11, 584);
    v9 = 128 | *((int *)&v15);
    v10 = *((int *)&v16);
    v11 = "descriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not cha";
    v12 = 10;
    v13 = "name";
    v14 = 4;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hf4f9a2f4632d3c1b(&v24, &v11);
    clap_builder::builder::arg::Arg::value_parser::h224af3b83e77494d(&v11, &v8, &v24);
    clap_builder::builder::arg::Arg::overrides_with::h8c9ddc513e22876c(&v8, &v11, "followsleep-intervalinvalid number of seconds: '", 6);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v24, &v8, "Print the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size ", 26);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v19, "linesinvalid number of lines: ", 5);
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&v8, &v19, 110);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v19, &v8, "linesinvalid number of lines: ", 5);
    memcpy(&v8, &v19, 584);
    v9 = *((int *)&v20) | 32;
    v10 = *((int *)&v21);
    clap_builder::builder::arg::Arg::overrides_with_all::h5e05e5f2ef80c953(&v19, &v8, &v0);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v8, &v19, "Number of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterat", 24);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v19, &v11, &v8);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v11, "pidinvalid PID: : ", 3);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v8, &v11, "pidinvalid PID: : ", 3);
    clap_builder::builder::arg::Arg::value_name::habf0f1570117aa20(&v11, &v8, "PIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has be", 3);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v8, &v11, "With -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been ", 45);
    clap_builder::builder::arg::Arg::overrides_with::h8c9ddc513e22876c(&v24, &v8, "pidinvalid PID: : ", 3);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v19, "quiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs", 5);
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&v8, &v19, 113);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v19, &v8, "quiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs", 5);
    clap_builder::builder::arg::Arg::visible_alias::h39dce69ff559fd1e(&v8, &v19, "silentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case o", 6);
    v4 = "quiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs";
    v5 = 5;
    v6 = "verbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard i";
    v7 = 7;
    v26 = v6;
    v27 = v7;
    v24 = v4;
    v25 = v5;
    clap_builder::builder::arg::Arg::overrides_with_all::h5e05e5f2ef80c953(&v19, &v8, &v24);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v8, &v19, "Never output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rota", 38);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v19, &v11, &v24);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v11, "sleep-intervalinvalid number of seconds: '", 14);
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&v8, &v11, 115);
    clap_builder::builder::arg::Arg::value_name::habf0f1570117aa20(&v11, &v8, "NNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaning", 1);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v8, &v11, "sleep-intervalinvalid number of seconds: '", 14);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v24, &v8, "Number of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningf", 72);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v19, "max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19);
    clap_builder::builder::arg::Arg::value_name::habf0f1570117aa20(&v8, &v19, "NNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaning", 1);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v19, &v8, "max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v8, &v19, "Reopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningful only when polling (i.e., with --use-polling) and when --follow=nameAl", 254);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v19, &v11, &v8);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v11, "verbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard i", 7);
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&v8, &v11, 118);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v11, &v8, "verbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard i", 7);
    clap_builder::builder::arg::Arg::overrides_with_all::h5e05e5f2ef80c953(&v8, &v11, &v4);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v11, &v8, "Always output headers giving file namesLine delimiter is NUL, not newlinedisDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 39);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&v8, &v11, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v11, &v19, &v8);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v19, "zero-terminatedcannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNfollowsleep-intervalinvalid number of seconds: '", 15);
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&v8, &v19, 122);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v19, &v8, "zero-terminatedcannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNfollowsleep-intervalinvalid number of seconds: '", 15);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v8, &v19, "Line delimiter is NUL, not newlinedisDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 34);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v19, &v11, &v24);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v11, "use-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing", 11);
    clap_builder::builder::arg::Arg::alias::hee9cce287c6b43be(&v8, &v11, "-disable-inotify", 16);
    clap_builder::builder::arg::Arg::alias::hee9cce287c6b43be(&v11, &v8, "disDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 3);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v8, &v11, "use-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing", 11);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v11, &v8, "Disable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 49);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&v8, &v11, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v11, &v19, &v8);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v19, "retryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfoll", 5);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v8, &v19, "retryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfoll", 5);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v19, &v8, "Keep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 48);
    clap_builder::builder::arg::Arg::overrides_with::h8c9ddc513e22876c(&v8, &v19, "retryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfoll", 5);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v19, &v11, &v24);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v11, "Fretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfol", 1);
    clap_builder::builder::arg::Arg::short::h5bdbaf93e1055f01(&v8, &v11, 70);
    clap_builder::builder::arg::Arg::help::h8f25b665a7484774(&v11, &v8, "Same as --follow=name --retrypresume-input-pipecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 29);
    clap_builder::builder::arg::Arg::overrides_with::h8c9ddc513e22876c(&v8, &v11, "Fretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfol", 1);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v19, "-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input in", 19);
    clap_builder::builder::arg::Arg::long::h062f1a6b309cc6e4(&v8, &v19, "presume-input-pipecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 18);
    clap_builder::builder::arg::Arg::alias::hee9cce287c6b43be(&v19, &v8, "-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input in", 19);
    memcpy(&v8, &v19, 584);
    v9 = *((int *)&v20) | 4;
    v10 = *((int *)&v21);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&v24, &v8, 2);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(&v19, &v11, &v24);
    clap_builder::builder::arg::Arg::new::h261a72a7bd5942db(&v11, "filesFretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this syste", 5);
    clap_builder::builder::arg::Arg::action::h2457b6d985f4c100(&v8, &v11, 1);
    clap_builder::builder::arg::Arg::num_args::hf081798b6ac4c38e(&v11, &v8);
    v24 = 2;
    clap_builder::builder::arg::Arg::value_parser::ha29d95b32fd76a47(&v8, &v11, &v24);
    clap_builder::builder::arg::Arg::value_hint::h7ffd75f863ae3b2d(&v11, &v8, 3);
    clap_builder::builder::command::Command::arg::hafa65e12d3ca466f(a0, &v19, &v11);
    return a0;
}
