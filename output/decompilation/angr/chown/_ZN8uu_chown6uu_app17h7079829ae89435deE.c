long long uu_chown::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0x7fc]
    unsigned int v2;  // [bp-0x7f4]
    char v3;  // [bp-0x7f0]
    unsigned long v4;  // [bp-0x534]
    unsigned int v5;  // [bp-0x52c]
    char v6;  // [bp-0x528]
    char v7;  // [bp-0x2a8]
    unsigned long long v10;  // rdx

    v0.new(uucore::util_name(), v10);
    v3.version(&v0);
    v0.about(&v3);
    uucore::format_usage(&v6, "{} [OPTION]... [OWNER][:[GROUP]] FILE...\n{} [OPTION]... --reference=RFILE FILE...Print help information.changeslike verbose but report only when a change is madechange the owner and/or group of each file only if its current owner and/or group match those s", 81);
    v3.override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 2252349570023552 | v4;
    v2 = v5;
    v3.new("helpNoneshim", 4);
    v6.long(&v3, "helpNoneshim", 4);
    v3.help(&v6, "Print help information.changeslike verbose but report only when a change is madechange the owner and/or group of each file only if its current owner and/or group match those specified here. Either may be omitted, in which case a match is not required for t", 23);
    v6.action(&v3, 5);
    v3.arg(&v0, &v6);
    v0.new("changeslike verbose but report only when a change is madechange the owner and/or group of each file only if its current owner and/or group match those specified here. Either may be omitted, in which case a match is not required for the omitted attributeCUR", 7);
    v6.short(&v0, 99);
    v0.long(&v6, "changeslike verbose but report only when a change is madechange the owner and/or group of each file only if its current owner and/or group match those specified here. Either may be omitted, in which case a match is not required for the omitted attributeCUR", 7);
    v6.help(&v0, "like verbose but report only when a change is madechange the owner and/or group of each file only if its current owner and/or group match those specified here. Either may be omitted, in which case a match is not required for the omitted attributeCURRENT_OW", 50);
    v7.action(&v6, 2);
    v0.arg(&v3, &v7);
    v3.new("fromkindAuto/", 4);
    v6.long(&v3, "fromkindAuto/", 4);
    v3.help(&v6, "change the owner and/or group of each file only if its current owner and/or group match those specified here. Either may be omitted, in which case a match is not required for the omitted attributeCURRENT_OWNER:CURRENT_GROUPpreserve-rootfail to operate recu", 196);
    v6.value_name(&v3, "CURRENT_OWNER:CURRENT_GROUPpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)quietsuppress most error messagesrecursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER", 27);
    v3.arg(&v0, &v6);
    v0.new("preserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)quietsuppress most error messagesrecursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentver", 13);
    v6.long(&v0, "preserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)quietsuppress most error messagesrecursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentver", 13);
    v0.help(&v6, "fail to operate recursively on '/'do not treat '/' specially (the default)quietsuppress most error messagesrecursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a ", 34);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("no-preserve-root", 16);
    v6.long(&v3, "no-preserve-root", 16);
    v3.help(&v6, "do not treat '/' specially (the default)quietsuppress most error messagesrecursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a diagnostic for every file processe", 40);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("quietsuppress most error messagesrecursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid sp", 5);
    v6.long(&v0, "quietsuppress most error messagesrecursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid sp", 5);
    v0.help(&v6, "suppress most error messagesrecursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 28);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("recursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 9);
    v6.short(&v3, 82);
    v3.long(&v6, "recursiveoperate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 9);
    v6.help(&v3, "operate on files and directories recursivelyuse RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 44);
    v7.action(&v6, 2);
    v3.arg(&v0, &v7);
    v0.new("referenceOWNERsrc/uu/chown/src/chown.rsfailed to get attributes of ", 9);
    v6.long(&v0, "referenceOWNERsrc/uu/chown/src/chown.rsfailed to get attributes of ", 9);
    v0.help(&v6, "use RFILE's owner and group rather than specifying OWNER:GROUP valuesRFILEsilentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 69);
    v6.value_name(&v0, "RFILEsilentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 5);
    v0.value_hint(&v6);
    v6.num_args(&v0);
    v0.arg(&v3, &v6);
    v3.new("silentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 6);
    v6.short(&v3, 102);
    v3.long(&v6, "silentverboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 6);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("verboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 7);
    v6.long(&v0, "verboseoutput a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 7);
    v0.short(&v6, 118);
    v6.help(&v0, "output a diagnostic for every file processedinvalid user: invalid group: invalid spec: ", 44);
    v7.action(&v6, 2);
    v0.arg(&v3, &v7);
    uucore::features::perms::common_args(&v3);
    a0.args(&v0, &v3);
    return a0;
}
