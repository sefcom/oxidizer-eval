undefined8 _ZN12uu_dircolors6uu_app17hbe7b80473b118cf8E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
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
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hc413131adf548d44E(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h5ff63027270245bfE
            (local_530,local_7f8,&DAT_00123343,6);
  _ZN12clap_builder7builder7command7Command5about17h866a96b16dab5d72E
            (local_7f8,local_530,&DAT_00123349,0x3a);
  _ZN12clap_builder7builder7command7Command10after_help17h96074ec3991e2264E
            (local_530,local_7f8,&DAT_00123383,0xda);
                    /* try { // try from 001bc4e2 to 001bc4f6 has its CatchHandler @ 001bc89e */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,&DAT_0012345d,0x15);
  _ZN12clap_builder7builder7command7Command14override_usage17hb122e13d78447662E
            (local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_0022c600)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8800000088;
  local_26c = local_534;
                    /* try { // try from 001bc550 to 001bc5eb has its CatchHandler @ 001bc8f8 */
  _ZN12clap_builder7builder3arg3Arg3new17h5cc6663049b9c3abE(local_7f8,&DAT_00123472,0xc);
  _ZN12clap_builder7builder3arg3Arg4long17h02fb4b2ff0fbb7cbE(auStack_a48,local_7f8,&DAT_0012347e,2);
  _ZN12clap_builder7builder3arg3Arg5short17h676949669a886c88E(local_7f8,auStack_a48,0x62);
  _ZN12clap_builder7builder3arg3Arg13visible_alias17he5413a367265731bE
            (auStack_a48,local_7f8,&DAT_00123472,0xc);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17ha0a57baf4ae7fa8cE
            (local_7f8,auStack_a48,&DAT_00123480,7);
  _ZN12clap_builder7builder3arg3Arg4help17hf3c8b9ab68958e22E
            (auStack_a48,local_7f8,&DAT_00123487,0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hf95560f8ff1a11a5E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h23cb92d12dea2cd3E(local_7f8,local_530,local_268);
                    /* try { // try from 001bc61c to 001bc6b7 has its CatchHandler @ 001bc8e6 */
  _ZN12clap_builder7builder3arg3Arg3new17h5cc6663049b9c3abE(local_530,&DAT_00123480,7);
  _ZN12clap_builder7builder3arg3Arg4long17h02fb4b2ff0fbb7cbE(auStack_a48,local_530,&DAT_001232be,3);
  _ZN12clap_builder7builder3arg3Arg5short17h676949669a886c88E(local_530,auStack_a48,99);
  _ZN12clap_builder7builder3arg3Arg13visible_alias17he5413a367265731bE
            (auStack_a48,local_530,&DAT_00123480,7);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17ha0a57baf4ae7fa8cE
            (local_530,auStack_a48,&DAT_00123472,0xc);
  _ZN12clap_builder7builder3arg3Arg4help17hf3c8b9ab68958e22E
            (auStack_a48,local_530,&DAT_001234b0,0x24);
  _ZN12clap_builder7builder3arg3Arg6action17hf95560f8ff1a11a5E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h23cb92d12dea2cd3E(local_530,local_7f8,local_268);
                    /* try { // try from 001bc6e8 to 001bc74b has its CatchHandler @ 001bc8d4 */
  _ZN12clap_builder7builder3arg3Arg3new17h5cc6663049b9c3abE(local_7f8,&DAT_001234d4,0xe);
  _ZN12clap_builder7builder3arg3Arg4long17h02fb4b2ff0fbb7cbE
            (auStack_a48,local_7f8,&DAT_001234d4,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h676949669a886c88E(local_7f8,auStack_a48,0x70);
  _ZN12clap_builder7builder3arg3Arg4help17hf3c8b9ab68958e22E
            (auStack_a48,local_7f8,&DAT_001234e2,0x15);
  _ZN12clap_builder7builder3arg3Arg6action17hf95560f8ff1a11a5E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h23cb92d12dea2cd3E(local_7f8,local_530,local_268);
                    /* try { // try from 001bc77c to 001bc7cc has its CatchHandler @ 001bc8c2 */
  _ZN12clap_builder7builder3arg3Arg3new17h5cc6663049b9c3abE(local_530,&DAT_001234f7,0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h02fb4b2ff0fbb7cbE
            (auStack_a48,local_530,&DAT_001234f7,0xf);
  _ZN12clap_builder7builder3arg3Arg4help17hf3c8b9ab68958e22E
            (local_530,auStack_a48,&DAT_00123506,0x27);
  _ZN12clap_builder7builder3arg3Arg6action17hf95560f8ff1a11a5E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h23cb92d12dea2cd3E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 001bc7fd to 001bc815 has its CatchHandler @ 001bc8b0 */
  _ZN12clap_builder7builder3arg3Arg3new17h5cc6663049b9c3abE(local_7f8,&DAT_00116cac,4);
  (*(code *)PTR_memcpy_0022c600)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
                    /* try { // try from 001bc84e to 001bc862 has its CatchHandler @ 001bc8b0 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17he7281a51f1d9db5cE(local_7f8,auStack_a48,3);
  _ZN12clap_builder7builder3arg3Arg6action17hf95560f8ff1a11a5E(auStack_a48,local_7f8,1);
  _ZN12clap_builder7builder7command7Command3arg17h23cb92d12dea2cd3E(param_1,local_530,auStack_a48);
  return param_1;
}