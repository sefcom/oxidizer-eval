long long uu_wc::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad8]
    unsigned long long v1;  // [bp-0xad0]
    unsigned long long v2;  // [bp-0xac8]
    unsigned long long v3;  // [bp-0xac0]
    unsigned long long v4;  // [bp-0xab8]
    unsigned long long v5;  // [bp-0xab0]
    char v6;  // [bp-0xaa8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xaa0]
    unsigned long long v8;  // [bp-0xa98]
    unsigned long long v9;  // [bp-0xa90]
    unsigned long long v10;  // [bp-0xa88]
    unsigned long long v11;  // [bp-0xa80]
    unsigned long long v12;  // [bp-0xa78]
    unsigned long long v13;  // [bp-0xa70]
    unsigned int v14;  // [bp-0x830]
    unsigned int v15;  // [bp-0x82c]
    unsigned long long v16;  // [bp-0x7ec]
    unsigned int v17;  // [bp-0x7e4]
    char v18;  // [bp-0x7e0]
    unsigned int v19;  // [bp-0x568]
    unsigned int v20;  // [bp-0x564]
    char v21;  // [bp-0x560]
    unsigned long v22;  // [bp-0x2a4]
    unsigned int v23;  // [bp-0x29c]
    char v24;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x290]
    unsigned long long v26;  // [bp-0x288]
    unsigned long long v29;  // rdx

    v6.new(uucore::util_name(), v29);
    v21.version(&v6, "(uutils coreutils) 0.1.0wc-help-byteswc-help-charsFwc-help-files0-fromwc-help-lineswc-help-max-line-lengthwc-help-totalwc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 24);
    uucore::mods::locale::get_message(&v18, "wc-aboutEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 8);
    v6.about(&v21, &v18);
    uucore::mods::locale::get_message(&v0, "wc-usageFunctionPriorArgAllocErrentry_id' existsDeadlock", 8);
    uucore::format_usage(&v18, v1, v2);
    v21.override_usage(&v6, &v18);
    memcpy(&v6, &v21, 700);
    v16 = 584115552392 | v22;
    v17 = v23;
    v21.new(_ZN5uu_wc7options5BYTES17hf98e9feba5852405E, g_59f6b8);
    v18.short(&v21, 99);
    v21.long(&v18, _ZN5uu_wc7options5BYTES17hf98e9feba5852405E, g_59f6b8);
    uucore::mods::locale::get_message(&v24, "wc-help-byteswc-help-charsFwc-help-files0-fromwc-help-lineswc-help-max-line-lengthwc-help-totalwc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 13);
    v18.help(&v21, &v24);
    v24.action(&v18, 2);
    v21.arg(&v6, &v24);
    v6.new(_ZN5uu_wc7options4CHAR17h0e37c09bbca16459E, g_59f6c8);
    v18.short(&v6, 109);
    v6.long(&v18, _ZN5uu_wc7options4CHAR17h0e37c09bbca16459E, g_59f6c8);
    uucore::mods::locale::get_message(&v24, "wc-help-charsFwc-help-files0-fromwc-help-lineswc-help-max-line-lengthwc-help-totalwc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 13);
    v18.help(&v6, &v24);
    v24.action(&v18, 2);
    v6.arg(&v21, &v24);
    v21.new(_ZN5uu_wc7options11FILES0_FROM17h8fc2e84e76cada7aE, g_59f6d8);
    v18.long(&v21, _ZN5uu_wc7options11FILES0_FROM17h8fc2e84e76cada7aE, g_59f6d8);
    v21.value_name(&v18, "Fwc-help-files0-fromwc-help-lineswc-help-max-line-lengthwc-help-totalwc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 1);
    uucore::mods::locale::get_message(&v24, "wc-help-files0-fromwc-help-lineswc-help-max-line-lengthwc-help-totalwc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 19);
    v18.help(&v21, &v24);
    v3 = 2;
    v26 = v5;
    v24 = v3;
    v25 = v4;
    v21.value_parser(&v18, &v24);
    v18.value_hint(&v21, 3);
    v21.arg(&v6, &v18);
    v6.new(_ZN5uu_wc7options5LINES17h7a7d7ab3c10ee0dbE, g_59f6e8);
    v18.short(&v6, 108);
    v6.long(&v18, _ZN5uu_wc7options5LINES17h7a7d7ab3c10ee0dbE, g_59f6e8);
    uucore::mods::locale::get_message(&v24, "wc-help-lineswc-help-max-line-lengthwc-help-totalwc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 13);
    v18.help(&v6, &v24);
    v24.action(&v18, 2);
    v6.arg(&v21, &v24);
    v21.new(_ZN5uu_wc7options15MAX_LINE_LENGTH17ha736897a11d2ae48E, g_59f6f8);
    v18.short(&v21, 76);
    v21.long(&v18, _ZN5uu_wc7options15MAX_LINE_LENGTH17ha736897a11d2ae48E, g_59f6f8);
    uucore::mods::locale::get_message(&v24, "wc-help-max-line-lengthwc-help-totalwc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 23);
    v18.help(&v21, &v24);
    v24.action(&v18, 2);
    v21.arg(&v6, &v24);
    v6.new(_ZN5uu_wc7options5TOTAL17h1b6a3927e84ead75E, g_59f708);
    v18.long(&v6, _ZN5uu_wc7options5TOTAL17h1b6a3927e84ead75E, g_59f708);
    v6 = "autoBool";
    v7 = 4;
    v8 = "alwaysneverinternal error: entered unreachable code: Should have been caught by clap";
    v9 = 6;
    v10 = "only";
    v11 = 4;
    v12 = "neverinternal error: entered unreachable code: Should have been caught by clap";
    v13 = 5;
    v24.from(&v6);
    v6.value_parser(&v18, &v24);
    v18.value_name(&v6, "WHENkeysu128", 4);
    memcpy(&v6, &v18, 632);
    v14 = v19 | 16;
    v15 = v20;
    uucore::mods::locale::get_message(&v24, "wc-help-totalwc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 13);
    v18.help(&v6, &v24);
    v6.arg(&v21, &v18);
    v21.new(_ZN5uu_wc7options5WORDS17h50d4562f01753878E, g_59f718);
    v18.short(&v21, 119);
    v21.long(&v18, _ZN5uu_wc7options5WORDS17h50d4562f01753878E, g_59f718);
    uucore::mods::locale::get_message(&v24, "wc-help-wordsAll escaped names with the escaping option return valid strings.: \n", 13);
    v18.help(&v21, &v24);
    v24.action(&v18, 2);
    v21.arg(&v6, &v24);
    v6.new("files-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/wc/src/wc.rs", 5);
    v18.action(&v6, 1);
    v6.value_parser(&v18, &v3);
    v18.value_hint(&v6, 3);
    a0.arg(&v21, &v18);
    ::0x4acba0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
