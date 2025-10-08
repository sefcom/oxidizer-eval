long long uu_runcon::uu_app(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xab0]
    char v2;  // [bp-0x830]
    unsigned long long v3;  // [bp-0x574]
    unsigned int v4;  // [bp-0x56c]
    char v5;  // [bp-0x568]
    unsigned long v6;  // [bp-0x2ac]
    unsigned int v7;  // [bp-0x2a4]
    char v8;  // [bp-0x2a0]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rcx

    v5.new(uucore::util_name(), v11);
    v2.version(&v5);
    v5.about(&v2);
    v2.after_help(&v5);
    uucore::format_usage(&v1, "{} CONTEXT COMMAND [ARG...]\n{} [-c] [-u USER] [-r ROLE] [-t TYPE] [-l RANGE] COMMAND [ARG...]computeCompute process transition context before modifying.Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE ", 93);
    v5.override_usage(&v2, &v1);
    memcpy(&v2, &v5, 700);
    v3 = 549755814016 | v6;
    v4 = v7;
    v5.new("computeCompute process transition context before modifying.Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE in the target security context.rangeRANGESet range RANGE in the target security context.ARGGe", 7);
    v1.short(&v5, 99);
    v5.long(&v1, "computeCompute process transition context before modifying.Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE in the target security context.rangeRANGESet range RANGE in the target security context.ARGGe", 7);
    v1.help(&v5, "Compute process transition context before modifying.Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE in the target security context.rangeRANGESet range RANGE in the target security context.ARGGetting s", 52);
    v8.action(&v1, 2);
    v5.arg(&v2, &v8);
    v2.new("userSomedumb", 4);
    v1.short(&v2, 117);
    v2.long(&v1, "userSomedumb", 4);
    v1.value_name(&v2, "USER", 4);
    v2.help(&v1, "Set user USER in the target security context.Set role ROLE in the target security context.Set type TYPE in the target security context.rangeRANGESet range RANGE in the target security context.ARGGetting security context of the current processCreating new c", 45);
    v0 = 2;
    v1.value_parser(&v2, &v0);
    v2.arg(&v5, &v1);
    v5.new("role) = Zero", 4);
    v1.short(&v5, 114);
    v5.long(&v1, "role) = Zero", 4);
    v1.value_name(&v5, "ROLE", 4);
    v5.help(&v1, "Set role ROLE in the target security context.Set type TYPE in the target security context.rangeRANGESet range RANGE in the target security context.ARGGetting security context of the current processCreating new contextSetting new security contextChecking se", 45);
    v1.value_parser(&v5, &v0);
    v5.arg(&v2, &v1);
    v2.new("type    TYPE\"`$\\EADV", 4);
    v1.short(&v2, 116);
    v2.long(&v1, "type    TYPE\"`$\\EADV", 4);
    v1.value_name(&v2, "TYPE\"`$\\EADV", 4);
    v2.help(&v1, "Set type TYPE in the target security context.rangeRANGESet range RANGE in the target security context.ARGGetting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of com", 45);
    v1.value_parser(&v2, &v0);
    v2.arg(&v5, &v1);
    v5.new("rangeRANGESet range RANGE in the target security context.ARGGetting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComput", 5);
    v1.short(&v5, 108);
    v5.long(&v1, "rangeRANGESet range RANGE in the target security context.ARGGetting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComput", 5);
    v1.value_name(&v5, "RANGESet range RANGE in the target security context.ARGGetting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing r", 5);
    v5.help(&v1, "Set range RANGE in the target security context.ARGGetting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result", 47);
    v1.value_parser(&v5, &v0);
    v5.arg(&v2, &v1);
    v2.new("ARGGetting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting ", 3);
    v1.action(&v2, 1);
    v2.value_parser(&v1, &v0);
    v1.value_hint(&v2);
    v2.arg(&v5, &v1);
    memcpy(a0, &v2, 700);
    v12 = *((long long *)((char *)&v3 + 4));
    a0->field_2bc = (int)v3 | 32;
    a0->field_2c0 = v12;
    return a0;
}
