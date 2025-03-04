undefined8
_ZN9uu_base3211base_common8base_app17ha21d2a66676032efE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  char *local_838;
  code *local_830;
  undefined local_828 [24];
  undefined **local_810;
  undefined8 local_808;
  char **local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  ulong local_554;
  undefined4 local_54c;
  undefined local_548 [592];
  undefined local_2f8 [700];
  ulong local_3c;
  undefined4 local_34;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hfa716c44879ea464E(local_2f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hb92211e67539361aE
            (&local_810,local_2f8,&DAT_00118bd4,6);
  _ZN12clap_builder7builder7command7Command5about17hec0b9e41edbe4337E
            (local_2f8,&local_810,param_2,param_3);
                    /* try { // try from 001c144d to 001c1460 has its CatchHandler @ 001c17dc */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_548,param_4,param_5);
  _ZN12clap_builder7builder7command7Command14override_usage17hf1986e74298ec10aE
            (&local_810,local_2f8,local_548);
  (*(code *)PTR_memcpy_0024dea8)(local_2f8,&local_810,700);
  local_3c = local_554 | 0x8000000080;
  local_34 = local_54c;
                    /* try { // try from 001c14bc to 001c1558 has its CatchHandler @ 001c181e */
  _ZN12clap_builder7builder3arg3Arg3new17hd6a05d291299ce3cE
            (&local_810,&anon_c1c055de090567b5a95d92af4d90b7c9_23_llvm_10347091732497712345,6);
  _ZN12clap_builder7builder3arg3Arg5short17h428f0722295604ffE(local_548,&local_810,100);
  _ZN12clap_builder7builder3arg3Arg4long17he1104ce654318553E
            (&local_810,local_548,
             &anon_c1c055de090567b5a95d92af4d90b7c9_23_llvm_10347091732497712345,6);
  _ZN12clap_builder7builder3arg3Arg4help17h40d56640fed2be37E(local_548,&local_810,&DAT_00118bda,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h78abc8b7d6dd2888E(&local_810,local_548,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17ha62caa77c6cf0524E
            (local_548,&local_810,
             &anon_c1c055de090567b5a95d92af4d90b7c9_23_llvm_10347091732497712345,6);
  _ZN12clap_builder7builder7command7Command3arg17h4f860fc6ea6f3166E(&local_810,local_2f8,local_548);
                    /* try { // try from 001c1573 to 001c161e has its CatchHandler @ 001c180f */
  _ZN12clap_builder7builder3arg3Arg3new17hd6a05d291299ce3cE
            (local_2f8,anon_c1c055de090567b5a95d92af4d90b7c9_25_llvm_10347091732497712345,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h428f0722295604ffE(local_548,local_2f8,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17he1104ce654318553E
            (local_2f8,local_548,anon_c1c055de090567b5a95d92af4d90b7c9_25_llvm_10347091732497712345,
             0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h40d56640fed2be37E(local_548,local_2f8,&DAT_00118be5,0x2f)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h78abc8b7d6dd2888E(local_2f8,local_548,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17ha62caa77c6cf0524E
            (local_548,local_2f8,anon_c1c055de090567b5a95d92af4d90b7c9_25_llvm_10347091732497712345,
             0xe);
  _ZN12clap_builder7builder7command7Command3arg17h4f860fc6ea6f3166E(local_2f8,&local_810,local_548);
                    /* try { // try from 001c1639 to 001c1693 has its CatchHandler @ 001c17fd */
  _ZN12clap_builder7builder3arg3Arg3new17hd6a05d291299ce3cE
            (&local_810,&anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,4);
  _ZN12clap_builder7builder3arg3Arg5short17h428f0722295604ffE(local_548,&local_810,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17he1104ce654318553E
            (&local_810,local_548,
             &anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,4);
  _ZN12clap_builder7builder3arg3Arg10value_name17h13e072b4d1b72f35E(local_548,&local_810);
  local_838 = "L";
  local_830 = 
  _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
  ;
  local_810 = &PTR_DAT_00249718;
  local_808 = 2;
  local_7f0 = 0;
  local_800 = &local_838;
  local_7f8 = 1;
                    /* try { // try from 001c16dd to 001c16eb has its CatchHandler @ 001c17ca */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hb37e8cc30801e00bE(local_828,&local_810);
                    /* try { // try from 001c16ec to 001c1702 has its CatchHandler @ 001c17c8 */
  _ZN12clap_builder7builder3arg3Arg4help17hd570429907ec6595E(&local_810,local_548,local_828);
                    /* try { // try from 001c1703 to 001c1720 has its CatchHandler @ 001c17fd */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17ha62caa77c6cf0524E
            (local_548,&local_810,
             &anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,4);
  _ZN12clap_builder7builder7command7Command3arg17h4f860fc6ea6f3166E(&local_810,local_2f8,local_548);
                    /* try { // try from 001c173b to 001c1798 has its CatchHandler @ 001c17ee */
  _ZN12clap_builder7builder3arg3Arg3new17hd6a05d291299ce3cE
            (local_2f8,&anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345,4);
  _ZN12clap_builder7builder3arg3Arg5index17h0d277d3604e1b382E(local_548,local_2f8);
  _ZN12clap_builder7builder3arg3Arg6action17h78abc8b7d6dd2888E(local_2f8,local_548,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0af7fcc19388eca0E(local_548,local_2f8,3);
  _ZN12clap_builder7builder7command7Command3arg17h4f860fc6ea6f3166E(param_1,&local_810,local_548);
  return param_1;
}