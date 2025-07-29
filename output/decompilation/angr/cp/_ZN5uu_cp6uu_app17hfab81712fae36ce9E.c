long long uu_cp::uu_app(unsigned long long a0)
{
    char *v0;  // [bp-0xb20], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0xb18]
    unsigned long long v2;  // [bp-0xb10]
    unsigned long long v3;  // [bp-0xb08]
    unsigned long long v4;  // [bp-0xb00]
    unsigned long long v5;  // [bp-0xaf8]
    unsigned int v6;  // [bp-0x8a8]
    unsigned int v7;  // [bp-0x8a4]
    void* v8;  // [bp-0x8a0]
    unsigned long long v9;  // [bp-0x898]
    char v10;  // [bp-0x890]
    char v11;  // [bp-0x888], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x880]
    unsigned long long v13;  // [bp-0x878]
    unsigned long long v14;  // [bp-0x870]
    unsigned long long v15;  // [bp-0x868]
    unsigned long long v16;  // [bp-0x860]
    unsigned int v17;  // [bp-0x610]
    unsigned int v18;  // [bp-0x60c]
    unsigned long long v19;  // [bp-0x5cc]
    unsigned int v20;  // [bp-0x5c4]
    char v21;  // [bp-0x5c0], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x5b8]
    char *v23;  // [bp-0x5b0]
    unsigned long long v24;  // [bp-0x5a8]
    void* v25;  // [bp-0x5a0]
    unsigned int v26;  // [bp-0x348]
    char v27;  // [bp-0x344]
    unsigned long v28;  // [bp-0x304]
    unsigned int v29;  // [bp-0x2fc]
    char v30;  // [bp-0x2f8]
    unsigned long long v31;  // [bp-0x2f0]
    unsigned long long v32;  // [bp-0x2e8]
    char v33;  // [bp-0x2e0]
    unsigned long long v34;  // [bp-0x2d0]
    char v35;  // [bp-0x2c8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x2c0]
    unsigned long long v37;  // [bp-0x2b8]
    char v38;  // [bp-0x48]
    unsigned long long v39;  // [bp-0x38]
    unsigned long long v42;  // rdx

    v21.new(uucore::util_name(), v42);
    v11.version(&v21, "(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n", 24);
    uucore::mods::locale::get_message(&v0, "cp-about", 8);
    v21.about(&v11, &v0);
    uucore::mods::locale::get_message(&v30, "cp-usage", 8);
    uucore::format_usage(&v0, v31, v32);
    v11.override_usage(&v21, &v0);
    uucore::mods::locale::get_message(&v35, "cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups", 13);
    v0 = &v35;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &g_5fb630;
    v3 = <&T as core::fmt::Display>::fmt;
    v21 = &g_5fb610;
    v22 = 2;
    v25 = 0;
    v23 = &v0;
    v24 = 2;
    v33.map_or_else(&v21);
    ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v35);
    memcpy(&v38, &v33, 16);
    v39 = v34;
    v21.after_help(&v11, &v38);
    memcpy(&v11, &v21, 700);
    v19 = 584115552392 | v28;
    v20 = v29;
    v21.new("target-directory", 16);
    v0.short(&v21, 116);
    v21.conflicts_with(&v0, "no-target-directorycp-help-target-directorycp-help-no-target-directoryinteractiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slas", 19);
    v0.long(&v21, "target-directory", 16);
    v21.value_name(&v0, "target-directory", 16);
    v0.value_hint(&v21, 4);
    v35 = 3;
    v21.value_parser(&v0, &v35);
    uucore::mods::locale::get_message(&v35, "cp-help-target-directorycp-help-no-target-directoryinteractiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-deb", 24);
    v0.help(&v21, &v35);
    v21.arg(&v11, &v0);
    v11.new("no-target-directorycp-help-target-directorycp-help-no-target-directoryinteractiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slas", 19);
    v0.short(&v11, 84);
    v11.long(&v0, "no-target-directorycp-help-target-directorycp-help-no-target-directoryinteractiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slas", 19);
    v0.conflicts_with(&v11, "target-directory", 16);
    uucore::mods::locale::get_message(&v35, "cp-help-no-target-directoryinteractiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbose", 27);
    v11.help(&v0, &v35);
    v0.action(&v11, 2);
    v11.arg(&v21, &v0);
    v21.new("interactiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcec", 11);
    v0.short(&v21, 105);
    v21.long(&v0, "interactiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcec", 11);
    v0.overrides_with(&v21, "no-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forc", 10);
    uucore::mods::locale::get_message(&v35, "cp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-de", 19);
    v21.help(&v0, &v35);
    v0.action(&v21, 2);
    v21.arg(&v11, &v0);
    v11.new("linkkindAuto/", 4);
    v0.short(&v11, 108);
    v11.long(&v0, "linkkindAuto/", 4);
    v0.overrides_with_all(&v11, &g_5fb640, 5);
    uucore::mods::locale::get_message(&v35, "cp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflin", 12);
    v11.help(&v0, &v35);
    v0.action(&v11, 2);
    v11.arg(&v21, &v0);
    v21.new("no-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forc", 10);
    v0.short(&v21, 110);
    v21.long(&v0, "no-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forc", 10);
    v0.overrides_with(&v21, "interactiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcec", 11);
    uucore::mods::locale::get_message(&v35, "cp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-att", 18);
    v21.help(&v0, &v35);
    v0.action(&v21, 2);
    v21.arg(&v11, &v0);
    v11.new("recursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_L", 9);
    v0.short(&v11, 82);
    v11.visible_short_alias(&v0, 114);
    v0.long(&v11, "recursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_L", 9);
    uucore::mods::locale::get_message(&v35, "cp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,o", 17);
    v11.help(&v0, &v35);
    v0.action(&v11, 2);
    v11.arg(&v21, &v0);
    v21.new("strip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestam", 22);
    v0.long(&v21, "strip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestam", 22);
    uucore::mods::locale::get_message(&v35, "cp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attr", 30);
    v21.help(&v0, &v35);
    v0.action(&v21, 2);
    v21.arg(&v11, &v0);
    v11.new("debugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-default", 5);
    v0.long(&v11, "debugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-default", 5);
    uucore::mods::locale::get_message(&v35, "cp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-pr", 13);
    v11.help(&v0, &v35);
    v0.action(&v11, 2);
    v11.arg(&v21, &v0);
    v21.new("verbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help", 7);
    v0.short(&v21, 118);
    v21.long(&v0, "verbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help", 7);
    uucore::mods::locale::get_message(&v35, "cp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-pre", 15);
    v0.help(&v21, &v35);
    v35.action(&v0, 2);
    v21.arg(&v11, &v35);
    v11.new("symbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-re", 13);
    v0.short(&v11, 115);
    v11.long(&v0, "symbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-re", 13);
    v0.overrides_with_all(&v11, &g_5fb640, 5);
    uucore::mods::locale::get_message(&v35, "cp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentspar", 21);
    v11.help(&v0, &v35);
    v0.action(&v11, 2);
    v11.arg(&v21, &v0);
    v21.new("forcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-", 5);
    v0.short(&v21, 102);
    v21.long(&v0, "forcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-", 5);
    uucore::mods::locale::get_message(&v35, "cp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-deref", 13);
    v0.help(&v21, &v35);
    v35.action(&v0, 2);
    v21.arg(&v11, &v35);
    v11.new("remove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencederefer", 18);
    v0.long(&v11, "remove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencederefer", 18);
    v11.overrides_with(&v0, "forcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-", 5);
    uucore::mods::locale::get_message(&v35, "cp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-der", 26);
    v0.help(&v11, &v35);
    v35.action(&v0, 2);
    v11.arg(&v21, &v35);
    uucore::features::backup_control::arguments::backup(&v0);
    v21.arg(&v11, &v0);
    uucore::features::backup_control::arguments::backup_no_args(&v0);
    v11.arg(&v21, &v0);
    uucore::features::backup_control::arguments::suffix(&v0);
    v21.arg(&v11, &v0);
    uucore::features::update_control::arguments::update(&v0);
    v11.arg(&v21, &v0);
    uucore::features::update_control::arguments::update_no_args(&v0);
    v21.arg(&v11, &v0);
    v11.new("reflinksparse\ncp-debug-copy-offload", 7);
    v0.long(&v11, "reflinksparse\ncp-debug-copy-offload", 7);
    v11.value_name(&v0, "WHENkeysu128", 4);
    v0.overrides_with_all(&v11, &g_5fb640, 5);
    memcpy(&v11, &v0, 632);
    v17 = 128 | v6;
    v18 = v7;
    v0.default_missing_value(&v11, "alwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferenc", 6);
    v11 = "auto";
    v12 = 4;
    v13 = "alwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferenc";
    v14 = 6;
    v15 = "nevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-s";
    v16 = 5;
    v35.from(&v11);
    v11.value_parser(&v0, &v35);
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v37 = *((long long *)&v10);
    v35 = v8;
    v36 = 1;
    v0.num_args(&v11, &v35);
    uucore::mods::locale::get_message(&v11, "cp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbol", 15);
    v35.help(&v0, &v11);
    v11.arg(&v21, &v35);
    v21.new("attributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinat", 15);
    v0.long(&v21, "attributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinat", 15);
    v21.overrides_with_all(&v0, &g_5fb640, 5);
    uucore::mods::locale::get_message(&v35, "cp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help", 23);
    v0.help(&v21, &v35);
    v35.action(&v0, 2);
    v21.arg(&v11, &v35);
    v11.new("preserve", 8);
    v0.long(&v11, "preserve", 8);
    v11.action(&v0, 1);
    v0.use_value_delimiter(&v11, 1);
    v35.from(&g_5fb5a0, 7);
    v11.value_parser(&v0, &v35);
    v0.num_args(&v11, 0);
    memcpy(&v11, &v0, 632);
    v17 = 128 | v6;
    v18 = v7;
    v0.value_name(&v11, "ATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarch", 9);
    v11.default_missing_value(&v0, "mode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-hel", 24);
    uucore::mods::locale::get_message(&v35, "cp-help-preserve", 16);
    v0.help(&v11, &v35);
    v11.arg(&v21, &v0);
    v21.new("preserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-", 27);
    v0.short(&v21, 112);
    v21.long(&v0, "preserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-", 27);
    uucore::mods::locale::get_message(&v35, "cp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-de", 24);
    v0.help(&v21, &v35);
    v35.action(&v0, 2);
    v21.arg(&v11, &v35);
    v11.new("no-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-links", 11);
    v0.long(&v11, "no-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-links", 11);
    v11.action(&v0, 1);
    v0.use_value_delimiter(&v11, 1);
    v35.from(&g_5fb5a0, 7);
    v11.value_parser(&v0, &v35);
    v0.num_args(&v11, 0);
    memcpy(&v11, &v0, 632);
    v17 = 128 | v6;
    v18 = v7;
    v0.value_name(&v11, "ATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarch", 9);
    uucore::mods::locale::get_message(&v11, "cp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-sy", 19);
    v35.help(&v0, &v11);
    v11.arg(&v21, &v35);
    v21.new("parentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-fil", 7);
    v0.long(&v21, "parentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-fil", 7);
    v21.alias(&v0, "parentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-syste", 6);
    uucore::mods::locale::get_message(&v35, "cp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-he", 15);
    v0.help(&v21, &v35);
    v35.action(&v0, 2);
    v21.arg(&v11, &v35);
    v11.new("no-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-he", 14);
    v0.short(&v11, 80);
    v11.long(&v0, "no-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-he", 14);
    v0.overrides_with(&v11, "dereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXc", 11);
    uucore::mods::locale::get_message(&v35, "cp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-cont", 22);
    v11.help(&v0, &v35);
    v0.action(&v11, 2);
    v11.arg(&v21, &v0);
    v21.new("dereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXc", 11);
    v0.short(&v21, 76);
    v21.long(&v0, "dereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXc", 11);
    v0.overrides_with(&v21, "no-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-he", 14);
    uucore::mods::locale::get_message(&v35, "cp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-conten", 19);
    v21.help(&v0, &v35);
    v0.action(&v21, 2);
    v21.arg(&v11, &v0);
    v11.new("cli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-erro", 18);
    v0.short(&v11, 72);
    uucore::mods::locale::get_message(&v35, "cp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attribut", 26);
    v11.help(&v0, &v35);
    v0.action(&v11, 2);
    v11.arg(&v21, &v0);
    v21.new("archivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/to", 7);
    v0.short(&v21, 97);
    v21.long(&v0, "archivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/to", 7);
    uucore::mods::locale::get_message(&v35, "cp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchain", 15);
    v0.help(&v21, &v35);
    v35.action(&v0, 2);
    v21.arg(&v11, &v35);
    v11.new("no-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-", 29);
    v0.short(&v11, 100);
    uucore::mods::locale::get_message(&v35, "cp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gn", 37);
    v11.help(&v0, &v35);
    v0.action(&v11, 2);
    v11.arg(&v21, &v0);
    v21.new("one-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/sr", 15);
    v0.short(&v21, 120);
    v21.long(&v0, "one-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/sr", 15);
    uucore::mods::locale::get_message(&v35, "cp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/by", 23);
    v0.help(&v21, &v35);
    v35.action(&v0, 2);
    v21.arg(&v11, &v35);
    v11.new("sparse\ncp-debug-copy-offload", 6);
    v0.long(&v11, "sparse\ncp-debug-copy-offload", 6);
    v11.value_name(&v0, "WHENkeysu128", 4);
    v0 = "nevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-s";
    v1 = 5;
    v2 = "auto";
    v3 = 4;
    v4 = "alwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferenc";
    v5 = 6;
    v35.from(&v0);
    v0.value_parser(&v11, &v35);
    uucore::mods::locale::get_message(&v11, "cp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 14);
    v35.help(&v0, &v11);
    v11.arg(&v21, &v35);
    v21.new("Zcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1);
    v0.short(&v21, 90);
    uucore::mods::locale::get_message(&v35, "cp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 15);
    v21.help(&v0, &v35);
    v0.action(&v21, 2);
    v21.arg(&v11, &v0);
    v11.new("contextlinksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  ", 7);
    v0.long(&v11, "contextlinksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  ", 7);
    v11.value_name(&v0, "CTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 3);
    v35 = 1;
    v0.value_parser(&v11, &v35);
    uucore::mods::locale::get_message(&v35, "cp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 15);
    v11.help(&v0, &v35);
    v0.num_args(&v11, &v8);
    memcpy(&v11, &v0, 632);
    v17 = 128 | v6;
    v18 = v7;
    v0.default_missing_value(&v11, 1, 0);
    v11.arg(&v21, &v0);
    v21.new("progress", 8);
    v0.long(&v21, "progress", 8);
    v21.short(&v0, 103);
    v0.action(&v21, 2);
    uucore::mods::locale::get_message(&v21, "cp-help-progressbackupopt_backup", 16);
    v35.help(&v0, &v21);
    v21.arg(&v11, &v35);
    v11.new("copy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysneverc", 13);
    v0.long(&v11, "copy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysneverc", 13);
    v11.overrides_with(&v0, "attributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinat", 15);
    uucore::mods::locale::get_message(&v35, "cp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 21);
    v0.help(&v11, &v35);
    v35.action(&v0, 2);
    v11.arg(&v21, &v35);
    v21.new("pathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 5);
    v0.action(&v21, 1);
    v21.num_args(&v0, 1);
    memcpy(&v0, &v21, 632);
    v6 = v26 | 1;
    v7 = *((int *)&v27);
    v21.value_hint(&v0, 2);
    v35 = 2;
    v0.value_parser(&v21, &v35);
    a0.arg(&v11, &v0);
    ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v30);
    return a0;
}
