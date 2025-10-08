long long uu_mkfifo::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    char v5;  // [bp-0x5b4]
    unsigned long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned int v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2ec]
    unsigned long long v11;  // [bp-0x2ac]
    unsigned int v12;  // [bp-0x2a4]
    char v13;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v16;  // rdx

    v8.new(uucore::util_name(), v16);
    v3.version(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... NAME...Create a FIFO with the given name.Zcontext(uutils coreutils) 0.0.30file permissions for the fifoset the SELinux security context to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX", 22);
    v8.override_usage(&v3, &v0);
    v3.about(&v8);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | v6;
    v12 = v7;
    v3.new("modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v0.short(&v3, 109);
    v3.long(&v0, "modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v0.help(&v3, "file permissions for the fifoset the SELinux security context to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX", 29);
    v13.value_name(&v0, "MODEEADV", 4);
    v3.arg(&v8, &v13);
    v8.new("Zcontext(uutils coreutils) 0.0.30file permissions for the fifoset the SELinux security context to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX", 1);
    v0.short(&v8, 90);
    v8.help(&v0, "set the SELinux security context to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX", 48);
    v0.action(&v8, 2);
    v8.arg(&v3, &v0);
    v3.new("context(uutils coreutils) 0.0.30file permissions for the fifoset the SELinux security context to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX", 7);
    v0.long(&v3, "context(uutils coreutils) 0.0.30file permissions for the fifoset the SELinux security context to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX", 7);
    v3.value_name(&v0, "CTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX", 3);
    v13 = 1;
    v0.value_parser(&v3, &v13);
    v3.num_args(&v0, 0, 1);
    memcpy(&v0, &v3, 632);
    v1 = 128 | v4;
    v2 = *((int *)&v5);
    v13.help(&v0, "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX", 85);
    v3.arg(&v8, &v13);
    v8.new("fifo", 4);
    memcpy(&v0, &v8, 632);
    v1 = v9 | 4;
    v2 = *((int *)&v10);
    v8.action(&v0, 1);
    v0.value_hint(&v8);
    a0.arg(&v3, &v0);
    return a0;
}
