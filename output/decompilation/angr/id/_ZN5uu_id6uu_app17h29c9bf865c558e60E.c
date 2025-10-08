long long uu_id::uu_app(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0x840]
    unsigned long long v3;  // [bp-0x838]
    unsigned long long v4;  // [bp-0x830]
    unsigned long long v5;  // [bp-0x828]
    unsigned long long v6;  // [bp-0x820]
    unsigned long long v7;  // [bp-0x818]
    unsigned long long v8;  // [bp-0x810]
    unsigned long long v9;  // [bp-0x808]
    unsigned long long v10;  // [bp-0x800]
    unsigned long long v11;  // [bp-0x7f8]
    unsigned long long v12;  // [bp-0x7f0]
    unsigned long long v13;  // [bp-0x7e8]
    char v14;  // [bp-0x5c0]
    unsigned long long v15;  // [bp-0x304]
    unsigned int v16;  // [bp-0x2fc]
    char v17;  // [bp-0x2f8]
    unsigned long v18;  // [bp-0x3c]
    char v19;  // [bp-0x34]
    unsigned long long v22;  // rdx

    v14.new(uucore::util_name(), v22);
    v17.version(&v14);
    v14.about(&v17);
    uucore::format_usage(&v1, "{} [OPTION]... [USER]...auditgrouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID", 24);
    v17.override_usage(&v14, &v1);
    memcpy(&v14, &v17, 700);
    v15 = 584115552392 | v18;
    v16 = *((int *)&v19);
    v17.new("auditgrouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDispl", 5);
    v1.short(&v17, 65);
    v2 = "grouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay on";
    v3 = 5;
    v4 = "userSomedumb";
    v5 = 4;
    v6 = "human-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only th";
    v7 = 14;
    v8 = "passwordNO_COLORNulErrorhuman-readableauditcannot find name for user ID cannot find name for group ID UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTY";
    v9 = 8;
    v10 = "groupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only the different gr";
    v11 = 6;
    v12 = "zeroAnsi -- ";
    v13 = 4;
    v17.conflicts_with_all(&v1, &v2);
    v1.help(&v17, "Display the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only the different group ID", 120);
    v2.action(&v1, 2);
    v17.arg(&v14, &v2);
    v14.new("userSomedumb", 4);
    v1.short(&v14, 117);
    v14.long(&v1, "userSomedumb", 4);
    v1.conflicts_with(&v14, "grouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay on", 5);
    v14.help(&v1, "Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only the different group IDs as white-space separated numbers, in no particular order.Make the output human-readable. Each display is on a separate", 47);
    v1.action(&v14, 2);
    v14.arg(&v17, &v1);
    v17.new("grouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay on", 5);
    v1.short(&v17, 103);
    v17.long(&v1, "grouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay on", 5);
    v1.conflicts_with(&v17, "userSomedumb", 4);
    v17.help(&v1, "Display only the effective group ID as a numbercontextDisplay only the different group IDs as white-space separated numbers, in no particular order.Make the output human-readable. Each display is on a separate line.Display the name of the user or group ID ", 47);
    v1.action(&v17, 2);
    v17.arg(&v14, &v1);
    v14.new("groupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only the different gr", 6);
    v1.short(&v14, 71);
    v14.long(&v1, "groupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only the different gr", 6);
    v2 = "grouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay on";
    v3 = 5;
    v4 = "userSomedumb";
    v5 = 4;
    v6 = "contextDisplay only the different group IDs as white-space separated numbers, in no particular order.Make the output human-readable. Each display is on a separate line.Display the name of the user or group ID for the -G, -g and -u options instead of the nu";
    v7 = 7;
    v8 = "human-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only th";
    v9 = 14;
    v10 = "passwordNO_COLORNulErrorhuman-readableauditcannot find name for user ID cannot find name for group ID UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTY";
    v11 = 8;
    v12 = "auditgrouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDispl";
    v13 = 5;
    v1.conflicts_with_all(&v14, &v2);
    v14.help(&v1, "Display only the different group IDs as white-space separated numbers, in no particular order.Make the output human-readable. Each display is on a separate line.Display the name of the user or group ID for the -G, -g and -u options instead of the number.\nI", 94);
    v1.action(&v14, 2);
    v14.arg(&v17, &v1);
    v17.new("human-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only th", 14);
    v1.short(&v17, 112);
    v17.help(&v1, "Make the output human-readable. Each display is on a separate line.Display the name of the user or group ID for the -G, -g and -u options instead of the number.\nIf any of the ID numbers cannot be mapped into names, the number will be displayed as usual.Dis", 67);
    v1.action(&v17, 2);
    v17.arg(&v14, &v1);
    v14.new("name", 4);
    v1.short(&v14, 110);
    v14.long(&v1, "name", 4);
    v1.help(&v14, "Display the name of the user or group ID for the -G, -g and -u options instead of the number.\nIf any of the ID numbers cannot be mapped into names, the number will be displayed as usual.Display the id as a password file entry.Display the real ID for the -G", 186);
    v2.action(&v1, 2);
    v14.arg(&v17, &v2);
    v17.new("passwordNO_COLORNulErrorhuman-readableauditcannot find name for user ID cannot find name for group ID UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTY", 8);
    v1.short(&v17, 80);
    v17.help(&v1, "Display the id as a password file entry.Display the real ID for the -G, -g and -u options instead of the effective ID.delimit entries with NUL characters, not whitespace;\nnot permitted in default format \nlogin\teuid\tgroups\tsrc/uu/id/src/id.rs:() gid= euid= ", 40);
    v1.conflicts_with(&v17, "human-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay only th", 14);
    v2.action(&v1, 2);
    v17.arg(&v14, &v2);
    v14.new("realBOLDBlue", 4);
    v1.short(&v14, 114);
    v14.long(&v1, "realBOLDBlue", 4);
    v1.help(&v14, "Display the real ID for the -G, -g and -u options instead of the effective ID.delimit entries with NUL characters, not whitespace;\nnot permitted in default format \nlogin\teuid\tgroups\tsrc/uu/id/src/id.rs:() gid= euid= egid=", 78);
    v2.action(&v1, 2);
    v14.arg(&v17, &v2);
    v17.new("zeroAnsi -- ", 4);
    v1.short(&v17, 122);
    v17.long(&v1, "zeroAnsi -- ", 4);
    v1.help(&v17, "delimit entries with NUL characters, not whitespace;\nnot permitted in default format \nlogin\teuid\tgroups\tsrc/uu/id/src/id.rs:() gid= euid= egid=", 84);
    v2.action(&v1, 2);
    v17.arg(&v14, &v2);
    v14.new("contextDisplay only the different group IDs as white-space separated numbers, in no particular order.Make the output human-readable. Each display is on a separate line.Display the name of the user or group ID for the -G, -g and -u options instead of the nu", 7);
    v1.short(&v14, 90);
    v14.long(&v1, "contextDisplay only the different group IDs as white-space separated numbers, in no particular order.Make the output human-readable. Each display is on a separate line.Display the name of the user or group ID for the -G, -g and -u options instead of the nu", 7);
    v2 = "grouphuman-readablegroupsDisplay the process audit user ID and other process audit properties,\nwhich requires privilege (not available on Linux).Display only the effective user ID as a number.Display only the effective group ID as a numbercontextDisplay on";
    v3 = 5;
    v4 = "userSomedumb";
    v5 = 4;
    v1.conflicts_with_all(&v14, &v2);
    v14.help(&v1, "print only the security context of the process (not enabled)(uutils coreutils) 0.0.30Print user and group information for each specified `USER`,\nor (when `USER` omitted) for the current user.{} [OPTION]... [USER]...auditgrouphuman-readablegroupsDisplay the", 60);
    v1.action(&v14, 2);
    v14.arg(&v17, &v1);
    v17.new("USERname", 4);
    v1.action(&v17, 1);
    v17.value_name(&v1);
    v1.value_hint(&v17);
    v0.arg(&v14, &v1);
    return a0;
}
