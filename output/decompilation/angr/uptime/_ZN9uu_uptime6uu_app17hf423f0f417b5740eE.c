long long uu_uptime::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xaf0]
    unsigned long long v1;  // [bp-0x834]
    unsigned int v2;  // [bp-0x82c]
    char v3;  // [bp-0x828]
    unsigned long v4;  // [bp-0x56c]
    unsigned int v5;  // [bp-0x564]
    char v6;  // [bp-0x560]
    char v7;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v10;  // rdx

    v6.new(uucore::util_name(), v10);
    v3.version(&v6);
    v6.about(&v3);
    uucore::format_usage(&v0, "{} [OPTION]...system up sincefile to search boot time from: \nup ???? days ??:??,couldn't get boot time\n", 14);
    v3.override_usage(&v6, &v0);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    v6.new("since(uutils coreutils) 0.0.30Display the current time, the length of time the system has been up,\nthe number of users on the system, and the average number of jobs\nin the run queue over the last 1, 5 and 15 minutes.{} [OPTION]...system up sincefile to sea", 5);
    v3.short(&v6);
    v6.long(&v3);
    v3.help(&v6, "system up sincefile to search boot time from: \nup ???? days ??:??,couldn't get boot time\n", 15);
    v7.action(&v3, 2);
    v6.arg(&v0, &v7);
    v3.new("pathAnsi -- ", 4);
    v0.help(&v3, "file to search boot time from: \nup ???? days ??:??,couldn't get boot time\n", 29);
    v3.action(&v0, 0);
    v0.num_args(&v3, 0, 1);
    v7 = 2;
    v3.value_parser(&v0, &v7);
    v0.value_hint(&v3);
    a0.arg(&v6, &v0);
    return a0;
}
