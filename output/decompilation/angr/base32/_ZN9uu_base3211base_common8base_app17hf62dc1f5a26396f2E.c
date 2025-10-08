long long uu_base32::base_common::base_app(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0xae0]
    char v1;  // [bp-0xad8]
    char v2;  // [bp-0xac0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xab8]
    char *v4;  // [bp-0xab0]
    unsigned long long v5;  // [bp-0xaa8]
    void* v6;  // [bp-0xaa0]
    unsigned long v7;  // [bp-0x804]
    unsigned int v8;  // [bp-0x7fc]
    char v9;  // [bp-0x7f8]
    char v10;  // [bp-0x578]
    unsigned long long v11;  // [bp-0x2bc]
    unsigned int v12;  // [bp-0x2b4]
    char v13;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x2a8]

    v10.new(uucore::util_name(), a2);
    v2.version(&v10);
    v10.about(&v2, a1, a2);
    uucore::format_usage(&v9, a3, a4);
    v2.override_usage(&v10, &v9);
    memcpy(&v10, &v2, 700);
    v11 = 549755814016 | v7;
    v12 = v8;
    v2.new("decodeignore-garbageextra operand : No such file or directory", 6);
    v9.short(&v2, 100);
    v2.visible_short_alias(&v9);
    v9.long(&v2, "decodeignore-garbageextra operand : No such file or directory", 6);
    v2.help(&v9, "decode datawhen decoding, ignore non-alphabetic charactersabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 11);
    v9.action(&v2, 2);
    v13.overrides_with(&v9, "decodeignore-garbageextra operand : No such file or directory", 6);
    v2.arg(&v10, &v13);
    v10.new("ignore-garbageextra operand : No such file or directory", 14);
    v9.short(&v10, 105);
    v10.long(&v9, "ignore-garbageextra operand : No such file or directory", 14);
    v9.help(&v10, "when decoding, ignore non-alphabetic charactersabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 47);
    v10.action(&v9, 2);
    v9.overrides_with(&v10, "ignore-garbageextra operand : No such file or directory", 14);
    v10.arg(&v2, &v9);
    v2.new("wrapdumb", 4);
    v9.short(&v2, 119);
    v2.long(&v9, "wrapdumb", 4);
    v9.value_name(&v2);
    v13 = "L";
    v14 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v2 = &g_50de80;
    v3 = 2;
    v6 = 0;
    v4 = &v13;
    v5 = 1;
    v1.map_or_else(&v2);
    v2.help(&v9, &v1);
    v9.overrides_with(&v2, "wrapdumb", 4);
    v2.arg(&v10, &v9);
    v10.new("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGTrailingESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v9.index(&v10);
    v10.action(&v9, 1);
    v9.value_hint(&v10);
    v0.arg(&v2, &v9);
    return a0;
}
