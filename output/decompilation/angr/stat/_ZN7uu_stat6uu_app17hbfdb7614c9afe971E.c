long long uu_stat::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    char v1;  // [bp-0x830]
    unsigned long long v2;  // [bp-0x574]
    unsigned int v3;  // [bp-0x56c]
    char v4;  // [bp-0x568]
    unsigned long v5;  // [bp-0x2ac]
    unsigned int v6;  // [bp-0x2a4]
    char v7;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v10;  // rdx

    v1.new(uucore::util_name(), v10);
    v4.version(&v1);
    v1.about(&v4);
    uucore::format_usage(&v0, "{} [OPTION]... FILE...follow linksdisplay file system status instead of file statusprint the information in terse formuse the specified FORMAT instead of the default;\n output a newline after each use of FORMATFORMATlike --format, but interpret backslash es", 22);
    v4.override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v4.new("dereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 11);
    v0.short(&v4, 76);
    v4.long(&v0, "dereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 11);
    v0.help(&v4, "follow linksdisplay file system status instead of file statusprint the information in terse formuse the specified FORMAT instead of the default;\n output a newline after each use of FORMATFORMATlike --format, but interpret backslash escapes,\n            and", 12);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("file-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 11);
    v0.short(&v1, 102);
    v1.long(&v0, "file-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 11);
    v0.help(&v1, "display file system status instead of file statusprint the information in terse formuse the specified FORMAT instead of the default;\n output a newline after each use of FORMATFORMATlike --format, but interpret backslash escapes,\n            and do not outp", 49);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("tersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 5);
    v0.short(&v4, 116);
    v4.long(&v0, "tersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 5);
    v0.help(&v4, "print the information in terse formuse the specified FORMAT instead of the default;\n output a newline after each use of FORMATFORMATlike --format, but interpret backslash escapes,\n            and do not output a mandatory trailing newline;\n            if y", 35);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("formattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 6);
    v0.short(&v1, 99);
    v1.long(&v0, "formattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 6);
    v0.help(&v1, "use the specified FORMAT instead of the default;\n output a newline after each use of FORMATFORMATlike --format, but interpret backslash escapes,\n            and do not output a mandatory trailing newline;\n            if you want a newline, include \n in FOR", 91);
    v7.value_name(&v0);
    v1.arg(&v4, &v7);
    v4.new("printfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat", 6);
    v0.long(&v4, "printfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat", 6);
    v4.value_name(&v0);
    v0.help(&v4, "like --format, but interpret backslash escapes,\n            and do not output a mandatory trailing newline;\n            if you want a newline, include \n in FORMAT%Y-%m-%d %H:%M:%S.%f %z", 162);
    v4.arg(&v1, &v0);
    v1.new("filesprintfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot", 5);
    v0.action(&v1, 1);
    v7 = 2;
    v1.value_parser(&v0, &v7);
    v0.value_hint(&v1);
    a0.arg(&v4, &v0);
    return a0;
}
