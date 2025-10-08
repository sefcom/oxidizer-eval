long long uu_tee::uu_app(unsigned long long a0)
{
    int v0;  // [bp-0xba8]
    void* v1;  // [bp-0xb98], Other Possible Types: char
    int v2;  // [bp-0xb98]
    unsigned long long v3;  // [bp-0xb90]
    int v4;  // [bp-0xb88], Other Possible Types: void*
    unsigned long long v5;  // [bp-0xb80]
    int v6;  // [bp-0xb78]
    int v7;  // [bp-0xb68], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xb60]
    unsigned long long v9;  // [bp-0xb58], Other Possible Types: char
    char v10;  // [bp-0xb50]
    int v11;  // [bp-0xb40]
    int v12;  // [bp-0xb30]
    int v13;  // [bp-0xb20]
    unsigned long long v14;  // [bp-0xb10]
    int v15;  // [bp-0xb08]
    int v16;  // [bp-0xaf8]
    int v17;  // [bp-0xae8]
    int v18;  // [bp-0xad8]
    unsigned long long v19;  // [bp-0xac8]
    int v20;  // [bp-0xac0]
    int v21;  // [bp-0xab0]
    int v22;  // [bp-0xaa0]
    char v23;  // [bp-0xa90]
    unsigned long long v24;  // [bp-0xa80]
    unsigned int v25;  // [bp-0x920]
    unsigned int v26;  // [bp-0x91c]
    unsigned long long v27;  // [bp-0x8dc]
    unsigned int v28;  // [bp-0x8d4]
    int v29;  // [bp-0x8c8], Other Possible Types: char
    int v30;  // [bp-0x8b8]
    int v31;  // [bp-0x8a8]
    int v32;  // [bp-0x898]
    unsigned long long v33;  // [bp-0x888]
    char v34;  // [bp-0x880]
    int v35;  // [bp-0x870]
    int v36;  // [bp-0x860]
    int v37;  // [bp-0x850]
    unsigned long long v38;  // [bp-0x840]
    int v39;  // [bp-0x838], Other Possible Types: char
    int v40;  // [bp-0x828]
    int v41;  // [bp-0x818]
    int v42;  // [bp-0x808]
    unsigned long long v43;  // [bp-0x7f8]
    char v44;  // [bp-0x7f0]
    unsigned int v45;  // [bp-0x578]
    unsigned int v46;  // [bp-0x574]
    char v47;  // [bp-0x570]
    unsigned long v48;  // [bp-0x2b4]
    unsigned int v49;  // [bp-0x2ac]
    int v50;  // [bp-0x2a8], Other Possible Types: char
    int v51;  // [bp-0x298]
    int v52;  // [bp-0x288]
    char v53;  // [bp-0x278]
    char v54;  // [bp-0x268]
    unsigned long long v57;  // rdx

    v47.new(uucore::util_name(), v57);
    v1.version(&v47);
    v47.about(&v1);
    uucore::format_usage(&v44, "{} [OPTION]... [FILE]...If a FILE is -, it refers to a file named - .--helpPrint helpappendappend to the given FILEs, do not overwriteignore-interruptsignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignor", 24);
    v1.override_usage(&v47, &v44);
    v47.after_help(&v1);
    memcpy(&v1, &v47, 700);
    v27 = 2252349570023552 | v48;
    v28 = v49;
    v47.new("--helpPrint helpappendappend to the given FILEs, do not overwriteignore-interruptsignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writ", 6);
    v44.short(&v47, 104);
    v47.long(&v44, "helpNoneshim", 4);
    v44.help(&v47, "Print helpappendappend to the given FILEs, do not overwriteignore-interruptsignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to", 10);
    v50.action(&v44, 7);
    v47.arg(&v1, &v50);
    v1.new("appendappend to the given FILEs, do not overwriteignore-interruptsignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to any outpu", 6);
    v44.long(&v1, "appendappend to the given FILEs, do not overwriteignore-interruptsignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to any outpu", 6);
    v1.short(&v44, 97);
    v44.help(&v1, "append to the given FILEs, do not overwriteignore-interruptsignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to any outputprodu", 43);
    v50.action(&v44, 2);
    v1.arg(&v47, &v50);
    v47.new("ignore-interruptsignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to any outputproduce warnings for errors that are not pipe er", 17);
    v44.long(&v47, "ignore-interruptsignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to any outputproduce warnings for errors that are not pipe er", 17);
    v47.short(&v44, 105);
    v44.help(&v47, "ignore interrupt signals (ignored on non-Unix platforms)ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to any outputproduce warnings for errors that are not pipe errors (ignored on ", 56);
    v50.action(&v44, 2);
    v47.arg(&v1, &v50);
    v1.new("filei128 as dyn exitERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v44.action(&v1, 1);
    v50.value_hint(&v44);
    v1.arg(&v47, &v50);
    v47.new("ignore-pipe-errorsset write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to any outputproduce warnings for errors that are not pipe errors (ignored on non-unix platforms)exit on write errors to any outputexi", 18);
    v44.short(&v47, 112);
    v47.help(&v44, "set write error behavior (ignored on non-Unix platforms)output-errorproduce warnings for errors writing to any outputproduce warnings for errors that are not pipe errors (ignored on non-unix platforms)exit on write errors to any outputexit on write errors ", 56);
    v44.action(&v47, 2);
    v47.arg(&v1, &v44);
    v1.new("output-errorproduce warnings for errors writing to any outputproduce warnings for errors that are not pipe errors (ignored on non-unix platforms)exit on write errors to any outputexit on write errors to any output that are not pipe errors (equivalent to ex", 12);
    v44.long(&v1, "output-errorproduce warnings for errors writing to any outputproduce warnings for errors that are not pipe errors (ignored on non-unix platforms)exit on write errors to any outputexit on write errors to any output that are not pipe errors (equivalent to ex", 12);
    memcpy(&v1, &v44, 632);
    v25 = 128 | v45;
    v26 = v46;
    v44.num_args(&v1, 0, 1);
    v7 = "warnZero";
    v8 = 4;
    v5 = 0x8000000000000000;
    v6 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v9 = 0;
    v29.help(&v1, "produce warnings for errors writing to any outputproduce warnings for errors that are not pipe errors (ignored on non-unix platforms)exit on write errors to any outputexit on write errors to any output that are not pipe errors (equivalent to exit on non-un", 49);
    v7 = "warn-nopipeexit-nopipe(uutils coreutils) 0.0.30Copy standard input to each FILE, and also to standard output.{} [OPTION]... [FILE]...If a FILE is -, it refers to a file named - .--helpPrint helpappendappend to the given FILEs, do not overwriteignore-interr";
    v8 = 11;
    v5 = 0x8000000000000000;
    v6 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v9 = 0;
    v34.help(&v1, "produce warnings for errors that are not pipe errors (ignored on non-unix platforms)exit on write errors to any outputexit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)set write error behavior'standard output'src/uu/tee/src/tee.rs: \nstdin: ", 84);
    v7 = "exitERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ";
    v8 = 4;
    v5 = 0x8000000000000000;
    v6 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v9 = 0;
    v39.help(&v1, "exit on write errors to any outputexit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)set write error behavior'standard output'src/uu/tee/src/tee.rs: \nstdin: ", 34);
    v7 = "exit-nopipe(uutils coreutils) 0.0.30Copy standard input to each FILE, and also to standard output.{} [OPTION]... [FILE]...If a FILE is -, it refers to a file named - .--helpPrint helpappendappend to the given FILEs, do not overwriteignore-interruptsignore ";
    v8 = 11;
    v5 = 0x8000000000000000;
    memcpy(&v6, &v0, 16);
    *((unsigned long long *)&v2) = 0;
    v3 = 8;
    v4 = 0;
    v9 = 0;
    v50.help(&(unsigned long long)v2, "exit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)set write error behavior'standard output'src/uu/tee/src/tee.rs: \nstdin: ", 102);
    v2 = v29;
    v4 = v30;
    v6 = v31;
    v7 = v32;
    v9 = v33;
    memcpy(&v10, &v34, 16);
    v11 = v35;
    v12 = v36;
    v13 = v37;
    v14 = v38;
    v19 = v43;
    v18 = v42;
    v17 = v41;
    v16 = v40;
    v15 = v39;
    v24 = *((long long *)&v54);
    memcpy(&v23, &v53, 16);
    v22 = v52;
    v21 = v51;
    v20 = v50;
    v50.from(&(unsigned long long)v2);
    (unsigned long long)v2.value_parser(&v44, &v50);
    v44.help(&(unsigned long long)v2, "set write error behavior'standard output'src/uu/tee/src/tee.rs: \nstdin: ", 24);
    a0.arg(&v47, &v44);
    return a0;
}
