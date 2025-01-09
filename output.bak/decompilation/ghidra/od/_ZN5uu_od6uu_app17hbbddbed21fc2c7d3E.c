undefined8 __rustcall uu_od::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [700];
  ulong local_4c4;
  undefined4 local_4bc;
  char *local_4b8;
  undefined8 local_4b0;
  char *local_4a8;
  undefined8 local_4a0;
  uint local_270;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_780,uVar1);
  clap_builder::builder::command::Command::version(auStack_a48,local_780,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_780,auStack_a48,"Dump files in octal and other formats",0x25);
                    /* try { // try from 001c6a1e to 001c6a37 has its CatchHandler @ 001c7b17 */
  uucore::format_usage
            (&local_4b8,
             "{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]"
             ,0xaf);
  clap_builder::builder::command::Command::override_usage(auStack_a48,local_780,&local_4b8);
  clap_builder::builder::command::Command::after_help
            (local_780,auStack_a48,
             "Displays data in various human-readable formats. If multiple formats are\nspecified, the output will contain all formats in the order they appear on the\ncommand line. Each format will be printed on a new line. Only the line\ncontaining the first format will be prefixed with the offset.\n\nIf no filename is specified, or it is \"-\", stdin will be used. After a \"--\", no\nmore options will be recognized. This allows for filenames starting with a \"-\".\n\nIf a filename is a valid number which can be used as an offset in the second\nform, you can force it to be recognized as a filename if you include an option\nlike \"-j0\", which is only valid in the first form.\n\nRADIX is one of o,d,x,n for octal, decimal, hexadecimal or none.\n\nBYTES is decimal by default, octal if prefixed with a \"0\", or hexadecimal if\nprefixed with \"0x\". The suffixes b, KB, K, MB, M, GB, G, will multiply the\nnumber with 512, 1000, 1024, 1000^2, 1024^2, 1000^3, 1024^3, 1000^2, 1024^2.\n\nOFFSET and LABEL are octal by default, hexadecimal if prefixed with \"0x\" or\ndecimal if a \".\" suffix is added. The \"b\" suffix will multiply with 512.\n\nTYPE contains one or more format specifications consisting of:\n    a       for printable 7-bits ASCII\n    c       for utf-8 characters or octal for undefined characters\n    d[SIZE] for signed decimal\n    f[SIZE] for floating point\n    o[SIZE] for octal\n    u[SIZE] for unsigned decimal\n    x[SIZE] for hexadecimal\nSIZE is the number of bytes which can be the number 1, 2, 4, 8 or 16,\n    or C, I, S, L for 1, 2, 4, 8 bytes for integer types,\n    or F, D, L for 4, 8, 16 bytes for floating point.\nAny type specification can have a \"z\" suffix, which will add a ASCII dump at\n    the end of the line.\n\nIf an error occurred, a diagnostic message will be printed to stderr, and the\nexit code will be non-zero."
             ,0x70d);
  (*(code *)PTR_memcpy_00247068)(auStack_a48,local_780,700);
  local_78c = local_4c4 | 0x400c8000400e8;
  local_784 = local_4bc;
                    /* try { // try from 001c6aab to 001c6b05 has its CatchHandler @ 001c7cbb */
  clap_builder::builder::arg::Arg::new(local_780,&DAT_0010d6a0,4);
  clap_builder::builder::arg::Arg::long(&local_4b8,local_780,&DAT_0010d6a0,4);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"Print help information.",0x17);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,5);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6b36 to 001c6bb5 has its CatchHandler @ 001c7cf4 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"address-radix",0xd);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x41);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"address-radix",0xd);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,"Select the base in which file offsets are printed.",0x32);
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,"RADIX",5);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001c6bce to 001c6c61 has its CatchHandler @ 001c7ce7 */
  clap_builder::builder::arg::Arg::new(local_780,"skip-bytes",10);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x6a);
  clap_builder::builder::arg::Arg::long(local_780,&local_4b8,"skip-bytes",10);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,local_780,"Skip bytes input bytes before formatting and writing.",0x35);
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,"BYTES",5);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001c6c7a to 001c6cf9 has its CatchHandler @ 001c7cd5 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"read-bytes",10);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x4e);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"read-bytes",10);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,"limit dump to BYTES input bytes",0x1f);
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,"BYTES",5);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001c6d12 to 001c6d6c has its CatchHandler @ 001c7cc8 */
  clap_builder::builder::arg::Arg::new(local_780,"endian",6);
  clap_builder::builder::arg::Arg::long(&local_4b8,local_780,"endian",6);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"byte order to use for multi-byte formats",0x28);
  local_4b8 = "big";
  local_4b0 = 3;
  local_4a8 = "little";
  local_4a0 = 6;
                    /* try { // try from 001c6da3 to 001c6db7 has its CatchHandler @ 001c7b02 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (local_268,&local_4b8);
                    /* try { // try from 001c6db8 to 001c6dd4 has its CatchHandler @ 001c7afd */
  clap_builder::builder::arg::Arg::value_parser(&local_4b8,local_780,local_268);
                    /* try { // try from 001c6dd5 to 001c6df5 has its CatchHandler @ 001c7cc8 */
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,"big|little",10);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001c6e0e to 001c6ea4 has its CatchHandler @ 001c7d18 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"strings",7);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x53);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"strings",7);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,
             "NotImplemented: output strings of at least BYTES graphic chars. 3 is assumed when BYTES is not specified."
             ,0x69);
  clap_builder::builder::arg::Arg::default_missing_value(auStack_a48,&local_4b8,"3",1);
  clap_builder::builder::arg::Arg::value_name(&local_4b8,auStack_a48,"BYTES",5);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6ebd to 001c6f0e has its CatchHandler @ 001c7c8e */
  clap_builder::builder::arg::Arg::new(local_780,"a",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x61);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"named characters, ignoring high-order bit",0x29);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6f3f to 001c6f81 has its CatchHandler @ 001c7c79 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"b",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x62);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"octal bytes",0xb);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6fad to 001c6ffe has its CatchHandler @ 001c7c69 */
  clap_builder::builder::arg::Arg::new(local_780,"c",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,99);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"ASCII characters or backslash escapes",0x25);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c702f to 001c7071 has its CatchHandler @ 001c7c54 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"d",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,100);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"unsigned decimal 2-byte units",0x1d)
  ;
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c709d to 001c70ee has its CatchHandler @ 001c7c44 */
  clap_builder::builder::arg::Arg::new(local_780,"D",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x44);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"unsigned decimal 4-byte units",0x1d);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c711f to 001c7161 has its CatchHandler @ 001c7c2f */
  clap_builder::builder::arg::Arg::new(auStack_a48,"o",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x6f);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"octal 2-byte units",0x12);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c718d to 001c71de has its CatchHandler @ 001c7c1f */
  clap_builder::builder::arg::Arg::new(local_780,"I",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x49);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"decimal 8-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c720f to 001c7251 has its CatchHandler @ 001c7c0a */
  clap_builder::builder::arg::Arg::new(auStack_a48,"L",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x4c);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"decimal 8-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c727d to 001c72ce has its CatchHandler @ 001c7bfa */
  clap_builder::builder::arg::Arg::new(local_780,"i",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x69);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"decimal 4-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c72ff to 001c7341 has its CatchHandler @ 001c7be5 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"l",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x6c);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"decimal 8-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c736d to 001c73be has its CatchHandler @ 001c7bd5 */
  clap_builder::builder::arg::Arg::new(local_780,"x",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x78);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"hexadecimal 2-byte units",0x18);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c73ef to 001c7431 has its CatchHandler @ 001c7bc0 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"h",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x68);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"hexadecimal 2-byte units",0x18);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c745d to 001c74ae has its CatchHandler @ 001c7bb0 */
  clap_builder::builder::arg::Arg::new(local_780,"O",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x4f);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"octal 4-byte units",0x12);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c74df to 001c7521 has its CatchHandler @ 001c7b9b */
  clap_builder::builder::arg::Arg::new(auStack_a48,"s",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"decimal 2-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c754d to 001c759e has its CatchHandler @ 001c7b8b */
  clap_builder::builder::arg::Arg::new(local_780,"X",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x58);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"hexadecimal 4-byte units",0x18);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c75cf to 001c7611 has its CatchHandler @ 001c7b76 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"H",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x48);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"hexadecimal 4-byte units",0x18);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c763d to 001c768e has its CatchHandler @ 001c7b66 */
  clap_builder::builder::arg::Arg::new(local_780,"e",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x65);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"floating point double precision (64-bit) units",0x2e);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c76bf to 001c7701 has its CatchHandler @ 001c7b51 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"f",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x66);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,&local_4b8,"floating point double precision (32-bit) units",0x2e);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c772d to 001c777e has its CatchHandler @ 001c7b41 */
  clap_builder::builder::arg::Arg::new(local_780,"F",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x46);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"floating point double precision (64-bit) units",0x2e);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c77af to 001c7856 has its CatchHandler @ 001c7d06 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"format",6);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x74);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"format",6);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,"select output format or formats",0x1f);
  clap_builder::builder::arg::Arg::action(auStack_a48,&local_4b8,1);
  clap_builder::builder::arg::Arg::num_args(&local_4b8,auStack_a48);
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,&DAT_0010d6bc,4);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001c786f to 001c78e1 has its CatchHandler @ 001c7cae */
  clap_builder::builder::arg::Arg::new(local_780,"output-duplicates",0x11);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x76);
  clap_builder::builder::arg::Arg::long(local_780,&local_4b8,"output-duplicates",0x11);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,local_780,"do not use * to mark line suppression",0x25);
  clap_builder::builder::arg::Arg::action(local_268,&local_4b8,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001c7912 to 001c79bd has its CatchHandler @ 001c7d2a */
  clap_builder::builder::arg::Arg::new(auStack_a48,"width: warning: ",5);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x77);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"width: warning: ",5);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,
             "output BYTES bytes per output line. 32 is implied when BYTES is not specified.",0x4e);
  clap_builder::builder::arg::Arg::default_missing_value(auStack_a48,&local_4b8,"32",2);
  clap_builder::builder::arg::Arg::value_name(&local_4b8,auStack_a48,"BYTES",5);
  clap_builder::builder::arg::Arg::num_args(local_268,&local_4b8);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001c79d6 to 001c7a30 has its CatchHandler @ 001c7c9e */
  clap_builder::builder::arg::Arg::new(local_780,"traditional",0xb);
  clap_builder::builder::arg::Arg::long(&local_4b8,local_780,"traditional",0xb);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,
             "compatibility mode with one input, offset and label.\n  invalid suffix in -- argument invalid ---- too large"
             ,0x34);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c7a61 to 001c7a74 has its CatchHandler @ 001c7b2c */
  clap_builder::builder::arg::Arg::new(auStack_a48,"FILENAME",8);
  (*(code *)PTR_memcpy_00247068)(&local_4b8,auStack_a48,0x248);
  local_270 = local_800 | 4;
  local_26c = local_7fc;
  clap_builder::builder::arg::Arg::action(auStack_a48,&local_4b8,1);
                    /* try { // try from 001c7ac0 to 001c7ad4 has its CatchHandler @ 001c7b2c */
  clap_builder::builder::arg::Arg::value_hint(&local_4b8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_780,&local_4b8);
  return param_1;
}