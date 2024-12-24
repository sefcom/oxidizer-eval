long long uu_numfmt::uu_app::h994e2804e892de3a(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa40]
    unsigned long long v2;  // [sp-0xa38]
    unsigned long long v3;  // [sp-0xa30]
    unsigned long long v4;  // [sp-0xa28]
    unsigned long long v5;  // [sp-0xa20]
    unsigned long long v6;  // [sp-0xa18]
    unsigned long long v7;  // [sp-0xa10]
    unsigned long long v8;  // [sp-0xa08]
    unsigned long long v9;  // [sp-0xa00]
    unsigned int v10;  // [sp-0x800]
    unsigned int v11;  // [sp-0x7fc]
    char v12;  // [bp-0x7f8]
    unsigned int v13;  // [sp-0x5b0]
    unsigned int v14;  // [sp-0x5ac]
    unsigned int v15;  // [sp-0x53c]
    unsigned long long v16;  // [sp-0x538]
    char v17;  // [bp-0x530]
    char v18;  // [bp-0x2e8]
    char v19;  // [bp-0x2e4]
    char v20;  // [bp-0x274]
    char v21;  // [bp-0x270]
    char v22;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x260]
    unsigned long long v24;  // [sp-0x258]
    unsigned long long v25;  // [sp-0x250]
    unsigned long long v26;  // [sp-0x248]
    unsigned long long v27;  // [sp-0x240]
    unsigned long long v28;  // [sp-0x238]
    unsigned long long v29;  // [sp-0x230]
    unsigned int v30;  // [sp-0x20]
    unsigned int v31;  // [sp-0x1c]
    unsigned long long v33;  // rdx

    clap_builder::builder::command::Command::new::h226d3bdb9219e430(&v17, uucore::util_name::h412db5e565a079f3(), v33);
    clap_builder::builder::command::Command::version::hb656769470c33d0b(&v12, &v17, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h1358ed616130dfeb(&v17, &v12, "Convert numbers from/to human-readable strings", 46);
    clap_builder::builder::command::Command::after_help::h8cd6b0c4586f7193(&v12, &v17, "UNIT options:\n\n- none: no auto-scaling is done; suffixes will trigger an error\n- auto: accept optional single/two letter suffix:\n\n    1K = 1000, 1Ki = 1024, 1M = 1000000, 1Mi = 1048576,\n\n- si: accept optional single letter suffix:\n\n    1K = 1000, 1M = 1000000, ...\n\n- iec: accept optional single letter suffix:\n\n    1K = 1024, 1M = 1048576, ...\n\n- iec-i: accept optional two-letter suffix:\n\n    1Ki = 1024, 1Mi = 1048576, ...\n\n- FIELDS supports cut(1) style field ranges:\n\n    N    N'th field, counted from 1\n    N-   from N'th field, to end of line\n    N-M  from N'th to M'th field (inclusive)\n    -M   from first to M'th field (inclusive)\n    -    all fields\n\nMultiple fields/ranges can be separated with commas\n\nFORMAT must be suitable for printing one floating-point argument %f.\nOptional quote (%'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional prec", 1082);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [NUMBER]...", 26);
    clap_builder::builder::command::Command::override_usage::hce0077a16251e5b2(&v17, &v12, &v0);
    memcpy(&v12, &v17, 700);
    v15 = 132 | *((int *)&v20);
    v16 = 128 | *((long long *)&v21);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v17, "delimiter", 9);
    clap_builder::builder::arg::Arg::short::hdb890b1ff84ce214(&v0, &v17);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v17, &v0, "delimiter", 9);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v17, "X", 1);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v22, &v0, "use X instead of whitespace for field delimiter", 47);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v17, &v12, &v22);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v12, "field", 5);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v12, "field", 5);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v12, &v0, "replace the numbers in these input fields; see FIELDS below", 59);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v12, "FIELDS", 6);
    memcpy(&v12, &v0, 584);
    v13 = v10 | 32;
    v14 = v11;
    clap_builder::builder::arg::Arg::default_value::hf8099220f30e1831(&v0, &v12, "1", 1);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v12, &v17, &v0);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v17, "format", 6);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v17, "format", 6);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v17, &v0, "use printf style floating-point FORMAT; see FORMAT below for details", 68);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v17, "FORMAT", 6);
    memcpy(&v22, &v0, 584);
    v30 = v10 | 32;
    v31 = v11;
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v17, &v12, &v22);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v12, "fromAuto", 4);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v12, "fromAuto", 4);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v12, &v0, "auto-scale input numbers to UNITs; see UNIT below", 49);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v12, "UNIT", 4);
    clap_builder::builder::arg::Arg::default_value::hf8099220f30e1831(&v22, &v0, "none", 4);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v12, &v17, &v22);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v17, "from-unit", 9);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v17, "from-unit", 9);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v17, &v0, "specify the input unit size", 27);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v17, "N", 1);
    clap_builder::builder::arg::Arg::default_value::hf8099220f30e1831(&v22, &v0, "1", 1);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v17, &v12, &v22);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v12, "to", 2);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v12, "to", 2);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v12, &v0, "auto-scale output numbers to UNITs; see UNIT below", 50);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v12, "UNIT", 4);
    clap_builder::builder::arg::Arg::default_value::hf8099220f30e1831(&v22, &v0, "none", 4);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v12, &v17, &v22);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v17, "to-unit", 7);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v17, "to-unit", 7);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v17, &v0, "the output unit size", 20);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v17, "N", 1);
    clap_builder::builder::arg::Arg::default_value::hf8099220f30e1831(&v22, &v0, "1", 1);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v17, &v12, &v22);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v12, "padding", 7);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v12, "padding", 7);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v12, &v0, "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is found", 199);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v12, "N", 1);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v12, &v17, &v0);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v17, "header", 6);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v17, "header", 6);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v17, &v0, "print (without converting) the first N header lines; N defaults to 1 if not specified", 85);
    clap_builder::builder::arg::Arg::num_args::heb8fdbe8ad3c1606(&v0, &v17);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v17, &v0, "N", 1);
    clap_builder::builder::arg::Arg::default_missing_value::h7192373fec35af86(&v0, &v17, v33);
    memcpy(&v22, &v0, 584);
    v30 = 0x400 | v10;
    v31 = v11;
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v17, &v12, &v22);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v12, "round", 5);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v12, "round", 5);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v12, &v0, "use METHOD for rounding when scaling", 36);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v12, "METHOD", 6);
    clap_builder::builder::arg::Arg::default_value::hf8099220f30e1831(&v12, &v0, "from-zero", 9);
    v0 = "up";
    v1 = 2;
    v2 = "down";
    v3 = 4;
    v4 = "from-zero";
    v5 = 9;
    v6 = "towards-zero";
    v7 = 12;
    v8 = "nearestinternal error: entered unreachable code: Should be restricted by clap";
    v9 = 7;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h105364c6f5909ccc(&v22, &v0);
    clap_builder::builder::arg::Arg::value_parser::h040178d2cf1b9664(&v0, &v12, &v22);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v12, &v17, &v0);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v17, "suffix", 6);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v17, "suffix", 6);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v17, &v0, "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIX", 89);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v17, "SUFFIX", 6);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v17, &v12, &v0);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v12, "invalid", 7);
    clap_builder::builder::arg::Arg::long::hfd0a5d54706067e6(&v0, &v12, "invalid", 7);
    clap_builder::builder::arg::Arg::help::h35ac563094367e93(&v12, &v0, "set the failure mode for invalid input", 38);
    clap_builder::builder::arg::Arg::default_value::hf8099220f30e1831(&v0, &v12, "abort", 5);
    v22 = "abort";
    v23 = 5;
    v24 = "fail";
    v25 = 4;
    v26 = &g_415980;
    v27 = 4;
    v28 = "ignore";
    v29 = 6;
    clap_builder::builder::arg::Arg::value_parser::h96426e915aa2bb11(&v12, &v0, &v22);
    clap_builder::builder::arg::Arg::value_name::h958b0581ec28fcb3(&v0, &v12, "INVALID", 7);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(&v12, &v17, &v0);
    clap_builder::builder::arg::Arg::new::h6d98b545b4811146(&v17, "NUMBER", 6);
    memcpy(&v0, &v17, 584);
    v10 = *((int *)&v18) | 4;
    v11 = *((int *)&v19);
    clap_builder::builder::arg::Arg::action::ha68bbc370f365336(&v17, &v0);
    clap_builder::builder::command::Command::arg::h5a38154a98744ea3(a0, &v12, &v17);
    return a0;
}
