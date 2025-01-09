long long uu_dd::uu_app::h3802aa9aab1c575c(unsigned long long a0)
{
    char v0;  // [bp-0x7f8]
    char v1;  // [bp-0x53c]
    char v2;  // [bp-0x534]
    char v3;  // [bp-0x530]
    unsigned long long v4;  // [sp-0x274]
    unsigned int v5;  // [sp-0x26c]
    char v6;  // [bp-0x268]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::hf97bd87459802514(&v0, uucore::util_name::h60d842bf27b05e82(), v8);
    clap_builder::builder::command::Command::version::h6f458816302443ee(&v3, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hd0a67f39e5f79877(&v0, &v3, "Copy, and optionally convert, a file system resource", 52);
    uucore::format_usage::h76fcb2d15fbabc58(&v6, "{} [OPERAND]...\n{} OPTION", 25);
    clap_builder::builder::command::Command::override_usage::hf9cdd864c2ccec31(&v3, &v0, &v6);
    clap_builder::builder::command::Command::after_help::h7c32531b2b18b3b1(&v0, &v3, "### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion block size' in bytes. Applies to the\n   conv=block, and conv=unblock operations.\n- conv=CONVS : a comma-separated list of conversion options or (for legacy\n   reasons) file flags.\n- count=N : stop reading input after N ibs-sized read operations rather\n   than proceeding until EOF. See iflag=count_bytes if stopping after N bytes\n   is preferred\n- ibs=N : the size of buffer used for reads (default: 512)\n- if=FILE : the file used for input. When not specified, stdin is used instead\n- iflag=FLAGS : a comma-separated list of input flags which specify how the\n   input source is treated. FLAGS may be any of the input-flags or general-flags\n   specified below.\n- skip=N (or iseek=N) : skip N ibs-sized records into input before beginning\n   copy/convert operations. See iflag=seek_bytes if seeking N bytes is preferred.\n- obs=N : the size of buffer used for writes (default: 512)\n-", 5047);
    memcpy(&v3, &v0, 700);
    v4 = 549755814016 | *((long long *)&v1);
    v5 = *((int *)&v2);
    clap_builder::builder::arg::Arg::new::h6fd0ebadb6d2a465(&v0, "operands", 8);
    clap_builder::builder::arg::Arg::num_args::hf9a6d8997dc166ec(&v6, &v0);
    clap_builder::builder::command::Command::arg::h29f22bc80a5408b1(a0, &v3, &v6);
    return a0;
}
