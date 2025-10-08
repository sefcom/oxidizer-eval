long long uu_chcon::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xad8]
    char v1;  // [bp-0xac0]
    char v2;  // [bp-0x840]
    unsigned long long v3;  // [bp-0x584]
    unsigned int v4;  // [bp-0x57c]
    char v5;  // [bp-0x578]
    unsigned long v6;  // [bp-0x2bc]
    unsigned int v7;  // [bp-0x2b4]
    char v8;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x2a8]
    unsigned long long v10;  // [bp-0x2a0]
    unsigned long long v11;  // [bp-0x298]
    unsigned long long v12;  // [bp-0x290]
    unsigned long long v13;  // [bp-0x288]
    unsigned long long v14;  // [bp-0x280]
    unsigned long long v15;  // [bp-0x278]
    unsigned long long v18;  // rdx

    v2.new(uucore::util_name(), v18);
    v5.version(&v2);
    v2.about(&v5);
    uucore::format_usage(&v1, "{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t TYPE] FILE...\n{} [OPTION]... --reference=RFILE FILE...Print help information.Affect the referent of each symbolic link (this is the default), rather than the symbolic link its", 135);
    v5.override_usage(&v2, &v1);
    memcpy(&v2, &v5, 700);
    v3 = 2252383929761928 | v6;
    v4 = v7;
    v5.new("helpNoneshimnameUSER", 4);
    v1.long(&v5, "helpNoneshimnameUSER", 4);
    v5.help(&v1, "Print help information.Affect the referent of each symbolic link (this is the default), rather than the symbolic link itself.Affect symbolic links instead of any referenced file.Fail to operate recursively on '/'.Do not treat '/' specially (the default).RF", 23);
    v1.action(&v5, 5);
    v5.arg(&v2, &v1);
    v2.new("dereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] ", 11);
    v1.long(&v2, "dereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] ", 11);
    v2.overrides_with(&v1, "no-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] [-r ROLE] [", 14);
    v1.help(&v2, "Affect the referent of each symbolic link (this is the default), rather than the symbolic link itself.Affect symbolic links instead of any referenced file.Fail to operate recursively on '/'.Do not treat '/' specially (the default).RFILEUse security context", 102);
    v8.action(&v1, 2);
    v2.arg(&v5, &v8);
    v5.new("no-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] [-r ROLE] [", 14);
    v1.short(&v5, 104);
    v5.long(&v1, "no-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] [-r ROLE] [", 14);
    v1.help(&v5, "Affect symbolic links instead of any referenced file.Fail to operate recursively on '/'.Do not treat '/' specially (the default).RFILEUse security context of RFILE, rather than specifying a CONTEXT value.Set user USER in the target security context.Set rol", 53);
    v8.action(&v1, 2);
    v5.arg(&v2, &v8);
    v2.new("preserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t ", 13);
    v1.long(&v2, "preserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t ", 13);
    v2.overrides_with(&v1, "no-preserve-root", 16);
    v1.help(&v2, "Fail to operate recursively on '/'.Do not treat '/' specially (the default).RFILEUse security context of RFILE, rather than specifying a CONTEXT value.Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE i", 35);
    v8.action(&v1, 2);
    v2.arg(&v5, &v8);
    v5.new("no-preserve-root", 16);
    v1.long(&v5, "no-preserve-root", 16);
    v5.help(&v1, "Do not treat '/' specially (the default).RFILEUse security context of RFILE, rather than specifying a CONTEXT value.Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE in the target security context.RANGE", 41);
    v1.action(&v5, 2);
    v5.arg(&v2, &v1);
    v2.new("referencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context o", 9);
    v1.long(&v2, "referencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context o", 9);
    v2.value_name(&v1, "RFILEUse security context of RFILE, rather than specifying a CONTEXT value.Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE in the target security context.RANGESet range RANGE in the target security co", 5);
    v1.value_hint(&v2, 3);
    v8 = "userSomedumb";
    v9 = 4;
    v10 = "role) = Zero";
    v11 = 4;
    v12 = "type    TYPE\"`$\\EADV";
    v13 = 4;
    v14 = "rangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FI";
    v15 = 5;
    v2.conflicts_with_all(&v1, &v8);
    v1.help(&v2, "Use security context of RFILE, rather than specifying a CONTEXT value.Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE in the target security context.RANGESet range RANGE in the target security context", 70);
    v0 = 2;
    v8.value_parser(&v1, &v0);
    v2.arg(&v5, &v8);
    v5.new("userSomedumb", 4);
    v1.short(&v5, 117);
    v5.long(&v1, "userSomedumb", 4);
    v1.value_name(&v5, "USER", 4);
    v5.value_hint(&v1, 9);
    v1.help(&v5, "Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE in the target security context.RANGESet range RANGE in the target security context.Operate on files and directories recursively.If a command line argume", 45);
    v8.value_parser(&v1, &v0);
    v5.arg(&v2, &v8);
    v2.new("role) = Zero", 4);
    v1.short(&v2, 114);
    v2.long(&v1, "role) = Zero", 4);
    v1.value_name(&v2, "ROLE", 4);
    v2.help(&v1, "Set role ROLE in the target security context.Set type TYPE in the target security context.RANGESet range RANGE in the target security context.Operate on files and directories recursively.If a command line argument is a symbolic link to a directory, travers", 45);
    v1.value_parser(&v2, &v0);
    v2.arg(&v5, &v1);
    v5.new("type    TYPE\"`$\\EADV", 4);
    v1.short(&v5, 116);
    v5.long(&v1, "type    TYPE\"`$\\EADV", 4);
    v1.value_name(&v5, "TYPE\"`$\\EADV", 4);
    v5.help(&v1, "Set type TYPE in the target security context.RANGESet range RANGE in the target security context.Operate on files and directories recursively.If a command line argument is a symbolic link to a directory, traverse it. Only valid when -R is specified.Travers", 45);
    v1.value_parser(&v5, &v0);
    v5.arg(&v2, &v1);
    v2.new("rangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FI", 5);
    v1.short(&v2, 108);
    v2.long(&v1, "rangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FI", 5);
    v1.value_name(&v2, "RANGESet range RANGE in the target security context.Operate on files and directories recursively.If a command line argument is a symbolic link to a directory, traverse it. Only valid when -R is specified.Traverse every symbolic link to a directory encounte", 5);
    v2.help(&v1, "Set range RANGE in the target security context.Operate on files and directories recursively.If a command line argument is a symbolic link to a directory, traverse it. Only valid when -R is specified.Traverse every symbolic link to a directory encountered. ", 47);
    v1.value_parser(&v2, &v0);
    v2.arg(&v5, &v1);
    v5.new("recursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to", 9);
    v1.short(&v5, 82);
    v5.long(&v1, "recursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to", 9);
    v1.help(&v5, "Operate on files and directories recursively.If a command line argument is a symbolic link to a directory, traverse it. Only valid when -R is specified.Traverse every symbolic link to a directory encountered. Only valid when -R is specified.Do not traverse", 45);
    v8.action(&v1, 2);
    v5.arg(&v2, &v8);
    v2.new("follow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of ", 23);
    v1.short(&v2, 72);
    v2.requires(&v1);
    v8 = "follow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CO";
    v9 = 20;
    v10 = "no-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OP";
    v11 = 19;
    v1.overrides_with_all(&v2, &v8);
    v2.help(&v1, "If a command line argument is a symbolic link to a directory, traverse it. Only valid when -R is specified.Traverse every symbolic link to a directory encountered. Only valid when -R is specified.Do not traverse any symbolic links (default). Only valid whe", 107);
    v1.action(&v2, 2);
    v2.arg(&v5, &v1);
    v5.new("follow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CO", 20);
    v1.short(&v5, 76);
    v5.requires(&v1);
    v8 = "follow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of ";
    v9 = 23;
    v10 = "no-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OP";
    v11 = 19;
    v1.overrides_with_all(&v5, &v8);
    v5.help(&v1, "Traverse every symbolic link to a directory encountered. Only valid when -R is specified.Do not traverse any symbolic links (default). Only valid when -R is specified.Output a diagnostic for every file processed.src/uu/chcon/src/chcon.rs", 89);
    v1.action(&v5, 2);
    v5.arg(&v2, &v1);
    v2.new("no-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CONTEXT FILE...\n{} [OP", 19);
    v1.short(&v2, 80);
    v2.requires(&v1);
    v8 = "follow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of ";
    v9 = 23;
    v10 = "follow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.{} [OPTION]... CO";
    v11 = 20;
    v1.overrides_with_all(&v2, &v8);
    v2.help(&v1, "Do not traverse any symbolic links (default). Only valid when -R is specified.Output a diagnostic for every file processed.src/uu/chcon/src/chcon.rs", 78);
    v1.action(&v2, 2);
    v2.arg(&v5, &v1);
    v5.new("verbosereferencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security co", 7);
    v1.short(&v5, 118);
    v5.long(&v1, "verbosereferencerangerecursivefollow-arg-dir-sym-linkfollow-dir-sym-linksno-follow-sym-linksdereferenceno-dereferencepreserve-root(uutils coreutils) 0.0.30Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security co", 7);
    v1.help(&v5, "Output a diagnostic for every file processed.src/uu/chcon/src/chcon.rs", 45);
    v8.action(&v1, 2);
    v5.arg(&v2, &v8);
    v2.new("FILEchar", 4);
    v1.action(&v2, 1);
    v2.value_hint(&v1, 3);
    v1.num_args(&v2);
    v2.value_parser(&v1, &v0);
    a0.arg(&v5, &v2);
    return a0;
}
