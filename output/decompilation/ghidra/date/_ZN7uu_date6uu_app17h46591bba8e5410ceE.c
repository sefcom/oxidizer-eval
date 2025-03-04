undefined8 _ZN7uu_date6uu_app17h46591bba8e5410ceE(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_a58;
  undefined8 local_a50;
  char *local_a48;
  undefined8 local_a40;
  char *local_a38;
  undefined8 local_a30;
  char *local_a28;
  undefined8 local_a20;
  char *local_a18;
  undefined8 local_a10;
  ulong local_79c;
  undefined4 local_794;
  char *local_790;
  undefined8 local_788;
  char *local_780;
  undefined8 local_778;
  char *local_770;
  undefined8 local_768;
  undefined local_540 [700];
  ulong local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined local_268;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hd9826196214d2c4fE(local_540,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h161717c8ebc266ccE
            (&local_a58,local_540,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17hb7173941c0c8dfc2E
            (local_540,&local_a58,"Print or set the system date and time",0x25);
                    /* try { // try from 002c6b02 to 002c6b1b has its CatchHandler @ 002c72ba */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E
            (&local_790,"{} [OPTION]... [+FORMAT]...\n{} [OPTION]... [MMDDhhmm[[CC]YY][.ss]]",0x42);
  _ZN12clap_builder7builder7command7Command14override_usage17h5735dea81badfd79E
            (&local_a58,local_540,&local_790);
  (*(code *)PTR_memcpy_0044d800)(local_540,&local_a58,700);
  local_284 = local_79c | 0x8000000080;
  local_27c = local_794;
                    /* try { // try from 002c6b75 to 002c6bf7 has its CatchHandler @ 002c731a */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(&local_a58,"date",4);
  _ZN12clap_builder7builder3arg3Arg5short17h4cc0d2cff70f7d13E(&local_790,&local_a58,100);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(&local_a58,&local_790,"date",4);
  _ZN12clap_builder7builder3arg3Arg10value_name17h006fe9fc008c14d0E
            (&local_790,&local_a58,"STRING",6);
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (&local_278,&local_790,"display time described by STRING, not \'now\'",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(&local_a58,local_540,&local_278)
  ;
                    /* try { // try from 002c6c10 to 002c6cbd has its CatchHandler @ 002c733e */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(local_540,"filemode",4);
  _ZN12clap_builder7builder3arg3Arg5short17h4cc0d2cff70f7d13E(&local_790,local_540,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(local_540,&local_790,"filemode",4);
  _ZN12clap_builder7builder3arg3Arg10value_name17h006fe9fc008c14d0E
            (&local_790,local_540,&DAT_00152178,8);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h47c8a99cbc3a89c3E(local_540,&local_790,3);
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (&local_790,local_540,"like --date; once for each line of DATEFILE",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(local_540,&local_a58,&local_790)
  ;
                    /* try { // try from 002c6cd6 to 002c6d34 has its CatchHandler @ 002c734b */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(&local_a58,&DAT_00152428,8);
  _ZN12clap_builder7builder3arg3Arg5short17h4cc0d2cff70f7d13E(&local_790,&local_a58,0x49);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(&local_a58,&local_790,&DAT_00152428,8);
  _ZN12clap_builder7builder3arg3Arg10value_name17h006fe9fc008c14d0E(&local_790,&local_a58,"FMT",3);
  local_a58 = "date";
  local_a50 = 4;
  local_a48 = "hours";
  local_a40 = 5;
  local_a38 = "minutes";
  local_a30 = 7;
  local_a28 = "seconds";
  local_a20 = 7;
  local_a18 = "ns";
  local_a10 = 2;
                    /* try { // try from 002c6d96 to 002c6da5 has its CatchHandler @ 002c72a5 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17he2a824a314ec1e43E
            (&local_278,&local_a58);
                    /* try { // try from 002c6da6 to 002c6dbd has its CatchHandler @ 002c72a0 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h9f376b1dd37b5aebE
            (&local_a58,&local_790,&local_278);
  local_278 = 0;
  local_270 = 1;
  local_268 = 0;
                    /* try { // try from 002c6dde to 002c6e21 has its CatchHandler @ 002c734b */
  _ZN12clap_builder7builder3arg3Arg8num_args17h2188acb4f39cf13aE(&local_790,&local_a58,&local_278);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h135fac1eb528b780E
            (&local_a58,&local_790);
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (&local_790,&local_a58,
             "output date/time in ISO 8601 format.\n FMT=\'date\' for date only (the default),\n \'hours\', \'minutes\', \'seconds\', or \'ns\'\n for date and time to the indicated precision.\n Example: 2006-08-14T02:34:56-06:00"
             ,200);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(&local_a58,local_540,&local_790)
  ;
                    /* try { // try from 002c6e3a to 002c6eac has its CatchHandler @ 002c72dc */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(local_540,"rfc-email",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4cc0d2cff70f7d13E(&local_790,local_540,0x52);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(local_540,&local_790,"rfc-email",9);
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (&local_790,local_540,
             "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2006 02:34:56 -0600",
             0x52);
  _ZN12clap_builder7builder3arg3Arg6action17h90da531525695d3dE(&local_278,&local_790);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(local_540,&local_a58,&local_278)
  ;
                    /* try { // try from 002c6ed8 to 002c6f23 has its CatchHandler @ 002c7308 */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(&local_a58,"rfc-3339",8);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(&local_790,&local_a58,"rfc-3339",8);
  _ZN12clap_builder7builder3arg3Arg10value_name17h006fe9fc008c14d0E(&local_a58,&local_790,"FMT",3);
  local_790 = "date";
  local_788 = 4;
  local_780 = "seconds";
  local_778 = 7;
  local_770 = "ns";
  local_768 = 2;
                    /* try { // try from 002c6f60 to 002c6f74 has its CatchHandler @ 002c7293 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17heb8648efcc3e58b4E
            (&local_278,&local_790);
                    /* try { // try from 002c6f75 to 002c6f8c has its CatchHandler @ 002c7291 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h9f376b1dd37b5aebE
            (&local_790,&local_a58,&local_278);
                    /* try { // try from 002c6f8d to 002c6fad has its CatchHandler @ 002c7308 */
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (&local_278,&local_790,
             "output date/time in RFC 3339 format.\n FMT=\'date\', \'seconds\', or \'ns\'\n for date and time to the indicated precision.\n Example: 2006-08-14 02:34:56-06:00"
             ,0x97);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(&local_a58,local_540,&local_278)
  ;
                    /* try { // try from 002c6fc6 to 002c7020 has its CatchHandler @ 002c72cf */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(local_540,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(&local_790,local_540,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (local_540,&local_790,
             "annotate the parsed date, and warn about questionable usage to stderr",0x45);
  _ZN12clap_builder7builder3arg3Arg6action17h90da531525695d3dE(&local_790,local_540);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(local_540,&local_a58,&local_790)
  ;
                    /* try { // try from 002c704c to 002c70db has its CatchHandler @ 002c732c */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(&local_a58,"reference",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4cc0d2cff70f7d13E(&local_790,&local_a58,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(&local_a58,&local_790,"reference",9);
  _ZN12clap_builder7builder3arg3Arg10value_name17h006fe9fc008c14d0E
            (&local_790,&local_a58,&DAT_001506e4,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h47c8a99cbc3a89c3E(&local_a58,&local_790,2);
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (&local_790,&local_a58,"display the last modification time of FILE",0x2a);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(&local_a58,local_540,&local_790)
  ;
                    /* try { // try from 002c70f4 to 002c7187 has its CatchHandler @ 002c72fb */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(local_540,"set",3);
  _ZN12clap_builder7builder3arg3Arg5short17h4cc0d2cff70f7d13E(&local_790,local_540,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(local_540,&local_790,"set",3);
  _ZN12clap_builder7builder3arg3Arg10value_name17h006fe9fc008c14d0E(&local_790,local_540,"STRING",6)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (&local_278,&local_790,"set time described by STRING",0x1c);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(local_540,&local_a58,&local_278)
  ;
                    /* try { // try from 002c71a0 to 002c721a has its CatchHandler @ 002c72e9 */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(&local_a58,"universal",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4cc0d2cff70f7d13E(&local_790,&local_a58,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17h638405025bc9c111E(&local_a58,&local_790,"universal",9);
  _ZN12clap_builder7builder3arg3Arg5alias17hd9fa8728006a9b30E(&local_790,&local_a58,"utc",3);
  _ZN12clap_builder7builder3arg3Arg4help17h7b8f73cd52095a52E
            (&local_a58,&local_790,"print or set Coordinated Universal Time (UTC)",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17h90da531525695d3dE(&local_790,&local_a58);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(&local_a58,local_540,&local_790)
  ;
                    /* try { // try from 002c7241 to 002c7259 has its CatchHandler @ 002c7281 */
  _ZN12clap_builder7builder3arg3Arg3new17h106195aa2fe03bc6E(local_540,"format",6);
  _ZN12clap_builder7builder7command7Command3arg17h881f7e23a5e414cdE(param_1,&local_a58,local_540);
  return param_1;
}