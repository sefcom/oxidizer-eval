long long uu_mktemp::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xab0]
    unsigned int v2;  // [bp-0x838]
    unsigned int v3;  // [bp-0x834]
    char v4;  // [bp-0x830]
    unsigned int v5;  // [bp-0x5b8]
    char v6;  // [bp-0x5b4]
    unsigned long long v7;  // [bp-0x574]
    unsigned int v8;  // [bp-0x56c]
    char v9;  // [bp-0x568]
    unsigned long v10;  // [bp-0x2ac]
    unsigned int v11;  // [bp-0x2a4]
    char v12;  // [bp-0x2a0]
    unsigned long long v15;  // rdx

    v4.new(uucore::util_name(), v15);
    v9.version(&v4);
    v4.about(&v9);
    uucore::format_usage(&v1, "{} [OPTION]... [TEMPLATE]Make a directory instead of a filedo not create anything; merely print a name (unsafe)Fail silently if an error occurs.append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not", 25);
    v9.override_usage(&v4, &v1);
    memcpy(&v4, &v9, 700);
    v7 = 549755814016 | v10;
    v8 = v11;
    v9.new("directorydry-runquietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 9);
    v1.short(&v9, 100);
    v9.long(&v1, "directorydry-runquietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 9);
    v1.help(&v9, "Make a directory instead of a filedo not create anything; merely print a name (unsafe)Fail silently if an error occurs.append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.SUFFIXshort f", 34);
    v12.action(&v1);
    v9.arg(&v4, &v12);
    v4.new("dry-runquietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 7);
    v1.short(&v4, 117);
    v4.long(&v1, "dry-runquietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 7);
    v1.help(&v4, "do not create anything; merely print a name (unsafe)Fail silently if an error occurs.append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.SUFFIXshort form of --tmpdirDIRinterpret TEMPLA", 52);
    v12.action(&v1);
    v4.arg(&v9, &v12);
    v9.new("quietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 5);
    v1.short(&v9, 113);
    v9.long(&v1, "quietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 5);
    v1.help(&v9, "Fail silently if an error occurs.append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.SUFFIXshort form of --tmpdirDIRinterpret TEMPLATE relative to DIR; if DIR is not specified, use $TM", 33);
    v12.action(&v1);
    v9.arg(&v4, &v12);
    v4.new("suffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
    v1.long(&v4, "suffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
    v4.help(&v1, "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.SUFFIXshort form of --tmpdirDIRinterpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, el", 124);
    v1.value_name(&v4, "SUFFIXshort form of --tmpdirDIRinterpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp c", 6);
    v4.arg(&v9, &v1);
    v9.new("ptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 1);
    v1.short(&v9, 112);
    v9.help(&v1, "short form of --tmpdirDIRinterpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates", 22);
    v1.value_name(&v9, "DIRinterpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final compon", 3);
    v9.num_args(&v1);
    v0 = 3;
    v1.value_parser(&v9, &v0);
    v12.value_hint(&v1);
    v9.arg(&v4, &v12);
    v4.new("tmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
    v1.long(&v4, "tmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
    v4.help(&v1, "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component", 0x100);
    v1.value_name(&v4, "DIRinterpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final compon", 3);
    v4.num_args(&v1, 0, 1);
    memcpy(&v1, &v4, 632);
    v2 = 128 | v5;
    v3 = *((int *)&v6);
    v4.overrides_with(&v1);
    v1.value_parser(&v4, &v0);
    v12.value_hint(&v1);
    v4.arg(&v9, &v12);
    v9.new("tTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 1);
    v1.short(&v9, 116);
    v9.help(&v1, "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]X", 125);
    v1.action(&v9);
    v9.arg(&v4, &v1);
    v4.new("template", 8);
    v1.num_args(&v4);
    a0.arg(&v9, &v1);
    return a0;
}
