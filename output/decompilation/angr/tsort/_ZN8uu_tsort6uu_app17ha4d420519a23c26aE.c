long long uu_tsort::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x828]
    unsigned int v1;  // [bp-0x5b0]
    unsigned int v2;  // [bp-0x5ac]
    unsigned long v3;  // [bp-0x56c]
    unsigned int v4;  // [bp-0x564]
    char v5;  // [bp-0x560]
    unsigned int v6;  // [bp-0x2e8]
    unsigned int v7;  // [bp-0x2e4]
    char v8;  // [bp-0x2e0]
    unsigned long long v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x1c]
    unsigned long long v13;  // rdx

    v8.new(uucore::util_name(), v13);
    v0.version(&v8);
    uucore::format_usage(&v5, "{} [OPTIONS] FILETopological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determi", 17);
    v8.override_usage(&v0, &v5);
    v0.about(&v8);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | v3;
    v10 = v4;
    v0.new();
    v5.default_value(&v0);
    memcpy(&v0, &v5, 632);
    v1 = v6 | 4;
    v2 = v7;
    v5.value_hint(&v0);
    a0.arg(&v8, &v5);
    return a0;
}
