undefined8 __rustcall uu_split::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_ab0;
  undefined8 uStack_aa8;
  char *local_aa0;
  undefined8 uStack_a98;
  char *local_a90;
  undefined8 uStack_a88;
  char *local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined local_a60;
  uint7 uStack_a5f;
  undefined local_a58 [584];
  uint local_810;
  undefined4 local_80c;
  undefined local_808 [584];
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_54c;
  undefined4 local_544;
  undefined local_540 [584];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_284;
  undefined4 local_27c;
  char *local_278;
  undefined8 uStack_270;
  char *local_268;
  undefined8 uStack_260;
  char *local_258;
  undefined8 uStack_250;
  char *local_248;
  undefined8 uStack_240;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_808,uVar1);
  clap_builder::builder::command::Command::version(local_540,local_808,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_808,local_540,
             "Create output files containing consecutive or interleaved sections of input",0x4b);
  clap_builder::builder::command::Command::after_help
            (local_540,local_808,
             "Output fixed-size pieces of INPUT to PREFIXaa, PREFIXab, ...; default size is 1000, and default PREFIX is \'x\'. With no INPUT, or when INPUT is -, read standard input.\n\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n\nCHUNKS may be:\n\n- N       split into N files based on size of input\n- K/N     output Kth of N to stdout\n- l/N     split into N files without splitting lines/records\n- l/K/N   output Kth of N to stdout without splitting lines/records\n- r/N     like \'l\' but use round robin distribution\n- r/K/N   likewise but only output Kth of N to stdout"
             ,0x2d1);
                    /* try { // try from 001ca2c4 to 001ca2da has its CatchHandler @ 001cb15e */
  uucore::format_usage(local_a58,"{} [OPTION]... [INPUT [PREFIX]]",0x1f);
  clap_builder::builder::command::Command::override_usage(local_808,local_540,local_a58);
  (*(code *)PTR_memcpy_0024d5a8)(local_540,local_808,700);
  local_284 = local_54c | 0x8000000080;
  local_27c = local_544;
                    /* try { // try from 001ca336 to 001ca384 has its CatchHandler @ 001cb254 */
  clap_builder::builder::arg::Arg::new(local_808,"bytes",5);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x62);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"bytes",5);
  (*(code *)PTR_memcpy_0024d5a8)(local_a58,local_808,0x248);
  local_810 = local_5c0 | 0x20;
  local_80c = local_5bc;
                    /* try { // try from 001ca3bf to 001ca3f8 has its CatchHandler @ 001cb254 */
  clap_builder::builder::arg::Arg::value_name(local_808,local_a58,&DAT_00117940,4);
  clap_builder::builder::arg::Arg::help(local_a58,local_808,"put SIZE bytes per output file",0x1e);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001ca413 to 001ca461 has its CatchHandler @ 001cb242 */
  clap_builder::builder::arg::Arg::new(local_540,"line-bytes",10);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x43);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"line-bytes",10);
  (*(code *)PTR_memcpy_0024d5a8)(local_a58,local_540,0x248);
  local_810 = local_2f8 | 0x20;
  local_80c = local_2f4;
                    /* try { // try from 001ca49c to 001ca4d5 has its CatchHandler @ 001cb242 */
  clap_builder::builder::arg::Arg::value_name(local_540,local_a58,&DAT_00117940,4);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_540,"put at most SIZE bytes of lines per output file",0x2f);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001ca4f0 to 001ca53e has its CatchHandler @ 001cb28a */
  clap_builder::builder::arg::Arg::new(local_808,"lines",5);
  clap_builder::builder::arg::Arg::short(local_a58,local_808,0x6c);
  clap_builder::builder::arg::Arg::long(local_808,local_a58,"lines",5);
  (*(code *)PTR_memcpy_0024d5a8)(local_a58,local_808,0x248);
  local_810 = local_5c0 | 0x20;
  local_80c = local_5bc;
                    /* try { // try from 001ca579 to 001ca5d0 has its CatchHandler @ 001cb28a */
  clap_builder::builder::arg::Arg::value_name(local_808,local_a58,"NUMBER",6);
  clap_builder::builder::arg::Arg::default_value(local_a58,local_808,&DAT_00117994,4);
  clap_builder::builder::arg::Arg::help
            (&local_278,local_a58,"put NUMBER lines/records per output file",0x28);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001ca5ee to 001ca63c has its CatchHandler @ 001cb230 */
  clap_builder::builder::arg::Arg::new(local_540,"number",6);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x6e);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"number",6);
  (*(code *)PTR_memcpy_0024d5a8)(local_a58,local_540,0x248);
  local_810 = local_2f8 | 0x20;
  local_80c = local_2f4;
                    /* try { // try from 001ca677 to 001ca6b0 has its CatchHandler @ 001cb230 */
  clap_builder::builder::arg::Arg::value_name(local_540,local_a58,"CHUNKS",6);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_540,"generate CHUNKS output files; see explanation below",0x33);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001ca6cb to 001ca701 has its CatchHandler @ 001cb278 */
  clap_builder::builder::arg::Arg::new(local_808,"additional-suffix",0x11);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,"additional-suffix",0x11);
  (*(code *)PTR_memcpy_0024d5a8)(local_808,local_a58,0x248);
  local_5c0 = local_810 | 0x20;
  local_5bc = local_80c;
                    /* try { // try from 001ca73c to 001ca78b has its CatchHandler @ 001cb278 */
  clap_builder::builder::arg::Arg::value_name(local_a58,local_808,"SUFFIX",6);
  clap_builder::builder::arg::Arg::default_value(local_808,local_a58,1,0);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_808,"additional SUFFIX to append to output file names",0x30);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001ca7a6 to 001ca7dc has its CatchHandler @ 001cb266 */
  clap_builder::builder::arg::Arg::new(local_540,"filter",6);
  clap_builder::builder::arg::Arg::long(local_a58,local_540,"filter",6);
  (*(code *)PTR_memcpy_0024d5a8)(local_540,local_a58,0x248);
  local_2f8 = local_810 | 0x20;
  local_2f4 = local_80c;
                    /* try { // try from 001ca817 to 001ca864 has its CatchHandler @ 001cb266 */
  clap_builder::builder::arg::Arg::value_name(local_a58,local_540,"COMMAND",7);
  clap_builder::builder::arg::Arg::value_hint(local_540,local_a58,6);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_540,
             "write to shell COMMAND; file name is $FILE (Currently not implemented for Windows)",
             0x52);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001ca87f to 001ca8e8 has its CatchHandler @ 001cb1f1 */
  clap_builder::builder::arg::Arg::new(local_808,"elide-empty-files",0x11);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,"elide-empty-files",0x11);
  clap_builder::builder::arg::Arg::short(local_808,local_a58,0x65);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_808,"do not generate empty output files with \'-n\'",0x2c);
  clap_builder::builder::arg::Arg::action(&local_278,local_a58,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001ca91b to 001caa43 has its CatchHandler @ 001cb1dc */
  clap_builder::builder::arg::Arg::new(local_540,"-d",2);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,100);
  clap_builder::builder::arg::Arg::action(local_540,local_a58,2);
  local_ab0 = "numeric-suffixes";
  uStack_aa8 = 0x10;
  local_aa0 = "-d";
  uStack_a98 = 2;
  local_a90 = "hex-suffixes";
  uStack_a88 = 0xc;
  local_a80 = "-x";
  uStack_a78 = 2;
  local_248 = "-x";
  uStack_240 = 2;
  local_258 = "hex-suffixes";
  uStack_250 = 0xc;
  local_268 = "-d";
  uStack_260 = 2;
  local_278 = "numeric-suffixes";
  uStack_270 = 0x10;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a58,local_540,&local_278);
  clap_builder::builder::arg::Arg::help
            (&local_278,local_a58,"use numeric suffixes starting at 0, not alphabetic",0x32);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001caa61 to 001caa97 has its CatchHandler @ 001cb2ae */
  clap_builder::builder::arg::Arg::new(local_808,"numeric-suffixes",0x10);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,"numeric-suffixes",0x10);
  (*(code *)PTR_memcpy_0024d5a8)(local_808,local_a58,0x248);
  local_5c0 = local_810 | 0x80;
  local_5bc = local_80c;
  local_a70 = 0;
  local_a68 = 1;
  local_a60 = 0;
  local_268 = (char *)((ulong)uStack_a5f << 8);
  local_278 = (char *)0x0;
  uStack_270 = 1;
                    /* try { // try from 001cab12 to 001cabb0 has its CatchHandler @ 001cb2ae */
  clap_builder::builder::arg::Arg::num_args(local_a58,local_808,&local_278);
  local_248 = local_a80;
  uStack_240 = uStack_a78;
  local_258 = local_a90;
  uStack_250 = uStack_a88;
  local_268 = local_aa0;
  uStack_260 = uStack_a98;
  local_278 = local_ab0;
  uStack_270 = uStack_aa8;
  clap_builder::builder::arg::Arg::overrides_with_all(local_808,local_a58,&local_278);
  clap_builder::builder::arg::Arg::value_name(local_a58,local_808,&DAT_001179ec,4);
  clap_builder::builder::arg::Arg::help
            (&local_278,local_a58,"same as -d, but allow setting the start value",0x2d);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001cabce to 001cac7f has its CatchHandler @ 001cb1c7 */
  clap_builder::builder::arg::Arg::new(local_540,"-x",2);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x78);
  clap_builder::builder::arg::Arg::action(local_540,local_a58,2);
  local_248 = local_a80;
  uStack_240 = uStack_a78;
  local_258 = local_a90;
  uStack_250 = uStack_a88;
  local_268 = local_aa0;
  uStack_260 = uStack_a98;
  local_278 = local_ab0;
  uStack_270 = uStack_aa8;
  clap_builder::builder::arg::Arg::overrides_with_all(local_a58,local_540,&local_278);
  clap_builder::builder::arg::Arg::help
            (&local_278,local_a58,"use hex suffixes starting at 0, not alphabetic",0x2e);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001cac9d to 001cacd3 has its CatchHandler @ 001cb29c */
  clap_builder::builder::arg::Arg::new(local_808,"hex-suffixes",0xc);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,"hex-suffixes",0xc);
  (*(code *)PTR_memcpy_0024d5a8)(local_808,local_a58,0x248);
  local_5c0 = local_810 | 0x80;
  local_5bc = local_80c;
                    /* try { // try from 001cad10 to 001cad74 has its CatchHandler @ 001cb29c */
  clap_builder::builder::arg::Arg::num_args(local_a58,local_808,&local_a70);
  clap_builder::builder::arg::Arg::overrides_with_all(local_808,local_a58,&local_ab0);
  clap_builder::builder::arg::Arg::value_name(local_a58,local_808,&DAT_001179ec,4);
  clap_builder::builder::arg::Arg::help
            (&local_278,local_a58,"same as -x, but allow setting the start value",0x2d);
  clap_builder::builder::command::Command::arg(local_808,local_540,&local_278);
                    /* try { // try from 001cad92 to 001cade0 has its CatchHandler @ 001cb21b */
  clap_builder::builder::arg::Arg::new(local_540,"suffix-length",0xd);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x61);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"suffix-length",0xd);
  (*(code *)PTR_memcpy_0024d5a8)(local_a58,local_540,0x248);
  local_810 = local_2f8 | 0x20;
  local_80c = local_2f4;
                    /* try { // try from 001cae1b to 001cae54 has its CatchHandler @ 001cb21b */
  clap_builder::builder::arg::Arg::value_name(local_540,local_a58,"N",1);
  clap_builder::builder::arg::Arg::help
            (local_a58,local_540,"generate suffixes of length N (default 2)",0x29);
  clap_builder::builder::command::Command::arg(local_540,local_808,local_a58);
                    /* try { // try from 001cae6f to 001caec3 has its CatchHandler @ 001cb1b2 */
  clap_builder::builder::arg::Arg::new(local_808,"verbose",7);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,"verbose",7);
  clap_builder::builder::arg::Arg::help
            (local_808,local_a58,"print a diagnostic just before each output file is opened",0x39);
  clap_builder::builder::arg::Arg::action(local_a58,local_808,2);
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001caef6 to 001caf44 has its CatchHandler @ 001cb206 */
  clap_builder::builder::arg::Arg::new(local_540,"separator",9);
  clap_builder::builder::arg::Arg::short(local_a58,local_540,0x74);
  clap_builder::builder::arg::Arg::long(local_540,local_a58,"separator",9);
  (*(code *)PTR_memcpy_0024d5a8)(local_a58,local_540,0x248);
  local_810 = local_2f8 | 0x20;
  local_80c = local_2f4;
                    /* try { // try from 001caf7f to 001cafd0 has its CatchHandler @ 001cb206 */
  clap_builder::builder::arg::Arg::value_name(local_540,local_a58,"SEP",3);
  clap_builder::builder::arg::Arg::action(local_a58,local_540,1);
  clap_builder::builder::arg::Arg::help
            (&local_278,local_a58,
             "use SEP instead of newline as the record separator; \'\\0\' (zero) specifies the NUL character"
             ,0x5b);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001cafee to 001cb042 has its CatchHandler @ 001cb19d */
  clap_builder::builder::arg::Arg::new(local_808,"-io-blksize",0xb);
  clap_builder::builder::arg::Arg::long(local_a58,local_808,"io-blksize",10);
  clap_builder::builder::arg::Arg::alias(local_808,local_a58,"-io-blksize",0xb);
  (*(code *)PTR_memcpy_0024d5a8)(local_a58,local_808,0x248);
  local_810 = local_5c0 | 4;
  local_80c = local_5bc;
  clap_builder::builder::command::Command::arg(local_808,local_540,local_a58);
                    /* try { // try from 001cb095 to 001cb0e2 has its CatchHandler @ 001cb188 */
  clap_builder::builder::arg::Arg::new(local_540,"input",5);
  clap_builder::builder::arg::Arg::default_value(local_a58,local_540,"-",1);
  clap_builder::builder::arg::Arg::value_hint(&local_278,local_a58,3);
  clap_builder::builder::command::Command::arg(local_540,local_808,&local_278);
                    /* try { // try from 001cb100 to 001cb136 has its CatchHandler @ 001cb173 */
  clap_builder::builder::arg::Arg::new(local_808,"prefix",6);
  clap_builder::builder::arg::Arg::default_value
            (local_a58,local_808,
             "xmulti-character separator multiple separator characters specified--filter does not process a chunk extracted to stdoutinvalid IO block size: "
             ,1);
  clap_builder::builder::command::Command::arg(param_1,local_540,local_a58);
  return param_1;
}