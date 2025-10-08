long long uu_mkdir::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    char v2;  // [bp-0x834]
    unsigned long long v3;  // [bp-0x7f4]
    unsigned int v4;  // [bp-0x7ec]
    char v5;  // [bp-0x7e8]
    unsigned int v6;  // [bp-0x570]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v14;  // rdx

    v0.new(uucore::util_name(), v14);
    v8.version(&v0);
    v0.about(&v8);
    uucore::format_usage(&v5, "{} [OPTION]... DIRECTORY...set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directoryzset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX i", 27);
    v8.override_usage(&v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | v9;
    v4 = v10;
    v8.new("modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v5.short(&v8, 109);
    v8.long(&v5, "modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v5.help(&v8, "set file mode (not implemented on windows)parentsmake parent directories as neededverboseprint a message for each printed directoryzset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SE", 42);
    v8.arg(&v0, &v5);
    v0.new("parentsmake parent directories as neededverboseprint a message for each printed directoryzset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \nc", 7);
    v5.short(&v0, 112);
    v0.long(&v5, "parentsmake parent directories as neededverboseprint a message for each printed directoryzset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \nc", 7);
    v5.help(&v0, "make parent directories as neededverboseprint a message for each printed directoryzset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \ncannot c", 33);
    v0.overrides_with(&v5);
    v5.action(&v0, 2);
    v0.arg(&v8, &v5);
    v8.new("verboseprint a message for each printed directoryzset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \ncannot create directory '': No such file ", 7);
    v5.short(&v8, 118);
    v8.long(&v5, "verboseprint a message for each printed directoryzset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \ncannot create directory '': No such file ", 7);
    v5.help(&v8, "print a message for each printed directoryzset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \ncannot create directory '': No such file or dire", 42);
    v11.action(&v5, 2);
    v8.arg(&v0, &v11);
    v0.new("zset SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \ncannot create directory '': No such file or directorycannot set permissions : File exists", 1);
    v5.short(&v0, 90);
    v0.help(&v5, "set SELinux security context of each created directory to the default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \ncannot create directory '': No such file or directorycannot set permissions : File exists", 74);
    v5.action(&v0, 2);
    v0.arg(&v8, &v5);
    v8.new("contextinnermid > len", 7);
    v5.long(&v8, "contextinnermid > len", 7);
    v8.value_name(&v5);
    v5.help(&v8, "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \ncannot create directory '': No such file or directorycannot set permissions : File exists", 85);
    v8.arg(&v0, &v5);
    v0.new("dirs", 4);
    v5.action(&v0, 1);
    v0.num_args(&v5);
    memcpy(&v5, &v0, 632);
    v6 = v1 | 1;
    v7 = *((int *)&v2);
    v11 = 2;
    v0.value_parser(&v5, &v11);
    v5.value_hint(&v0);
    a0.arg(&v8, &v5);
    return a0;
}
