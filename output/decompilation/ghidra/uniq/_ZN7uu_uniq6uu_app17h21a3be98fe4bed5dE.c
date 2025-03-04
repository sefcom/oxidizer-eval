undefined8 _ZN7uu_uniq6uu_app17h21a3be98fe4bed5dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined local_a60;
  uint7 uStack_a5f;
  undefined *local_a58;
  undefined8 local_a50;
  char *local_a48;
  undefined8 local_a40;
  char *local_a38;
  undefined8 local_a30;
  uint local_810;
  undefined4 local_80c;
  char *local_808;
  undefined8 local_800;
  char *local_7f8;
  undefined8 local_7f0;
  char *local_7e8;
  undefined8 local_7e0;
  char *local_7d8;
  undefined8 local_7d0;
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_54c;
  undefined4 local_544;
  undefined local_540 [584];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  ulong local_268;
  uint local_30;
  undefined4 local_2c;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17ha9f386b472c5d0f1E(local_540,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6875f9389892f91cE
            (&local_808,local_540,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h6a5467500d801ce2E
            (local_540,&local_808,"Report or omit repeated lines.",0x1e);
                    /* try { // try from 001be257 to 001be26d has its CatchHandler @ 001bed00 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(&local_a58,"{} [OPTION]... [INPUT [OUTPUT]]",0x1f);
  _ZN12clap_builder7builder7command7Command14override_usage17hbed072592bcabc12E
            (&local_808,local_540,&local_a58);
  (*(code *)PTR_memcpy_00234710)(local_540,&local_808,700);
  local_284 = local_54c | 0x8000000080;
  local_27c = local_544;
  _ZN12clap_builder7builder7command7Command10after_help17hfbc5bb31e2c5b48aE
            (&local_808,local_540,
             "Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nNote: uniq does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use sort -u without uniq."
             ,0xee);
                    /* try { // try from 001be2e8 to 001be339 has its CatchHandler @ 001bedc0 */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(local_540,"all-repeated",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,local_540,0x44);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E
            (local_540,&local_a58,"all-repeated",0xc);
  local_a58 = &DAT_00115d00;
  local_a50 = 4;
  local_a48 = "prepend";
  local_a40 = 7;
  local_a38 = "separate";
  local_a30 = 8;
                    /* try { // try from 001be379 to 001be38a has its CatchHandler @ 001beceb */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17hc2378daf3056ea67E
            (&local_278,&local_a58);
                    /* try { // try from 001be38b to 001be3a4 has its CatchHandler @ 001bece6 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hf8c023e5f7cf7e06E
            (&local_a58,local_540,&local_278);
                    /* try { // try from 001be3a5 to 001be456 has its CatchHandler @ 001bedc0 */
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (local_540,&local_a58,
             "print all duplicate lines. Delimiting is done with blank lines. [default: none]",0x4f)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17h389e15842e4efb3eE
            (&local_a58,local_540,"delimit-method",0xe);
  local_a70 = 0;
  local_a68 = 1;
  local_a60 = 0;
  local_268 = (ulong)uStack_a5f << 8;
  local_278 = 0;
  local_270 = 1;
  _ZN12clap_builder7builder3arg3Arg8num_args17h1727105242b5cb03E(local_540,&local_a58,&local_278);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17hbc3011d9bfb21fcbE
            (&local_a58,local_540,&DAT_00115d00,4);
  (*(code *)PTR_memcpy_00234710)(&local_278,&local_a58,0x248);
  local_30 = local_810 | 0x80;
  local_2c = local_80c;
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(local_540,&local_808,&local_278)
  ;
                    /* try { // try from 001be4ab to 001be4e1 has its CatchHandler @ 001bedd2 */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(&local_808,"group",5);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E(&local_a58,&local_808,"group",5);
  local_808 = "separate";
  local_800 = 8;
  local_7f8 = "prepend";
  local_7f0 = 7;
  local_7e8 = "append";
  local_7e0 = 6;
  local_7d8 = &DAT_00115d10;
  local_7d0 = 4;
                    /* try { // try from 001be540 to 001be554 has its CatchHandler @ 001becd4 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17hdb2f90364b5ffb5fE
            (&local_278,&local_808);
                    /* try { // try from 001be555 to 001be56e has its CatchHandler @ 001beccf */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hf8c023e5f7cf7e06E
            (&local_808,&local_a58,&local_278);
                    /* try { // try from 001be56f to 001be5df has its CatchHandler @ 001bedd2 */
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,&local_808,
             "show all items, separating groups with an empty line. [default: separate]",0x49);
  _ZN12clap_builder7builder3arg3Arg10value_name17h389e15842e4efb3eE
            (&local_808,&local_a58,"group-method",0xc);
  _ZN12clap_builder7builder3arg3Arg8num_args17h1727105242b5cb03E(&local_a58,&local_808,&local_a70);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17hbc3011d9bfb21fcbE
            (&local_808,&local_a58,"separate",8);
  (*(code *)PTR_memcpy_00234710)(&local_a58,&local_808,0x248);
  local_810 = local_5c0 | 0x80;
  local_80c = local_5bc;
  local_808 = (char *)&anon_1708af35b9ec7e9011d0766e7edd8c0d_14_llvm_2960996753993589651;
  local_800 = 8;
  local_7f8 = "all-repeated";
  local_7f0 = 0xc;
  local_7e8 = "unique";
  local_7e0 = 6;
  local_7d8 = "count";
  local_7d0 = 5;
                    /* try { // try from 001be681 to 001be698 has its CatchHandler @ 001bedd2 */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h108fb98df5efe6c4E
            (&local_278,&local_a58,&local_808);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(&local_808,local_540,&local_278)
  ;
                    /* try { // try from 001be6b6 to 001be740 has its CatchHandler @ 001bedae */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(local_540,"check-chars",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,local_540,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E(local_540,&local_a58,"check-chars",0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,local_540,"compare no more than N characters in lines",0x2a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h389e15842e4efb3eE(&local_278,&local_a58,"N",1);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(local_540,&local_808,&local_278)
  ;
                    /* try { // try from 001be75e to 001be7ca has its CatchHandler @ 001bed66 */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(&local_808,"count",5);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,&local_808,99);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E(&local_808,&local_a58,"count",5);
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,&local_808,"prefix lines by the number of occurrences",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h20c13c84f7788271E(&local_278,&local_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(&local_808,local_540,&local_278)
  ;
                    /* try { // try from 001be7fd to 001be869 has its CatchHandler @ 001bed54 */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(local_540,"ignore-case",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,local_540,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E(local_540,&local_a58,"ignore-case",0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,local_540,"ignore differences in case when comparing",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h20c13c84f7788271E(&local_278,&local_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(local_540,&local_808,&local_278)
  ;
                    /* try { // try from 001be89c to 001be908 has its CatchHandler @ 001bed3f */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E
            (&local_808,&anon_1708af35b9ec7e9011d0766e7edd8c0d_14_llvm_2960996753993589651,8);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,&local_808,100);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E
            (&local_808,&local_a58,
             &anon_1708af35b9ec7e9011d0766e7edd8c0d_14_llvm_2960996753993589651,8);
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,&local_808,"only print duplicate lines",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h20c13c84f7788271E(&local_278,&local_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(&local_808,local_540,&local_278)
  ;
                    /* try { // try from 001be93b to 001be9c5 has its CatchHandler @ 001bed9c */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(local_540,"skip-chars",10);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,local_540,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E(local_540,&local_a58,"skip-chars",10);
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,local_540,"avoid comparing the first N characters",0x26);
  _ZN12clap_builder7builder3arg3Arg10value_name17h389e15842e4efb3eE(&local_278,&local_a58,"N",1);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(local_540,&local_808,&local_278)
  ;
                    /* try { // try from 001be9e3 to 001bea6d has its CatchHandler @ 001bed8a */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(&local_808,"skip-fields",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,&local_808,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E
            (&local_808,&local_a58,"skip-fields",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,&local_808,"avoid comparing the first N fields",0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17h389e15842e4efb3eE(&local_278,&local_a58,"N",1);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(&local_808,local_540,&local_278)
  ;
                    /* try { // try from 001bea8b to 001beaf7 has its CatchHandler @ 001bed2a */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(local_540,"unique",6);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,local_540,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E(local_540,&local_a58,"unique",6);
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,local_540,"only print unique lines",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h20c13c84f7788271E(&local_278,&local_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(local_540,&local_808,&local_278)
  ;
                    /* try { // try from 001beb2a to 001beb96 has its CatchHandler @ 001bed15 */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(&local_808,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h428322b267c31649E(&local_a58,&local_808,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17hb2158c63ca8a1217E
            (&local_808,&local_a58,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17hff8c0a6f70ec564dE
            (&local_a58,&local_808,"end lines with 0 byte, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h20c13c84f7788271E(&local_278,&local_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(&local_808,local_540,&local_278)
  ;
                    /* try { // try from 001bebc9 to 001bec59 has its CatchHandler @ 001bed78 */
  _ZN12clap_builder7builder3arg3Arg3new17hc44b80d3bb7fe500E(local_540,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h20c13c84f7788271E(&local_a58,local_540,1);
  local_278 = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h120ad401eb644ab4E
            (local_540,&local_a58,&local_278);
  local_278 = 0;
  local_270 = 2;
  local_268 = local_268 & 0xffffffffffffff00;
  _ZN12clap_builder7builder3arg3Arg8num_args17h1727105242b5cb03E(&local_a58,local_540,&local_278);
  (*(code *)PTR_memcpy_00234710)(local_540,&local_a58,0x248);
  local_2f8 = local_810 | 4;
  local_2f4 = local_80c;
                    /* try { // try from 001bec94 to 001beca5 has its CatchHandler @ 001bed78 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hc9d1bc2057741f49E(&local_a58,local_540,3);
  _ZN12clap_builder7builder7command7Command3arg17h6307814d76a87d4cE(param_1,&local_808,&local_a58);
  return param_1;
}