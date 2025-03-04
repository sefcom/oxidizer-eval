undefined8 _ZN8uu_touch6uu_app17h6cafa39b57a66b7bE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined local_a60;
  undefined uStack_a5f;
  undefined2 uStack_a5e;
  undefined2 uStack_a5c;
  undefined2 uStack_a5a;
  undefined4 uStack_a58;
  undefined4 uStack_a54;
  undefined4 local_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  undefined4 local_a40;
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined8 local_a30;
  ulong local_7fc;
  undefined4 local_7f4;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 local_748;
  undefined local_740;
  undefined local_73f;
  undefined4 local_73e;
  undefined2 local_73a;
  uint local_550;
  undefined4 local_54c;
  undefined local_540 [584];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_284;
  undefined4 local_27c;
  char *local_278;
  undefined8 uStack_270;
  char *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h8f6f053073336047E(local_540,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h249a8addfe9218b9E
            (&local_ab8,local_540,&DAT_0017500c,6);
  _ZN12clap_builder7builder7command7Command5about17hcd0c64ae1fb3bf44E
            (local_540,&local_ab8,&DAT_00175012,0x4c);
                    /* try { // try from 002c1954 to 002c196d has its CatchHandler @ 002c23a5 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(&local_798,&DAT_0017505e,0x15);
  _ZN12clap_builder7builder7command7Command14override_usage17h4f72e345e4c2d551E
            (&local_ab8,local_540,&local_798);
  (*(code *)PTR_memcpy_00450a78)(local_540,&local_ab8,700);
  local_284 = local_7fc | 0x4008000040080;
  local_27c = local_7f4;
                    /* try { // try from 002c19c9 to 002c1a1a has its CatchHandler @ 002c243b */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(&local_ab8,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4long17h1fa6b659a5adc704E(&local_798,&local_ab8,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (&local_ab8,&local_798,&DAT_00175073,0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h85c65443e8a0877fE(&local_798,&local_ab8,5);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(&local_ab8,local_540,&local_798)
  ;
                    /* try { // try from 002c1a4a to 002c1a9b has its CatchHandler @ 002c23e4 */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(local_540,"access",6);
  _ZN12clap_builder7builder3arg3Arg5short17h4ab824318e650028E(&local_798,local_540,0x61);
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (local_540,&local_798,&DAT_0017508a,0x1b);
  _ZN12clap_builder7builder3arg3Arg6action17h85c65443e8a0877fE(&local_798,local_540,2);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(local_540,&local_ab8,&local_798)
  ;
                    /* try { // try from 002c1ace to 002c1b34 has its CatchHandler @ 002c2429 */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(&local_ab8,"timestamp",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4ab824318e650028E(&local_798,&local_ab8,0x74);
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (&local_ab8,&local_798,&DAT_001750a5,0x35);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8a691a2761ad8028E
            (&local_798,&local_ab8,&DAT_001750da,5);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(&local_ab8,local_540,&local_798)
  ;
                    /* try { // try from 002c1b4f to 002c1ba3 has its CatchHandler @ 002c246e */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(local_540,"date",4);
  _ZN12clap_builder7builder3arg3Arg5short17h4ab824318e650028E(&local_798,local_540,100);
  _ZN12clap_builder7builder3arg3Arg4long17h1fa6b659a5adc704E(local_540,&local_798,"date",4);
  (*(code *)PTR_memcpy_00450a78)(&local_798,local_540,0x248);
  local_550 = local_2f8 | 0x20;
  local_54c = local_2f4;
                    /* try { // try from 002c1be1 to 002c1c3e has its CatchHandler @ 002c246e */
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (local_540,&local_798,&DAT_001750df,0x31);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8a691a2761ad8028E
            (&local_798,local_540,&DAT_00175110,6);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hdbb9d93b1671065aE
            (&local_278,&local_798,"timestamp",9);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(local_540,&local_ab8,&local_278)
  ;
                    /* try { // try from 002c1c59 to 002c1ca1 has its CatchHandler @ 002c23cf */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(&local_ab8,"modification",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h4ab824318e650028E(&local_798,&local_ab8,0x6d);
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (&local_ab8,&local_798,&DAT_00175116,0x21);
  _ZN12clap_builder7builder3arg3Arg6action17h85c65443e8a0877fE(&local_798,&local_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(&local_ab8,local_540,&local_798)
  ;
                    /* try { // try from 002c1cd1 to 002c1d43 has its CatchHandler @ 002c241a */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(local_540,"no-create",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4ab824318e650028E(&local_798,local_540,99);
  _ZN12clap_builder7builder3arg3Arg4long17h1fa6b659a5adc704E(local_540,&local_798,"no-create",9);
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (&local_798,local_540,&DAT_00175137,0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h85c65443e8a0877fE(&local_278,&local_798,2);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(local_540,&local_ab8,&local_278)
  ;
                    /* try { // try from 002c1d76 to 002c1ddc has its CatchHandler @ 002c2408 */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(&local_ab8,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h4ab824318e650028E(&local_798,&local_ab8,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17h1fa6b659a5adc704E
            (&local_ab8,&local_798,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (&local_798,&local_ab8,&DAT_0017514e,0x77);
  _ZN12clap_builder7builder3arg3Arg6action17h85c65443e8a0877fE(&local_278,&local_798,2);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(&local_ab8,local_540,&local_278)
  ;
                    /* try { // try from 002c1e0f to 002c1f30 has its CatchHandler @ 002c247d */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(local_540,"reference",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4ab824318e650028E(&local_798,local_540,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h1fa6b659a5adc704E(local_540,&local_798,"reference",9);
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (&local_798,local_540,&DAT_001751c5,0x31);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8a691a2761ad8028E
            (local_540,&local_798,&DAT_001655d4,4);
  local_ad0 = 2;
  local_268 = (char *)local_ac0;
  local_278 = (char *)0x2;
  uStack_270 = local_ac8;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb52e9aea5bfdb3a1E
            (&local_798,local_540,&local_278);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h404e11100d0a1c16E(local_540,&local_798,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hdbb9d93b1671065aE
            (&local_798,local_540,"timestamp",9);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(local_540,&local_ab8,&local_798)
  ;
                    /* try { // try from 002c1f4b to 002c1fba has its CatchHandler @ 002c245c */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(&local_ab8,"time",4);
  _ZN12clap_builder7builder3arg3Arg4long17h1fa6b659a5adc704E(&local_798,&local_ab8,"time",4);
  _ZN12clap_builder7builder3arg3Arg4help17he46e0f1463526103E
            (&local_ab8,&local_798,&DAT_001751f6,0x7a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8a691a2761ad8028E
            (&local_798,&local_ab8,&DAT_001655d8,4);
  local_a88 = &DAT_00175002;
  uStack_a80 = 5;
  uStack_aa0 = 0x8000000000000000;
  local_ab8 = 0;
  uStack_ab0 = 8;
  local_aa8 = 0;
  local_a78 = local_a78 & 0xffffffffffffff00;
                    /* try { // try from 002c200c to 002c204a has its CatchHandler @ 002c23f6 */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17he1a3bd2271689855E
            (&local_278,&local_ab8,&DAT_00175270,6);
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17he1a3bd2271689855E
            (&local_7f0,&local_278,&DAT_00175276,3);
  local_a88 = &DAT_00175007;
  uStack_a80 = 5;
  uStack_aa0 = 0x8000000000000000;
  local_ab8 = 0;
  uStack_ab0 = 8;
  local_aa8 = 0;
  local_a78 = local_a78 & 0xffffffffffffff00;
                    /* try { // try from 002c2092 to 002c20af has its CatchHandler @ 002c2393 */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17he1a3bd2271689855E
            (&local_278,&local_ab8,&DAT_00175279,6);
  local_ab8 = local_7f0;
  uStack_ab0 = uStack_7e8;
  local_aa8 = local_7e0;
  uStack_aa0 = uStack_7d8;
  local_a98 = local_7d0;
  uStack_a90 = uStack_7c8;
  local_a88 = (undefined *)local_7c0;
  uStack_a80 = uStack_7b8;
  local_a78 = local_7b0;
  uStack_a70 = local_278;
  uStack_a68 = uStack_270;
  local_a60 = SUB81(local_268,0);
  uStack_a5f = (undefined)((ulong)local_268 >> 8);
  uStack_a5e = (undefined2)((ulong)local_268 >> 0x10);
  uStack_a5c = (undefined2)((ulong)local_268 >> 0x20);
  uStack_a5a = (undefined2)((ulong)local_268 >> 0x30);
  uStack_a58 = (undefined4)uStack_260;
  uStack_a54 = uStack_260._4_4_;
  local_a50 = (undefined4)local_258;
  uStack_a4c = local_258._4_4_;
  uStack_a48 = (undefined4)uStack_250;
  uStack_a44 = uStack_250._4_4_;
  local_a40 = local_248;
  uStack_a3c = uStack_244;
  uStack_a38 = uStack_240;
  uStack_a34 = uStack_23c;
  local_a30 = local_238;
                    /* try { // try from 002c213b to 002c214c has its CatchHandler @ 002c23f6 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17hc2cee83c12a38d49E
            (&local_7f0,&local_ab8);
                    /* try { // try from 002c214d to 002c2169 has its CatchHandler @ 002c238e */
  _ZN12clap_builder7builder3arg3Arg12value_parser17he866d5515236ff25E
            (&local_278,&local_798,&local_7f0);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(&local_ab8,local_540,&local_278)
  ;
                    /* try { // try from 002c2184 to 002c21fd has its CatchHandler @ 002c244d */
  _ZN12clap_builder7builder3arg3Arg3new17h8a6f67a0846ec11eE(local_540,&DAT_00174ffd,5);
  _ZN12clap_builder7builder3arg3Arg6action17h85c65443e8a0877fE(&local_798,local_540,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h203cb77198aa86ddE(local_540,&local_798);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb52e9aea5bfdb3a1E
            (&local_798,local_540,&local_ad0);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h404e11100d0a1c16E(&local_278,&local_798,2);
  _ZN12clap_builder7builder7command7Command3arg17h44214e8458888adcE(local_540,&local_ab8,&local_278)
  ;
  uStack_a70 = (char *)0x1;
  uStack_a68 = 0;
  local_ab8 = 0;
  uStack_ab0 = 8;
  local_a60 = 0;
  uStack_a5f = 0;
  local_aa8 = 0;
  uStack_aa0 = 0;
  local_a98 = 8;
  uStack_a90 = 0;
  local_a88 = (undefined *)0x0;
  uStack_a80 = 8;
  local_a78 = 0;
                    /* try { // try from 002c226b to 002c22de has its CatchHandler @ 002c23ba */
  _ZN12clap_builder7builder9arg_group8ArgGroup2id17hcace4fe8ee13b965E
            (&local_798,&local_ab8,"sources",7);
  local_278 = "timestamp";
  uStack_270 = 9;
  local_268 = "date";
  uStack_260 = 4;
  local_258 = "reference";
  uStack_250 = 9;
  _ZN12clap_builder7builder9arg_group8ArgGroup4args17hb7318d04a0d50504E
            (&local_ab8,&local_798,&local_278);
  uStack_a5f = 1;
  local_798 = local_ab8;
  uStack_790 = uStack_ab0;
  local_788 = (undefined4)local_aa8;
  uStack_784 = local_aa8._4_4_;
  uStack_780 = (undefined4)uStack_aa0;
  uStack_77c = uStack_aa0._4_4_;
  local_778 = (undefined4)local_a98;
  uStack_774 = local_a98._4_4_;
  uStack_770 = (undefined4)uStack_a90;
  uStack_76c = uStack_a90._4_4_;
  local_768 = (undefined4)local_a88;
  uStack_764 = local_a88._4_4_;
  uStack_760 = (undefined4)uStack_a80;
  uStack_75c = uStack_a80._4_4_;
  local_758 = (undefined4)local_a78;
  uStack_754 = local_a78._4_4_;
  uStack_750 = (undefined4)uStack_a70;
  uStack_74c = uStack_a70._4_4_;
  local_748 = uStack_a68;
  local_740 = local_a60;
  local_73f = 1;
  local_73e = CONCAT22(uStack_a5c,uStack_a5e);
  local_73a = uStack_a5a;
  _ZN12clap_builder7builder7command7Command5group17hdb1f30e6b6af6197E(param_1,local_540,&local_798);
  return param_1;
}