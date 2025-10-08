long long uu_truncate::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    char v5;  // [bp-0x5b4]
    unsigned long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v8.new(uucore::util_name(), v14);
    v3.version(&v8);
    v8.about(&v3);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do not existbase the size of each file on the size of RFILERFILEset or adjust the size of each file according to SIZE, wh", 24);
    v3.override_usage(&v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 549755814016 | v6;
    v10 = v7;
    v3.new("io-blocksno-createreferencefiles(uutils coreutils) 0.0.30Shrink or extend the size of each file to the specified size.{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do ", 9);
    v0.short(&v3, 111);
    v3.long(&v0, "io-blocksno-createreferencefiles(uutils coreutils) 0.0.30Shrink or extend the size of each file to the specified size.{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do ", 9);
    v0.help(&v3, "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do not existbase the size of each file on the size of RFILERFILEset or adjust the size of each file according to SIZE, which is in bytes unless -", 86);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("no-createreferencefiles(uutils coreutils) 0.0.30Shrink or extend the size of each file to the specified size.{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do not exist", 9);
    v0.short(&v8, 99);
    v8.long(&v0, "no-createreferencefiles(uutils coreutils) 0.0.30Shrink or extend the size of each file to the specified size.{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do not exist", 9);
    v0.help(&v8, "do not create files that do not existbase the size of each file on the size of RFILERFILEset or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specifiedcannot open  for writing: No such device or address for writing", 37);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("referencefiles(uutils coreutils) 0.0.30Shrink or extend the size of each file to the specified size.{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do not existbase the ", 9);
    v0.short(&v3, 114);
    v3.long(&v0, "referencefiles(uutils coreutils) 0.0.30Shrink or extend the size of each file to the specified size.{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do not existbase the ", 9);
    v0.required_unless_present(&v3, "sizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v3.help(&v0, "base the size of each file on the size of RFILERFILEset or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specifiedcannot open  for writing: No such device or address for writing", 47);
    v0.value_name(&v3, "RFILEset or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specifiedcannot open  for writing: No such device or address for writing", 5);
    v11.value_hint(&v0);
    v3.arg(&v8, &v11);
    v8.new("sizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v0.short(&v8, 115);
    v8.long(&v0, "sizei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v0.required_unless_present(&v8, "referencefiles(uutils coreutils) 0.0.30Shrink or extend the size of each file to the specified size.{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do not existbase the ", 9);
    v8.help(&v0, "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specifiedcannot open  for writing: No such device or address for writing", 104);
    v0.value_name(&v8, "SIZE) = Zero", 4);
    v8.arg(&v3, &v0);
    v3.new("files(uutils coreutils) 0.0.30Shrink or extend the size of each file to the specified size.{} [OPTION]... [FILE]...treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)do not create files that do not existbase the size of e", 5);
    v0.value_name(&v3, "FILEchar", 4);
    v3.action(&v0, 1);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 1;
    v2 = *((int *)&v5);
    v3.value_hint(&v0);
    a0.arg(&v8, &v3);
    return a0;
}
