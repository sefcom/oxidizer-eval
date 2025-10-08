undefined8 _ZN8uu_split6uu_app17h4bc5bb72ff3a6c94E(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_ac0 [632];
  uint local_848;
  undefined4 local_844;
  undefined local_840 [632];
  uint local_5c8;
  undefined4 local_5c4;
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [632];
  uint local_300;
  undefined4 local_2fc;
  ulong local_2bc;
  undefined4 local_2b4;
  char *local_2b0;
  undefined8 local_2a8;
  char *local_2a0;
  undefined8 local_298;
  char *local_290;
  undefined8 local_288;
  char *local_280;
  undefined8 local_278;
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00211de0)();
  _ZN12clap_builder7builder7command7Command3new17h41e17eb1aea6c495E(local_840,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h3b208e48757fb43fE(local_578,local_840);
  _ZN12clap_builder7builder7command7Command5about17h0a36665cc94d7b0bE(local_840,local_578);
  _ZN12clap_builder7builder7command7Command10after_help17h9fc888400bae14b3E(local_578,local_840);
                    /* try { // try from 0016d8b3 to 0016d8c9 has its CatchHandler @ 0016e767 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00212128)
            (local_ac0,"{} [OPTION]... [INPUT [PREFIX]]",0x1f);
  _ZN12clap_builder7builder7command7Command14override_usage17hebd3ddfa6ca071ccE
            (local_840,local_578,local_ac0);
  puVar1 = PTR_memcpy_00211da8;
  (*(code *)PTR_memcpy_00211da8)(local_578,local_840,700);
  local_2bc = local_584 | 0x8000000080;
  local_2b4 = local_57c;
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"bytes",5);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_ac0,local_840,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_840,local_ac0,"bytes",5);
  (*(code *)puVar1)(local_ac0,local_840,0x278);
  local_848 = local_5c8 | 0x20;
  local_844 = local_5c4;
                    /* try { // try from 0016d9a8 to 0016d9e1 has its CatchHandler @ 0016e809 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E
            (local_840,local_ac0,&DAT_0011a6c8,4);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (local_ac0,local_840,"put SIZE bytes per output file",0x1e);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_578,"line-bytes",10);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_ac0,local_578,0x43);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_578,local_ac0,"line-bytes",10);
  (*(code *)PTR_memcpy_00211da8)(local_ac0,local_578,0x278);
  local_848 = local_300 | 0x20;
  local_844 = local_2fc;
                    /* try { // try from 0016da80 to 0016dab9 has its CatchHandler @ 0016e7f7 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E
            (local_578,local_ac0,&DAT_0011a6c8,4);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (local_ac0,local_578,"put at most SIZE bytes of lines per output file",0x2f);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"lines",5);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_ac0,local_840,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_840,local_ac0,"lines",5);
  (*(code *)PTR_memcpy_00211da8)(local_ac0,local_840,0x278);
  local_848 = local_5c8 | 0x20;
  local_844 = local_5c4;
                    /* try { // try from 0016db58 to 0016dbaf has its CatchHandler @ 0016e863 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E(local_840,local_ac0,"NUMBER",6);
  _ZN12clap_builder7builder3arg3Arg13default_value17h21ed427647d28c05E
            (local_ac0,local_840,&DAT_0011a71c,4);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (&local_2b0,local_ac0,"put NUMBER lines/records per output file",0x28);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_578,"number",6);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_ac0,local_578,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_578,local_ac0,"number",6);
  (*(code *)PTR_memcpy_00211da8)(local_ac0,local_578,0x278);
  local_848 = local_300 | 0x20;
  local_844 = local_2fc;
                    /* try { // try from 0016dc51 to 0016dc8a has its CatchHandler @ 0016e7e5 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E(local_578,local_ac0,"CHUNKS",6);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (local_ac0,local_578,"generate CHUNKS output files; see explanation below",0x33);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"additional-suffix",0x11);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E
            (local_ac0,local_840,"additional-suffix",0x11);
  (*(code *)PTR_memcpy_00211da8)(local_840,local_ac0,0x278);
  local_5c8 = local_848 | 0x20;
  local_5c4 = local_844;
                    /* try { // try from 0016dd14 to 0016dd63 has its CatchHandler @ 0016e851 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E(local_ac0,local_840,"SUFFIX",6);
  _ZN12clap_builder7builder3arg3Arg13default_value17h21ed427647d28c05E(local_840,local_ac0,1,0);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (local_ac0,local_840,"additional SUFFIX to append to output file names",0x30);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_578,"filter",6);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_ac0,local_578,"filter",6);
  (*(code *)PTR_memcpy_00211da8)(local_578,local_ac0,0x278);
  local_300 = local_848 | 0x20;
  local_2fc = local_844;
                    /* try { // try from 0016dded to 0016de3a has its CatchHandler @ 0016e83f */
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E(local_ac0,local_578,"COMMAND",7)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17hb02a9222ff84e842E(local_578,local_ac0,6);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (local_ac0,local_578,
             "write to shell COMMAND; file name is $FILE (Currently not implemented for Windows)",
             0x52);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"elide-empty-files",0x11);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E
            (local_ac0,local_840,"elide-empty-files",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_840,local_ac0,0x65);
                    /* try { // try from 0016dea8 to 0016dec0 has its CatchHandler @ 0016e752 */
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (local_ac0,local_840,"do not generate empty output files with \'-n\'",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17hd0a509d31e4e1db2E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_578,"-d",2);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_ac0,local_578,100);
  _ZN12clap_builder7builder3arg3Arg6action17hd0a509d31e4e1db2E(local_578,local_ac0,2);
  local_2b0 = "numeric-suffixes";
  local_2a8 = 0x10;
  local_2a0 = "-d";
  local_298 = 2;
  local_290 = "hex-suffixes";
  local_288 = 0xc;
  local_280 = "-x";
  local_278 = 2;
                    /* try { // try from 0016dfa4 to 0016dfd6 has its CatchHandler @ 0016e7d0 */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h7be55cd6546cf270E
            (local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (&local_2b0,local_ac0,"use numeric suffixes starting at 0, not alphabetic",0x32);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"numeric-suffixes",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E
            (local_ac0,local_840,"numeric-suffixes",0x10);
  (*(code *)PTR_memcpy_00211da8)(local_840,local_ac0,0x278);
  local_5c8 = local_848 | 0x80;
  local_5c4 = local_844;
  _ZN12clap_builder7builder3arg3Arg8num_args17h5a2cdb11d0767124E(local_ac0,local_840,0,1);
  local_2b0 = "numeric-suffixes";
  local_2a8 = 0x10;
  local_2a0 = "-d";
  local_298 = 2;
  local_290 = "hex-suffixes";
  local_288 = 0xc;
  local_280 = "-x";
  local_278 = 2;
                    /* try { // try from 0016e0c5 to 0016e118 has its CatchHandler @ 0016e82d */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h7be55cd6546cf270E
            (local_840,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E
            (local_ac0,local_840,&DAT_0011a778,4);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (&local_2b0,local_ac0,"same as -d, but allow setting the start value",0x2d);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_578,"-x",2);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_ac0,local_578,0x78);
  _ZN12clap_builder7builder3arg3Arg6action17hd0a509d31e4e1db2E(local_578,local_ac0,2);
  local_2b0 = "numeric-suffixes";
  local_2a8 = 0x10;
  local_2a0 = "-d";
  local_298 = 2;
  local_290 = "hex-suffixes";
  local_288 = 0xc;
  local_280 = "-x";
  local_278 = 2;
                    /* try { // try from 0016e1cb to 0016e1fd has its CatchHandler @ 0016e7bb */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h7be55cd6546cf270E
            (local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (&local_2b0,local_ac0,"use hex suffixes starting at 0, not alphabetic",0x2e);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"hex-suffixes",0xc);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_ac0,local_840,"hex-suffixes",0xc)
  ;
  (*(code *)PTR_memcpy_00211da8)(local_840,local_ac0,0x278);
  local_5c8 = local_848 | 0x80;
  local_5c4 = local_844;
  _ZN12clap_builder7builder3arg3Arg8num_args17h5a2cdb11d0767124E(local_ac0,local_840,0,1);
  local_2b0 = "numeric-suffixes";
  local_2a8 = 0x10;
  local_2a0 = "-d";
  local_298 = 2;
  local_290 = "hex-suffixes";
  local_288 = 0xc;
  local_280 = "-x";
  local_278 = 2;
                    /* try { // try from 0016e2ec to 0016e33f has its CatchHandler @ 0016e81b */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h7be55cd6546cf270E
            (local_840,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E
            (local_ac0,local_840,&DAT_0011a778,4);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (&local_2b0,local_ac0,"same as -x, but allow setting the start value",0x2d);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_578,"suffix-length",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_ac0,local_578,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E
            (local_578,local_ac0,"suffix-length",0xd);
  (*(code *)PTR_memcpy_00211da8)(local_ac0,local_578,0x278);
  local_848 = local_300 | 0x20;
  local_844 = local_2fc;
                    /* try { // try from 0016e3e1 to 0016e41e has its CatchHandler @ 0016e7a6 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E(local_578,local_ac0,"N",1);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (local_ac0,local_578,"generate suffixes of length N (default 2)",0x29);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_ac0,local_840,"verbose",7);
                    /* try { // try from 0016e470 to 0016e48b has its CatchHandler @ 0016e73d */
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (local_840,local_ac0,"print a diagnostic just before each output file is opened",0x39);
  _ZN12clap_builder7builder3arg3Arg6action17hd0a509d31e4e1db2E(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_578,"separator",9);
  _ZN12clap_builder7builder3arg3Arg5short17h72e02daf65d8a52eE(local_ac0,local_578,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_578,local_ac0,"separator",9);
  (*(code *)PTR_memcpy_00211da8)(local_ac0,local_578,0x278);
  local_848 = local_300 | 0x20;
  local_844 = local_2fc;
                    /* try { // try from 0016e542 to 0016e593 has its CatchHandler @ 0016e791 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hbddf314840765f66E(local_578,local_ac0,"SEP",3);
  _ZN12clap_builder7builder3arg3Arg6action17hd0a509d31e4e1db2E(local_ac0,local_578,1);
  _ZN12clap_builder7builder3arg3Arg4help17h362c9939a3e08521E
            (&local_2b0,local_ac0,
             "use SEP instead of newline as the record separator; \'\\0\' (zero) specifies the NUL character"
             ,0x5b);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"-io-blksize",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h43ba762a21cd8172E(local_ac0,local_840,"io-blksize",10);
                    /* try { // try from 0016e5e9 to 0016e5f8 has its CatchHandler @ 0016e728 */
  _ZN12clap_builder7builder3arg3Arg5alias17h548dd5b00076ee7dE(local_840,local_ac0);
  (*(code *)PTR_memcpy_00211da8)(local_ac0,local_840,0x278);
  local_848 = local_5c8 | 4;
  local_844 = local_5c4;
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_578,"input",5);
                    /* try { // try from 0016e667 to 0016e696 has its CatchHandler @ 0016e77c */
  _ZN12clap_builder7builder3arg3Arg13default_value17h21ed427647d28c05E(local_ac0,local_578,"-",1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hb02a9222ff84e842E(&local_2b0,local_ac0,3);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hfa61aa1c93a987deE(local_840,"prefix",6);
                    /* try { // try from 0016e6d0 to 0016e6e8 has its CatchHandler @ 0016e713 */
  _ZN12clap_builder7builder3arg3Arg13default_value17h21ed427647d28c05E(local_ac0,local_840,"x",1);
  _ZN12clap_builder7builder7command7Command3arg17h7de35b94c77ed19aE(param_1,local_578,local_ac0);
  return param_1;
}