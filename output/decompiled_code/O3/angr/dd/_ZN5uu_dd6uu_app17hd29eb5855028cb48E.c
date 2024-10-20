long long uu_dd::uu_app::hd29eb5855028cb48(unsigned long long a0)
{
    char v0;  // [bp-0x898]
    char v1;  // [bp-0x890]
    void* v2;  // [bp-0x880], Other Possible Types: char
    unsigned long long v3;  // [sp-0x870]
    unsigned long long v4;  // [sp-0x868]
    unsigned long long v5;  // [sp-0x860]
    void* v6;  // [sp-0x858]
    void* v7;  // [sp-0x848]
    unsigned long long v8;  // [sp-0x830]
    void* v9;  // [sp-0x818]
    unsigned long long v10;  // [sp-0x810]
    int v11;  // [sp-0x808]
    unsigned long long v12;  // [sp-0x7f8]
    int v13;  // [sp-0x7f0]
    unsigned long long v14;  // [sp-0x7e0]
    int v15;  // [sp-0x7d8]
    unsigned long long v16;  // [sp-0x7c8]
    int v17;  // [sp-0x7c0]
    unsigned long long v18;  // [sp-0x7b0]
    int v19;  // [sp-0x7a8]
    unsigned long long v20;  // [sp-0x798]
    int v21;  // [sp-0x790]
    unsigned long long v22;  // [sp-0x780]
    int v23;  // [sp-0x778]
    unsigned long long v24;  // [sp-0x768]
    int v25;  // [sp-0x760]
    unsigned long long v26;  // [sp-0x750]
    int v27;  // [sp-0x748]
    unsigned long long v28;  // [sp-0x738]
    int v29;  // [sp-0x730]
    unsigned long long v30;  // [sp-0x720]
    int v31;  // [sp-0x718]
    unsigned long long v32;  // [sp-0x708]
    int v33;  // [sp-0x700]
    unsigned long long v34;  // [sp-0x6f0]
    int v35;  // [sp-0x6e8]
    unsigned long long v36;  // [sp-0x6d8]
    void* v37;  // [sp-0x6d0]
    unsigned long long v38;  // [sp-0x6c8]
    unsigned long v39;  // [sp-0x6b0], Other Possible Types: unsigned long long
    int v40;  // [bp-0x6a8], Other Possible Types: char
    unsigned long long v41;  // [sp-0x688]
    unsigned long long v42;  // [sp-0x670]
    unsigned long long v43;  // [sp-0x668]
    void* v44;  // [sp-0x660]
    void* v45;  // [sp-0x650]
    unsigned long long v46;  // [sp-0x640]
    unsigned int v47;  // [sp-0x638]
    unsigned short v48;  // [sp-0x634]
    char v49;  // [bp-0x5c4]
    char v50;  // [bp-0x5bc]
    int v51;  // [sp-0x5b8]
    unsigned long long v52;  // [sp-0x2fc]
    unsigned int v53;  // [sp-0x2f4]
    char v54;  // [bp-0x2f0]
    unsigned long long v55;  // [sp-0x90]
    unsigned long long v56;  // [sp-0x88]
    unsigned long long v58;  // r14
    unsigned long long v59;  // rsi

    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    clap_builder::builder::command::Command::new::h58456c14d5abd645(&v54, g_51be68, g_51be70);
    v55 = "0.0.27Copy, and optionally convert, a file system resource{} [OPERAND]...\n{} OPTION### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion block size' in bytes. Applies ";
    v56 = 6;
    clap_builder::builder::command::Command::about::h339e9b12f30d084a(&v2, &v54, "Copy, and optionally convert, a file system resource{} [OPERAND]...\n{} OPTION### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion block size' in bytes. Applies to the", 52);
    uucore::format_usage::ha88dc4d716cb78ed(&v0, "{} [OPERAND]...\n{} OPTION### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion block size' in bytes. Applies to the\n   conv=block, and conv=unblock operations.\n- conv=", 25);
    v58 = *((long long *)&v0);
    if (v58 != 0x8000000000000000)
        *((int128_t *)&v51) = *((int128_t *)&v1);
    v59 = v39;
    if (v59 != 0x8000000000000000 && v59)
        __rust_dealloc(*((long long *)&v40));
    v39 = v58;
    v40 = v51;
    memcpy(&v51, &v2, 712);
    clap_builder::builder::command::Command::after_help::h8c7e9e28aaf5b35d(&v2, &v51, "### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion block size' in bytes. Applies to the\n   conv=block, and conv=unblock operations.\n- conv=CONVS : a comma-separated list of conversion options or (for legacy\n   reasons) file flags.\n- count=N : stop reading input after N ibs-sized read operations rather\n   than proceeding until EOF. See iflag=count_bytes if stopping after N bytes\n   is preferred\n- ibs=N : the size of buffer used for reads (default: 512)\n- if=FILE : the file used for input. When not specified, stdin is used instead\n- iflag=FLAGS : a comma-separated list of input flags which specify how the\n   input source is treated. FLAGS may be any of the input-flags or general-flags\n   specified below.\n- skip=N (or iseek=N) : skip N ibs-sized records into input before beginning\n   copy/convert operations. See iflag=seek_bytes if seeking N bytes is preferred.\n- obs=N : the size of buffer used for writes (default: 512)\n-", 5047);
    memcpy(&v51, &v2, 700);
    v52 = 549755814016 | *((long long *)&v49);
    v53 = *((int *)&v50);
    *((int128_t *)&v11) = 0;
    *((int128_t *)&v13) = 0;
    *((int128_t *)&v15) = 0;
    *((int128_t *)&v17) = 0;
    *((int128_t *)&v19) = 0;
    *((int128_t *)&v21) = 0;
    *((int128_t *)&v23) = 0;
    *((int128_t *)&v25) = 0;
    *((int128_t *)&v27) = 0;
    *((int128_t *)&v29) = 0;
    *((int128_t *)&v31) = 0;
    *((int128_t *)&v33) = 0;
    *((int128_t *)&v35) = 0;
    v2 = 0;
    v3 = 1;
    v4 = 1;
    v5 = -1;
    v6 = 0;
    v7 = 0;
    v8 = 5;
    v9 = 0;
    v10 = 8;
    v12 = 8;
    v14 = 8;
    v16 = 8;
    v18 = 8;
    v20 = 8;
    v22 = 8;
    v24 = 8;
    v26 = 8;
    v28 = 4;
    v30 = 8;
    v32 = 8;
    v34 = 8;
    v36 = 8;
    v37 = 0;
    v38 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v41 = 9223372036854775809;
    v42 = "operandsNotFoundTimedOut";
    v43 = 8;
    v44 = 0;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    clap_builder::builder::command::Command::arg::he8d12827cdc8b9e1(a0, &v51, &v2);
    return a0;
}
