long long uu_more::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    char v3;  // [bp-0xaa0]
    unsigned int v4;  // [bp-0x828]
    unsigned int v5;  // [bp-0x824]
    char v6;  // [bp-0x820]
    unsigned int v7;  // [bp-0x5a8]
    char v8;  // [bp-0x5a4]
    unsigned long v9;  // [bp-0x564]
    unsigned int v10;  // [bp-0x55c]
    char v11;  // [bp-0x558]
    unsigned int v12;  // [bp-0x2e0]
    unsigned int v13;  // [bp-0x2dc]
    unsigned long long v14;  // [bp-0x29c]
    unsigned int v15;  // [bp-0x294]
    char v16;  // [bp-0x290], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x288]
    unsigned long long v18;  // [bp-0x280]
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rsi

    v11.new(uucore::util_name(), v21);
    uucore::mods::locale::get_message(&v3, "more-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu", 10);
    v6.about(&v11, &v3);
    uucore::mods::locale::get_message(&v0, "more-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/", 10);
    uucore::format_usage(&v3, v1, v2);
    v11.override_usage(&v6, &v3);
    v6.version(&v11, "(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 24);
    memcpy(&v11, &v6, 700);
    v14 = 549755814016 | v9;
    v15 = v10;
    v6.new("silentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-f", 6);
    v3.short(&v6, 100);
    v6.long(&v3, "silentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-f", 6);
    v3.action(&v6, 2);
    uucore::mods::locale::get_message(&v6, "more-help-silentClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v16.help(&v3, &v6);
    v6.arg(&v11, &v16);
    v11.new("logicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-li", 7);
    v3.short(&v11, 108);
    v11.long(&v3, "logicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-li", 7);
    v3.action(&v11, 2);
    uucore::mods::locale::get_message(&v11, "more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 17);
    v16.help(&v3, &v11);
    v11.arg(&v6, &v16);
    v6.new("exit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-", 11);
    v3.short(&v6, 101);
    v6.long(&v3, "exit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-", 11);
    v3.action(&v6, 2);
    uucore::mods::locale::get_message(&v6, "more-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 21);
    v16.help(&v3, &v6);
    v6.arg(&v11, &v16);
    v11.new("no-pause", 8);
    v3.short(&v11, 102);
    v11.long(&v3, "no-pause", 8);
    v3.action(&v11, 2);
    uucore::mods::locale::get_message(&v11, "more-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 18);
    v16.help(&v3, &v11);
    v11.arg(&v6, &v16);
    v6.new("print-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patter", 10);
    v3.short(&v6, 112);
    v6.long(&v3, "print-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patter", 10);
    v3.action(&v6, 2);
    uucore::mods::locale::get_message(&v6, "more-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 20);
    v16.help(&v3, &v6);
    v6.arg(&v11, &v16);
    v11.new("clean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore", 11);
    v3.short(&v11, 99);
    v11.long(&v3, "clean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore", 11);
    v3.action(&v11, 2);
    uucore::mods::locale::get_message(&v11, "more-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 21);
    v16.help(&v3, &v11);
    v11.arg(&v6, &v16);
    v6.new("squeezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files", 7);
    v3.short(&v6, 115);
    v6.long(&v3, "squeezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files", 7);
    v3.action(&v6, 2);
    uucore::mods::locale::get_message(&v6, "more-help-squeezeplainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 17);
    v16.help(&v3, &v6);
    v6.arg(&v11, &v16);
    v11.new("plainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 5);
    v3.short(&v11, 117);
    v11.long(&v3, "plainmore-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 5);
    v3.action(&v11, 2);
    memcpy(&v11, &v3, 632);
    v12 = v4 | 4;
    v13 = v5;
    uucore::mods::locale::get_message(&v16, "more-help-plainmore-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 15);
    v3.help(&v11, &v16);
    v11.arg(&v6, &v3);
    v6.new("linesnumberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plai", 5);
    v3.short(&v6, 110);
    v6.long(&v3, "linesnumberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plai", 5);
    v3.value_name(&v6, "numberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore", 6);
    v6.num_args(&v3);
    v3.value_parser(v22);
    v16.range(&v3, 0);
    v3.value_parser(&v6, &v16);
    uucore::mods::locale::get_message(&v6, "more-help-linesmore-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 15);
    v16.help(&v3, &v6);
    v6.arg(&v11, &v16);
    v11.new("numberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore", 6);
    v3.long(&v11, "numberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore", 6);
    v11.num_args(&v3);
    v3.value_parser(v22);
    v16.range(&v3, 0);
    v3.value_parser(&v11, &v16);
    uucore::mods::locale::get_message(&v11, "more-help-number", 16);
    v16.help(&v3, &v11);
    v11.arg(&v6, &v16);
    v6.new("from-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-", 9);
    v3.short(&v6, 70);
    v6.long(&v3, "from-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-", 9);
    v3.num_args(&v6);
    v6.value_name(&v3, "numberfrom-linepatternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore", 6);
    v16 = 4;
    v17 = ::0x4bbaf0::alloc::boxed::Box<T>::new();
    v18 = &g_5bd1c8;
    v3.value_parser(&v6, &v16);
    uucore::mods::locale::get_message(&v6, "more-help-from-linemore-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 19);
    v16.help(&v3, &v6);
    v6.arg(&v11, &v16);
    v11.new("patternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore", 7);
    v3.short(&v11, 80);
    v11.long(&v3, "patternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore", 7);
    memcpy(&v3, &v11, 632);
    v4 = v12 & 4294967262 | 32;
    v5 = v13;
    v11.value_name(&v3, "patternsilentlogicalexit-on-eofprint-overclean-printsqueezemore-aboutmore-usage(uutils coreutils) 0.1.0more-help-logicalmore-help-exit-on-eofmore-help-no-pausemore-help-print-overmore-help-clean-printmore-help-squeezeplainmore-help-plainmore-help-linesmore", 7);
    uucore::mods::locale::get_message(&v16, "more-help-patternfilesmore-help-files\rsrc/uu/more/src/more.rs ()", 17);
    v3.help(&v11, &v16);
    v11.arg(&v6, &v3);
    v6.new("filesmore-help-files\rsrc/uu/more/src/more.rs ()", 5);
    memcpy(&v3, &v6, 632);
    v4 = v7 & 4294967294;
    v5 = *((int *)&v8);
    v6.action(&v3, 1);
    uucore::mods::locale::get_message(&v16, "more-help-files\rsrc/uu/more/src/more.rs ()", 15);
    v3.help(&v6, &v16);
    v6.value_hint(&v3, 3);
    a0.arg(&v11, &v6);
    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
