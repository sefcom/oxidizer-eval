long long uu_head::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned int v1;  // [bp-0x840]
    unsigned int v2;  // [bp-0x83c]
    unsigned long long v3;  // [bp-0x838]
    unsigned long long v4;  // [bp-0x830]
    unsigned long long v5;  // [bp-0x828]
    unsigned long long v6;  // [bp-0x820]
    unsigned int v7;  // [bp-0x5c0]
    unsigned int v8;  // [bp-0x5bc]
    char v9;  // [bp-0x5b8]
    unsigned long long v10;  // [bp-0x2fc]
    unsigned int v11;  // [bp-0x2f4]
    char v12;  // [bp-0x2f0]
    unsigned int v13;  // [bp-0x78]
    char v14;  // [bp-0x74]
    unsigned long v15;  // [bp-0x34]
    char v16;  // [bp-0x2c]
    unsigned long long v19;  // rdx

    v9.new(uucore::util_name(), v19);
    v12.version(&v9);
    v9.about(&v12);
    uucore::format_usage(&v0, "{} [FLAG]... [FILE]...BYTESbytes[-]NUMprint the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each fileLINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM l", 22);
    v12.override_usage(&v9, &v0);
    memcpy(&v9, &v12, 700);
    v10 = 549755814016 | v15;
    v11 = *((int *)&v16);
    v12.new("BYTESbytes[-]NUMprint the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each fileLINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIET", 5);
    v0.short(&v12, 99);
    v12.long(&v0, "bytes[-]NUMprint the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each fileLINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquiet", 5);
    v0.value_name(&v12);
    v12.help(&v0, "print the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each fileLINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquietsilentnever", 107);
    v3 = "BYTESbytes[-]NUMprint the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each fileLINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIET";
    v4 = 5;
    v5 = "LINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpres";
    v6 = 5;
    v0.overrides_with_all(&v12, &v3);
    memcpy(&v3, &v0, 632);
    v7 = v1 | 32;
    v8 = v2;
    v12.arg(&v9, &v3);
    v9.new("LINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpres", 5);
    v0.short(&v9, 110);
    v9.long(&v0, "linesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-i", 5);
    v0.value_name(&v9);
    v9.help(&v0, "print the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-", 118);
    v3 = "LINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpres";
    v4 = 5;
    v5 = "BYTESbytes[-]NUMprint the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each fileLINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIET";
    v6 = 5;
    v0.overrides_with_all(&v9, &v3);
    memcpy(&v3, &v0, 632);
    v7 = v1 | 32;
    v8 = v2;
    v9.arg(&v12, &v3);
    v12.new("QUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lin", 5);
    v0.short(&v12, 113);
    v12.long(&v0, "quietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 5);
    v0.visible_alias(&v12);
    v12.help(&v0, "never print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 37);
    v3 = "VERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ";
    v4 = 7;
    v5 = "QUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lin";
    v6 = 5;
    v0.overrides_with_all(&v12, &v3);
    v3.action(&v0, 2);
    v12.arg(&v9, &v3);
    v9.new("VERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 7);
    v0.short(&v9, 118);
    v9.long(&v0, "verbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 7);
    v0.help(&v9, "always print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 38);
    v3 = "QUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lin";
    v4 = 5;
    v5 = "VERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ";
    v6 = 7;
    v9.overrides_with_all(&v0, &v3);
    v0.action(&v9, 2);
    v9.arg(&v12, &v0);
    v12.new("-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 19);
    v0.long(&v12, "presume-input-pipe-presume-input-pipezero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 18);
    v12.alias(&v0);
    memcpy(&v0, &v12, 632);
    v1 = v13 | 4;
    v2 = *((int *)&v14);
    v3.action(&v0, 2);
    v12.arg(&v9, &v3);
    v9.new("ZEROkeysu128for<", 4);
    v0.short(&v9, 122);
    v9.long(&v0, "zero-terminatedline delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 15);
    v0.help(&v9, "line delimiter is NUL, not newlineinvalid number of bytes: invalid number of lines: ", 34);
    v9.overrides_with(&v0);
    v0.action(&v9, 2);
    v9.arg(&v12, &v0);
    v12.new("FILEchar", 4);
    v0.action(&v12, 1);
    v12.value_hint(&v0);
    a0.arg(&v9, &v12);
    return a0;
}
