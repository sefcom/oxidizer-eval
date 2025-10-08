long long uu_numfmt::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xaa8]
    unsigned long long v2;  // [bp-0xaa0]
    unsigned long long v3;  // [bp-0xa98]
    unsigned long long v4;  // [bp-0xa90]
    unsigned long long v5;  // [bp-0xa88]
    unsigned long long v6;  // [bp-0xa80]
    unsigned long long v7;  // [bp-0xa78]
    unsigned long long v8;  // [bp-0xa70]
    unsigned long long v9;  // [bp-0xa68]
    unsigned int v10;  // [bp-0x838]
    unsigned int v11;  // [bp-0x834]
    char v12;  // [bp-0x830]
    unsigned int v13;  // [bp-0x5b8]
    unsigned int v14;  // [bp-0x5b4]
    unsigned long long v15;  // [bp-0x574]
    unsigned int v16;  // [bp-0x56c]
    char v17;  // [bp-0x568]
    unsigned long v18;  // [bp-0x2ac]
    unsigned int v19;  // [bp-0x2a4]
    char v20;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x298]
    unsigned long long v22;  // [bp-0x290]
    unsigned long long v23;  // [bp-0x288]
    unsigned long long v24;  // [bp-0x280]
    unsigned long long v25;  // [bp-0x278]
    unsigned long long v26;  // [bp-0x270]
    unsigned long long v27;  // [bp-0x268]
    unsigned int v28;  // [bp-0x28]
    unsigned int v29;  // [bp-0x24]
    unsigned long long v32;  // rdx

    v17.new(uucore::util_name(), v32);
    v12.version(&v17);
    v17.about(&v12);
    v12.after_help(&v17);
    uucore::format_usage(&v0, "{} [OPTION]... [NUMBER]...Xuse X instead of whitespace for field delimiterreplace the numbers in these input fields; see FIELDS belowFIELDS1use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNI", 26);
    v17.override_usage(&v12, &v0);
    memcpy(&v12, &v17, 700);
    v15 = 549755814020 | v18;
    v16 = v19;
    v17.new("delimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 9);
    v0.short(&v17, 100);
    v17.long(&v0, "delimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 9);
    v0.value_name(&v17, "Xuse X instead of whitespace for field delimiterreplace the numbers in these input fields; see FIELDS belowFIELDS1use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input u", 1);
    v20.help(&v0, "use X instead of whitespace for field delimiterreplace the numbers in these input fields; see FIELDS belowFIELDS1use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input un", 47);
    v17.arg(&v12, &v20);
    v12.new("fieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 5);
    v0.long(&v12, "fieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 5);
    v12.help(&v0, "replace the numbers in these input fields; see FIELDS belowFIELDS1use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input unit sizeNauto-scale output numbers to UNITs; see", 59);
    v0.value_name(&v12, "FIELDS1use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input unit sizeNauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characte", 6);
    memcpy(&v12, &v0, 632);
    v13 = v10 | 32;
    v14 = v11;
    v0.default_value(&v12, "1use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input unit sizeNauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; po", 1);
    v12.arg(&v17, &v0);
    v17.new("formatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
    v0.long(&v17, "formatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
    v17.help(&v0, "use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input unit sizeNauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; pos", 68);
    v0.value_name(&v17, "FORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input unit sizeNauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ign", 6);
    memcpy(&v20, &v0, 632);
    v28 = v10 | 32;
    v29 = v11;
    v17.arg(&v12, &v20);
    v12.new("fromkindAuto/", 4);
    v0.long(&v12, "fromkindAuto/", 4);
    v12.help(&v0, "auto-scale input numbers to UNITs; see UNIT belowspecify the input unit sizeNauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored i", 49);
    v0.value_name(&v12, "UNITSomedumb", 4);
    v20.default_value(&v0, "nonedownhelpNoneshim", 4);
    v12.arg(&v17, &v20);
    v17.new("from-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 9);
    v0.long(&v17, "from-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 9);
    v17.help(&v0, "specify the input unit sizeNauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to a", 27);
    v0.value_name(&v17, "Nauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a white", 1);
    v20.default_value(&v0, "1use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input unit sizeNauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; po", 1);
    v17.arg(&v12, &v20);
    v12.new("tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 2);
    v0.long(&v12, "tofrom-unitto-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 2);
    v12.help(&v0, "auto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whites", 50);
    v0.value_name(&v12, "UNITSomedumb", 4);
    v20.default_value(&v0, "nonedownhelpNoneshim", 4);
    v12.arg(&v17, &v20);
    v17.new("to-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 7);
    v0.long(&v17, "to-unitpaddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 7);
    v17.help(&v0, "the output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is foundprint (without converting) the first ", 20);
    v0.value_name(&v17, "Nauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a white", 1);
    v20.default_value(&v0, "1use printf style floating-point FORMAT; see FORMAT below for detailsFORMATauto-scale input numbers to UNITs; see UNIT belowspecify the input unit sizeNauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; po", 1);
    v17.arg(&v12, &v20);
    v12.new("paddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 7);
    v0.long(&v12, "paddingheaderfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 7);
    v12.help(&v0, "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is foundprint (without converting) the first N header lines; N de", 199);
    v0.value_name(&v12, "Nauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a white", 1);
    v12.arg(&v17, &v0);
    v17.new("headerfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
    v0.long(&v17, "headerfieldformatdelimiterroundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
    v17.help(&v0, "print (without converting) the first N header lines; N defaults to 1 if not specifieduse METHOD for rounding when scalingMETHODprint SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIXSUFFIXset the failure mode for invalid i", 85);
    v0.num_args(&v17);
    v17.value_name(&v0, "Nauto-scale output numbers to UNITs; see UNIT belowthe output unit sizepad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a white", 1);
    v0.default_missing_value(&v17);
    memcpy(&v20, &v0, 632);
    v28 = 0x400 | v10;
    v29 = v11;
    v17.arg(&v12, &v20);
    v12.new("roundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 5);
    v0.long(&v12, "roundsuffixinvalidzero-terminatedinvalid padding value invalid header value ", 5);
    v12.help(&v0, "use METHOD for rounding when scalingMETHODprint SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIXSUFFIXset the failure mode for invalid inputINVALIDline delimiter is NUL, not newlineNUMBERIoErrorIllegalArgumentFormattingError", 36);
    v0.value_name(&v12, "METHODprint SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIXSUFFIXset the failure mode for invalid inputINVALIDline delimiter is NUL, not newlineNUMBERIoErrorIllegalArgumentFormattingError", 6);
    v12.default_value(&v0, "from-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap", 9);
    v0 = "upfrom-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
    v1 = 2;
    v2 = "downhelpNoneshim";
    v3 = 4;
    v4 = "from-zerotowards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
    v5 = 9;
    v6 = "towards-zeronearestinternal error: entered unreachable code: Should be restricted by clap";
    v7 = 12;
    v8 = "nearestinternal error: entered unreachable code: Should be restricted by clap";
    v9 = 7;
    v20.from(&v0);
    v0.value_parser(&v12, &v20);
    v12.arg(&v17, &v0);
    v17.new("suffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
    v0.long(&v17, "suffixinvalidzero-terminatedinvalid padding value invalid header value ", 6);
    v17.help(&v0, "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIXSUFFIXset the failure mode for invalid inputINVALIDline delimiter is NUL, not newlineNUMBERIoErrorIllegalArgumentFormattingError", 89);
    v0.value_name(&v17, "SUFFIXset the failure mode for invalid inputINVALIDline delimiter is NUL, not newlineNUMBERIoErrorIllegalArgumentFormattingError", 6);
    v17.arg(&v12, &v0);
    v12.new("invalidzero-terminatedinvalid padding value invalid header value ", 7);
    v0.long(&v12, "invalidzero-terminatedinvalid padding value invalid header value ", 7);
    v12.help(&v0, "set the failure mode for invalid inputINVALIDline delimiter is NUL, not newlineNUMBERIoErrorIllegalArgumentFormattingError", 38);
    v0.default_value(&v12, "abortignoreUnknown invalid mode: YZEPTGMKk: ", 5);
    v20 = "abortignoreUnknown invalid mode: YZEPTGMKk: ";
    v21 = 5;
    v22 = "failkeysu128for<";
    v23 = 4;
    v24 = "warnZero";
    v25 = 4;
    v26 = "ignoreUnknown invalid mode: YZEPTGMKk: ";
    v27 = 6;
    v12.value_parser(&v0, &v20);
    v0.value_name(&v12, "INVALIDline delimiter is NUL, not newlineNUMBERIoErrorIllegalArgumentFormattingError", 7);
    v12.arg(&v17, &v0);
    v17.new("zero-terminatedinvalid padding value invalid header value ", 15);
    v0.long(&v17, "zero-terminatedinvalid padding value invalid header value ", 15);
    v17.short(&v0, 122);
    v0.help(&v17, "line delimiter is NUL, not newlineNUMBERIoErrorIllegalArgumentFormattingError", 34);
    v20.action(&v0, 2);
    v17.arg(&v12, &v20);
    v12.new("NUMBERIoErrorIllegalArgumentFormattingError", 6);
    memcpy(&v0, &v12, 632);
    v10 = v13 | 4;
    v11 = v14;
    v12.action(&v0, 1);
    a0.arg(&v17, &v12);
    return a0;
}
