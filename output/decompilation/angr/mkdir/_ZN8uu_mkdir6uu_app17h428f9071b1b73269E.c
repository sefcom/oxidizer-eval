long long uu_mkdir::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    char v3;  // [bp-0xaa0]
    unsigned int v4;  // [bp-0x828]
    char v5;  // [bp-0x824]
    unsigned long long v6;  // [bp-0x7e4]
    unsigned int v7;  // [bp-0x7dc]
    char v8;  // [bp-0x7d8]
    unsigned int v9;  // [bp-0x560]
    unsigned int v10;  // [bp-0x55c]
    char v11;  // [bp-0x558]
    unsigned long v12;  // [bp-0x29c]
    unsigned int v13;  // [bp-0x294]
    char v14;  // [bp-0x290], Other Possible Types: unsigned long long
    unsigned long long v17;  // rdx

    v3.new(uucore::util_name(), v17);
    v11.version(&v3, "(uutils coreutils) 0.1.0mkdir-aboutmkdir-usagemkdir-help-modeparentsmkdir-help-parentsverbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 24);
    uucore::mods::locale::get_message(&v8, "mkdir-aboutmkdir-usagemkdir-help-modeparentsmkdir-help-parentsverbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 11);
    v3.about(&v11, &v8);
    uucore::mods::locale::get_message(&v0, "mkdir-usagemkdir-help-modeparentsmkdir-help-parentsverbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 11);
    uucore::format_usage(&v8, v1, v2);
    v11.override_usage(&v3, &v8);
    memcpy(&v3, &v11, 700);
    v6 = 549755814016 | v12;
    v7 = v13;
    v11.new("modesizei128", 4);
    v8.short(&v11, 109);
    v11.long(&v8, "modesizei128", 4);
    uucore::mods::locale::get_message(&v14, "mkdir-help-modeparentsmkdir-help-parentsverbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 15);
    v8.help(&v11, &v14);
    v11.arg(&v3, &v8);
    v3.new("parentsmkdir-help-parentsverbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 7);
    v8.short(&v3, 112);
    v3.long(&v8, "parentsmkdir-help-parentsverbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 7);
    uucore::mods::locale::get_message(&v14, "mkdir-help-parentsverbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 18);
    v8.help(&v3, &v14);
    v3.overrides_with(&v8, "parentsmkdir-help-parentsverbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 7);
    v8.action(&v3, 2);
    v3.arg(&v11, &v8);
    v11.new("verbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 7);
    v8.short(&v11, 118);
    v11.long(&v8, "verbosemkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 7);
    uucore::mods::locale::get_message(&v14, "mkdir-help-verbosezmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 18);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new("zmkdir-help-selinuxcontextCTXmkdir-help-context: \n", 1);
    v8.short(&v3, 90);
    uucore::mods::locale::get_message(&v14, "mkdir-help-selinuxcontextCTXmkdir-help-context: \n", 18);
    v3.help(&v8, &v14);
    v8.action(&v3, 2);
    v3.arg(&v11, &v8);
    v11.new("contextCTXmkdir-help-context: \n", 7);
    v8.long(&v11, "contextCTXmkdir-help-context: \n", 7);
    v11.value_name(&v8);
    uucore::mods::locale::get_message(&v14, "mkdir-help-context: \n", 18);
    v8.help(&v11, &v14);
    v11.arg(&v3, &v8);
    v3.new("dirs", 4);
    v8.action(&v3, 1);
    v3.num_args(&v8);
    memcpy(&v8, &v3, 632);
    v9 = v4 | 1;
    v10 = *((int *)&v5);
    v14 = 2;
    v3.value_parser(&v8, &v14);
    v8.value_hint(&v3, 4);
    a0.arg(&v11, &v8);
    ::0x4a0320::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
