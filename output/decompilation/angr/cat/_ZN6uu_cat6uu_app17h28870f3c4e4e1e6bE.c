long long uu_cat::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned int v4;  // [bp-0x830]
    char v5;  // [bp-0x82c]
    unsigned long v6;  // [bp-0x7ec]
    unsigned int v7;  // [bp-0x7e4]
    char v8;  // [bp-0x7e0]
    unsigned long long v9;  // [bp-0x524]
    unsigned int v10;  // [bp-0x51c]
    char v11;  // [bp-0x518]
    unsigned int v12;  // [bp-0x2a0]
    unsigned int v13;  // [bp-0x29c]
    char v14;  // [bp-0x298]
    unsigned long long v17;  // rdx

    v8.new(uucore::util_name(), v17);
    v3.version(&v8, "(uutils coreutils) 0.1.0cat-usagecat-aboutequivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ", 24);
    uucore::mods::locale::get_message(&v0, "cat-usagecat-aboutequivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, excep", 9);
    uucore::format_usage(&v11, v1, v2);
    v8.override_usage(&v3, &v11);
    uucore::mods::locale::get_message(&v11, "cat-aboutequivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF ", 9);
    v3.about(&v8, &v11);
    memcpy(&v8, &v3, 700);
    v9 = 584115552392 | v6;
    v10 = v7;
    v3.new(_ZN6uu_cat7options4FILE17h9fa7873cc60016b3E, g_573088);
    memcpy(&v11, &v3, 632);
    v12 = v4 | 4;
    v13 = *((int *)&v5);
    v3.action(&v11, 1);
    v11.value_hint(&v3, 3);
    v3.arg(&v8, &v11);
    v8.new(_ZN6uu_cat7options8SHOW_ALL17h556bc57b3b3c2841E, g_573098);
    v11.short(&v8, 65);
    v8.long(&v11, _ZN6uu_cat7options8SHOW_ALL17h556bc57b3b3c2841E, g_573098);
    v11.help(&v8, "equivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and ", 18);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new(_ZN6uu_cat7options15NUMBER_NONBLANK17hbc703a5177f06442E, g_5730a8);
    v11.short(&v3, 98);
    v3.long(&v11, _ZN6uu_cat7options15NUMBER_NONBLANK17hbc703a5177f06442E, g_5730a8);
    v11.help(&v3, "number nonempty output lines, overrides -nequivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored):", 42);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new(_ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h502c20c93b9dd6c2E, g_5730b8);
    v11.short(&v8, 101);
    v8.help(&v11, "equivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n-$\n^M\t^I^?unknown filetype: ", 17);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new(_ZN6uu_cat7options9SHOW_ENDS17he1e587769e3cf424E, g_5730c8);
    v11.short(&v3, 69);
    v3.long(&v11, _ZN6uu_cat7options9SHOW_ENDS17he1e587769e3cf424E, g_5730c8);
    v11.help(&v3, "display $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n-$\n^M\t^I^?unknown filetype: ", 29);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new(_ZN6uu_cat7options6NUMBER17h0ff9c6ee25224eb0E, g_5730d8);
    v11.short(&v8, 110);
    v8.long(&v11, _ZN6uu_cat7options6NUMBER17h0ff9c6ee25224eb0E, g_5730d8);
    v11.help(&v8, "number all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n-$\n^M\t^I^?unknown filetype: ", 23);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new(_ZN6uu_cat7options13SQUEEZE_BLANK17h917dafb2ea09631fE, g_5730e8);
    v11.short(&v3, 115);
    v3.long(&v11, _ZN6uu_cat7options13SQUEEZE_BLANK17h917dafb2ea09631fE, g_5730e8);
    v11.help(&v3, "suppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n-$\n^M\t^I^?unknown filetype: ", 36);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new(_ZN6uu_cat7options21SHOW_NONPRINTING_TABS17h89057c668b1dc6c6E, g_5730f8);
    v11.short(&v8, 116);
    v8.help(&v11, "equivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n-$\n^M\t^I^?unknown filetype: ", 17);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new(_ZN6uu_cat7options9SHOW_TABS17he94a96780895e07fE, g_573108);
    v11.short(&v3, 84);
    v3.long(&v11, _ZN6uu_cat7options9SHOW_TABS17he94a96780895e07fE, g_573108);
    v11.help(&v3, "display TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n-$\n^M\t^I^?unknown filetype: ", 28);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new(_ZN6uu_cat7options16SHOW_NONPRINTING17h3a35dbfaa83ca8c5E, g_573118);
    v11.short(&v8, 118);
    v8.long(&v11, _ZN6uu_cat7options16SHOW_NONPRINTING17h3a35dbfaa83ca8c5E, g_573118);
    v11.help(&v8, "use ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n-$\n^M\t^I^?unknown filetype: ", 54);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new(_ZN6uu_cat7options9IGNORED_U17h01d4a88ea93eb662E, g_573128);
    v11.short(&v3, 117);
    v3.help(&v11, "(ignored): \r\n-$\n^M\t^I^?unknown filetype: ", 9);
    v11.action(&v3, 2);
    a0.arg(&v8, &v11);
    ::0x49b7a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
