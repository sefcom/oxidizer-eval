undefined8 _ZN8uu_shred6uu_app17h2fbccd128ef7bb3fE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *local_a48;
  undefined8 local_a40;
  undefined *local_a38;
  undefined8 local_a30;
  char *local_a28;
  undefined8 local_a20;
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined local_258;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hee9da9b1ef1ec750E(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h7783fc680e59f748E
            (local_530,local_7f8,&DAT_0011e77d,6);
  _ZN12clap_builder7builder7command7Command5about17he63b06233f612c12E
            (local_7f8,local_530,&DAT_0011e783,0x84);
  _ZN12clap_builder7builder7command7Command10after_help17hea35ac7759581864E
            (local_530,local_7f8,&DAT_0011e807,0x65c);
                    /* try { // try from 001bc342 to 001bc356 has its CatchHandler @ 001bc9cc */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(&local_a48,&DAT_0011ee63,0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17he58f6dcef1d3e6e0E
            (local_7f8,local_530,&local_a48);
  (*(code *)PTR_memcpy_0023cbc8)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001bc3b0 to 001bc413 has its CatchHandler @ 001bca3e */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_7f8,&DAT_0011ee79,5);
  _ZN12clap_builder7builder3arg3Arg4long17h54af09972f8a2312E(&local_a48,local_7f8,&DAT_0011ee79,5);
  _ZN12clap_builder7builder3arg3Arg5short17hb5349c0700ed9faeE(local_7f8,&local_a48,0x66);
  _ZN12clap_builder7builder3arg3Arg4help17h813ebe724b5bbceeE
            (&local_a48,local_7f8,&DAT_0011ee7e,0x30);
  _ZN12clap_builder7builder3arg3Arg6action17hd380c8753f077b56E(&local_268,&local_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(local_7f8,local_530,&local_268);
                    /* try { // try from 001bc444 to 001bc4d3 has its CatchHandler @ 001bca62 */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_530,&DAT_0011eeae,10);
  _ZN12clap_builder7builder3arg3Arg4long17h54af09972f8a2312E(&local_a48,local_530,&DAT_0011eeae,10);
  _ZN12clap_builder7builder3arg3Arg5short17hb5349c0700ed9faeE(local_530,&local_a48,0x6e);
  _ZN12clap_builder7builder3arg3Arg4help17h813ebe724b5bbceeE
            (&local_a48,local_530,&DAT_0011eeb8,0x2c);
  _ZN12clap_builder7builder3arg3Arg10value_name17h30ff45e9fdc7cb00E
            (local_530,&local_a48,&DAT_0011eee4,6);
  _ZN12clap_builder7builder3arg3Arg13default_value17hbdbc1878ca5dfd1cE(&local_a48,local_530);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(local_530,local_7f8,&local_a48);
                    /* try { // try from 001bc4ec to 001bc56b has its CatchHandler @ 001bca50 */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_7f8,&DAT_00115860,4);
  _ZN12clap_builder7builder3arg3Arg4long17h54af09972f8a2312E(&local_a48,local_7f8,&DAT_00115860,4);
  _ZN12clap_builder7builder3arg3Arg5short17hb5349c0700ed9faeE(local_7f8,&local_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg10value_name17h30ff45e9fdc7cb00E
            (&local_a48,local_7f8,&DAT_0011eeeb,1);
  _ZN12clap_builder7builder3arg3Arg4help17h813ebe724b5bbceeE
            (&local_268,&local_a48,&DAT_0011eeec,0x36);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(local_7f8,local_530,&local_268);
                    /* try { // try from 001bc589 to 001bc5d5 has its CatchHandler @ 001bc9f6 */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_530,&DAT_0011ef22,1);
  _ZN12clap_builder7builder3arg3Arg5short17hb5349c0700ed9faeE(&local_a48,local_530,0x75);
  _ZN12clap_builder7builder3arg3Arg4help17h813ebe724b5bbceeE
            (local_530,&local_a48,&DAT_0011ef23,0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17hd380c8753f077b56E(&local_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(local_530,local_7f8,&local_a48);
                    /* try { // try from 001bc606 to 001bc656 has its CatchHandler @ 001bca74 */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_7f8,&DAT_0011ef4f,6);
  _ZN12clap_builder7builder3arg3Arg4long17h54af09972f8a2312E(&local_a48,local_7f8,&DAT_0011ef4f,6);
  _ZN12clap_builder7builder3arg3Arg10value_name17h30ff45e9fdc7cb00E
            (local_7f8,&local_a48,&DAT_0011ef55,3);
  local_a48 = &DAT_0011ef58;
  local_a40 = 6;
  local_a38 = &DAT_00115818;
  local_a30 = 4;
  local_a28 = "wipesync";
  local_a20 = 8;
                    /* try { // try from 001bc695 to 001bc6a4 has its CatchHandler @ 001bc9b7 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h635bd80678b3b13fE
            (&local_268,&local_a48);
                    /* try { // try from 001bc6a5 to 001bc6bc has its CatchHandler @ 001bc9b2 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17he8424d9550ce276cE
            (&local_a48,local_7f8,&local_268);
  local_268 = 0;
  local_260 = 1;
  local_258 = 0;
                    /* try { // try from 001bc6dd to 001bc6f4 has its CatchHandler @ 001bca74 */
  _ZN12clap_builder7builder3arg3Arg8num_args17h78f1ca1618105ed6E(local_7f8,&local_a48,&local_268);
  (*(code *)PTR_memcpy_0023cbc8)(&local_a48,local_7f8,0x248);
  local_800 = local_5b0 | 0x80;
  local_7fc = local_5ac;
                    /* try { // try from 001bc72f to 001bc75a has its CatchHandler @ 001bca74 */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17hbaf40cb40238d7f8E(local_7f8,&local_a48)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h813ebe724b5bbceeE
            (&local_a48,local_7f8,&DAT_0011ef5e,0x35);
  _ZN12clap_builder7builder3arg3Arg6action17hd380c8753f077b56E(&local_268,&local_a48,0);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(local_7f8,local_530,&local_268);
                    /* try { // try from 001bc788 to 001bc7eb has its CatchHandler @ 001bca2c */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_530,&DAT_0011ef93,7);
  _ZN12clap_builder7builder3arg3Arg4long17h54af09972f8a2312E(&local_a48,local_530,&DAT_0011ef93,7);
  _ZN12clap_builder7builder3arg3Arg5short17hb5349c0700ed9faeE(local_530,&local_a48,0x76);
  _ZN12clap_builder7builder3arg3Arg4help17h813ebe724b5bbceeE(&local_a48,local_530,&DAT_0011ef9a,0xd)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd380c8753f077b56E(&local_268,&local_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(local_530,local_7f8,&local_268);
                    /* try { // try from 001bc81c to 001bc87f has its CatchHandler @ 001bca1a */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_7f8,&DAT_0011efa7,5);
  _ZN12clap_builder7builder3arg3Arg4long17h54af09972f8a2312E(&local_a48,local_7f8,&DAT_0011efa7,5);
  _ZN12clap_builder7builder3arg3Arg5short17hb5349c0700ed9faeE(local_7f8,&local_a48,0x78);
  _ZN12clap_builder7builder3arg3Arg4help17h813ebe724b5bbceeE
            (&local_a48,local_7f8,&DAT_0011efac,0x5c);
  _ZN12clap_builder7builder3arg3Arg6action17hd380c8753f077b56E(&local_268,&local_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(local_7f8,local_530,&local_268);
                    /* try { // try from 001bc8b0 to 001bc913 has its CatchHandler @ 001bca08 */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_530,&DAT_00115824,4);
  _ZN12clap_builder7builder3arg3Arg4long17h54af09972f8a2312E(&local_a48,local_530,&DAT_00115824,4);
  _ZN12clap_builder7builder3arg3Arg5short17hb5349c0700ed9faeE(local_530,&local_a48,0x7a);
  _ZN12clap_builder7builder3arg3Arg4help17h813ebe724b5bbceeE
            (&local_a48,local_530,&DAT_0011f008,0x32);
  _ZN12clap_builder7builder3arg3Arg6action17hd380c8753f077b56E(&local_268,&local_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(local_530,local_7f8,&local_268);
                    /* try { // try from 001bc944 to 001bc989 has its CatchHandler @ 001bc9e1 */
  _ZN12clap_builder7builder3arg3Arg3new17h787394f0bdb79a6cE(local_7f8,&DAT_00115864,4);
  _ZN12clap_builder7builder3arg3Arg6action17hd380c8753f077b56E(&local_a48,local_7f8,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hfa864e063b6c31fdE(local_7f8,&local_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17hfc176cf175abe977E(param_1,local_530,local_7f8);
  return param_1;
}