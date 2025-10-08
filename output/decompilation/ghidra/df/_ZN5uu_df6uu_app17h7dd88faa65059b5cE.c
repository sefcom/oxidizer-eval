undefined8 _ZN5uu_df6uu_app17h7dd88faa65059b5cE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ad8 [3];
  undefined local_ac0 [632];
  uint local_848;
  undefined4 local_844;
  undefined local_840 [632];
  uint local_5c8;
  undefined4 local_5c4;
  ulong local_584;
  undefined4 local_57c;
  char *local_578;
  undefined8 local_570;
  char *local_568;
  undefined8 local_560;
  char *local_558;
  undefined8 local_550;
  char *local_548;
  undefined8 local_540;
  char *local_538;
  undefined8 local_530;
  char *local_528;
  undefined8 local_520;
  undefined local_2f8 [700];
  ulong local_3c;
  undefined4 local_34;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209ec8)();
  _ZN12clap_builder7builder7command7Command3new17h67a6f61a06204ec6E(local_840,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6faf0654a1ec6cb4E(local_2f8,local_840);
  _ZN12clap_builder7builder7command7Command5about17h15013569107be41aE(local_840,local_2f8);
                    /* try { // try from 0016dc20 to 0016dc36 has its CatchHandler @ 0016eb07 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0020a1d0)
            (local_ac0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hb1d69ce83f1ce17bE
            (local_2f8,local_840,local_ac0);
  _ZN12clap_builder7builder7command7Command10after_help17h5255e8afe6f596a9E(local_840,local_2f8);
  (*(code *)PTR_memcpy_00209e88)(local_2f8,local_840,700);
  local_3c = local_584 | 0x8008000080080;
  local_34 = local_57c;
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,&DAT_00119a00,4);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_ac0,local_840,&DAT_00119a00,4);
                    /* try { // try from 0016dcdc to 0016dcf7 has its CatchHandler @ 0016eaf2 */
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_840,local_ac0,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_840,5);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_840,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_2f8,"all",3);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_2f8,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_2f8,local_ac0,"all",3);
                    /* try { // try from 0016dd79 to 0016ddab has its CatchHandler @ 0016ebe5 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb0f1abfc705b7f5bE(local_ac0,local_2f8,"all",3)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_2f8,local_ac0,"include dummy file systems",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_2f8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_2f8,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,"blocksize",9);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_840,0x42);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_840,local_ac0,"block-size",10);
                    /* try { // try from 0016de31 to 0016deb0 has its CatchHandler @ 0016ec09 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hec0c8c7399c0b6c9E
            (local_ac0,local_840,&DAT_00119948,4);
  local_578 = "kilobindmainchar\x01";
  local_570 = 4;
  local_568 = "blocksize";
  local_560 = 9;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h390b75bbc4ea83ceE
            (local_840,local_ac0,&local_578);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_ac0,local_840,
             "scale sizes by SIZE before printing them; e.g.\'-BM\' prints sizes in units of 1,048,576 bytes"
             ,0x5c);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_840,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_2f8,"total%",5);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_ac0,local_2f8,"total%",5);
                    /* try { // try from 0016df02 to 0016df37 has its CatchHandler @ 0016ebd3 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb0f1abfc705b7f5bE
            (local_2f8,local_ac0,"total%",5);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_ac0,local_2f8,"produce a grand total",0x15);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(&local_578,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_2f8,local_840,&local_578);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,"human-readable-binary",0x15);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_840,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E
            (local_840,local_ac0,"human-readable",0xe);
  local_578 = "human-readable-decimal";
  local_570 = 0x16;
  local_568 = "human-readable-binary";
  local_560 = 0x15;
                    /* try { // try from 0016dfec to 0016e01e has its CatchHandler @ 0016ebc1 */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h390b75bbc4ea83ceE
            (local_ac0,local_840,&local_578);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_840,local_ac0,"print sizes in human readable format (e.g., 1K 234M 2G)",0x37);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_840,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_2f8,"human-readable-decimal",0x16)
  ;
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_2f8,0x48);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_2f8,local_ac0,"si",2);
  local_578 = "human-readable-binary";
  local_570 = 0x15;
  local_568 = "human-readable-decimal";
  local_560 = 0x16;
                    /* try { // try from 0016e0c5 to 0016e0f7 has its CatchHandler @ 0016ebaf */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h390b75bbc4ea83ceE
            (local_ac0,local_2f8,&local_578);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_2f8,local_ac0,"likewise, but use powers of 1000 not 1024",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_2f8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_2f8,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,"inodes",6);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_840,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_840,local_ac0,"inodes",6);
                    /* try { // try from 0016e179 to 0016e1ab has its CatchHandler @ 0016eb9a */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb0f1abfc705b7f5bE
            (local_ac0,local_840,"inodes",6);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_840,local_ac0,"list inode information instead of block usage",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_840,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_2f8,&DAT_001199d0,4);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_2f8,0x6b);
                    /* try { // try from 0016e212 to 0016e26f has its CatchHandler @ 0016eb85 */
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_2f8,local_ac0,"like --block-size=1K",0x14);
  local_578 = "blocksize";
  local_570 = 9;
  local_568 = "kilobindmainchar\x01";
  local_560 = 4;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h390b75bbc4ea83ceE
            (local_ac0,local_2f8,&local_578);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(&local_578,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_2f8,local_840,&local_578);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,"local",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_840,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_840,local_ac0,"local",5);
                    /* try { // try from 0016e2f1 to 0016e323 has its CatchHandler @ 0016eb70 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb0f1abfc705b7f5bE
            (local_ac0,local_840,"local",5);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_840,local_ac0,"limit listing to local file systems",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_840,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_2f8,"no-sync",7);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_ac0,local_2f8,"no-sync",7);
  local_578 = &DAT_00119a20;
  local_570 = 4;
  local_568 = "no-sync";
  local_560 = 7;
                    /* try { // try from 0016e3c1 to 0016e3f6 has its CatchHandler @ 0016eb5b */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h390b75bbc4ea83ceE
            (local_2f8,local_ac0,&local_578);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_ac0,local_2f8,"do not invoke sync before getting usage info (default)",0x36);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(&local_578,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_2f8,local_840,&local_578);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,"output",6);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_ac0,local_840,"output",6);
                    /* try { // try from 0016e460 to 0016e47b has its CatchHandler @ 0016ec2d */
  _ZN12clap_builder7builder3arg3Arg10value_name17hec0c8c7399c0b6c9E
            (local_840,local_ac0,"FIELD_LIST",10);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_840,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h77b85b1013d661bfE(local_840,local_ac0);
  (*(code *)PTR_memcpy_00209e88)(local_ac0,local_840,0x278);
  local_848 = local_5c8 | 0x80;
  local_844 = local_5c4;
                    /* try { // try from 0016e4e0 to 0016e665 has its CatchHandler @ 0016ec2d */
  (*(code *)PTR__ZN12clap_builder7builder3arg3Arg19use_value_delimiter17hbc9e6ac97bf7a88bE_0020a1d8)
            (local_840,local_ac0,1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h22f60de3ac056b5fE
            (local_ac0,local_840,_ZN5uu_df17OUTPUT_FIELD_LIST17hdf9a91c365a9b214E);
  _ZN12clap_builder7builder3arg3Arg25default_missing_values_os17h7450261ffdb59db3E
            (local_840,local_ac0,_ZN5uu_df17OUTPUT_FIELD_LIST17hdf9a91c365a9b214E);
  local_578 = "source";
  local_570 = 6;
  local_568 = "size";
  local_560 = 4;
  local_558 = "usedType";
  local_550 = 4;
  local_548 = "avail";
  local_540 = 5;
  local_538 = "pcent";
  local_530 = 5;
  local_528 = "target";
  local_520 = 6;
  _ZN12clap_builder7builder3arg3Arg14default_values17h27c064a7ef70ce87E
            (local_ac0,local_840,&local_578);
  local_578 = "inodes";
  local_570 = 6;
  local_568 = "portability";
  local_560 = 0xb;
  local_558 = "print-type";
  local_550 = 10;
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h32a65daa6d7fc264E
            (local_840,local_ac0,&local_578);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_ac0,local_840,
             "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted."
             ,0x5a);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_840,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_2f8,"portability",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_2f8,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_2f8,local_ac0,"portability",0xb);
                    /* try { // try from 0016e6cf to 0016e701 has its CatchHandler @ 0016eb46 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb0f1abfc705b7f5bE
            (local_ac0,local_2f8,"portability",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_2f8,local_ac0,"use the POSIX output format",0x1b);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_2f8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_2f8,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,&DAT_00119a20,4);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_ac0,local_840,&DAT_00119a20,4);
  local_578 = "no-sync";
  local_570 = 7;
  local_568 = &DAT_00119a20;
  local_560 = 4;
                    /* try { // try from 0016e78c to 0016e7c1 has its CatchHandler @ 0016eb31 */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h390b75bbc4ea83ceE
            (local_840,local_ac0,&local_578);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_ac0,local_840,"invoke sync before getting usage info (non-windows only)",0x38);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(&local_578,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_840,local_2f8,&local_578);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_2f8,&DAT_00119a24,4);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_2f8,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_2f8,local_ac0,&DAT_00119a24,4);
  local_ad8[0] = 2;
                    /* try { // try from 0016e84c to 0016e8b1 has its CatchHandler @ 0016ebf7 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc2a9e64838dd396aE(local_ac0,local_2f8,local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hec0c8c7399c0b6c9E
            (local_2f8,local_ac0,&DAT_00119a30,4);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_2f8,1);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (&local_578,local_ac0,"limit listing to file systems of type TYPE",0x2a);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_2f8,local_840,&local_578);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,"print-type",10);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_840,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_840,local_ac0,"print-type",10);
                    /* try { // try from 0016e91e to 0016e950 has its CatchHandler @ 0016eb1c */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb0f1abfc705b7f5bE
            (local_ac0,local_840,"print-type",10);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_840,local_ac0,"print file system type",0x16);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_840,local_2f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_2f8,"exclude-type",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17hf333541e6269ab5eE(local_ac0,local_2f8,0x78);
  _ZN12clap_builder7builder3arg3Arg4long17hde57b13e2eeedca8E(local_2f8,local_ac0,"exclude-type",0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_2f8,1);
                    /* try { // try from 0016e9e7 to 0016ea4f has its CatchHandler @ 0016ec1b */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc2a9e64838dd396aE(local_2f8,local_ac0,local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hec0c8c7399c0b6c9E
            (local_ac0,local_2f8,&DAT_00119a30,4);
  (*(code *)PTR__ZN12clap_builder7builder3arg3Arg19use_value_delimiter17hbc9e6ac97bf7a88bE_0020a1d8)
            (local_2f8,local_ac0,1);
  _ZN12clap_builder7builder3arg3Arg4help17h0a16dabfd6ab2d83E
            (local_ac0,local_2f8,
             "limit listing to file systems not of type TYPE--block-size argument \'\' too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: "
             ,0x2e);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(local_2f8,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h76d9c4d4934362f7E(local_840,"paths",5);
  _ZN12clap_builder7builder3arg3Arg6action17hc2ecefe6811dd1baE(local_ac0,local_840,1);
                    /* try { // try from 0016ea9b to 0016eaaa has its CatchHandler @ 0016eadd */
  _ZN12clap_builder7builder3arg3Arg10value_hint17he34e6a3be3181bcbE(local_840,local_ac0);
  _ZN12clap_builder7builder7command7Command3arg17hf2ef1ae6c22ba7d6E(param_1,local_2f8,local_840);
  return param_1;
}