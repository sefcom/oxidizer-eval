long long uu_chgrp::uu_app(unsigned long long a0)
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
    uucore::format_usage(&v6, "{} [OPTION]... GROUP FILE...\n{} [OPTION]... --reference=RFILE FILE...Print help information.changeslike verbose but report only when a change is madesilentquietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail", 69);
    v3.override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 2252349570023552 | v4;
    v2 = v5;
    v3.new("helpNoneshim", 4);
    v6.long(&v3, "helpNoneshim", 4);
    v3.help(&v6, "Print help information.changeslike verbose but report only when a change is madesilentquietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default", 23);
    v6.action(&v3, 5);
    v3.arg(&v0, &v6);
    v0.new("changeslike verbose but report only when a change is madesilentquietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group", 7);
    v6.short(&v0, 99);
    v0.long(&v6, "changeslike verbose but report only when a change is madesilentquietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group", 7);
    v6.help(&v0, "like verbose but report only when a change is madesilentquietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather", 50);
    v7.action(&v6, 2);
    v0.arg(&v3, &v7);
    v3.new("silentquietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only", 6);
    v6.short(&v3, 102);
    v3.long(&v6, "silentquietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only", 6);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("quietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if it", 5);
    v6.long(&v0, "quietsuppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if it", 5);
    v0.help(&v6, "suppress most error messagesverboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its cur", 28);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("verboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecu", 7);
    v6.short(&v3, 118);
    v3.long(&v6, "verboseoutput a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecu", 7);
    v6.help(&v3, "output a diagnostic for every file processedpreserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecursiveoperate on files and directories recursively", 44);
    v7.action(&v6, 2);
    v3.arg(&v0, &v7);
    v0.new("preserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecursiveoperate on files and directories recursively", 13);
    v6.long(&v0, "preserve-rootfail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecursiveoperate on files and directories recursively", 13);
    v0.help(&v6, "fail to operate recursively on '/'do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecursiveoperate on files and directories recursively", 34);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("no-preserve-root", 16);
    v6.long(&v3, "no-preserve-root", 16);
    v3.help(&v6, "do not treat '/' specially (the default)RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecursiveoperate on files and directories recursively", 40);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("referenceGROUPfailed to get attributes of invalid user: '", 9);
    v6.long(&v0, "referenceGROUPfailed to get attributes of invalid user: '", 9);
    v0.value_name(&v6, "RFILEuse RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecursiveoperate on files and directories recursively");
    v6.value_hint(&v0);
    v7.help(&v6, "use RFILE's group rather than specifying GROUP valueschange the group only if its current group matches GROUPrecursiveoperate on files and directories recursively", 53);
    v0.arg(&v3, &v7);
    v3.new("fromkindAuto/", 4);
    v6.long(&v3, "fromkindAuto/", 4);
    v3.value_name(&v6, "GROUPfailed to get attributes of invalid user: '");
    v6.help(&v3, "change the group only if its current group matches GROUPrecursiveoperate on files and directories recursively", 56);
    v3.arg(&v0, &v6);
    v0.new("recursiveoperate on files and directories recursively", 9);
    v6.short(&v0, 82);
    v0.long(&v6, "recursiveoperate on files and directories recursively", 9);
    v6.help(&v0, "operate on files and directories recursively", 44);
    v7.action(&v6, 2);
    v0.arg(&v3, &v7);
    uucore::features::perms::common_args(&v3);
    a0.args(&v0, &v3);
    return a0;
}
