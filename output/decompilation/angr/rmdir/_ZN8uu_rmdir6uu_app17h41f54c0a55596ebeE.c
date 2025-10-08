long long uu_rmdir::uu_app(unsigned long long a0)
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
    uucore::format_usage(&v5, "{} [OPTION]... DIRECTORY...ignore each failure that is solely because a directory is non-emptyremove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b aoutput a diagnostic for every directory processed", 27);
    v8.override_usage(&v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | v9;
    v4 = v10;
    v8.new("ignore-fail-on-non-emptyparentsverbose: removing directory, \n(uutils coreutils) 0.0.30{} [OPTION]... DIRECTORY...ignore each failure that is solely because a directory is non-emptyremove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c'", 24);
    v5.long(&v8, "ignore-fail-on-non-emptyparentsverbose: removing directory, \n(uutils coreutils) 0.0.30{} [OPTION]... DIRECTORY...ignore each failure that is solely because a directory is non-emptyremove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c'", 24);
    v8.help(&v5, "ignore each failure that is solely because a directory is non-emptyremove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b aoutput a diagnostic for every directory processed", 67);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("parentsverbose: removing directory, \n(uutils coreutils) 0.0.30{} [OPTION]... DIRECTORY...ignore each failure that is solely because a directory is non-emptyremove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b", 7);
    v5.short(&v0, 112);
    v0.long(&v5, "parentsverbose: removing directory, \n(uutils coreutils) 0.0.30{} [OPTION]... DIRECTORY...ignore each failure that is solely because a directory is non-emptyremove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b", 7);
    v5.help(&v0, "remove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b aoutput a diagnostic for every directory processed", 108);
    v11.action(&v5, 2);
    v0.arg(&v8, &v11);
    v8.new("verbose: removing directory, \n(uutils coreutils) 0.0.30{} [OPTION]... DIRECTORY...ignore each failure that is solely because a directory is non-emptyremove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b ", 7);
    v5.short(&v8, 118);
    v8.long(&v5, "verbose: removing directory, \n(uutils coreutils) 0.0.30{} [OPTION]... DIRECTORY...ignore each failure that is solely because a directory is non-emptyremove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir a/b/c a/b ", 7);
    v5.help(&v8, "output a diagnostic for every directory processed", 49);
    v11.action(&v5, 2);
    v8.arg(&v0, &v11);
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
