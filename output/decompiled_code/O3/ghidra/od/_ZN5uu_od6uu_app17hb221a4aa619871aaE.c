undefined8 __rustcall uu_od::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  uint local_78c;
  ulong local_788;
  undefined local_780 [700];
  uint local_4c4;
  ulong local_4c0;
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
                    /* try { // try from 001c649e to 001c64b7 has its CatchHandler @ 001c7597 */
  uucore::format_usage
            (&local_4b8,
             "{} [OPTION]... [--] [FILENAME]...\n{} [-abcdDefFhHiIlLoOsxX] [FILENAME] [[+][0x]OFFSET[.][b]]\n{} --traditional [OPTION]... [FILENAME] [[+][0x]OFFSET[.][b] [[+][0x]LABEL[.][b]]]"
             ,0xaf);
  clap_builder::builder::command::Command::override_usage(auStack_a48,local_780,&local_4b8);
  clap_builder::builder::command::Command::after_help
            (local_780,auStack_a48,
             "Displays data in various human-readable formats. If multiple formats are\nspecified, the output will contain all formats in the order they appear on the\ncommand line. Each format will be printed on a new line. Only the line\ncontaining the first format will be prefixed with the offset.\n\nIf no filename is specified, or it is \"-\", stdin will be used. After a \"--\", no\nmore options will be recognized. This allows for filenames starting with a \"-\".\n\nIf a filename is a valid number which can be used as an offset in the second\nform, you can force it to be recognized as a filename if you include an option\nlike \"-j0\", which is only valid in the first form.\n\nRADIX is one of o,d,x,n for octal, decimal, hexadecimal or none.\n\nBYTES is decimal by default, octal if prefixed with a \"0\", or hexadecimal if\nprefixed with \"0x\". The suffixes b, KB, K, MB, M, GB, G, will multiply the\nnumber with 512, 1000, 1024, 1000^2, 1024^2, 1000^3, 1024^3, 1000^2, 1024^2.\n\nOFFSET and LABEL are octal by default, hexadecimal if prefixed with \"0x\" or\ndecimal if a \".\" suffix is added. The \"b\" suffix will multiply with 512.\n\nTYPE contains one or more format specifications consisting of:\n    a       for printable 7-bits ASCII\n    c       for utf-8 characters or octal for undefined characters\n    d[SIZE] for signed decimal\n    f[SIZE] for floating point\n    o[SIZE] for octal\n    u[SIZE] for unsigned decimal\n    x[SIZE] for hexadecimal\nSIZE is the number of bytes which can be the number 1, 2, 4, 8 or 16,\n    or C, I, S, L for 1, 2, 4, 8 bytes for integer types,\n    or F, D, L for 4, 8, 16 bytes for floating point.\nAny type specification can have a \"z\" suffix, which will add a ASCII dump at\n    the end of the line.\n\nIf an error occurred, a diagnostic message will be printed to stderr, and the\nexit code will be non-zero."
             ,0x70d);
  (*(code *)PTR_memcpy_00246878)(auStack_a48,local_780,700);
  local_78c = local_4c4 | 0x400e8;
  local_788 = local_4c0 | 0x400c8;
                    /* try { // try from 001c652b to 001c6585 has its CatchHandler @ 001c773b */
  clap_builder::builder::arg::Arg::new(local_780,&DAT_00117b10,4);
  clap_builder::builder::arg::Arg::long(&local_4b8,local_780,&DAT_00117b10,4);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"Print help information.",0x17);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,5);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c65b6 to 001c6635 has its CatchHandler @ 001c7774 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"address-radix",0xd);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x41);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"address-radix",0xd);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,"Select the base in which file offsets are printed.",0x32);
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,"RADIX",5);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001c664e to 001c66e1 has its CatchHandler @ 001c7767 */
  clap_builder::builder::arg::Arg::new(local_780,"skip-bytes",10);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x6a);
  clap_builder::builder::arg::Arg::long(local_780,&local_4b8,"skip-bytes",10);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,local_780,"Skip bytes input bytes before formatting and writing.",0x35);
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,"BYTES",5);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001c66fa to 001c6779 has its CatchHandler @ 001c7755 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"read-bytes",10);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x4e);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"read-bytes",10);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,"limit dump to BYTES input bytes",0x1f);
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,"BYTES",5);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001c6792 to 001c67ec has its CatchHandler @ 001c7748 */
  clap_builder::builder::arg::Arg::new(local_780,"endian",6);
  clap_builder::builder::arg::Arg::long(&local_4b8,local_780,"endian",6);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"byte order to use for multi-byte formats",0x28);
  local_4b8 = "big";
  local_4b0 = 3;
  local_4a8 = "little";
  local_4a0 = 6;
                    /* try { // try from 001c6823 to 001c6837 has its CatchHandler @ 001c7582 */
  _<uucore::parser::shortcut_value_parser::ShortcutValueParser_as_core::convert::From<I>>::from
            (local_268,&local_4b8);
                    /* try { // try from 001c6838 to 001c6854 has its CatchHandler @ 001c757d */
  clap_builder::builder::arg::Arg::value_parser(&local_4b8,local_780,local_268);
                    /* try { // try from 001c6855 to 001c6875 has its CatchHandler @ 001c7748 */
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,"big|little",10);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001c688e to 001c6924 has its CatchHandler @ 001c7798 */
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
                    /* try { // try from 001c693d to 001c698e has its CatchHandler @ 001c770e */
  clap_builder::builder::arg::Arg::new(local_780,"a",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x61);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"named characters, ignoring high-order bit",0x29);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c69bf to 001c6a01 has its CatchHandler @ 001c76f9 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"b",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x62);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"octal bytes",0xb);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6a2d to 001c6a7e has its CatchHandler @ 001c76e9 */
  clap_builder::builder::arg::Arg::new(local_780,"c",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,99);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"ASCII characters or backslash escapes",0x25);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6aaf to 001c6af1 has its CatchHandler @ 001c76d4 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"d",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,100);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"unsigned decimal 2-byte units",0x1d)
  ;
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6b1d to 001c6b6e has its CatchHandler @ 001c76c4 */
  clap_builder::builder::arg::Arg::new(local_780,"D",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x44);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"unsigned decimal 4-byte units",0x1d);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6b9f to 001c6be1 has its CatchHandler @ 001c76af */
  clap_builder::builder::arg::Arg::new(auStack_a48,"o",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x6f);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"octal 2-byte units",0x12);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6c0d to 001c6c5e has its CatchHandler @ 001c769f */
  clap_builder::builder::arg::Arg::new(local_780,"I",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x49);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"decimal 8-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6c8f to 001c6cd1 has its CatchHandler @ 001c768a */
  clap_builder::builder::arg::Arg::new(auStack_a48,"L",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x4c);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"decimal 8-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6cfd to 001c6d4e has its CatchHandler @ 001c767a */
  clap_builder::builder::arg::Arg::new(local_780,"i",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x69);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"decimal 4-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6d7f to 001c6dc1 has its CatchHandler @ 001c7665 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"l",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x6c);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"decimal 8-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6ded to 001c6e3e has its CatchHandler @ 001c7655 */
  clap_builder::builder::arg::Arg::new(local_780,"x",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x78);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"hexadecimal 2-byte units",0x18);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6e6f to 001c6eb1 has its CatchHandler @ 001c7640 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"h",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x68);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"hexadecimal 2-byte units",0x18);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6edd to 001c6f2e has its CatchHandler @ 001c7630 */
  clap_builder::builder::arg::Arg::new(local_780,"O",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x4f);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"octal 4-byte units",0x12);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c6f5f to 001c6fa1 has its CatchHandler @ 001c761b */
  clap_builder::builder::arg::Arg::new(auStack_a48,"s",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"decimal 2-byte units",0x14);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c6fcd to 001c701e has its CatchHandler @ 001c760b */
  clap_builder::builder::arg::Arg::new(local_780,"X",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x58);
  clap_builder::builder::arg::Arg::help(local_780,&local_4b8,"hexadecimal 4-byte units",0x18);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c704f to 001c7091 has its CatchHandler @ 001c75f6 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"H",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x48);
  clap_builder::builder::arg::Arg::help(auStack_a48,&local_4b8,"hexadecimal 4-byte units",0x18);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c70bd to 001c710e has its CatchHandler @ 001c75e6 */
  clap_builder::builder::arg::Arg::new(local_780,"e",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x65);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"floating point double precision (64-bit) units",0x2e);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c713f to 001c7181 has its CatchHandler @ 001c75d1 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"f",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x66);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,&local_4b8,"floating point double precision (32-bit) units",0x2e);
  clap_builder::builder::arg::Arg::action(&local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,&local_4b8);
                    /* try { // try from 001c71ad to 001c71fe has its CatchHandler @ 001c75c1 */
  clap_builder::builder::arg::Arg::new(local_780,"F",1);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x46);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,"floating point double precision (64-bit) units",0x2e);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c722f to 001c72d6 has its CatchHandler @ 001c7786 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"format",6);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x74);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"format",6);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,"select output format or formats",0x1f);
  clap_builder::builder::arg::Arg::action(auStack_a48,&local_4b8,1);
  clap_builder::builder::arg::Arg::num_args(&local_4b8,auStack_a48);
  clap_builder::builder::arg::Arg::value_name(local_268,&local_4b8,&DAT_00117b2c,4);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001c72ef to 001c7361 has its CatchHandler @ 001c772e */
  clap_builder::builder::arg::Arg::new(local_780,"output-duplicates",0x11);
  clap_builder::builder::arg::Arg::short(&local_4b8,local_780,0x76);
  clap_builder::builder::arg::Arg::long(local_780,&local_4b8,"output-duplicates",0x11);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,local_780,"do not use * to mark line suppression",0x25);
  clap_builder::builder::arg::Arg::action(local_268,&local_4b8,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001c7392 to 001c743d has its CatchHandler @ 001c77aa */
  clap_builder::builder::arg::Arg::new(auStack_a48,"width",5);
  clap_builder::builder::arg::Arg::short(&local_4b8,auStack_a48,0x77);
  clap_builder::builder::arg::Arg::long(auStack_a48,&local_4b8,"width",5);
  clap_builder::builder::arg::Arg::help
            (&local_4b8,auStack_a48,
             "output BYTES bytes per output line. 32 is implied when BYTES is not specified.",0x4e);
  clap_builder::builder::arg::Arg::default_missing_value(auStack_a48,&local_4b8,"32",2);
  clap_builder::builder::arg::Arg::value_name(&local_4b8,auStack_a48,"BYTES",5);
  clap_builder::builder::arg::Arg::num_args(local_268,&local_4b8);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001c7456 to 001c74b0 has its CatchHandler @ 001c771e */
  clap_builder::builder::arg::Arg::new(local_780,"traditional",0xb);
  clap_builder::builder::arg::Arg::long(&local_4b8,local_780,"traditional",0xb);
  clap_builder::builder::arg::Arg::help
            (local_780,&local_4b8,
             "compatibility mode with one input, offset and label.  \ninvalid suffix in -- argument invalid ---- too large"
             ,0x34);
  clap_builder::builder::arg::Arg::action(&local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,&local_4b8);
                    /* try { // try from 001c74e1 to 001c74f4 has its CatchHandler @ 001c75ac */
  clap_builder::builder::arg::Arg::new(auStack_a48,"FILENAME",8);
  (*(code *)PTR_memcpy_00246878)(&local_4b8,auStack_a48,0x248);
  local_270 = local_800 | 4;
  local_26c = local_7fc;
  clap_builder::builder::arg::Arg::action(auStack_a48,&local_4b8,1);
                    /* try { // try from 001c7540 to 001c7554 has its CatchHandler @ 001c75ac */
  clap_builder::builder::arg::Arg::value_hint(&local_4b8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_780,&local_4b8);
  return param_1;
}