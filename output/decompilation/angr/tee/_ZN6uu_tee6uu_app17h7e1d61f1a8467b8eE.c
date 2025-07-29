long long uu_tee::uu_app(unsigned long long a0)
{
    int v0;  // [bp-0xbc0]
    char v1;  // [bp-0xbb0]
    unsigned long long v2;  // [bp-0xba8]
    unsigned long long v3;  // [bp-0xba0]
    void* v4;  // [bp-0xb98], Other Possible Types: char
    int v5;  // [bp-0xb98]
    unsigned long long v6;  // [bp-0xb90]
    int v7;  // [bp-0xb88], Other Possible Types: void*
    unsigned long long v8;  // [bp-0xb80]
    int v9;  // [bp-0xb78]
    int v10;  // [bp-0xb68], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xb60]
    unsigned long long v12;  // [bp-0xb58], Other Possible Types: char
    char v13;  // [bp-0xb50]
    int v14;  // [bp-0xb40]
    int v15;  // [bp-0xb30]
    int v16;  // [bp-0xb20]
    unsigned long long v17;  // [bp-0xb10]
    int v18;  // [bp-0xb08]
    int v19;  // [bp-0xaf8]
    int v20;  // [bp-0xae8]
    int v21;  // [bp-0xad8]
    unsigned long long v22;  // [bp-0xac8]
    char v23;  // [bp-0xac0]
    char v24;  // [bp-0xab0]
    int v25;  // [bp-0xaa0]
    char v26;  // [bp-0xa90]
    unsigned long long v27;  // [bp-0xa80]
    unsigned int v28;  // [bp-0x920]
    unsigned int v29;  // [bp-0x91c]
    unsigned long long v30;  // [bp-0x8dc]
    unsigned int v31;  // [bp-0x8d4]
    int v32;  // [bp-0x8c8], Other Possible Types: char
    int v33;  // [bp-0x8b8]
    int v34;  // [bp-0x8a8]
    int v35;  // [bp-0x898]
    unsigned long long v36;  // [bp-0x888]
    char v37;  // [bp-0x880]
    int v38;  // [bp-0x870]
    int v39;  // [bp-0x860]
    int v40;  // [bp-0x850]
    unsigned long long v41;  // [bp-0x840]
    int v42;  // [bp-0x838], Other Possible Types: char
    int v43;  // [bp-0x828]
    int v44;  // [bp-0x818]
    int v45;  // [bp-0x808]
    unsigned long long v46;  // [bp-0x7f8]
    char v47;  // [bp-0x7f0]
    void* v48;  // [bp-0x7d8], Other Possible Types: char
    unsigned long long v49;  // [bp-0x7d0]
    char v50;  // [bp-0x7c8]
    int v51;  // [bp-0x7b8]
    char v52;  // [bp-0x7a8]
    char v53;  // [bp-0x798]
    char v54;  // [bp-0x558]
    unsigned int v55;  // [bp-0x2e0]
    unsigned int v56;  // [bp-0x2dc]
    char v57;  // [bp-0x2d8]
    unsigned long v58;  // [bp-0x1c]
    char v59;  // [bp-0x14]
    unsigned long long v62;  // rdx

    v57.new(uucore::util_name(), v62);
    v4.version(&v57, "(uutils coreutils) 0.1.0tee-abouttee-usagetee-after-help--helptee-help-helpappendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipet", 24);
    uucore::mods::locale::get_message(&v54, "tee-abouttee-usagetee-after-help--helptee-help-helpappendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exi", 9);
    v57.about(&v4, &v54);
    uucore::mods::locale::get_message(&v1, "tee-usagetee-after-help--helptee-help-helpappendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help", 9);
    uucore::format_usage(&v54, v2, v3);
    v4.override_usage(&v57, &v54);
    uucore::mods::locale::get_message(&v54, "tee-after-help--helptee-help-helpappendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-e", 14);
    v57.after_help(&v4, &v54);
    memcpy(&v4, &v57, 700);
    v30 = 2252349570023552 | v58;
    v31 = *((int *)&v59);
    v57.new("--helptee-help-helpappendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopi", 6);
    v54.short(&v57, 104);
    v57.long(&v54, "helpNoneshimname", 4);
    uucore::mods::locale::get_message(&v48, "tee-help-helpappendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-", 13);
    v54.help(&v57, &v48);
    v48.action(&v54, 7);
    v57.arg(&v4, &v48);
    v4.new("appendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-e", 6);
    v54.long(&v4, "appendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-e", 6);
    v4.short(&v54, 97);
    uucore::mods::locale::get_message(&v48, "tee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errorte", 15);
    v54.help(&v4, &v48);
    v48.action(&v54, 2);
    v4.arg(&v57, &v48);
    v57.new("ignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outp", 17);
    v54.long(&v57, "ignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outp", 17);
    v57.short(&v54, 105);
    uucore::mods::locale::get_message(&v48, "tee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/", 26);
    v54.help(&v57, &v48);
    v48.action(&v54, 2);
    v57.arg(&v4, &v48);
    v4.new("filesizei128", 4);
    v54.action(&v4, 1);
    v48.value_hint(&v54, 3);
    v4.arg(&v57, &v48);
    v57.new("ignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 18);
    v54.short(&v57, 112);
    uucore::mods::locale::get_message(&v48, "tee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 27);
    v57.help(&v54, &v48);
    v54.action(&v57, 2);
    v57.arg(&v4, &v54);
    v4.new("output-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 12);
    v54.long(&v4, "output-errortee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 12);
    memcpy(&v4, &v54, 632);
    v28 = 128 | v55;
    v29 = v56;
    v48 = 0;
    v49 = 1;
    v50 = 0;
    v54.num_args(&v4, &v48);
    v10 = "warnmanyZero";
    v11 = 4;
    v8 = 0x8000000000000000;
    v9 = v0;
    v4 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    uucore::mods::locale::get_message(&v48, "tee-help-output-error-warntee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 26);
    v32.help(&v4, &v48);
    v10 = "warn-nopipeexit-nopipe(uutils coreutils) 0.1.0tee-abouttee-usagetee-after-help--helptee-help-helpappendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-out";
    v11 = 11;
    v8 = 0x8000000000000000;
    v9 = v0;
    v4 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    uucore::mods::locale::get_message(&v48, "tee-help-output-error-warn-nopipetee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 33);
    v37.help(&v4, &v48);
    v10 = "exitERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPE";
    v11 = 4;
    v8 = 0x8000000000000000;
    v9 = v0;
    v4 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    uucore::mods::locale::get_message(&v48, "tee-help-output-error-exittee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 26);
    v42.help(&v4, &v48);
    v10 = "exit-nopipe(uutils coreutils) 0.1.0tee-abouttee-usagetee-after-help--helptee-help-helpappendtee-help-appendignore-interruptstee-help-ignore-interruptsignore-pipe-errorstee-help-ignore-pipe-errorsoutput-errortee-help-output-error-warntee-help-output-error-w";
    v11 = 11;
    v8 = 0x8000000000000000;
    memcpy(&v9, &v0, 16);
    *((unsigned long long *)&v5) = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    uucore::mods::locale::get_message(&v47, "tee-help-output-error-exit-nopipetee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 33);
    v48.help(&(unsigned long long)v5, &v47);
    v5 = v32;
    v7 = v33;
    v9 = v34;
    v10 = v35;
    v12 = v36;
    memcpy(&v13, &v37, 16);
    v14 = v38;
    v15 = v39;
    v16 = v40;
    v17 = v41;
    v22 = v46;
    v21 = v45;
    v20 = v44;
    v19 = v43;
    v18 = v42;
    v27 = *((long long *)&v53);
    memcpy(&v26, &v52, 16);
    v25 = v51;
    memcpy(&v24, &v50, 16);
    memcpy(&v23, &v48, 16);
    v48.from(&(unsigned long long)v5);
    (unsigned long long)v5.value_parser(&v54, &v48);
    uucore::mods::locale::get_message(&v48, "tee-help-output-errortee-standard-outputsrc/uu/tee/src/tee.rs: \n", 21);
    v54.help(&(unsigned long long)v5, &v48);
    a0.arg(&v57, &v54);
    ::0x49d9f0::core::ptr::drop_in_place<alloc::string::String>(&v1);
    return a0;
}
