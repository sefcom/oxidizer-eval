long long uu_numfmt::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xaa0]
    unsigned long long v5;  // [bp-0xa98]
    unsigned long long v6;  // [bp-0xa90]
    unsigned long long v7;  // [bp-0xa88]
    unsigned long long v8;  // [bp-0xa80]
    unsigned long long v9;  // [bp-0xa78]
    unsigned long long v10;  // [bp-0xa70]
    unsigned long long v11;  // [bp-0xa68]
    unsigned long long v12;  // [bp-0xa60]
    unsigned int v13;  // [bp-0x830]
    unsigned int v14;  // [bp-0x82c]
    char v15;  // [bp-0x828]
    unsigned int v16;  // [bp-0x5b0]
    unsigned int v17;  // [bp-0x5ac]
    unsigned long long v18;  // [bp-0x56c]
    unsigned int v19;  // [bp-0x564]
    char v20;  // [bp-0x560]
    unsigned long v21;  // [bp-0x2a4]
    unsigned int v22;  // [bp-0x29c]
    char v23;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x290]
    unsigned long long v25;  // [bp-0x288]
    unsigned long long v26;  // [bp-0x280]
    unsigned long long v27;  // [bp-0x278]
    unsigned long long v28;  // [bp-0x270]
    unsigned long long v29;  // [bp-0x268]
    unsigned long long v30;  // [bp-0x260]
    unsigned int v31;  // [bp-0x20]
    unsigned int v32;  // [bp-0x1c]
    unsigned long long v35;  // rdx

    v20.new(uucore::util_name(), v35);
    v15.version(&v20, "(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-delimiternumfmt-help-fieldFIELDS1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt", 24);
    uucore::mods::locale::get_message(&v3, "numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-delimiternumfmt-help-fieldFIELDS1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt", 12);
    v20.about(&v15, &v3);
    uucore::mods::locale::get_message(&v3, "numfmt-after-helpnumfmt-usageXnumfmt-help-delimiternumfmt-help-fieldFIELDS1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invali", 17);
    v15.after_help(&v20, &v3);
    uucore::mods::locale::get_message(&v0, "numfmt-usageXnumfmt-help-delimiternumfmt-help-fieldFIELDS1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVAL", 12);
    uucore::format_usage(&v3, v1, v2);
    v20.override_usage(&v15, &v3);
    memcpy(&v15, &v20, 700);
    v18 = 549755814020 | v21;
    v19 = v22;
    v20.new("delimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfm", 9);
    v3.short(&v20, 100);
    v20.long(&v3, "delimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfm", 9);
    v3.value_name(&v20, "Xnumfmt-help-delimiternumfmt-help-fieldFIELDS1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-hel", 1);
    uucore::mods::locale::get_message(&v20, "numfmt-help-delimiternumfmt-help-fieldFIELDS1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help", 21);
    v23.help(&v3, &v20);
    v20.arg(&v15, &v23);
    v15.new("fieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-afte", 5);
    v3.long(&v15, "fieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-afte", 5);
    uucore::mods::locale::get_message(&v23, "numfmt-help-fieldFIELDS1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBE", 17);
    v15.help(&v3, &v23);
    v3.value_name(&v15, "FIELDS1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalAr", 6);
    memcpy(&v15, &v3, 632);
    v16 = v13 | 32;
    v17 = v14;
    v3.default_value(&v15, "1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 1);
    v15.arg(&v20, &v3);
    v20.new("formatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-hel", 6);
    v3.long(&v20, "formatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-hel", 6);
    uucore::mods::locale::get_message(&v23, "numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 18);
    v20.help(&v3, &v23);
    v3.value_name(&v20, "FORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 6);
    memcpy(&v23, &v3, 632);
    v31 = v13 | 32;
    v32 = v14;
    v20.arg(&v15, &v23);
    v15.new("fromkindAuto/", 4);
    v3.long(&v15, "fromkindAuto/", 4);
    uucore::mods::locale::get_message(&v23, "numfmt-help-from             at ", 16);
    v15.help(&v3, &v23);
    v3.value_name(&v15, "UNITSomedumb", 4);
    v23.default_value(&v3, "nonedownhelpNoneshimname", 4);
    v15.arg(&v20, &v23);
    v20.new("from-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils)", 9);
    v3.long(&v20, "from-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils)", 9);
    uucore::mods::locale::get_message(&v23, "numfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 21);
    v20.help(&v3, &v23);
    v3.value_name(&v20, "Nnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 1);
    v23.default_value(&v3, "1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 1);
    v20.arg(&v15, &v23);
    v15.new("tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutil", 2);
    v3.long(&v15, "tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutil", 2);
    uucore::mods::locale::get_message(&v23, "numfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 14);
    v15.help(&v3, &v23);
    v3.value_name(&v15, "UNITSomedumb", 4);
    v23.default_value(&v3, "nonedownhelpNoneshimname", 4);
    v15.arg(&v20, &v23);
    v20.new("to-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0num", 7);
    v3.long(&v20, "to-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0num", 7);
    uucore::mods::locale::get_message(&v23, "numfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 19);
    v20.help(&v3, &v23);
    v3.value_name(&v20, "Nnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 1);
    v23.default_value(&v3, "1numfmt-help-formatFORMATnumfmt-help-from-unitNnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 1);
    v20.arg(&v15, &v23);
    v15.new("paddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-abo", 7);
    v3.long(&v15, "paddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-abo", 7);
    uucore::mods::locale::get_message(&v23, "numfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 19);
    v15.help(&v3, &v23);
    v3.value_name(&v15, "Nnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 1);
    v15.arg(&v20, &v3);
    v20.new("headerfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfm", 6);
    v3.long(&v20, "headerfieldformatdelimiterroundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfm", 6);
    uucore::mods::locale::get_message(&v23, "numfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 18);
    v20.help(&v3, &v23);
    v3.num_args(&v20);
    v20.value_name(&v3, "Nnumfmt-help-tonumfmt-help-to-unitnumfmt-help-paddingnumfmt-help-headernumfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 1);
    v3.default_missing_value(&v20);
    memcpy(&v23, &v3, 632);
    v31 = 0x400 | v13;
    v32 = v14;
    v20.arg(&v15, &v23);
    v15.new("roundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXn", 5);
    v3.long(&v15, "roundsuffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXn", 5);
    uucore::mods::locale::get_message(&v23, "numfmt-help-roundMETHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 17);
    v15.help(&v3, &v23);
    v3.value_name(&v15, "METHODnumfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 6);
    v15.default_value(&v3, "from-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 9);
    v3 = "upfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
    v4 = 2;
    v5 = "downhelpNoneshimname";
    v6 = 4;
    v7 = "from-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
    v8 = 9;
    v9 = "towards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
    v10 = 12;
    v11 = "nearestinternal error: entered unreachable code: Should be restricted by clap";
    v12 = 7;
    v23.from(&v3);
    v3.value_parser(&v15, &v23);
    v15.arg(&v20, &v3);
    v20.new("suffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt", 6);
    v3.long(&v20, "suffixinvalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt", 6);
    uucore::mods::locale::get_message(&v23, "numfmt-help-suffixSUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 18);
    v20.help(&v3, &v23);
    v3.value_name(&v20, "SUFFIXnumfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 6);
    v20.arg(&v15, &v3);
    v15.new("invalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-", 7);
    v3.long(&v15, "invalidzero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-", 7);
    uucore::mods::locale::get_message(&v23, "numfmt-help-invalidabortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 19);
    v15.help(&v3, &v23);
    v3.default_value(&v15, "abortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 5);
    v23 = "abortignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError";
    v24 = 5;
    v25 = "failkeysu128";
    v26 = 4;
    v27 = "warnmanyZero";
    v28 = 4;
    v29 = "ignoreINVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError";
    v30 = 6;
    v15.value_parser(&v3, &v23);
    v3.value_name(&v15, "INVALIDnumfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 7);
    v15.arg(&v20, &v3);
    v20.new("zero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-delimit", 15);
    v3.long(&v20, "zero-terminatednumfmt-error-grouping-cannot-be-combined-with-tovaluenumfmt-error-invalid-paddingnumfmt-error-invalid-header-numfmt-error-delimiter-must-be-single-character(uutils coreutils) 0.1.0numfmt-aboutnumfmt-after-helpnumfmt-usageXnumfmt-help-delimit", 15);
    v20.short(&v3, 122);
    uucore::mods::locale::get_message(&v23, "numfmt-help-zero-terminatedNUMBERIoErrorIllegalArgumentFormattingError", 27);
    v3.help(&v20, &v23);
    v23.action(&v3, 2);
    v20.arg(&v15, &v23);
    v15.new("NUMBERIoErrorIllegalArgumentFormattingError", 6);
    memcpy(&v3, &v15, 632);
    v13 = v16 | 4;
    v14 = v17;
    v15.action(&v3, 1);
    a0.arg(&v20, &v15);
    ::0x4a7850::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
