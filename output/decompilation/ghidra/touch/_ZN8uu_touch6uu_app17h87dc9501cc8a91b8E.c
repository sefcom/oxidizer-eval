undefined8 _ZN8uu_touch6uu_app17h87dc9501cc8a91b8E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined local_a70;
  undefined uStack_a6f;
  undefined2 uStack_a6e;
  undefined2 uStack_a6c;
  undefined2 uStack_a6a;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined4 local_a60;
  undefined4 uStack_a5c;
  undefined4 uStack_a58;
  undefined4 uStack_a54;
  undefined4 local_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  undefined8 local_a40;
  ulong local_80c;
  undefined4 local_804;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined8 local_7a8;
  undefined local_7a0;
  undefined local_79f;
  undefined4 local_79e;
  undefined2 local_79a;
  uint local_580;
  undefined4 local_57c;
  undefined local_578 [632];
  uint local_300;
  undefined4 local_2fc;
  ulong local_2bc;
  undefined4 local_2b4;
  char *local_2b0;
  undefined8 uStack_2a8;
  char *local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_003a9f78)();
  _ZN12clap_builder7builder7command7Command3new17h10ef0288fdc1c0c3E(local_578,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6651eaf8154ccc2aE(&local_ac8,local_578);
  _ZN12clap_builder7builder7command7Command5about17hc8296a2180838526E(local_578,&local_ac8);
                    /* try { // try from 00238e4d to 00238e66 has its CatchHandler @ 002398d9 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_003aa2f0)
            (&local_7f8,"{} [OPTION]... [USER]",0x15);
  _ZN12clap_builder7builder7command7Command14override_usage17h9783bb91f070d003E
            (&local_ac8,local_578,&local_7f8);
  (*(code *)PTR_memcpy_003a9f30)(local_578,&local_ac8,700);
  local_2bc = local_80c | 0x8008000080080;
  local_2b4 = local_804;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(&local_ac8,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4long17hbde78b478d4040c6E(&local_7f8,&local_ac8,"helpt",4);
                    /* try { // try from 00238ef9 to 00238f11 has its CatchHandler @ 002398c7 */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (&local_ac8,&local_7f8,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17ha199da144e4cf889E(&local_7f8,&local_ac8,5);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(&local_ac8,local_578,&local_7f8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(local_578,"access",6);
  _ZN12clap_builder7builder3arg3Arg5short17h56a23b2d61bba70eE(&local_7f8,local_578,0x61);
                    /* try { // try from 00238f75 to 00238f90 has its CatchHandler @ 002398b8 */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (local_578,&local_7f8,"change only the access time",0x1b);
  _ZN12clap_builder7builder3arg3Arg6action17ha199da144e4cf889E(&local_7f8,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(local_578,&local_ac8,&local_7f8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(&local_ac8,"timestamp",9);
  _ZN12clap_builder7builder3arg3Arg5short17h56a23b2d61bba70eE(&local_7f8,&local_ac8,0x74);
                    /* try { // try from 00238ff4 to 0023902a has its CatchHandler @ 002398f0 */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (&local_ac8,&local_7f8,"use [[CC]YY]MMDDhhmm[.ss] instead of the current time",0x35);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8a42aced0f5f8123E(&local_7f8,&local_ac8,"STAMP",5)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(&local_ac8,local_578,&local_7f8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(local_578,"date",4);
  _ZN12clap_builder7builder3arg3Arg5short17h56a23b2d61bba70eE(&local_7f8,local_578,100);
  _ZN12clap_builder7builder3arg3Arg4long17hbde78b478d4040c6E(local_578,&local_7f8,"date",4);
  (*(code *)PTR_memcpy_003a9f30)(&local_7f8,local_578,0x278);
  local_580 = local_300 | 0x20;
  local_57c = local_2fc;
                    /* try { // try from 002390cf to 00239120 has its CatchHandler @ 00239921 */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (local_578,&local_7f8,"parse argument and use it instead of current time",0x31);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8a42aced0f5f8123E(&local_7f8,local_578,"STRING",6)
  ;
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hd67907f812da2337E(&local_2b0,&local_7f8);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(local_578,&local_ac8,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(&local_ac8,"modification",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h56a23b2d61bba70eE(&local_7f8,&local_ac8,0x6d);
                    /* try { // try from 0023916c to 00239184 has its CatchHandler @ 002398a3 */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (&local_ac8,&local_7f8,"change only the modification time",0x21);
  _ZN12clap_builder7builder3arg3Arg6action17ha199da144e4cf889E(&local_7f8,&local_ac8,2);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(&local_ac8,local_578,&local_7f8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(local_578,"no-create",9);
  _ZN12clap_builder7builder3arg3Arg5short17h56a23b2d61bba70eE(&local_7f8,local_578,99);
  _ZN12clap_builder7builder3arg3Arg4long17hbde78b478d4040c6E(local_578,&local_7f8,"no-create",9);
                    /* try { // try from 00239206 to 00239221 has its CatchHandler @ 00239891 */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (&local_7f8,local_578,"do not create any files",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17ha199da144e4cf889E(&local_2b0,&local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(local_578,&local_ac8,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(&local_ac8,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h56a23b2d61bba70eE(&local_7f8,&local_ac8,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17hbde78b478d4040c6E
            (&local_ac8,&local_7f8,"no-dereference",0xe);
                    /* try { // try from 002392a0 to 002392bb has its CatchHandler @ 0023987c */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (&local_7f8,&local_ac8,
             "affect each symbolic link instead of any referenced file (only for systems that can change the timestamps of a symlink)"
             ,0x77);
  _ZN12clap_builder7builder3arg3Arg6action17ha199da144e4cf889E(&local_2b0,&local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(&local_ac8,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(local_578,"reference",9);
  _ZN12clap_builder7builder3arg3Arg5short17h56a23b2d61bba70eE(&local_7f8,local_578,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17hbde78b478d4040c6E(local_578,&local_7f8,"reference",9);
                    /* try { // try from 00239340 to 002393cf has its CatchHandler @ 00239930 */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (&local_7f8,local_578,"use this file\'s times instead of the current time",0x31);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8a42aced0f5f8123E
            (local_578,&local_7f8,&DAT_00154054,4);
  local_2b0 = (char *)0x2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3ff96a327a237a6cE
            (&local_7f8,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5b1a7c6849c59b5aE(local_578,&local_7f8);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hd67907f812da2337E(&local_7f8,local_578);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(local_578,&local_ac8,&local_7f8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(&local_ac8,"time",4);
  _ZN12clap_builder7builder3arg3Arg4long17hbde78b478d4040c6E(&local_7f8,&local_ac8,"time",4);
                    /* try { // try from 00239421 to 00239457 has its CatchHandler @ 002398eb */
  _ZN12clap_builder7builder3arg3Arg4help17h4dc1cb6f683f0dcaE
            (&local_ac8,&local_7f8,
             "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equivalent to -m"
             ,0x7a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8a42aced0f5f8123E
            (&local_7f8,&local_ac8,&DAT_00154058,4);
  local_a98 = "atime";
  uStack_a90 = 5;
  uStack_ab0 = 0x8000000000000000;
  local_ac8 = 0;
  uStack_ac0 = 8;
  local_ab8 = 0;
  local_a88 = local_a88 & 0xffffffffffffff00;
                    /* try { // try from 002394b2 to 002394ed has its CatchHandler @ 00239902 */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17h1739b203ea3aa284E
            (&local_2b0,&local_ac8,"access",6);
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17h1739b203ea3aa284E
            (&local_b20,&local_2b0,"use",3);
  local_a98 = "mtime";
  uStack_a90 = 5;
  uStack_ab0 = 0x8000000000000000;
  local_ac8 = 0;
  uStack_ac0 = 8;
  local_ab8 = 0;
  local_a88 = local_a88 & 0xffffffffffffff00;
                    /* try { // try from 0023953e to 0023955b has its CatchHandler @ 0023986a */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17h1739b203ea3aa284E
            (&local_2b0,&local_ac8,"modify",6);
  local_ac8 = local_b20;
  uStack_ac0 = uStack_b18;
  local_ab8 = local_b10;
  uStack_ab0 = uStack_b08;
  local_aa8 = local_b00;
  uStack_aa0 = uStack_af8;
  local_a98 = (char *)local_af0;
  uStack_a90 = uStack_ae8;
  local_a88 = local_ae0;
  uStack_a80 = local_2b0;
  local_a70 = SUB81(local_2a0,0);
  uStack_a6f = (undefined)((ulong)local_2a0 >> 8);
  uStack_a6e = (undefined2)((ulong)local_2a0 >> 0x10);
  uStack_a6c = (undefined2)((ulong)local_2a0 >> 0x20);
  uStack_a6a = (undefined2)((ulong)local_2a0 >> 0x30);
  uStack_a68 = (undefined4)uStack_298;
  uStack_a64 = uStack_298._4_4_;
  local_a60 = (undefined4)local_290;
  uStack_a5c = local_290._4_4_;
  uStack_a58 = (undefined4)uStack_288;
  uStack_a54 = uStack_288._4_4_;
  local_a50 = local_280;
  uStack_a4c = uStack_27c;
  uStack_a48 = uStack_278;
  uStack_a44 = uStack_274;
  local_a40 = local_270;
                    /* try { // try from 002395e7 to 002395f5 has its CatchHandler @ 00239902 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h33cd046ef2339554E
            (&local_b20,&local_ac8);
                    /* try { // try from 002395f6 to 0023960f has its CatchHandler @ 00239862 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h20c176f928c916fdE
            (&local_2b0,&local_7f8,&local_b20);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(&local_ac8,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h35ca4e47e2604b10E(local_578,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17ha199da144e4cf889E(&local_7f8,local_578,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17ha8e20b832028993fE(local_578,&local_7f8);
                    /* try { // try from 00239671 to 00239680 has its CatchHandler @ 00239850 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5b1a7c6849c59b5aE(&local_7f8,local_578);
  _ZN12clap_builder7builder7command7Command3arg17hafb69053ac81e9dfE(local_578,&local_ac8,&local_7f8)
  ;
  uStack_a80 = (char *)0x1;
  uStack_a78 = 0;
  local_ac8 = 0;
  uStack_ac0 = 8;
  local_a70 = 0;
  uStack_a6f = 0;
  local_ab8 = 0;
  uStack_ab0 = 0;
  local_aa8 = 8;
  uStack_aa0 = 0;
  local_a98 = (char *)0x0;
  uStack_a90 = 8;
  local_a88 = 0;
  _ZN12clap_builder7builder9arg_group8ArgGroup2id17h74e134ac99b8fdffE(&local_7f8,&local_ac8);
  local_2b0 = "timestamp";
  uStack_2a8 = 9;
  local_2a0 = "date";
  uStack_298 = 4;
  local_290 = "reference";
  uStack_288 = 9;
                    /* try { // try from 0023975b to 0023976f has its CatchHandler @ 0023983b */
  _ZN12clap_builder7builder9arg_group8ArgGroup4args17h1c3c370458aa2bd4E
            (&local_ac8,&local_7f8,&local_2b0);
  uStack_a6f = 1;
  local_7f8 = local_ac8;
  uStack_7f0 = uStack_ac0;
  local_7e8 = (undefined4)local_ab8;
  uStack_7e4 = local_ab8._4_4_;
  uStack_7e0 = (undefined4)uStack_ab0;
  uStack_7dc = uStack_ab0._4_4_;
  local_7d8 = (undefined4)local_aa8;
  uStack_7d4 = local_aa8._4_4_;
  uStack_7d0 = (undefined4)uStack_aa0;
  uStack_7cc = uStack_aa0._4_4_;
  local_7c8 = (undefined4)local_a98;
  uStack_7c4 = local_a98._4_4_;
  uStack_7c0 = (undefined4)uStack_a90;
  uStack_7bc = uStack_a90._4_4_;
  local_7b8 = (undefined4)local_a88;
  uStack_7b4 = local_a88._4_4_;
  uStack_7b0 = (undefined4)uStack_a80;
  uStack_7ac = uStack_a80._4_4_;
  local_7a8 = uStack_a78;
  local_7a0 = local_a70;
  local_79f = 1;
  local_79e = CONCAT22(uStack_a6c,uStack_a6e);
  local_79a = uStack_a6a;
  _ZN12clap_builder7builder7command7Command5group17h588dbe33da3482edE(param_1,local_578,&local_7f8);
  return param_1;
}