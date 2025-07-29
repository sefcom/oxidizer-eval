long long uu_od::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned int v4;  // [bp-0x830]
    char v5;  // [bp-0x82c]
    unsigned long long v6;  // [bp-0x7ec]
    unsigned int v7;  // [bp-0x7e4]
    char v8;  // [bp-0x7e0]
    unsigned long v9;  // [bp-0x524]
    unsigned int v10;  // [bp-0x51c]
    char v11;  // [bp-0x518], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x510]
    unsigned long long v13;  // [bp-0x508]
    unsigned long long v14;  // [bp-0x500]
    unsigned int v15;  // [bp-0x2a0]
    unsigned int v16;  // [bp-0x29c]
    char v17;  // [bp-0x298]
    unsigned long long v20;  // rdx

    v8.new(uucore::util_name(), v20);
    v3.version(&v8, "(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod", 24);
    uucore::mods::locale::get_message(&v11, "od-about@", 8);
    v8.about(&v3, &v11);
    uucore::mods::locale::get_message(&v0, "od-usage", 8);
    uucore::format_usage(&v11, v1, v2);
    v3.override_usage(&v8, &v11);
    uucore::mods::locale::get_message(&v11, "od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-hel", 13);
    v8.after_help(&v3, &v11);
    memcpy(&v3, &v8, 700);
    v6 = 2252658807668968 | v9;
    v7 = v10;
    v8.new("helpNoneshimname", 4);
    v11.long(&v8, "helpNoneshimname", 4);
    uucore::mods::locale::get_message(&v17, "od-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-d", 12);
    v8.help(&v11, &v17);
    v11.action(&v8, 5);
    v8.arg(&v3, &v11);
    v3.new("address-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strin", 13);
    v11.short(&v3, 65);
    v3.long(&v11, "address-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strin", 13);
    uucore::mods::locale::get_message(&v17, "od-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4o", 21);
    v11.help(&v3, &v17);
    v17.value_name(&v11, "RADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIde", 5);
    v3.arg(&v8, &v17);
    v8.new("skip-bytessrc/uu/od/src/od.rs", 10);
    v11.short(&v8, 106);
    v8.long(&v11, "skip-bytessrc/uu/od/src/od.rs", 10);
    uucore::mods::locale::get_message(&v17, "od-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal", 18);
    v11.help(&v8, &v17);
    v17.value_name(&v11, "BYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidec", 5);
    v8.arg(&v3, &v17);
    v3.new("read-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: ou", 10);
    v11.short(&v3, 78);
    v3.long(&v11, "read-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: ou", 10);
    uucore::mods::locale::get_message(&v17, "od-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal ", 18);
    v11.help(&v3, &v17);
    v17.value_name(&v11, "BYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidec", 5);
    v3.arg(&v8, &v17);
    v8.new("endianbig: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 6);
    v11.long(&v8, "endianbig: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 6);
    uucore::mods::locale::get_message(&v17, "od-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexa", 14);
    v8.help(&v11, &v17);
    v11 = "big: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs";
    v12 = 3;
    v13 = "littleendianbig: warning: widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs";
    v14 = 6;
    v17.from(&v11);
    v11.value_parser(&v8, &v17);
    v17.value_name(&v11, "big|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte", 10);
    v8.arg(&v3, &v17);
    v3.new("stringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoc", 7);
    v11.short(&v3, 83);
    v3.long(&v11, "stringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoc", 7);
    v11.help(&v3, "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-b", 105);
    v3.default_missing_value(&v11, "3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsff", 1);
    v11.value_name(&v3, "BYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidec", 5);
    v3.arg(&v8, &v11);
    v8.new("aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffl", 1);
    v11.short(&v8, 97);
    uucore::mods::locale::get_message(&v17, "od-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsfflo", 9);
    v8.help(&v11, &v17);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("bod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating poi", 1);
    v11.short(&v3, 98);
    uucore::mods::locale::get_message(&v17, "od-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating poin", 9);
    v3.help(&v11, &v17);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("cod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double ", 1);
    v11.short(&v8, 99);
    uucore::mods::locale::get_message(&v17, "od-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double p", 9);
    v8.help(&v11, &v17);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("dod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision ", 1);
    v11.short(&v3, 100);
    uucore::mods::locale::get_message(&v17, "od-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (", 9);
    v3.help(&v11, &v17);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("Dod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) u", 1);
    v11.short(&v8, 68);
    uucore::mods::locale::get_message(&v17, "od-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) un", 10);
    v8.help(&v11, &v17);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("ooctal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformat", 1);
    v11.short(&v3, 111);
    v3.help(&v11, "octal 2-byte unitsIdecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformato", 18);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("Idecimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-he", 1);
    v11.short(&v8, 73);
    v8.help(&v11, "decimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-hel", 20);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("Lidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicateso", 1);
    v11.short(&v3, 76);
    v3.help(&v11, "decimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-hel", 20);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("idecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod", 1);
    v11.short(&v8, 105);
    v8.help(&v11, "decimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-", 20);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("lxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditio", 1);
    v11.short(&v3, 108);
    v3.help(&v11, "decimal 8-byte unitsLidecimal 4-byte unitslxhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-hel", 20);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("xhexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32tradition", 1);
    v11.short(&v8, 120);
    v8.help(&v11, "hexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditiona", 24);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("hOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  op", 1);
    v11.short(&v3, 104);
    v3.help(&v11, "hexadecimal 2-byte unitshOoctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditiona", 24);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("Ooctal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  opt", 1);
    v11.short(&v8, 79);
    v8.help(&v11, "octal 4-byte unitssdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  opti", 18);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("sdecimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-in", 1);
    v11.short(&v3, 115);
    v3.help(&v11, "decimal 2-byte unitsXhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-inv", 20);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("Xhexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-", 1);
    v11.short(&v8, 88);
    v8.help(&v11, "hexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-a", 24);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("Hefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 1);
    v11.short(&v3, 72);
    v3.help(&v11, "hexadecimal 4-byte unitsHefloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-a", 24);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("efloating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 1);
    v11.short(&v8, 101);
    v8.help(&v11, "floating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 46);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("ffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 1);
    v11.short(&v3, 102);
    v3.help(&v11, "floating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 46);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("Fformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 1);
    v11.short(&v8, 70);
    v8.help(&v11, "floating point double precision (64-bit) unitsffloating point double precision (32-bit) unitsFformatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 46);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("formatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 6);
    v11.short(&v3, 116);
    v3.long(&v11, "formatod-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 6);
    uucore::mods::locale::get_message(&v17, "od-help-formatod-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 14);
    v11.help(&v3, &v17);
    v3.action(&v11, 1);
    v11.num_args(&v3);
    v17.value_name(&v11, "TYPE\"`$\\EADV", 4);
    v3.arg(&v8, &v17);
    v8.new("output-duplicatesread-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsN", 17);
    v11.short(&v8, 118);
    v8.long(&v11, "output-duplicatesread-bytesaddress-radixod-error-radix-invalidod-error-radix-emptymsgod-error-invalid-inputs(uutils coreutils) 0.1.0od-after-helpod-help-helpod-help-address-radixRADIXod-help-skip-bytesBYTESod-help-read-bytesod-help-endianbig|littlestringsN", 17);
    uucore::mods::locale::get_message(&v17, "od-help-output-duplicatesod-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 25);
    v11.help(&v8, &v17);
    v17.action(&v11, 2);
    v8.arg(&v3, &v17);
    v3.new("widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 5);
    v11.short(&v3, 119);
    v3.long(&v11, "widthmin\nradixod-error-invalid-endianskip-bytessrc/uu/od/src/od.rs", 5);
    uucore::mods::locale::get_message(&v17, "od-help-width32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 13);
    v11.help(&v3, &v17);
    v3.default_missing_value(&v11, "32traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 2);
    v11.value_name(&v3, "BYTESod-help-read-bytesod-help-endianbig|littlestringsNotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified.3aod-help-abod-help-bcod-help-cdod-help-dDod-help-d4ooctal 2-byte unitsIdecimal 8-byte unitsLidec", 5);
    v17.num_args(&v11);
    v3.arg(&v8, &v17);
    v8.new("traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 11);
    v11.long(&v8, "traditionalod-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 11);
    uucore::mods::locale::get_message(&v17, "od-help-traditional  optionvalueod-error-invalid-suffixod-error-argument-too-largeod-error-invalid-argument", 19);
    v8.help(&v11, &v17);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("FILENAME", 8);
    memcpy(&v11, &v3, 632);
    v15 = v4 | 4;
    v16 = *((int *)&v5);
    v3.action(&v11, 1);
    v11.value_hint(&v3, 3);
    a0.arg(&v8, &v11);
    ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
