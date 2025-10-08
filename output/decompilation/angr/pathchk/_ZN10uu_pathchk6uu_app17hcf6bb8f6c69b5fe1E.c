long long uu_pathchk::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x828]
    unsigned int v1;  // [bp-0x5b0]
    char v2;  // [bp-0x5ac]
    unsigned long long v3;  // [bp-0x56c]
    unsigned int v4;  // [bp-0x564]
    char v5;  // [bp-0x560]
    unsigned long v6;  // [bp-0x2a4]
    unsigned int v7;  // [bp-0x29c]
    char v8;  // [bp-0x298]
    unsigned int v9;  // [bp-0x20]
    unsigned int v10;  // [bp-0x1c]
    unsigned long long v13;  // rdx

    v0.new(uucore::util_name(), v13);
    v5.version(&v0);
    v0.about(&v5);
    uucore::format_usage(&v8, "{} [OPTION]... NAME...posixcheck for most POSIX systemsposix-specialcheck for empty names and leading \"-\"portabilitycheck for all POSIX systems (equivalent to -p -P)/limit  exceeded by length  of file name \n of file name component leading hyphen in file na", 22);
    v5.override_usage(&v0, &v8);
    memcpy(&v0, &v5, 700);
    v3 = 549755814016 | v6;
    v4 = v7;
    v5.new("posixcheck for most POSIX systemsposix-specialcheck for empty names and leading \"-\"portabilitycheck for all POSIX systems (equivalent to -p -P)/limit  exceeded by length  of file name \n of file name component leading hyphen in file name component pathchk: ", 5);
    v8.short(&v5, 112);
    v5.help(&v8, "check for most POSIX systemsposix-specialcheck for empty names and leading \"-\"portabilitycheck for all POSIX systems (equivalent to -p -P)/limit  exceeded by length  of file name \n of file name component leading hyphen in file name component pathchk: \'\': N", 28);
    v8.action(&v5, 2);
    v5.arg(&v0, &v8);
    v0.new("posix-specialcheck for empty names and leading \"-\"portabilitycheck for all POSIX systems (equivalent to -p -P)/limit  exceeded by length  of file name \n of file name component leading hyphen in file name component pathchk: \'\': No such file or directory\n", 13);
    v8.short(&v0, 80);
    v0.help(&v8, "check for empty names and leading \"-\"portabilitycheck for all POSIX systems (equivalent to -p -P)/limit  exceeded by length  of file name \n of file name component leading hyphen in file name component pathchk: \'\': No such file or directory\n", 37);
    v8.action(&v0, 2);
    v0.arg(&v5, &v8);
    v5.new("portabilitycheck for all POSIX systems (equivalent to -p -P)/limit  exceeded by length  of file name \n of file name component leading hyphen in file name component pathchk: '': No such file or directory\n", 11);
    v8.long(&v5);
    v5.help(&v8, "check for all POSIX systems (equivalent to -p -P)/limit  exceeded by length  of file name \n of file name component leading hyphen in file name component pathchk: '': No such file or directory\n", 49);
    v8.action(&v5, 2);
    v5.arg(&v0, &v8);
    v0.new("pathAnsi -- ", 4);
    memcpy(&v8, &v0, 632);
    v9 = v1 | 4;
    v10 = *((int *)&v2);
    v0.action(&v8, 1);
    v8.value_hint(&v0);
    a0.arg(&v5, &v8);
    return a0;
}
