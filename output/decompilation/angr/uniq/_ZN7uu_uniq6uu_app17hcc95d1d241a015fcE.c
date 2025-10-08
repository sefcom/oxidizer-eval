long long uu_uniq::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    unsigned long long v3;  // [bp-0xaa8]
    unsigned long long v4;  // [bp-0xaa0]
    unsigned long long v5;  // [bp-0xa98]
    unsigned int v6;  // [bp-0x848]
    unsigned int v7;  // [bp-0x844]
    char v8;  // [bp-0x840], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x838]
    unsigned long long v10;  // [bp-0x830]
    unsigned long long v11;  // [bp-0x828]
    unsigned long long v12;  // [bp-0x820]
    unsigned long long v13;  // [bp-0x818]
    unsigned long long v14;  // [bp-0x810]
    unsigned long long v15;  // [bp-0x808]
    unsigned int v16;  // [bp-0x5c8]
    char v17;  // [bp-0x5c4]
    unsigned long v18;  // [bp-0x584]
    unsigned int v19;  // [bp-0x57c]
    char v20;  // [bp-0x578]
    unsigned int v21;  // [bp-0x300]
    unsigned int v22;  // [bp-0x2fc]
    unsigned long long v23;  // [bp-0x2bc]
    unsigned int v24;  // [bp-0x2b4]
    char v25;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned int v26;  // [bp-0x38]
    unsigned int v27;  // [bp-0x34]
    unsigned long long v30;  // rdx

    v20.new(uucore::util_name(), v30);
    v8.version(&v20);
    v20.about(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... [INPUT [OUTPUT]]Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nNote: uniq does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use sort -u ", 31);
    v8.override_usage(&v20, &v0);
    memcpy(&v20, &v8, 700);
    v23 = 549755814016 | v18;
    v24 = v19;
    v8.after_help(&v20);
    v20.new("all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 12);
    v0.short(&v20, 68);
    v20.long(&v0, "all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 12);
    v0 = "nonehelpNoneshimboth";
    v1 = 4;
    v2 = "prependprint all duplicate lines. Delimiting is done with blank lines. [default: none]delimit-methodappendshow all items, separating groups with an empty line. [default: separate]group-methodcompare no more than N characters in linesNprefix lines by the nu";
    v3 = 7;
    v4 = "separate\n       ";
    v5 = 8;
    v25.from(&v0);
    v0.value_parser(&v20, &v25);
    v20.help(&v0, "print all duplicate lines. Delimiting is done with blank lines. [default: none]delimit-methodappendshow all items, separating groups with an empty line. [default: separate]group-methodcompare no more than N characters in linesNprefix lines by the number of", 79);
    v0.value_name(&v20, "delimit-methodappendshow all items, separating groups with an empty line. [default: separate]group-methodcompare no more than N characters in linesNprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate lines", 14);
    v20.num_args(&v0, 0, 1);
    v0.default_missing_value(&v20, "nonehelpNoneshimboth", 4);
    memcpy(&v25, &v0, 632);
    v26 = 128 | v6;
    v27 = v7;
    v20.arg(&v8, &v25);
    v8.new("groupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 5);
    v0.long(&v8, "groupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 5);
    v8 = "separate\n       ";
    v9 = 8;
    v10 = "prependprint all duplicate lines. Delimiting is done with blank lines. [default: none]delimit-methodappendshow all items, separating groups with an empty line. [default: separate]group-methodcompare no more than N characters in linesNprefix lines by the nu";
    v11 = 7;
    v12 = "appendshow all items, separating groups with an empty line. [default: separate]group-methodcompare no more than N characters in linesNprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparin";
    v13 = 6;
    v14 = "both";
    v15 = 4;
    v25.from(&v8);
    v8.value_parser(&v0, &v25);
    v0.help(&v8, "show all items, separating groups with an empty line. [default: separate]group-methodcompare no more than N characters in linesNprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparing the ", 73);
    v8.value_name(&v0, "group-methodcompare no more than N characters in linesNprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparing the first N charactersavoid comparing the first N fieldsonly print unique lin", 12);
    v0.num_args(&v8, 0, 1);
    v8.default_missing_value(&v0, "separate\n       ", 8);
    memcpy(&v0, &v8, 632);
    v6 = 128 | v16;
    v7 = *((int *)&v17);
    v8 = "repeatedNoEqualsargumentNO_COLORUIoErrorcapacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crat";
    v9 = 8;
    v10 = "all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ";
    v11 = 12;
    v12 = "uniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ";
    v13 = 6;
    v14 = "countignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ";
    v15 = 5;
    v25.conflicts_with_all(&v0, &v8);
    v8.arg(&v20, &v25);
    v20.new("check-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 11);
    v0.short(&v20, 119);
    v20.long(&v0, "check-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 11);
    v0.help(&v20, "compare no more than N characters in linesNprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparing the first N charactersavoid comparing the first N fieldsonly print unique linesend lines ", 42);
    v25.value_name(&v0, "Nprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparing the first N charactersavoid comparing the first N fieldsonly print unique linesend lines with 0 byte, not newlineinternal error: en", 1);
    v20.arg(&v8, &v25);
    v8.new("countignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 5);
    v0.short(&v8, 99);
    v8.long(&v0, "countignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 5);
    v0.help(&v8, "prefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparing the first N charactersavoid comparing the first N fieldsonly print unique linesend lines with 0 byte, not newlineinternal error: ent", 41);
    v25.action(&v0, 2);
    v8.arg(&v20, &v25);
    v20.new("ignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 11);
    v0.short(&v20, 105);
    v20.long(&v0, "ignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 11);
    v0.help(&v20, "ignore differences in case when comparingonly print duplicate linesavoid comparing the first N charactersavoid comparing the first N fieldsonly print unique linesend lines with 0 byte, not newlineinternal error: entered unreachable code: Should have been c", 41);
    v25.action(&v0, 2);
    v20.arg(&v8, &v25);
    v8.new("repeatedNoEqualsargumentNO_COLORUIoErrorcapacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crat", 8);
    v0.short(&v8, 100);
    v8.long(&v0, "repeatedNoEqualsargumentNO_COLORUIoErrorcapacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crat", 8);
    v0.help(&v8, "only print duplicate linesavoid comparing the first N charactersavoid comparing the first N fieldsonly print unique linesend lines with 0 byte, not newlineinternal error: entered unreachable code: Should have been caught by possible values in clap", 26);
    v25.action(&v0, 2);
    v8.arg(&v20, &v25);
    v20.new("skip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 10);
    v0.short(&v20, 115);
    v20.long(&v0, "skip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 10);
    v0.help(&v20, "avoid comparing the first N charactersavoid comparing the first N fieldsonly print unique linesend lines with 0 byte, not newlineinternal error: entered unreachable code: Should have been caught by possible values in clap", 38);
    v25.value_name(&v0, "Nprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparing the first N charactersavoid comparing the first N fieldsonly print unique linesend lines with 0 byte, not newlineinternal error: en", 1);
    v20.arg(&v8, &v25);
    v8.new("skip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 11);
    v0.short(&v8, 102);
    v8.long(&v0, "skip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 11);
    v0.help(&v8, "avoid comparing the first N fieldsonly print unique linesend lines with 0 byte, not newlineinternal error: entered unreachable code: Should have been caught by possible values in clap", 34);
    v25.value_name(&v0, "Nprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparing the first N charactersavoid comparing the first N fieldsonly print unique linesend lines with 0 byte, not newlineinternal error: en", 1);
    v8.arg(&v20, &v25);
    v20.new("uniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 6);
    v0.short(&v20, 117);
    v20.long(&v0, "uniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 6);
    v0.help(&v20, "only print unique linesend lines with 0 byte, not newlineinternal error: entered unreachable code: Should have been caught by possible values in clap", 23);
    v25.action(&v0, 2);
    v20.arg(&v8, &v25);
    v8.new("zero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 15);
    v0.short(&v8, 122);
    v8.long(&v0, "zero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 15);
    v0.help(&v8, "end lines with 0 byte, not newlineinternal error: entered unreachable code: Should have been caught by possible values in clap", 34);
    v25.action(&v0, 2);
    v8.arg(&v20, &v25);
    v20.new("filessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 5);
    v0.action(&v20, 1);
    v25 = 2;
    v20.value_parser(&v0, &v25);
    v0.num_args(&v20, 0, 2);
    memcpy(&v20, &v0, 632);
    v21 = v6 | 4;
    v22 = v7;
    v0.value_hint(&v20);
    a0.arg(&v8, &v0);
    return a0;
}
