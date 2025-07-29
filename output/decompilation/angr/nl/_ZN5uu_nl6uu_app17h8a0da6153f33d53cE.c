long long uu_nl::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned long v4;  // [bp-0x7ec]
    unsigned int v5;  // [bp-0x7e4]
    char v6;  // [bp-0x7e0]
    unsigned int v7;  // [bp-0x568]
    unsigned int v8;  // [bp-0x564]
    char v9;  // [bp-0x560]
    unsigned int v10;  // [bp-0x2e8]
    char v11;  // [bp-0x2e4]
    unsigned long long v12;  // [bp-0x2a4]
    unsigned int v13;  // [bp-0x29c]
    char v14;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x290]
    unsigned long long v16;  // [bp-0x288]
    unsigned long long v17;  // [bp-0x280]
    unsigned long long v18;  // [bp-0x278]
    unsigned long long v19;  // [bp-0x270]
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rsi

    v3.new(uucore::util_name(), v22);
    uucore::mods::locale::get_message(&v6, "nl-about", 8);
    v9.about(&v3, &v6);
    v3.version(&v9, "(uutils coreutils) 0.1.0nl-after-helpnl-help-helpbody-numberingnl-help-body-numberingSTYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-f", 24);
    uucore::mods::locale::get_message(&v0, "nl-usage", 8);
    uucore::format_usage(&v6, v1, v2);
    v9.override_usage(&v3, &v6);
    uucore::mods::locale::get_message(&v6, "nl-after-helpnl-help-helpbody-numberingnl-help-body-numberingSTYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-form", 13);
    v3.after_help(&v9, &v6);
    memcpy(&v9, &v3, 700);
    v12 = 2252349570023552 | v4;
    v13 = v5;
    v3.new("helpt", 4);
    v6.long(&v3, "helpt", 4);
    uucore::mods::locale::get_message(&v14, "nl-help-helpbody-numberingnl-help-body-numberingSTYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-re", 12);
    v3.help(&v6, &v14);
    v6.action(&v3, 5);
    v3.arg(&v9, &v6);
    v9.new("fileEDOMmode{", 4);
    memcpy(&v6, &v9, 632);
    v7 = v10 | 4;
    v8 = *((int *)&v11);
    v9.action(&v6, 1);
    v6.value_hint(&v9, 3);
    v9.arg(&v3, &v6);
    v3.new("body-numberingnl-help-body-numberingSTYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-hel", 14);
    v6.short(&v3, 98);
    v3.long(&v6, "body-numberingnl-help-body-numberingSTYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-hel", 14);
    uucore::mods::locale::get_message(&v14, "nl-help-body-numberingSTYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbern", 22);
    v6.help(&v3, &v14);
    v14.value_name(&v6, "STYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separato", 5);
    v3.arg(&v9, &v14);
    v9.new("section-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRI", 17);
    v6.short(&v9, 100);
    v9.long(&v6, "section-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRI", 17);
    uucore::mods::locale::get_message(&v14, "nl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-n", 25);
    v6.help(&v9, &v14);
    v14.value_name(&v6, "CCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-lin", 2);
    v9.arg(&v3, &v14);
    v3.new("footer-numbering", 16);
    v6.short(&v3, 102);
    v3.long(&v6, "footer-numbering", 16);
    uucore::mods::locale::get_message(&v14, "nl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-", 24);
    v6.help(&v3, &v14);
    v14.value_name(&v6, "STYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separato", 5);
    v3.arg(&v9, &v14);
    v9.new("header-numbering", 16);
    v6.short(&v9, 104);
    v9.long(&v6, "header-numbering", 16);
    uucore::mods::locale::get_message(&v14, "nl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-hel", 24);
    v6.help(&v9, &v14);
    v14.value_name(&v6, "STYLEsection-delimiternl-help-section-delimiterCCnl-help-footer-numberingnl-help-header-numberingline-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separato", 5);
    v9.arg(&v3, &v14);
    v3.new("line-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rus", 14);
    v6.short(&v3, 105);
    v3.long(&v6, "line-incrementnl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rus", 14);
    uucore::mods::locale::get_message(&v14, "nl-help-line-incrementNUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains", 22);
    v6.help(&v3, &v14);
    v3.value_name(&v6, "NUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x8", 6);
    v14.value_parser(v23);
    v6.value_parser(&v3, &v14);
    v3.arg(&v9, &v6);
    v9.new("join-blank-lines", 16);
    v6.short(&v9, 108);
    v9.long(&v6, "join-blank-lines", 16);
    uucore::mods::locale::get_message(&v14, "nl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-u", 24);
    v6.help(&v9, &v14);
    v9.value_name(&v6, "NUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x8", 6);
    v14.value_parser();
    v6.value_parser(&v9, &v14);
    v9.arg(&v3, &v6);
    v3.new("number-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rus", 13);
    v6.short(&v3, 110);
    v3.long(&v6, "number-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rus", 13);
    uucore::mods::locale::get_message(&v14, "nl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust", 21);
    v6.help(&v3, &v14);
    v3.value_name(&v6, "FORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/ite", 6);
    v14 = "lnrnrzinternal error: entered unreachable code: Should have been caught by clap-";
    v15 = 2;
    v16 = "rnrzinternal error: entered unreachable code: Should have been caught by clap-";
    v17 = 2;
    v18 = "rzinternal error: entered unreachable code: Should have been caught by clap-";
    v19 = 2;
    v6.value_parser(&v3, &v14);
    v3.arg(&v9, &v6);
    v9.new("no-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/trai", 11);
    v6.short(&v9, 112);
    v9.long(&v6, "no-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/trai", 11);
    uucore::mods::locale::get_message(&v14, "nl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator", 19);
    v6.help(&v9, &v14);
    v14.action(&v6, 3);
    v9.arg(&v3, &v14);
    v3.new("number-separator", 16);
    v6.short(&v3, 115);
    v3.long(&v6, "number-separator", 16);
    uucore::mods::locale::get_message(&v14, "nl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 24);
    v6.help(&v3, &v14);
    v14.value_name(&v6, "STRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v3.arg(&v9, &v14);
    v9.new("starting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 20);
    v6.short(&v9, 118);
    v9.long(&v6, "starting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 20);
    uucore::mods::locale::get_message(&v14, "nl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 28);
    v6.help(&v9, &v14);
    v9.value_name(&v6, "NUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x8", 6);
    v14.value_parser(v23);
    v6.value_parser(&v9, &v14);
    v9.arg(&v3, &v6);
    v3.new("number-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 12);
    v6.short(&v3, 119);
    v3.long(&v6, "number-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 12);
    uucore::mods::locale::get_message(&v14, "nl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 20);
    v6.help(&v3, &v14);
    v3.value_name(&v6, "NUMBERnl-help-join-blank-linesnumber-formatnl-help-number-formatFORMATno-renumbernl-help-no-renumbernl-help-number-separatorSTRINGstarting-line-numbernl-help-starting-line-numbernumber-widthnl-help-number-width/root/.rustup/toolchains/nightly-2025-01-01-x8", 6);
    v14 = 4;
    v15 = ::0x5968c0::alloc::boxed::Box<T>::new();
    v16 = &g_724278;
    v6.value_parser(&v3, &v14);
    a0.arg(&v9, &v6);
    ::0x595020::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
