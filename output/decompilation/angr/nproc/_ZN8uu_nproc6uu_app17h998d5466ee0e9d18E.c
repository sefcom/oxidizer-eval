long long uu_nproc::uu_app(unsigned long long a0)
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
    uucore::format_usage(&v6, "{} [OPTIONS]...print the number of cores available to the systemNignore up to N cores", 15);
    v3.override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    v3.new("allignore(uutils coreutils) 0.0.30Print the number of cores available to the current process.\nIf the `OMP_NUM_THREADS` or `OMP_THREAD_LIMIT` environment variables are set, then\nthey will determine the minimum and maximum returned value respectively.{} [OPT", 3);
    v6.long(&v3, "allignore(uutils coreutils) 0.0.30Print the number of cores available to the current process.\nIf the `OMP_NUM_THREADS` or `OMP_THREAD_LIMIT` environment variables are set, then\nthey will determine the minimum and maximum returned value respectively.{} [OPT", 3);
    v3.help(&v6, "print the number of cores available to the systemNignore up to N cores", 49);
    v6.action(&v3);
    v3.arg(&v0, &v6);
    v0.new("ignore(uutils coreutils) 0.0.30Print the number of cores available to the current process.\nIf the `OMP_NUM_THREADS` or `OMP_THREAD_LIMIT` environment variables are set, then\nthey will determine the minimum and maximum returned value respectively.{} [OPTION", 6);
    v6.long(&v0, "ignore(uutils coreutils) 0.0.30Print the number of cores available to the current process.\nIf the `OMP_NUM_THREADS` or `OMP_THREAD_LIMIT` environment variables are set, then\nthey will determine the minimum and maximum returned value respectively.{} [OPTION", 6);
    v0.value_name(&v6);
    v6.help(&v0, "ignore up to N cores", 20);
    a0.arg(&v3, &v6);
    return a0;
}
