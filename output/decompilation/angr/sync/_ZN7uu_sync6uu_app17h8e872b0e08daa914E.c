long long uu_sync::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x830]
    unsigned long long v1;  // [bp-0x574]
    unsigned int v2;  // [bp-0x56c]
    char v3;  // [bp-0x568]
    unsigned long v4;  // [bp-0x2ac]
    unsigned int v5;  // [bp-0x2a4]
    char v6;  // [bp-0x2a0]
    unsigned long long v9;  // rdx

    v0.new(uucore::util_name(), v9);
    v3.version(&v0);
    v0.about(&v3);
    uucore::format_usage(&v6, "{} [OPTION]... FILE...sync the file systems that contain the files (Linux and Windows only)sync only file data, no unneeded metadata (Linux only)", 22);
    v3.override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    v3.new("file-systemfilessrc/uu/sync/src/sync.rs", 11);
    v6.short(&v3, 102);
    v3.long(&v6, "file-systemfilessrc/uu/sync/src/sync.rs", 11);
    v6.conflicts_with(&v3, "data\"`$\\EADV", 4);
    v3.help(&v6, "sync the file systems that contain the files (Linux and Windows only)sync only file data, no unneeded metadata (Linux only)", 69);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("data\"`$\\EADV", 4);
    v6.short(&v0, 100);
    v0.long(&v6, "data\"`$\\EADV", 4);
    v6.conflicts_with(&v0, "file-systemfilessrc/uu/sync/src/sync.rs", 11);
    v0.help(&v6, "sync only file data, no unneeded metadata (Linux only)", 54);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("filessrc/uu/sync/src/sync.rs", 5);
    v6.action(&v3, 1);
    v3.value_hint(&v6);
    a0.arg(&v0, &v3);
    return a0;
}
