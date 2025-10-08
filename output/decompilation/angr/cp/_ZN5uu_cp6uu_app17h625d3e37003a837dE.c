long long uu_cp::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xad0]
    unsigned long long v2;  // [bp-0xac8]
    unsigned long long v3;  // [bp-0xac0]
    unsigned long long v4;  // [bp-0xab8]
    unsigned long long v5;  // [bp-0xab0]
    unsigned int v6;  // [bp-0x860]
    unsigned int v7;  // [bp-0x85c]
    char v8;  // [bp-0x858], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x850]
    unsigned long long v10;  // [bp-0x848]
    unsigned long long v11;  // [bp-0x840]
    unsigned long long v12;  // [bp-0x838]
    unsigned long long v13;  // [bp-0x830]
    unsigned int v14;  // [bp-0x5e0]
    unsigned int v15;  // [bp-0x5dc]
    unsigned long long v16;  // [bp-0x59c]
    unsigned int v17;  // [bp-0x594]
    char v18;  // [bp-0x590], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x588]
    char *v20;  // [bp-0x580]
    unsigned long long v21;  // [bp-0x578]
    void* v22;  // [bp-0x570]
    unsigned int v23;  // [bp-0x318]
    char v24;  // [bp-0x314]
    unsigned long v25;  // [bp-0x2d4]
    unsigned int v26;  // [bp-0x2cc]
    char v27;  // [bp-0x2c8]
    unsigned long long v28;  // [bp-0x2b0]
    unsigned long long v31;  // rdx

    v18.new(uucore::util_name(), v31);
    v8.version(&v18);
    v18.about(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backupsDo not copy a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If timestamps are being preserved, the comparison is to the\nsource timestamp truncated to the resolutions of the destination file system and of the system calls used to\nupdate timestamps; this avoids duplicate work if several cp -pu commands are executed with the same source\nand destination. This option is ignored if the -", 104);
    v8.override_usage(&v18, &v0);
    v0 = &g_55e938;
    v1 = <&T as core::fmt::Display>::fmt;
    v2 = &g_55e928;
    v3 = <&T as core::fmt::Display>::fmt;
    v18 = &g_55e908;
    v19 = 2;
    v22 = 0;
    v20 = &v0;
    v21 = 2;
    v27.map_or_else(&v18);
    v18.after_help(&v8, &v27);
    memcpy(&v8, &v18, 700);
    v16 = 584115552392 | v25;
    v17 = v26;
    v18.new("target-directory", 16);
    v0.short(&v18, 116);
    v18.conflicts_with(&v0, "no-target-directorycopy all SOURCE arguments into target-directoryTreat DEST as a regular file and not a directoryinteractiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overw", 19);
    v0.long(&v18, "target-directory", 16);
    v18.value_name(&v0, "target-directory", 16);
    v0.value_hint(&v18, 4);
    v28 = 3;
    v18.value_parser(&v0, &v28);
    v0.help(&v18, "copy all SOURCE arguments into target-directoryTreat DEST as a regular file and not a directoryinteractiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that al", 47);
    v18.arg(&v8, &v0);
    v8.new("no-target-directorycopy all SOURCE arguments into target-directoryTreat DEST as a regular file and not a directoryinteractiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overw", 19);
    v0.short(&v8, 84);
    v8.long(&v0, "no-target-directorycopy all SOURCE arguments into target-directoryTreat DEST as a regular file and not a directoryinteractiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overw", 19);
    v0.conflicts_with(&v8, "target-directory", 16);
    v8.help(&v0, "Treat DEST as a regular file and not a directoryinteractiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursive", 48);
    v0.action(&v8, 2);
    v8.arg(&v18, &v0);
    v18.new("interactiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slas", 11);
    v0.short(&v18, 105);
    v18.long(&v0, "interactiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slas", 11);
    v0.overrides_with(&v18, "no-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from ea", 10);
    v18.help(&v0, "ask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE ", 28);
    v0.action(&v18, 2);
    v18.arg(&v8, &v0);
    v8.new("link/", 4);
    v0.short(&v8, 108);
    v8.long(&v0, "link/", 4);
    v0.overrides_with_all(&v8);
    v8.help(&v0, "hard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state", 34);
    v0.action(&v8, 2);
    v8.arg(&v18, &v0);
    v18.new("no-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from ea", 10);
    v0.short(&v18, 110);
    v18.long(&v0, "no-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from ea", 10);
    v0.overrides_with(&v18, "interactiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slas", 11);
    v18.help(&v0, "don't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic l", 42);
    v0.action(&v18, 2);
    v18.arg(&v8, &v0);
    v8.new("recursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing", 9);
    v0.short(&v8, 82);
    v8.visible_short_alias(&v0);
    v0.long(&v8, "recursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing", 9);
    v8.help(&v0, "copy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destinat", 28);
    v0.action(&v8, 2);
    v8.arg(&v18, &v0);
    v18.new("strip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, r", 22);
    v0.long(&v18, "strip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, r", 22);
    v18.help(&v0, "remove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again", 53);
    v0.action(&v18, 2);
    v18.arg(&v8, &v0);
    v8.new("debugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also u", 5);
    v0.long(&v8, "debugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also u", 5);
    v8.help(&v0, "explain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used).", 40);
    v0.action(&v8, 2);
    v8.arg(&v18, &v0);
    v18.new("verboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.r", 7);
    v0.short(&v18, 118);
    v18.long(&v0, "verboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.r", 7);
    v0.help(&v18, "explicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.remove-d", 35);
    v28.action(&v0, 2);
    v18.arg(&v8, &v28);
    v8.new("symbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is ", 13);
    v0.short(&v8, 115);
    v8.long(&v0, "symbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is ", 13);
    v0.overrides_with_all(&v8);
    v8.help(&v0, "make symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.remove-destinationremove each existing dest", 38);
    v0.action(&v8, 2);
    v8.arg(&v18, &v0);
    v18.new("forceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.remove-destinationremove each existing destination file before attempting to open", 5);
    v0.short(&v18, 102);
    v18.long(&v0, "forceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.remove-destinationremove each existing destination file before attempting to open", 5);
    v0.help(&v18, "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.remove-destinationremove each existing destination file before attempting to open it (", 170);
    v28.action(&v0, 2);
    v18.arg(&v8, &v28);
    v8.new("remove-destinationremove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesAT", 18);
    v0.long(&v8, "remove-destinationremove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesAT", 18);
    v8.overrides_with(&v0, "forceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.remove-destinationremove each existing destination file before attempting to open", 5);
    v0.help(&v8, "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,owners", 145);
    v28.action(&v0, 2);
    v8.arg(&v18, &v28);
    uucore::features::backup_control::arguments::backup(&v0);
    v18.arg(&v8, &v0);
    uucore::features::backup_control::arguments::backup_no_args(&v0);
    v8.arg(&v18, &v0);
    uucore::features::backup_control::arguments::suffix(&v0);
    v18.arg(&v8, &v0);
    uucore::features::update_control::arguments::update(&v0);
    v8.arg(&v18, &v0);
    uucore::features::update_control::arguments::update_no_args(&v0);
    v18.arg(&v8, &v0);
    v8.new("reflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a f", 7);
    v0.long(&v8, "reflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a f", 7);
    v8.value_name(&v0, "WHENkeysu128for<", 4);
    v0.overrides_with_all(&v8);
    memcpy(&v8, &v0, 632);
    v14 = 128 | v6;
    v15 = v7;
    v0.default_missing_value(&v8, "alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, li", 6);
    v8 = "auto";
    v9 = 4;
    v10 = "alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, li";
    v11 = 6;
    v12 = "nevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, x";
    v13 = 5;
    v28.from(&v8);
    v8.value_parser(&v0, &v28);
    v0.num_args(&v8, 0, 1);
    v28.help(&v0, "control clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr,", 35);
    v8.arg(&v18, &v28);
    v18.new("attributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Impli", 15);
    v0.long(&v18, "attributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Impli", 15);
    v18.overrides_with_all(&v0);
    v0.help(&v18, "Don't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, allpreserve-default-attributessame", 45);
    v28.action(&v0, 2);
    v18.arg(&v8, &v28);
    v8.new("preserveENETDOWNOption '", 8);
    v0.long(&v8, "preserveENETDOWNOption '", 8);
    v8.action(&v0, 1);
    v0.use_value_delimiter(&v8, 1);
    v28.from();
    v8.value_parser(&v0, &v28);
    v0.num_args(&v8, 0);
    memcpy(&v8, &v0, 632);
    v14 = 128 | v6;
    v15 = v7;
    v0.value_name(&v8, "ATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, allpreserve-default-attributessame as --preserve=mode,ownership(unix only),time", 9);
    v8.default_missing_value(&v0, "mode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, allpreserve-default-attributessame as --preserve=mode,ownership(unix only),timestampsno-", 24);
    v0.help(&v8, "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, allpreserve-default-attributessame as --preserve=mode,ownership(unix only),timestampsno-preservedon't preserve t", 147);
    v8.arg(&v18, &v0);
    v18.new("preserve-default-attributessame as --preserve=mode,ownership(unix only),timestampsno-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways f", 27);
    v0.short(&v18, 112);
    v18.long(&v0, "preserve-default-attributessame as --preserve=mode,ownership(unix only),timestampsno-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways f", 27);
    v0.help(&v18, "same as --preserve=mode,ownership(unix only),timestampsno-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOU", 55);
    v28.action(&v0, 2);
    v18.arg(&v8, &v28);
    v8.new("no-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links", 11);
    v0.long(&v8, "no-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links", 11);
    v8.action(&v0, 1);
    v0.use_value_delimiter(&v8, 1);
    v28.from();
    v8.value_parser(&v0, &v28);
    v0.num_args(&v8, 0);
    memcpy(&v8, &v0, 632);
    v14 = 128 | v6;
    v15 = v7;
    v0.value_name(&v8, "ATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, allpreserve-default-attributessame as --preserve=mode,ownership(unix only),time", 9);
    v28.help(&v0, "don't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEa", 39);
    v8.arg(&v18, &v28);
    v18.new("parentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dere", 7);
    v0.long(&v18, "parentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dere", 7);
    v18.alias(&v0);
    v0.help(&v18, "use full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-prese", 41);
    v28.action(&v0, 2);
    v18.arg(&v8, &v28);
    v8.new("no-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --prese", 14);
    v0.short(&v8, 80);
    v8.long(&v0, "no-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --prese", 14);
    v0.overrides_with(&v8, "dereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-f", 11);
    v8.help(&v0, "never follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systems", 37);
    v0.action(&v8, 2);
    v8.arg(&v18, &v0);
    v18.new("dereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-f", 11);
    v0.short(&v18, 76);
    v18.long(&v0, "dereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-f", 11);
    v0.overrides_with(&v18, "no-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --prese", 14);
    v18.help(&v0, "always follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol ", 38);
    v0.action(&v18, 2);
    v18.arg(&v8, &v0);
    v8.new("cli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZse", 18);
    v0.short(&v8, 72);
    v8.help(&v0, "follow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security", 44);
    v0.action(&v8, 2);
    v8.arg(&v18, &v0);
    v18.new("archiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default type", 7);
    v0.short(&v18, 97);
    v18.long(&v0, "archiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default type", 7);
    v0.help(&v18, "Same as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike", 26);
    v28.action(&v0, 2);
    v18.arg(&v8, &v28);
    v8.new("no-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specifie", 29);
    v0.short(&v8, 100);
    v8.help(&v0, "same as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMA", 41);
    v0.action(&v8, 2);
    v8.arg(&v18, &v0);
    v18.new("one-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progr", 15);
    v0.short(&v18, 120);
    v18.long(&v0, "one-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progr", 15);
    v0.help(&v18, "stay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote:", 24);
    v28.action(&v0, 2);
    v18.arg(&v8, &v28);
    v8.new("sparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not sup", 6);
    v0.long(&v8, "sparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not sup", 6);
    v8.value_name(&v0, "WHENkeysu128for<", 4);
    v0 = "nevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, x";
    v1 = 5;
    v2 = "auto";
    v3 = 4;
    v4 = "alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, li";
    v5 = 6;
    v28.from(&v0);
    v0.value_parser(&v8, &v28);
    v28.help(&v0, "control creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not supported", 43);
    v8.arg(&v18, &v28);
    v18.new("Zset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.NotImplemented: copy cont", 1);
    v0.short(&v18, 90);
    v18.help(&v0, "set SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.NotImplemented: copy conte", 64);
    v0.action(&v18, 2);
    v18.arg(&v8, &v0);
    v8.new("contextTemplateErrorstate/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/fs.rs", 7);
    v0.long(&v8, "contextTemplateErrorstate/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/fs.rs", 7);
    v8.value_name(&v0, "CTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.NotImplemented: copy contents of special files when recursivepathsinvalid attribute ", 3);
    v28 = 1;
    v0.value_parser(&v8, &v28);
    v8.help(&v0, "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.NotImplemented: copy contents of special files when recursivepathsinvalid attribute ", 85);
    v0.num_args(&v8, 0, 1);
    memcpy(&v8, &v0, 632);
    v14 = 128 | v6;
    v15 = v7;
    v0.default_missing_value(&v8, 1, 0);
    v8.arg(&v18, &v0);
    v18.new("progress", 8);
    v0.long(&v18, "progress", 8);
    v18.short(&v0, 103);
    v0.action(&v18, 2);
    v28.help(&v0, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.NotImplemented: copy contents of special files when recursivepathsinvalid attribute ", 78);
    v18.arg(&v8, &v28);
    v8.new("copy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexp", 13);
    v0.long(&v8, "copy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexp", 13);
    v8.overrides_with(&v0, "attributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Impli", 15);
    v0.help(&v8, "NotImplemented: copy contents of special files when recursivepathsinvalid attribute ", 61);
    v28.action(&v0, 2);
    v8.arg(&v18, &v28);
    v18.new("pathsinvalid attribute ", 5);
    v0.action(&v18, 1);
    v18.num_args(&v0, 1);
    memcpy(&v0, &v18, 632);
    v6 = v23 | 1;
    v7 = *((int *)&v24);
    v18.value_hint(&v0, 2);
    v28 = 2;
    v0.value_parser(&v18, &v28);
    a0.arg(&v8, &v0);
    return a0;
}
