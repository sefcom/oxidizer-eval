long long uu_who::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    char v1;  // [bp-0x830]
    unsigned long long v2;  // [bp-0x574]
    unsigned int v3;  // [bp-0x56c]
    char v4;  // [bp-0x568]
    unsigned long v5;  // [bp-0x2ac]
    unsigned int v6;  // [bp-0x2a4]
    char v7;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x298]
    unsigned long long v9;  // [bp-0x290]
    unsigned long long v10;  // [bp-0x288]
    unsigned long long v13;  // rdx

    v1.new(uucore::util_name(), v13);
    v4.version(&v1);
    v1.about(&v4);
    uucore::format_usage(&v0, "{} [OPTION]... [ FILE | ARG1 ARG2 ]allsame as -b -d --login -p -r -t -T -utime of last system bootprint dead processesheadingprint line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly", 35);
    v4.override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v4.new("allsame as -b -d --login -p -r -t -T -utime of last system bootprint dead processesheadingprint line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with ", 3);
    v0.long(&v4, "allsame as -b -d --login -p -r -t -T -utime of last system bootprint dead processesheadingprint line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with ", 3);
    v4.short(&v0, 97);
    v0.help(&v4, "same as -b -d --login -p -r -t -T -utime of last system bootprint dead processesheadingprint line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with std", 36);
    v7.action(&v0);
    v4.arg(&v1, &v7);
    v1.new("bootBlue", 4);
    v0.long(&v1, "bootBlue", 4);
    v1.short(&v0, 98);
    v0.help(&v1, "time of last system bootprint dead processesheadingprint line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spaw", 24);
    v7.action(&v0);
    v1.arg(&v4, &v7);
    v4.new("deadkeyscaseu128for<", 4);
    v0.long(&v4, "deadkeyscaseu128for<", 4);
    v4.short(&v0, 100);
    v0.help(&v4, "print dead processesheadingprint line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall logi", 20);
    v7.action(&v0);
    v4.arg(&v1, &v7);
    v1.new("headingprint line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number o", 7);
    v0.long(&v1, "headingprint line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number o", 7);
    v1.short(&v0, 72);
    v0.help(&v1, "print line of column headingsloginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users", 29);
    v7.action(&v0);
    v1.arg(&v4, &v7);
    v4.new("loginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users logged onshortprint only nam", 5);
    v0.long(&v4, "loginprint system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users logged onshortprint only nam", 5);
    v4.short(&v0, 108);
    v0.help(&v4, "print system login processeslookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users logged onshortprint only name, li", 28);
    v7.action(&v0);
    v4.arg(&v1, &v7);
    v1.new("lookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users logged onshortprint only name, line, and time (default)print ", 6);
    v0.long(&v1, "lookupattempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users logged onshortprint only name, line, and time (default)print ", 6);
    v1.help(&v0, "attempt to canonicalize hostnames via DNSonly_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users logged onshortprint only name, line, and time (default)print last s", 41);
    v0.action(&v1);
    v1.arg(&v4, &v0);
    v4.new("only_hostname_useronly hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users logged onshortprint only name, line, and time (default)print last system clock changeuserslist users logged ", 18);
    v0.short(&v4, 109);
    v4.help(&v0, "only hostname and user associated with stdinprocessprint active processes spawned by initcountall login names and number of users logged onshortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user'", 44);
    v0.action(&v4);
    v4.arg(&v1, &v0);
    v1.new("processprint active processes spawned by initcountall login names and number of users logged onshortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 7);
    v0.long(&v1, "processprint active processes spawned by initcountall login names and number of users logged onshortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 7);
    v1.short(&v0, 112);
    v0.help(&v1, "print active processes spawned by initcountall login names and number of users logged onshortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 38);
    v7.action(&v0);
    v1.arg(&v4, &v7);
    v4.new("countall login names and number of users logged onshortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 5);
    v0.long(&v4, "countall login names and number of users logged onshortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 5);
    v4.short(&v0, 113);
    v0.help(&v4, "all login names and number of users logged onshortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 45);
    v7.action(&v0);
    v4.arg(&v1, &v7);
    v1.new("runlevelextern \"# users=ENOTUNIQELIBEXECENOTSOCK", 8);
    v0.long(&v1, "runlevelextern \"# users=ENOTUNIQELIBEXECENOTSOCK", 8);
    v1.short(&v0, 114);
    v0.help(&v1, "print current runlevel(uutils coreutils) 0.0.30Print information about users who are currently logged in.{} [OPTION]... [ FILE | ARG1 ARG2 ]allsame as -b -d --login -p -r -t -T -utime of last system bootprint dead processesheadingprint line of column headi", 22);
    v7.action(&v0);
    v1.arg(&v4, &v7);
    v4.new("shortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 5);
    v0.long(&v4, "shortprint only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 5);
    v4.short(&v0, 115);
    v0.help(&v4, "print only name, line, and time (default)print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 41);
    v7.action(&v0);
    v4.arg(&v1, &v7);
    v1.new("timecodetip:", 4);
    v0.long(&v1, "timecodetip:", 4);
    v1.short(&v0, 116);
    v0.help(&v1, "print last system clock changeuserslist users logged inmessageadd user's message status as +, - or ?", 30);
    v7.action(&v0);
    v1.arg(&v4, &v7);
    v4.new("userslist users logged inmessageadd user's message status as +, - or ?", 5);
    v0.long(&v4, "userslist users logged inmessageadd user's message status as +, - or ?", 5);
    v4.short(&v0, 117);
    v0.help(&v4, "list users logged inmessageadd user's message status as +, - or ?", 20);
    v7.action(&v0);
    v4.arg(&v1, &v7);
    v1.new("mesgdeadkeyscaseu128for<", 4);
    v0.long(&v1, "mesgdeadkeyscaseu128for<", 4);
    v1.short(&v0, 84);
    v0.visible_short_alias(&v1);
    v7 = "messageadd user's message status as +, - or ?";
    v8 = 7;
    v9 = "writable\n       February";
    v10 = 8;
    v1.visible_aliases(&v0, &v7);
    v0.help(&v1, "add user's message status as +, - or ?", 38);
    v7.action(&v0);
    v1.arg(&v4, &v7);
    v4.new("FILEcharJuly", 4);
    v0.num_args(&v4, 1, 2);
    v4.value_hint(&v0);
    a0.arg(&v1, &v4);
    return a0;
}
