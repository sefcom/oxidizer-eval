undefined8 _ZN5uu_rm6uu_app17h97a746416a9c921dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a58 [584];
  uint local_810;
  undefined4 local_80c;
  ulong local_79c;
  undefined4 local_794;
  undefined local_790 [584];
  uint local_548;
  undefined4 local_544;
  undefined local_540 [584];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_284;
  undefined4 local_27c;
  undefined *local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hb09e5080166a2e6cE(auStack_a58,uVar1);
  _ZN12clap_builder7builder7command7Command7version17he768c891b31ea1fdE
            (local_540,auStack_a58,&DAT_0011e266,6);
  _ZN12clap_builder7builder7command7Command5about17hb9e2e17e43472c68E
            (auStack_a58,local_540,&DAT_0011e26c,0x1b);
                    /* try { // try from 001b659d to 001b65b6 has its CatchHandler @ 001b6e25 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_790,&DAT_0011e287,0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17hc61ed0e30208189eE
            (local_540,auStack_a58,local_790);
  (*(code *)PTR_memcpy_0022b6a0)(auStack_a58,local_540,700);
  local_79c = local_284 | 0x8800000088;
  local_794 = local_27c;
                    /* try { // try from 001b660b to 001b667d has its CatchHandler @ 001b6eb5 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(local_540,&DAT_0011e20d,5);
  _ZN12clap_builder7builder3arg3Arg5short17h4ff022eda161f92aE(local_790,local_540,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE(local_540,local_790,&DAT_0011e20d,5);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E(local_790,local_540,&DAT_0011e29d,0x34)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(&local_278,local_790,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E
            (local_540,auStack_a58,&local_278);
                    /* try { // try from 001b66ae to 001b6741 has its CatchHandler @ 001b6ea3 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(auStack_a58,&DAT_0011e22e,6);
  _ZN12clap_builder7builder3arg3Arg5short17h4ff022eda161f92aE(local_790,auStack_a58,0x69);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E
            (auStack_a58,local_790,&DAT_0011e2d1,0x1b);
  local_278 = &DAT_0011e234;
  local_270 = 0xb;
  local_268 = &DAT_0011e202;
  local_260 = 0xb;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h6995948dd6bec0ccE
            (local_790,auStack_a58,&local_278);
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(&local_278,local_790,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E
            (auStack_a58,local_540,&local_278);
                    /* try { // try from 001b6772 to 001b680b has its CatchHandler @ 001b6e96 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(local_540,&DAT_0011e234,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h4ff022eda161f92aE(local_790,local_540,0x49);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E(local_540,local_790,&DAT_0011e2ec,0xa1)
  ;
  local_278 = &DAT_0011e22e;
  local_270 = 6;
  local_268 = &DAT_0011e202;
  local_260 = 0xb;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h6995948dd6bec0ccE
            (local_790,local_540,&local_278);
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(&local_278,local_790,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E
            (local_540,auStack_a58,&local_278);
                    /* try { // try from 001b683c to 001b68cf has its CatchHandler @ 001b6ee6 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(auStack_a58,&DAT_0011e202,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE
            (local_790,auStack_a58,&DAT_0011e202,0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E
            (auStack_a58,local_790,&DAT_0011e38d,0x58);
  _ZN12clap_builder7builder3arg3Arg10value_name17he884a034805b20c7E(local_790,auStack_a58);
  local_278 = (undefined *)0x0;
  local_270 = 1;
  local_268 = (undefined *)((ulong)local_268 & 0xffffffffffffff00);
  _ZN12clap_builder7builder3arg3Arg8num_args17hb1ba2bcb33ab4c06E(auStack_a58,local_790,&local_278);
  (*(code *)PTR_memcpy_0022b6a0)(local_790,auStack_a58,0x248);
  local_548 = local_810 | 0x80;
  local_544 = local_80c;
                    /* try { // try from 001b690a to 001b6954 has its CatchHandler @ 001b6ee6 */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17hce20ad361582aab4E
            (auStack_a58,local_790);
  local_278 = &DAT_0011e22e;
  local_270 = 6;
  local_268 = &DAT_0011e234;
  local_260 = 0xb;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h6995948dd6bec0ccE
            (local_790,auStack_a58,&local_278);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E(auStack_a58,local_540,local_790)
  ;
                    /* try { // try from 001b696d to 001b69c7 has its CatchHandler @ 001b6e89 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(local_540,&DAT_0011e212,0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE(local_790,local_540,&DAT_0011e212,0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E(local_540,local_790,&DAT_0011e3eb,0xa3)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(local_790,local_540,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E(local_540,auStack_a58,local_790)
  ;
                    /* try { // try from 001b69f8 to 001b6a43 has its CatchHandler @ 001b6e77 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(auStack_a58,&DAT_00115040,0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE
            (local_790,auStack_a58,&DAT_00115040,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E
            (auStack_a58,local_790,&DAT_0011e48e,0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(local_790,auStack_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E(auStack_a58,local_540,local_790)
  ;
                    /* try { // try from 001b6a6f to 001b6ac9 has its CatchHandler @ 001b6e6a */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(local_540,&DAT_0011e221,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE(local_790,local_540,&DAT_0011e221,0xd);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E(local_540,local_790,&DAT_0011e4a8,0x1b)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(local_790,local_540,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E(local_540,auStack_a58,local_790)
  ;
                    /* try { // try from 001b6afa to 001b6b6d has its CatchHandler @ 001b6ed4 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(auStack_a58,&DAT_0011e23f,9);
  _ZN12clap_builder7builder3arg3Arg5short17h4ff022eda161f92aE(local_790,auStack_a58,0x72);
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17h6acab0547122913aE
            (auStack_a58,local_790,0x52);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE(local_790,auStack_a58,&DAT_0011e23f,9);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E
            (auStack_a58,local_790,&DAT_0011e4c3,0x31);
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(local_790,auStack_a58,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E(auStack_a58,local_540,local_790)
  ;
                    /* try { // try from 001b6b99 to 001b6c0b has its CatchHandler @ 001b6e5a */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(local_540,&DAT_0011e1ff,3);
  _ZN12clap_builder7builder3arg3Arg5short17h4ff022eda161f92aE(local_790,local_540,100);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE(local_540,local_790,&DAT_0011e1ff,3);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E(local_790,local_540,&DAT_0011e4f4,0x18)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(&local_278,local_790,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E
            (local_540,auStack_a58,&local_278);
                    /* try { // try from 001b6c3c to 001b6c9a has its CatchHandler @ 001b6e45 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(auStack_a58,&DAT_0011e248,7);
  _ZN12clap_builder7builder3arg3Arg5short17h4ff022eda161f92aE(local_790,auStack_a58,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE(auStack_a58,local_790,&DAT_0011e248,7);
  _ZN12clap_builder7builder3arg3Arg4help17h31a015ef37afbc49E
            (local_790,auStack_a58,&DAT_0011e50c,0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(&local_278,local_790,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E
            (auStack_a58,local_540,&local_278);
                    /* try { // try from 001b6ccb to 001b6d25 has its CatchHandler @ 001b6e35 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(local_540,&DAT_0011e24f,0x12);
  _ZN12clap_builder7builder3arg3Arg4long17h234eb1cc739d687eE(local_790,local_540,&DAT_0011e526,0x11)
  ;
  _ZN12clap_builder7builder3arg3Arg5alias17h50a51483130f7d11E
            (local_540,local_790,&DAT_0011e24f,0x12);
  (*(code *)PTR_memcpy_0022b6a0)(local_790,local_540,0x248);
  local_548 = local_2f8 | 4;
  local_544 = local_2f4;
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(&local_278,local_790,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E
            (local_540,auStack_a58,&local_278);
                    /* try { // try from 001b6d8e to 001b6dfd has its CatchHandler @ 001b6ec2 */
  _ZN12clap_builder7builder3arg3Arg3new17h908438ea192659eaE(auStack_a58,&DAT_0011e261,5);
  _ZN12clap_builder7builder3arg3Arg6action17hec16d8bb06f0595eE(local_790,auStack_a58,1);
  local_278 = (undefined *)0x2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb9d8700438cc2377E
            (auStack_a58,local_790,&local_278);
  _ZN12clap_builder7builder3arg3Arg8num_args17h746b8778ba3b0804E(local_790,auStack_a58);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h99962af29f80430aE(auStack_a58,local_790,2);
  _ZN12clap_builder7builder7command7Command3arg17h382ae0b50af7b5c8E(param_1,local_540,auStack_a58);
  return param_1;
}