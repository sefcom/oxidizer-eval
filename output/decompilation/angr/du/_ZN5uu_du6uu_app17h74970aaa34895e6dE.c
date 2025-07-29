long long uu_du::uu_app(unsigned long long a0)
{
    void* v0;  // [bp-0xb58], Other Possible Types: char
    unsigned long long v1;  // [bp-0xb50]
    int v2;  // [bp-0xb48], Other Possible Types: void*
    unsigned long long v3;  // [bp-0xb40]
    int v4;  // [bp-0xb38]
    int v5;  // [bp-0xb28], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xb20]
    unsigned long long v7;  // [bp-0xb18], Other Possible Types: char
    int v8;  // [bp-0xb10]
    int v9;  // [bp-0xb00]
    int v10;  // [bp-0xaf0]
    int v11;  // [bp-0xae0]
    unsigned long long v12;  // [bp-0xad0]
    int v13;  // [bp-0xac8]
    int v14;  // [bp-0xab8]
    int v15;  // [bp-0xaa8]
    char v16;  // [bp-0xa98]
    unsigned long long v17;  // [bp-0xa88]
    unsigned int v18;  // [bp-0x8e0]
    unsigned int v19;  // [bp-0x8dc]
    char v20;  // [bp-0x8d8]
    unsigned long long v21;  // [bp-0x8d0]
    unsigned long long v22;  // [bp-0x8c8]
    int v23;  // [bp-0x8c0]
    char v24;  // [bp-0x8b0]
    unsigned int v25;  // [bp-0x638]
    char v26;  // [bp-0x634]
    unsigned long long v27;  // [bp-0x5f4]
    unsigned int v28;  // [bp-0x5ec]
    char v29;  // [bp-0x5e8]
    unsigned int v30;  // [bp-0x370]
    char v31;  // [bp-0x36c]
    unsigned long v32;  // [bp-0x32c]
    unsigned int v33;  // [bp-0x324]
    int v34;  // [bp-0x320], Other Possible Types: char
    int v35;  // [bp-0x310]
    int v36;  // [bp-0x300]
    char v37;  // [bp-0x2f0]
    char v38;  // [bp-0x2e0]
    char v39;  // [bp-0xa0]
    int v40;  // [bp-0x90]
    int v41;  // [bp-0x80]
    int v42;  // [bp-0x70]
    unsigned long long v43;  // [bp-0x60]
    int v44;  // [bp-0x58], Other Possible Types: char
    int v45;  // [bp-0x48]
    int v46;  // [bp-0x38]
    int v47;  // [bp-0x28]
    char v48;  // [bp-0x18]
    unsigned long long v51;  // rdx

    v29.new(uucore::util_name(), v51);
    v24.version(&v29, "(uutils coreutils) 0.1.0du-after-helpdu-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-blo", 24);
    uucore::mods::locale::get_message(&v0, "du-about", 8);
    v29.about(&v24, &v0);
    uucore::mods::locale::get_message(&v0, "du-after-helpdu-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu", 13);
    v24.after_help(&v29, &v0);
    uucore::mods::locale::get_message(&v20, "du-usage", 8);
    uucore::format_usage(&v0, v21, v22);
    v29.override_usage(&v24, &v0);
    memcpy(&v24, &v29, 700);
    v27 = 2252349570023552 | v32;
    v28 = v33;
    v29.new("helpNonelineshimname", 4);
    v0.long(&v29, "helpNonelineshimname", 4);
    uucore::mods::locale::get_message(&v34, "du-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-l", 18);
    v29.help(&v0, &v34);
    v0.action(&v29, 5);
    v29.arg(&v24, &v0);
    v24.new("alldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-", 3);
    v0.short(&v24, 97);
    v24.long(&v0, "alldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-", 3);
    uucore::mods::locale::get_message(&v34, "du-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-hel", 11);
    v0.help(&v24, &v34);
    v34.action(&v0, 2);
    v24.arg(&v29, &v34);
    v29.new("apparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferen", 13);
    v0.long(&v29, "apparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferen", 13);
    uucore::mods::locale::get_message(&v34, "du-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-der", 21);
    v29.help(&v0, &v34);
    v0.action(&v29, 2);
    v29.arg(&v24, &v0);
    v24.new("block-size\nsrc/uu/du/src/du.rs", 10);
    v0.short(&v24, 66);
    v24.long(&v0, "block-size\nsrc/uu/du/src/du.rs", 10);
    v0.value_name(&v24, "SIZE", 4);
    uucore::mods::locale::get_message(&v24, "du-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-deref", 18);
    v34.help(&v0, &v24);
    v24.arg(&v29, &v34);
    v29.new("bbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-d", 1);
    v0.short(&v29, 98);
    v29.long(&v0, "bytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-de", 5);
    uucore::mods::locale::get_message(&v34, "du-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-derefer", 13);
    v0.help(&v29, &v34);
    v34.action(&v0, 2);
    v29.arg(&v24, &v34);
    v24.new("ctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-", 1);
    v0.long(&v24, "totaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-b", 5);
    v24.short(&v0, 99);
    uucore::mods::locale::get_message(&v34, "du-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-", 13);
    v0.help(&v24, &v34);
    v34.action(&v0, 2);
    v24.arg(&v29, &v34);
    v29.new("dmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-he", 1);
    v0.short(&v29, 100);
    v29.long(&v0, "max-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-hel", 9);
    v0.value_name(&v29, "Ndu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSse", 1);
    uucore::mods::locale::get_message(&v29, "du-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSsep", 17);
    v34.help(&v0, &v29);
    v29.arg(&v24, &v34);
    v24.new("hhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help", 1);
    v0.long(&v24, "human-readabledu-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-", 14);
    v24.short(&v0, 104);
    uucore::mods::locale::get_message(&v34, "du-help-human-readableinodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirss", 22);
    v0.help(&v24, &v34);
    v34.action(&v0, 2);
    v24.arg(&v29, &v34);
    v29.new("inodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summa", 6);
    v0.long(&v29, "inodesdu-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summa", 6);
    uucore::mods::locale::get_message(&v34, "du-help-inodeskdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesi", 14);
    v29.help(&v0, &v34);
    v0.action(&v29, 2);
    v29.arg(&v24, &v0);
    v24.new("kdu-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-", 1);
    v0.short(&v24, 107);
    uucore::mods::locale::get_message(&v34, "du-help-block-size-1klcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-f", 21);
    v24.help(&v0, &v34);
    v0.action(&v24, 2);
    v24.arg(&v29, &v0);
    v29.new("lcount-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one", 1);
    v0.short(&v29, 108);
    v29.long(&v0, "count-linksdu-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-", 11);
    uucore::mods::locale::get_message(&v34, "du-help-count-linksdereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-system", 19);
    v0.help(&v29, &v34);
    v34.action(&v0, 2);
    v29.arg(&v24, &v34);
    v24.new("dereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-th", 11);
    v0.short(&v24, 76);
    v24.long(&v0, "dereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-th", 11);
    uucore::mods::locale::get_message(&v34, "du-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-h", 19);
    v0.help(&v24, &v34);
    v34.action(&v0, 2);
    v24.arg(&v29, &v34);
    v29.new("dereference-args", 16);
    v0.short(&v29, 68);
    v29.visible_short_alias(&v0, 72);
    v0.long(&v29, "dereference-args", 16);
    uucore::mods::locale::get_message(&v34, "du-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNd", 24);
    v29.help(&v0, &v34);
    v0.action(&v29, 2);
    v29.arg(&v24, &v0);
    v24.new("no-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-ex", 14);
    v0.short(&v24, 80);
    v24.long(&v0, "no-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-ex", 14);
    uucore::mods::locale::get_message(&v34, "du-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfile", 22);
    v0.help(&v24, &v34);
    v24.overrides_with(&v0, "dereferencedu-help-dereferencedu-help-dereference-argsno-dereferencedu-help-no-dereferencemdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-th", 11);
    v0.action(&v24, 2);
    v24.arg(&v29, &v0);
    v29.new("mdu-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-", 1);
    v0.short(&v29, 109);
    uucore::mods::locale::get_message(&v34, "du-help-block-size-1m0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-f", 21);
    v29.help(&v0, &v34);
    v0.action(&v29, 2);
    v29.arg(&v24, &v0);
    v24.new("0du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbir", 1);
    v0.short(&v24, 48);
    v24.long(&v0, "nullBOLDBlue", 4);
    uucore::mods::locale::get_message(&v34, "du-help-nullSseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirt", 12);
    v0.help(&v24, &v34);
    v34.action(&v0, 2);
    v24.arg(&v29, &v34);
    v29.new("Sseparate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-tim", 1);
    v0.short(&v29, 83);
    v29.long(&v0, "separate-dirsdu-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-time", 13);
    uucore::mods::locale::get_message(&v34, "du-help-separate-dirsssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTY", 21);
    v0.help(&v29, &v34);
    v34.action(&v0, 2);
    v29.arg(&v24, &v34);
    v24.new("ssummarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleo", 1);
    v0.short(&v24, 115);
    v24.long(&v0, "summarizedu-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleop", 9);
    uucore::mods::locale::get_message(&v34, "du-help-summarizesidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvalue", 17);
    v0.help(&v24, &v34);
    v34.action(&v0, 2);
    v24.arg(&v29, &v34);
    v29.new("sidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-", 2);
    v0.long(&v29, "sidu-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-", 2);
    uucore::mods::locale::get_message(&v34, "du-help-sione-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-su", 10);
    v29.help(&v0, &v34);
    v0.action(&v29, 2);
    v29.arg(&v24, &v0);
    v24.new("one-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-err", 15);
    v0.short(&v24, 120);
    v24.long(&v0, "one-file-systemdu-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-err", 15);
    uucore::mods::locale::get_message(&v34, "du-help-one-file-systemthresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too", 23);
    v0.help(&v24, &v34);
    v34.action(&v0, 2);
    v24.arg(&v29, &v34);
    v29.new("thresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-", 9);
    v0.short(&v29, 116);
    v29.long(&v0, "thresholddu-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-", 9);
    v0.value_name(&v29, "SIZE", 4);
    v29.num_args(&v0);
    memcpy(&v0, &v29, 632);
    v18 = v30 | 32;
    v19 = *((int *)&v31);
    uucore::mods::locale::get_message(&v29, "du-help-thresholddu-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentI", 17);
    v34.help(&v0, &v29);
    v29.arg(&v24, &v34);
    v24.new("verbosedu-verbose-adding-to-exclude-list: \t-", 7);
    v0.short(&v24, 118);
    v24.long(&v0, "verbosedu-verbose-adding-to-exclude-list: \t-", 7);
    uucore::mods::locale::get_message(&v34, "du-help-verbosePATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArg", 15);
    v0.help(&v24, &v34);
    v34.action(&v0, 2);
    v24.arg(&v29, &v34);
    v29.new("excludeverbosedu-verbose-adding-to-exclude-list: \t-", 7);
    v0.long(&v29, "excludeverbosedu-verbose-adding-to-exclude-list: \t-", 7);
    v29.value_name(&v0, "PATTERNdu-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthC", 7);
    uucore::mods::locale::get_message(&v34, "du-help-excludedu-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflict", 15);
    v0.help(&v29, &v34);
    v34.action(&v0, 1);
    v29.arg(&v24, &v34);
    v24.new("exclude-fromexcludeverbosedu-verbose-adding-to-exclude-list: \t-", 12);
    v0.short(&v24, 88);
    v24.long(&v0, "exclude-fromexcludeverbosedu-verbose-adding-to-exclude-list: \t-", 12);
    v0.value_name(&v24, "FILEWORDcharJuly", 4);
    v24.value_hint(&v0, 3);
    uucore::mods::locale::get_message(&v34, "du-help-exclude-fromfiles0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyl", 20);
    v0.help(&v24, &v34);
    v34.action(&v0, 1);
    v24.arg(&v29, &v34);
    v29.new("files0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgIn", 11);
    v0.long(&v29, "files0-fromdu-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgIn", 11);
    v29.value_name(&v0, "FILEWORDcharJuly", 4);
    v0.value_hint(&v29, 3);
    uucore::mods::locale::get_message(&v34, "du-help-files0-fromaccessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGlober", 19);
    v29.help(&v0, &v34);
    v0.action(&v29, 1);
    v29.arg(&v24, &v0);
    v24.new("timecodetip:", 4);
    v0.long(&v24, "timecodetip:", 4);
    v24.value_name(&v0, "WORDcharJuly", 4);
    memcpy(&v0, &v24, 632);
    v18 = 128 | v25;
    v19 = *((int *)&v26);
    v24.num_args(&v0);
    v5 = "atimectime(uutils coreutils) 0.1.0du-after-helpdu-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskd";
    v6 = 5;
    v3 = 0x8000000000000000;
    v4 = v23;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v34.alias(&v0, "accessusestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-err", 6);
    v39.alias(&v34, "usestatusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-error-inv", 3);
    v5 = "ctime(uutils coreutils) 0.1.0du-after-helpdu-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-depthNdu-help-max-depthhhuman-readabledu-help-human-readableinodesdu-help-inodeskdu-hel";
    v6 = 5;
    v3 = 0x8000000000000000;
    v4 = v23;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v44.alias(&v0, "statusbirthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-error-invali", 6);
    v5 = "creation";
    v6 = 8;
    v3 = 0x8000000000000000;
    v4 = v23;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v34.alias(&v0, "birthdu-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-error-invalid-max-", 5);
    memcpy(&v0, &v39, 16);
    v2 = v40;
    v4 = v41;
    v5 = v42;
    v7 = v43;
    v8 = v44;
    v9 = v45;
    v10 = v46;
    v11 = v47;
    v12 = *((long long *)&v48);
    v17 = *((long long *)&v38);
    memcpy(&v16, &v37, 16);
    v15 = v36;
    v14 = v35;
    v13 = v34;
    v34.from(&v0);
    v0.value_parser(&v24, &v34);
    uucore::mods::locale::get_message(&v24, "du-help-timetime-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-error-invalid-max-depth", 12);
    v34.help(&v0, &v24);
    v24.arg(&v29, &v34);
    v29.new("time-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-error-invalid-max-depthdu-error-sum", 10);
    v0.long(&v29, "time-styleSTYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-error-invalid-max-depthdu-error-sum", 10);
    v29.value_name(&v0, "STYLEdu-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-error-invalid-max-depthdu-error-summarize-dep", 5);
    uucore::mods::locale::get_message(&v34, "du-help-time-styleoptionvaluedu-error-invalid-suffixdu-error-argument-too-largedu-error-invalid-argumentInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGloberrorstyledepthdu-error-invalid-max-depthdu-error-summarize-depth-co", 18);
    v0.help(&v29, &v34);
    v29.arg(&v24, &v0);
    v24.new("FILEWORDcharJuly", 4);
    memcpy(&v0, &v24, 632);
    v18 = v25 | 4;
    v19 = *((int *)&v26);
    v24.value_hint(&v0, 2);
    v0.action(&v24, 1);
    a0.arg(&v29, &v0);
    ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&v20);
    return a0;
}
