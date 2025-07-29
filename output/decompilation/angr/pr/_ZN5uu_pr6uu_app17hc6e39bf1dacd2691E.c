long long uu_pr::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    char v3;  // [bp-0xaa0]
    unsigned int v4;  // [bp-0x828]
    unsigned int v5;  // [bp-0x824]
    unsigned long long v6;  // [bp-0x7e4]
    unsigned int v7;  // [bp-0x7dc]
    char v8;  // [bp-0x7d8]
    unsigned long v9;  // [bp-0x51c]
    unsigned int v10;  // [bp-0x514]
    char v11;  // [bp-0x510]
    unsigned int v12;  // [bp-0x298]
    unsigned int v13;  // [bp-0x294]
    char v14;  // [bp-0x290]
    unsigned long long v17;  // rdx

    v8.new(uucore::util_name(), v17);
    v3.version(&v8, "(uutils coreutils) 0.1.0pr-after-helppagespr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-head", 24);
    uucore::mods::locale::get_message(&v11, "pr-aboutstride: xidstart( ", 8);
    v8.about(&v3, &v11);
    uucore::mods::locale::get_message(&v11, "pr-after-helppagespr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-len", 13);
    v3.after_help(&v8, &v11);
    uucore::mods::locale::get_message(&v0, "pr-usagepreinner", 8);
    uucore::format_usage(&v11, v1, v2);
    v8.override_usage(&v3, &v11);
    memcpy(&v3, &v8, 700);
    v6 = 2252383929761928 | v9;
    v7 = v10;
    v8.new("pagespr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGT", 5);
    v11.long(&v8, "pagespr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGT", 5);
    uucore::mods::locale::get_message(&v14, "pr-help-pagesFIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-h", 13);
    v8.help(&v11, &v14);
    v11.value_name(&v8, "FIRST_PAGE[:LAST_PAGE]headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-w", 22);
    v8.arg(&v3, &v11);
    v3.new("headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-hel", 6);
    v11.short(&v3, 104);
    v3.long(&v11, "headerpr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-hel", 6);
    uucore::mods::locale::get_message(&v14, "pr-help-headerSTRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form", 14);
    v11.help(&v3, &v14);
    v14.value_name(&v11, "STRINGdouble-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-h", 6);
    v3.arg(&v8, &v14);
    v8.new("double-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-co", 12);
    v11.short(&v8, 100);
    v8.long(&v11, "double-spacepr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-co", 12);
    uucore::mods::locale::get_message(&v14, "pr-help-double-spacenumber-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpa", 20);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("number-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page", 12);
    v11.short(&v3, 110);
    v3.long(&v11, "number-linespr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page", 12);
    uucore::mods::locale::get_message(&v14, "pr-help-number-lines[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacross", 20);
    v11.help(&v3, &v14);
    memcpy(&v3, &v11, 632);
    v4 = v12 | 32;
    v5 = v13;
    v11.value_name(&v3, "[char][width]first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumn", 13);
    v3.arg(&v8, &v11);
    v8.new("first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-colum", 17);
    v11.short(&v8, 78);
    v8.long(&v11, "first-line-numberpr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-colum", 17);
    uucore::mods::locale::get_message(&v14, "pr-help-first-line-numberNUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help", 25);
    v11.help(&v8, &v14);
    v14.value_name(&v11, "NUMBERomit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep", 6);
    v8.arg(&v3, &v14);
    v3.new("omit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-strin", 11);
    v11.short(&v3, 116);
    v3.long(&v11, "omit-headerpr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-strin", 11);
    uucore::mods::locale::get_message(&v14, "pr-help-omit-headerlengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-co", 19);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("lengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separat", 6);
    v11.short(&v8, 108);
    v8.long(&v11, "lengthpr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separat", 6);
    uucore::mods::locale::get_message(&v14, "pr-help-page-lengthPAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstri", 19);
    v11.help(&v8, &v14);
    v14.value_name(&v11, "PAGE_LENGTHpr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-merg", 11);
    v8.arg(&v3, &v14);
    v3.new("no-file-warningsidsunaryoperatorArgumentConflictCapacityOverflowrange end index ", 16);
    v11.short(&v3, 114);
    v3.long(&v11, "no-file-warningsidsunaryoperatorArgumentConflictCapacityOverflowrange end index ", 16);
    uucore::mods::locale::get_message(&v14, "pr-help-no-file-warningsform-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-h", 24);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("form-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-lin", 9);
    v11.short(&v8, 70);
    v8.short_alias(&v11, 102);
    v11.long(&v8, "form-feedpr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-lin", 9);
    uucore::mods::locale::get_message(&v14, "pr-help-form-feedwidthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help", 17);
    v8.help(&v11, &v14);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("widthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-hel", 5);
    v11.short(&v3, 119);
    v3.long(&v11, "widthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-hel", 5);
    uucore::mods::locale::get_message(&v14, "pr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-hel", 20);
    v11.help(&v3, &v14);
    v14.value_name(&v11, "widthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-hel", 5);
    v3.arg(&v8, &v14);
    v8.new("page-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/", 10);
    v11.short(&v8, 87);
    v8.long(&v11, "page-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/", 10);
    uucore::mods::locale::get_message(&v14, "pr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/", 18);
    v11.help(&v8, &v14);
    v14.value_name(&v11, "widthpr-help-column-widthpage-widthpr-help-page-widthacrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-hel", 5);
    v8.arg(&v3, &v14);
    v3.new("acrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    v11.short(&v3, 97);
    v3.long(&v11, "acrosspr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    uucore::mods::locale::get_message(&v14, "pr-help-acrosscolumnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 14);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("columnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    v11.long(&v8, "columnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    uucore::mods::locale::get_message(&v14, "pr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 14);
    v8.help(&v11, &v14);
    v11.value_name(&v8, "columnpr-help-columnseparatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    v8.arg(&v3, &v11);
    v3.new("separatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 9);
    v11.short(&v3, 115);
    v3.long(&v11, "separatorpr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 9);
    uucore::mods::locale::get_message(&v14, "pr-help-column-char-separatorsep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 29);
    v11.help(&v3, &v14);
    v14.value_name(&v11, "char", 4);
    v3.arg(&v8, &v14);
    v8.new("sep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    v11.short(&v8, 83);
    v8.long(&v11, "sep-stringpr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    uucore::mods::locale::get_message(&v14, "pr-help-column-string-separatorstringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 31);
    v11.help(&v8, &v14);
    v14.value_name(&v11, "stringmergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    v8.arg(&v3, &v14);
    v3.new("mergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 5);
    v11.short(&v3, 109);
    v3.long(&v11, "mergepr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 5);
    uucore::mods::locale::get_message(&v14, "pr-help-mergeindentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 13);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("indentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    v11.short(&v8, 111);
    v8.long(&v11, "indentpr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    uucore::mods::locale::get_message(&v14, "pr-help-indentmarginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 14);
    v11.help(&v8, &v14);
    v14.value_name(&v11, "marginjoin-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    v8.arg(&v3, &v14);
    v3.new("join-linespr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    v11.short(&v3, 74);
    uucore::mods::locale::get_message(&v14, "pr-help-join-linespr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 18);
    v3.help(&v11, &v14);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("helpt", 4);
    v11.long(&v8, "helpt", 4);
    uucore::mods::locale::get_message(&v14, "pr-help-helpfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 12);
    v8.help(&v11, &v14);
    v11.action(&v8, 5);
    v8.arg(&v3, &v11);
    v3.new("files^[-+]\\d+.*src/uu/pr/src/pr.rs", 5);
    v11.action(&v3, 1);
    v3.value_hint(&v11, 3);
    a0.arg(&v8, &v3);
    ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
