long long uu_realpath::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned int v1;  // [bp-0x848]
    unsigned int v2;  // [bp-0x844]
    char v3;  // [bp-0x840]
    unsigned int v4;  // [bp-0x5c8]
    unsigned int v5;  // [bp-0x5c4]
    unsigned long long v6;  // [bp-0x584]
    unsigned int v7;  // [bp-0x57c]
    char v8;  // [bp-0x578]
    unsigned long v9;  // [bp-0x2bc]
    unsigned int v10;  // [bp-0x2b4]
    char v11;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x2a8]
    unsigned long long v13;  // [bp-0x2a0]
    unsigned long long v14;  // [bp-0x298]
    unsigned long long v17;  // rdx

    v3.new(uucore::util_name(), v17);
    v8.version(&v3);
    v3.about(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' components before symlinksresolve symlinks as enco", 22);
    v8.override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v9;
    v7 = v10;
    v8.new("quietstriplogicalfiles(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' com", 5);
    v0.short(&v8, 113);
    v8.long(&v0, "quietstriplogicalfiles(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' com", 5);
    v0.help(&v8, "Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' components before symlinksresolve symlinks as encountered (default)canon", 39);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("striplogicalfiles(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' componen", 5);
    v0.short(&v3, 115);
    v3.long(&v0, "striplogicalfiles(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' componen", 5);
    v0.visible_alias(&v3);
    v3.help(&v0, "Only strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' components before symlinksresolve symlinks as encountered (default)canonicalize-existingcanonicalize by following every sy", 68);
    v0.action(&v3, 2);
    v3.arg(&v8, &v0);
    v8.new("zero -- ", 4);
    v0.short(&v8, 122);
    v8.long(&v0, "zero -- ", 4);
    v0.help(&v8, "Separate output filenames with \\0 rather than newlineresolve '..' components before symlinksresolve symlinks as encountered (default)canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all componen", 53);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("logicalfiles(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' components be", 7);
    v0.short(&v3, 76);
    v3.long(&v0, "logicalfiles(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' components be", 7);
    v0.help(&v3, "resolve '..' components before symlinksresolve symlinks as encountered (default)canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by foll", 39);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("physicalNotFoundTimedOutENETDOWN\n       ", 8);
    v0.short(&v8, 80);
    v8.long(&v0, "physicalNotFoundTimedOutENETDOWN\n       ", 8);
    v11 = "striplogicalfiles(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' componen";
    v12 = 5;
    v13 = "logicalfiles(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' components be";
    v14 = 7;
    v0.overrides_with_all(&v8, &v11);
    v8.help(&v0, "resolve symlinks as encountered (default)canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component ", 41);
    v0.action(&v8, 2);
    v8.arg(&v3, &v0);
    v3.new("canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without re", 21);
    v0.short(&v3, 101);
    v3.long(&v0, "canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without re", 21);
    v0.help(&v3, "canonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on compone", 115);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("canonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on components existencerelative-toDIRprint the resolved path relative to DIRrelative-baseprint absolute paths unless paths be", 20);
    v0.short(&v8, 109);
    v8.long(&v0, "canonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on components existencerelative-toDIRprint the resolved path relative to DIRrelative-baseprint absolute paths unless paths be", 20);
    v0.help(&v8, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existencerelative-toDIRprint the resolved path relative to DIRrelative-baseprint absolute paths unless paths below DIR", 134);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("relative-toDIRprint the resolved path relative to DIRrelative-baseprint absolute paths unless paths below DIR", 11);
    v0.long(&v3, "relative-toDIRprint the resolved path relative to DIRrelative-baseprint absolute paths unless paths below DIR", 11);
    v3.value_name(&v0);
    v0.value_parser(&v3);
    v11.help(&v0, "print the resolved path relative to DIRrelative-baseprint absolute paths unless paths below DIR", 39);
    v3.arg(&v8, &v11);
    v8.new("relative-baseprint absolute paths unless paths below DIR", 13);
    v0.long(&v8, "relative-baseprint absolute paths unless paths below DIR", 13);
    v8.value_name(&v0);
    v0.value_parser(&v8);
    v11.help(&v0, "print absolute paths unless paths below DIR", 43);
    v8.arg(&v3, &v11);
    v3.new("files(uutils coreutils) 0.0.30{} [OPTION]... FILE...Do not print warnings for invalid pathsno-symlinksOnly strip '.' and '..' components, but don't resolve symbolic linksSeparate output filenames with \\0 rather than newlineresolve '..' components before sy", 5);
    v0.action(&v3, 1);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 1;
    v5 = v2;
    v0.value_parser(&v3);
    v3.value_hint(&v0);
    a0.arg(&v8, &v3);
    return a0;
}
