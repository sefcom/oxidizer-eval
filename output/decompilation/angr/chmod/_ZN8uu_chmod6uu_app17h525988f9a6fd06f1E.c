long long uu_chmod::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned long long v1;  // [bp-0x7f4]
    unsigned int v2;  // [bp-0x7ec]
    char v3;  // [bp-0x7e8]
    unsigned long v4;  // [bp-0x52c]
    unsigned int v5;  // [bp-0x524]
    char v6;  // [bp-0x520]
    char v7;  // [bp-0x2a0]
    unsigned long long v10;  // rdx

    v0.new(uucore::util_name(), v10);
    v3.version(&v0);
    v0.about(&v3);
    uucore::format_usage(&v6, "{} [OPTION]... MODE[,MODE]... FILE...\n{} [OPTION]... OCTAL-MODE FILE...\n{} [OPTION]... --reference=RFILE FILE...Print help information.changeslike verbose but report only when a change is madequietsilentsuppress most error messagesverboseoutput a diagnosti", 112);
    v3.override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 290482760148582536 | v4;
    v2 = v5;
    v3.new("helpNoneshim", 4);
    v6.long(&v3, "helpNoneshim", 4);
    v3.help(&v6, "Print help information.changeslike verbose but report only when a change is madequietsilentsuppress most error messagesverboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/", 23);
    v6.action(&v3, 5);
    v3.arg(&v0, &v6);
    v0.new("changeslike verbose but report only when a change is madequietsilentsuppress most error messagesverboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files ", 7);
    v6.long(&v0, "changeslike verbose but report only when a change is madequietsilentsuppress most error messagesverboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files ", 7);
    v0.short(&v6, 99);
    v6.help(&v0, "like verbose but report only when a change is madequietsilentsuppress most error messagesverboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files and dir", 50);
    v7.action(&v6, 2);
    v0.arg(&v3, &v7);
    v3.new("quietsilentsuppress most error messagesverboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode", 5);
    v6.long(&v3, "quietsilentsuppress most error messagesverboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode", 5);
    v3.visible_alias(&v6);
    v6.short(&v3, 102);
    v3.help(&v6, "suppress most error messagesverboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of", 28);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("verboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate o", 7);
    v6.long(&v0, "verboseoutput a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate o", 7);
    v0.short(&v6, 118);
    v6.help(&v0, "output a diagnostic for every file processeddo not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangl", 44);
    v7.action(&v6, 2);
    v0.arg(&v3, &v7);
    v3.new("no-preserve-root", 16);
    v6.long(&v3, "no-preserve-root", 16);
    v3.help(&v6, "do not treat '/' specially (the default)preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  fro", 40);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\nc", 13);
    v6.long(&v0, "preserve-rootfail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\nc", 13);
    v0.help(&v6, "fail to operate recursively on '/'recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\ncannot access ", 34);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\ncannot access : No such file or directoryit is d", 9);
    v6.long(&v3, "recursivechange files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\ncannot access : No such file or directoryit is d", 9);
    v3.short(&v6, 82);
    v6.help(&v3, "change files and directories recursivelyRFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\ncannot access : No such file or directoryit is dangerous ", 40);
    v7.action(&v6, 2);
    v3.arg(&v0, &v7);
    v0.new("RFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\ncannot access : No such file or directoryit is dangerous to operate recursively on \nchmod: use --", 5);
    v6.long(&v0, "referenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\ncannot access : No such file or directoryit is dangerous to operate recursively on \nchmod: use --no-pr", 9);
    v0.value_hint(&v6, 3);
    v6.help(&v0, "use RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\ncannot access : No such file or directoryit is dangerous to operate recursively on \nchmod: use --no-preserve-root to override this failsafe", 39);
    v0.arg(&v3, &v6);
    v3.new("MODEEADV", 4);
    v6.required_unless_present(&v3, "RFILEreferenceuse RFILE's mode instead of MODE valuescannot operate on dangling symlink : \nfailed to change mode of  from 0000 (---------) to 1500 (r-x-----T)\ncannot access : No such file or directoryit is dangerous to operate recursively on \nchmod: use --", 5);
    v3.arg(&v0, &v6);
    v0.new("FILEchar", 4);
    v6.required_unless_present(&v0, "MODEEADV", 4);
    v0.action(&v6, 1);
    v6.value_hint(&v0, 2);
    v0.arg(&v3, &v6);
    uucore::features::perms::common_args(&v3);
    a0.args(&v0, &v3);
    return a0;
}
