long long uu_pinky::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xaa8]
    unsigned long v1;  // [bp-0x7ec]
    unsigned int v2;  // [bp-0x7e4]
    char v3;  // [bp-0x7e0]
    unsigned long long v4;  // [bp-0x524]
    unsigned int v5;  // [bp-0x51c]
    char v6;  // [bp-0x518]
    char v7;  // [bp-0x298]
    unsigned long long v10;  // rdx

    v3.new(uucore::util_name(), v10);
    v0.version(&v3);
    v3.about(&v0);
    uucore::format_usage(&v6, "{} [OPTION]... [USER]...long_formatproduce long format output for the specified USERsomit_home_diromit the user's home directory and shell in long formatomit_project_fileomit the user's project file in long formatomit_plan_fileomit the user's plan file in ", 24);
    v0.override_usage(&v3, &v6);
    memcpy(&v3, &v0, 700);
    v4 = 2252349570023552 | v1;
    v5 = v2;
    v0.new("long_formatproduce long format output for the specified USERsomit_home_diromit the user's home directory and shell in long formatomit_project_fileomit the user's project file in long formatomit_plan_fileomit the user's plan file in long formatshort_formatd", 11);
    v6.short(&v0, 108);
    v0.requires(&v6);
    v6.help(&v0, "produce long format output for the specified USERsomit_home_diromit the user's home directory and shell in long formatomit_project_fileomit the user's project file in long formatomit_plan_fileomit the user's plan file in long formatshort_formatdo short for", 50);
    v7.action(&v6, 2);
    v0.arg(&v3, &v7);
    v3.new("omit_home_diromit the user's home directory and shell in long formatomit_project_fileomit the user's project file in long formatomit_plan_fileomit the user's plan file in long formatshort_formatdo short format output, this is the defaultomit_headingsomit t", 13);
    v6.short(&v3, 98);
    v3.help(&v6, "omit the user's home directory and shell in long formatomit_project_fileomit the user's project file in long formatomit_plan_fileomit the user's plan file in long formatshort_formatdo short format output, this is the defaultomit_headingsomit the line of co", 55);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("omit_project_fileomit the user's project file in long formatomit_plan_fileomit the user's plan file in long formatshort_formatdo short format output, this is the defaultomit_headingsomit the line of column headings in short formatomit_nameomit the user's f", 17);
    v6.short(&v0, 104);
    v0.help(&v6, "omit the user's project file in long formatomit_plan_fileomit the user's plan file in long formatshort_formatdo short format output, this is the defaultomit_headingsomit the line of column headings in short formatomit_nameomit the user's full name in short", 43);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("omit_plan_fileomit the user's plan file in long formatshort_formatdo short format output, this is the defaultomit_headingsomit the line of column headings in short formatomit_nameomit the user's full name in short formatomit_name_hostomit the user's full n", 14);
    v6.short(&v3, 112);
    v3.help(&v6, "omit the user's plan file in long formatshort_formatdo short format output, this is the defaultomit_headingsomit the line of column headings in short formatomit_nameomit the user's full name in short formatomit_name_hostomit the user's full name and remote", 40);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("short_formatdo short format output, this is the defaultomit_headingsomit the line of column headings in short formatomit_nameomit the user's full name in short formatomit_name_hostomit the user's full name and remote host in short formatomit_name_host_time", 12);
    v6.short(&v0, 115);
    v0.help(&v6, "do short format output, this is the defaultomit_headingsomit the line of column headings in short formatomit_nameomit the user's full name in short formatomit_name_hostomit the user's full name and remote host in short formatomit_name_host_timeomit the use", 43);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("omit_headingsomit the line of column headings in short formatomit_nameomit the user's full name in short formatomit_name_hostomit the user's full name and remote host in short formatomit_name_host_timeomit the user's full name, remote host and idle time in", 13);
    v6.short(&v3, 102);
    v3.help(&v6, "omit the line of column headings in short formatomit_nameomit the user's full name in short formatomit_name_hostomit the user's full name and remote host in short formatomit_name_host_timeomit the user's full name, remote host and idle time in short format", 48);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("omit_nameomit the user's full name in short formatomit_name_hostomit the user's full name and remote host in short formatomit_name_host_timeomit the user's full name, remote host and idle time in short formatPrint help information", 9);
    v6.short(&v0, 119);
    v0.help(&v6, "omit the user's full name in short formatomit_name_hostomit the user's full name and remote host in short formatomit_name_host_timeomit the user's full name, remote host and idle time in short formatPrint help information", 41);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("omit_name_hostomit the user's full name and remote host in short formatomit_name_host_timeomit the user's full name, remote host and idle time in short formatPrint help information", 14);
    v6.short(&v3, 105);
    v3.help(&v6, "omit the user's full name and remote host in short formatomit_name_host_timeomit the user's full name, remote host and idle time in short formatPrint help information", 57);
    v6.action(&v3, 2);
    v3.arg(&v0, &v6);
    v0.new("omit_name_host_timeomit the user's full name, remote host and idle time in short formatPrint help information", 19);
    v6.short(&v0, 113);
    v0.help(&v6, "omit the user's full name, remote host and idle time in short formatPrint help information", 68);
    v6.action(&v0, 2);
    v0.arg(&v3, &v6);
    v3.new("userbaseSomedumb", 4);
    v6.action(&v3, 1);
    v7.value_hint(&v6);
    v3.arg(&v0, &v7);
    v0.new("helpnoneNoneshimname", 4);
    v6.long(&v0);
    v0.help(&v6, "Print help information", 22);
    v6.action(&v0, 5);
    a0.arg(&v3, &v6);
    return a0;
}
