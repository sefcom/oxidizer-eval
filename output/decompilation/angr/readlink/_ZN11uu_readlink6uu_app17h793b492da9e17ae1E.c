long long uu_readlink::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    char v1;  // [bp-0x830]
    unsigned long long v2;  // [bp-0x574]
    unsigned int v3;  // [bp-0x56c]
    char v4;  // [bp-0x568]
    unsigned long v5;  // [bp-0x2ac]
    unsigned int v6;  // [bp-0x2a4]
    char v7;  // [bp-0x2a0]
    unsigned long long v10;  // rdx

    v1.new(uucore::util_name(), v10);
    v4.version(&v1);
    v1.about(&v4);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...canonicalizecanonicalize by following every symlink in every component of the given name recursively; all but the last component must existcanonicalize-existingcanonicalize by following every symlink in every component of the given ", 24);
    v4.override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v4.new("canonicalizecanonicalize by following every symlink in every component of the given name recursively; all but the last component must existcanonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all co", 12);
    v0.short(&v4, 102);
    v4.long(&v0, "canonicalizecanonicalize by following every symlink in every component of the given name recursively; all but the last component must existcanonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all co", 12);
    v0.help(&v4, "canonicalize by following every symlink in every component of the given name recursively; all but the last component must existcanonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components mus", 127);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without re", 21);
    v0.short(&v1, 101);
    v1.long(&v0, "canonicalize-existingcanonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without re", 21);
    v0.help(&v1, "canonicalize by following every symlink in every component of the given name recursively, all components must existcanonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on compone", 115);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("canonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on components existenceno-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport err", 20);
    v0.short(&v4, 109);
    v4.long(&v0, "canonicalize-missingcanonicalize by following every symlink in every component of the given name recursively, without requirements on components existenceno-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport err", 20);
    v0.help(&v4, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existenceno-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport error messageseparate o", 134);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("no-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 10);
    v0.short(&v1, 110);
    v1.long(&v0, "no-newlinedo not output the trailing delimiterquietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 10);
    v0.help(&v1, "do not output the trailing delimiterquietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 36);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("quietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 5);
    v0.short(&v4, 113);
    v4.long(&v0, "quietsuppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 5);
    v0.help(&v4, "suppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 28);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("silentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 6);
    v0.short(&v1, 115);
    v1.long(&v0, "silentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 6);
    v0.help(&v1, "suppress most error messagessilentverbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 28);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("verbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 7);
    v0.short(&v4, 118);
    v4.long(&v0, "verbosereport error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 7);
    v0.help(&v4, "report error messageseparate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 20);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("zeroAnsi -- ", 4);
    v0.short(&v1, 122);
    v1.long(&v0, "zeroAnsi -- ", 4);
    v0.help(&v1, "separate output with NUL rather than newlinefilessrc/uu/readlink/src/readlink.rs", 44);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("filessrc/uu/readlink/src/readlink.rs", 5);
    v0.action(&v4, 1);
    v4.value_hint(&v0);
    a0.arg(&v1, &v4);
    return a0;
}
