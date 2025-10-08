undefined8
_ZN9uu_base3211base_common8base_app17hf62dc1f5a26396f2E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined local_ad8 [24];
  undefined **local_ac0;
  undefined8 local_ab8;
  char **local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  ulong local_804;
  undefined4 local_7fc;
  undefined local_7f8 [640];
  undefined local_578 [700];
  ulong local_2bc;
  undefined4 local_2b4;
  char *local_2b0;
  undefined *local_2a8;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00215278)();
  _ZN12clap_builder7builder7command7Command3new17h932fad5509a6382dE(local_578,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hc1fe59c39b6f4211E(&local_ac0,local_578);
  _ZN12clap_builder7builder7command7Command5about17h8205f6058889eff4E
            (local_578,&local_ac0,param_2,param_3);
                    /* try { // try from 00169671 to 00169684 has its CatchHandler @ 00169a18 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00215400)(local_7f8,param_4,param_5);
  _ZN12clap_builder7builder7command7Command14override_usage17h7cfcee2420e996d7E
            (&local_ac0,local_578,local_7f8);
  (*(code *)PTR_memcpy_002151e0)(local_578,&local_ac0,700);
  local_2bc = local_804 | 0x8000000080;
  local_2b4 = local_7fc;
  _ZN12clap_builder7builder3arg3Arg3new17h6ce6ec4dbfc681bbE(&local_ac0,"decode",6);
  _ZN12clap_builder7builder3arg3Arg5short17hc1b23b5f63f257f6E(local_7f8,&local_ac0,100);
                    /* try { // try from 00169711 to 0016978d has its CatchHandler @ 00169a4b */
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17h61648684a42d2af9E(&local_ac0,local_7f8);
  _ZN12clap_builder7builder3arg3Arg4long17h184e9f6fa9f8d2c0E(local_7f8,&local_ac0,"decode",6);
  _ZN12clap_builder7builder3arg3Arg4help17h36f90f0dab6bd913E(&local_ac0,local_7f8,&DAT_0011b356,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h872abf759cc678f7E(local_7f8,&local_ac0,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h69004ae79cc03a2bE
            (&local_2b0,local_7f8,"decode",6);
  _ZN12clap_builder7builder7command7Command3arg17h08729c9827e4ea92E(&local_ac0,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h6ce6ec4dbfc681bbE(local_578,"ignore-garbage",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hc1b23b5f63f257f6E(local_7f8,local_578,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h184e9f6fa9f8d2c0E
            (local_578,local_7f8,"ignore-garbage",0xe);
                    /* try { // try from 001697fd to 00169851 has its CatchHandler @ 00169a3c */
  _ZN12clap_builder7builder3arg3Arg4help17h36f90f0dab6bd913E(local_7f8,local_578,&DAT_0011b361,0x2f)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h872abf759cc678f7E(local_578,local_7f8,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h69004ae79cc03a2bE
            (local_7f8,local_578,"ignore-garbage",0xe);
  _ZN12clap_builder7builder7command7Command3arg17h08729c9827e4ea92E(local_578,&local_ac0,local_7f8);
  _ZN12clap_builder7builder3arg3Arg3new17h6ce6ec4dbfc681bbE(&local_ac0,&DAT_001192c8,4);
  _ZN12clap_builder7builder3arg3Arg5short17hc1b23b5f63f257f6E(local_7f8,&local_ac0,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h184e9f6fa9f8d2c0E(&local_ac0,local_7f8,&DAT_001192c8,4);
                    /* try { // try from 001698b8 to 001698c7 has its CatchHandler @ 00169a2a */
  _ZN12clap_builder7builder3arg3Arg10value_name17h35c574f0d6f6de07E(local_7f8,&local_ac0);
  local_2b0 = "L";
  local_2a8 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00215408
  ;
  local_ac0 = &PTR_DAT_0020de80;
  local_ab8 = 2;
  local_aa0 = 0;
  local_aa8 = 1;
                    /* try { // try from 00169912 to 00169920 has its CatchHandler @ 00169a06 */
  local_ab0 = &local_2b0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hff3b22300eec286cE(local_ad8,&local_ac0);
  _ZN12clap_builder7builder3arg3Arg4help17h38b600f407a4509aE(&local_ac0,local_7f8,local_ad8);
                    /* try { // try from 0016993b to 00169956 has its CatchHandler @ 00169a2a */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h69004ae79cc03a2bE
            (local_7f8,&local_ac0,&DAT_001192c8,4);
  _ZN12clap_builder7builder7command7Command3arg17h08729c9827e4ea92E(&local_ac0,local_578,local_7f8);
  _ZN12clap_builder7builder3arg3Arg3new17h6ce6ec4dbfc681bbE(local_578,"file",4);
  _ZN12clap_builder7builder3arg3Arg5index17h5309e592fc0f72ceE(local_7f8,local_578);
  _ZN12clap_builder7builder3arg3Arg6action17h872abf759cc678f7E(local_578,local_7f8,1);
                    /* try { // try from 001699b8 to 001699c7 has its CatchHandler @ 001699f7 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17ha7fdcb74d1825e1dE(local_7f8,local_578);
  _ZN12clap_builder7builder7command7Command3arg17h08729c9827e4ea92E(param_1,&local_ac0,local_7f8);
  return param_1;
}