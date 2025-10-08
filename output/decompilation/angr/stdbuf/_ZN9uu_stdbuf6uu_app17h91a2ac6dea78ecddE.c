long long uu_stdbuf::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x860]
    unsigned long long v1;  // [bp-0x858]
    unsigned long long v2;  // [bp-0x850]
    unsigned long long v3;  // [bp-0x848]
    char v4;  // [bp-0x840]
    unsigned int v5;  // [bp-0x5c8]
    unsigned int v6;  // [bp-0x5c4]
    char v7;  // [bp-0x5c0]
    unsigned int v8;  // [bp-0x348]
    unsigned int v9;  // [bp-0x344]
    unsigned long long v10;  // [bp-0x304]
    unsigned int v11;  // [bp-0x2fc]
    char v12;  // [bp-0x2f8]
    unsigned long v13;  // [bp-0x3c]
    char v14;  // [bp-0x34]
    unsigned long long v17;  // rdx

    v12.new(uucore::util_name(), v17);
    v7.version(&v12);
    v12.about(&v7);
    v7.after_help(&v12);
    uucore::format_usage(&v4, "{} [OPTION]... COMMANDadjust standard input stream bufferingadjust standard output stream bufferingadjust standard error stream bufferingcommand", 22);
    v12.override_usage(&v7, &v4);
    memcpy(&v7, &v12, 700);
    v10 = 549755814048 | v13;
    v11 = *((int *)&v14);
    v12.new("inputoutputerrorLline buffering stdin is meaninglessinvalid mode ", 5);
    v4.long(&v12, "inputoutputerrorLline buffering stdin is meaninglessinvalid mode ", 5);
    v12.short(&v4, 105);
    v4.help(&v12, "adjust standard input stream bufferingadjust standard output stream bufferingadjust standard error stream bufferingcommand", 38);
    v12.value_name(&v4);
    v0 = "outputerrorLline buffering stdin is meaninglessinvalid mode ";
    v1 = 6;
    v2 = "errorLline buffering stdin is meaninglessinvalid mode ";
    v3 = 5;
    v4.required_unless_present_any(&v12, &v0);
    v12.arg(&v7, &v4);
    v7.new("outputerrorLline buffering stdin is meaninglessinvalid mode ", 6);
    v4.long(&v7, "outputerrorLline buffering stdin is meaninglessinvalid mode ", 6);
    v7.short(&v4, 111);
    v4.help(&v7, "adjust standard output stream bufferingadjust standard error stream bufferingcommand", 39);
    v7.value_name(&v4);
    v0 = "inputoutputerrorLline buffering stdin is meaninglessinvalid mode ";
    v1 = 5;
    v2 = "errorLline buffering stdin is meaninglessinvalid mode ";
    v3 = 5;
    v4.required_unless_present_any(&v7, &v0);
    v7.arg(&v12, &v4);
    v12.new("errorLline buffering stdin is meaninglessinvalid mode ", 5);
    v4.long(&v12, "errorLline buffering stdin is meaninglessinvalid mode ", 5);
    v12.short(&v4, 101);
    v4.help(&v12, "adjust standard error stream bufferingcommand", 38);
    v12.value_name(&v4);
    v0 = "inputoutputerrorLline buffering stdin is meaninglessinvalid mode ";
    v1 = 5;
    v2 = "outputerrorLline buffering stdin is meaninglessinvalid mode ";
    v3 = 6;
    v4.required_unless_present_any(&v12, &v0);
    v12.arg(&v7, &v4);
    v7.new("command", 7);
    v4.action(&v7);
    memcpy(&v7, &v4, 632);
    v8 = v5 | 5;
    v9 = v6;
    v4.value_hint(&v7);
    a0.arg(&v12, &v4);
    return a0;
}
