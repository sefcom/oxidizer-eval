long long uu_expr::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x830]
    unsigned int v1;  // [bp-0x5b8]
    unsigned int v2;  // [bp-0x5b4]
    unsigned long v3;  // [bp-0x574]
    unsigned int v4;  // [bp-0x56c]
    char v5;  // [bp-0x568]
    unsigned long long v6;  // [bp-0x2ac]
    unsigned int v7;  // [bp-0x2a4]
    char v8;  // [bp-0x2a0]
    unsigned int v9;  // [bp-0x28]
    char v10;  // [bp-0x24]
    unsigned long long v13;  // rdx

    v0.new(uucore::util_name(), v13);
    v5.version(&v0);
    v0.about(&v5);
    uucore::format_usage(&v8, "{} [EXPRESSION]\n{} [OPTIONS]Print the value of EXPRESSION to standard output.  A blank line below\nseparates increasing precedence groups.\n\nEXPRESSION may be:\n\n- ARG1 | ARG2: ARG1 if it is neither null nor 0, otherwise ARG2\n- ARG1 & ARG2: ARG1 if neither ar", 28);
    v5.override_usage(&v0, &v8);
    v0.after_help(&v5);
    ::libc.so.0::memcpy(&v5, &v0, 700);
    v6 = 11259548826861696 | v3;
    v7 = v4;
    v0.new("versionoutput version information and exitdisplay this help and exitexpressionInvalid content of \\{\\}Unmatched ) or \\}Unmatched \\{syntax error: unexpected argument syntax error: missing argument after syntax error: expecting ')' after syntax error: expecti", 7);
    v8.long(&v0, "versionoutput version information and exitdisplay this help and exitexpressionInvalid content of \\{\\}Unmatched ) or \\}Unmatched \\{syntax error: unexpected argument syntax error: missing argument after syntax error: expecting ')' after syntax error: expecti", 7);
    v0.help(&v8, "output version information and exitdisplay this help and exitexpressionInvalid content of \\{\\}Unmatched ) or \\}Unmatched \\{syntax error: unexpected argument syntax error: missing argument after syntax error: expecting ')' after syntax error: expecting ')' ", 35);
    v8.action(&v0, 8);
    v0.arg(&v5, &v8);
    v5.new("helpNoneshim", 4);
    v8.long(&v5, "helpNoneshim", 4);
    v5.help(&v8, "display this help and exitexpressionInvalid content of \\{\\}Unmatched ) or \\}Unmatched \\{syntax error: unexpected argument syntax error: missing argument after syntax error: expecting ')' after syntax error: expecting ')' instead of ", 26);
    v8.action(&v5, 5);
    v5.arg(&v0, &v8);
    v0.new("expressionInvalid content of \\{\\}Unmatched ) or \\}Unmatched \\{syntax error: unexpected argument syntax error: missing argument after syntax error: expecting ')' after syntax error: expecting ')' instead of ", 10);
    v8.action(&v0, 1);
    ::libc.so.0::memcpy(&v0, &v8, 632);
    v1 = v9 | 32;
    v2 = *((int *)&v10);
    a0.arg(&v5, &v0);
    return a0;
}
