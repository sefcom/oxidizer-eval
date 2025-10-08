undefined8 _ZN7uu_uniq6uu_app17hcc95d1d241a015fcE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *local_ac0;
  undefined8 local_ab8;
  undefined *local_ab0;
  undefined8 local_aa8;
  undefined *local_aa0;
  undefined8 local_a98;
  uint local_848;
  undefined4 local_844;
  undefined *local_840;
  undefined8 local_838;
  undefined *local_830;
  undefined8 local_828;
  undefined *local_820;
  undefined8 local_818;
  undefined *local_810;
  undefined8 local_808;
  uint local_5c8;
  undefined4 local_5c4;
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [632];
  uint local_300;
  undefined4 local_2fc;
  ulong local_2bc;
  undefined4 local_2b4;
  undefined8 local_2b0 [79];
  uint local_38;
  undefined4 local_34;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fc308)();
  _ZN12clap_builder7builder7command7Command3new17hde69a385a5db5eefE(local_578,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h82933b2904dfd558E(&local_840,local_578);
  _ZN12clap_builder7builder7command7Command5about17h7b2b986b366d9debE(local_578,&local_840);
                    /* try { // try from 00167a50 to 00167a66 has its CatchHandler @ 001684bb */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001fc558)
            (&local_ac0,&DAT_0011b364,0x1f);
  _ZN12clap_builder7builder7command7Command14override_usage17h8bb5f8ed0d2dc6ccE
            (&local_840,local_578,&local_ac0);
  (*(code *)PTR_memcpy_001fc2a8)(local_578,&local_840,700);
  local_2bc = local_584 | 0x8000000080;
  local_2b4 = local_57c;
  _ZN12clap_builder7builder7command7Command10after_help17h245f9a5b41f23462E(&local_840,local_578);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(local_578,&DAT_0011b144,0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,local_578,0x44);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE(local_578,&local_ac0,&DAT_0011b144,0xc)
  ;
  local_ac0 = &DAT_0011913c;
  local_ab8 = 4;
  local_ab0 = &DAT_0011b471;
  local_aa8 = 7;
  local_aa0 = &DAT_00118a30;
  local_a98 = 8;
                    /* try { // try from 00167b60 to 00167b71 has its CatchHandler @ 001684a9 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17hf8b99bb9bce6cfafE
            (local_2b0,&local_ac0);
                    /* try { // try from 00167b72 to 00167b8b has its CatchHandler @ 001684a7 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3cb8544ab5861396E
            (&local_ac0,local_578,local_2b0);
                    /* try { // try from 00167b8c to 00167bfc has its CatchHandler @ 00168515 */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (local_578,&local_ac0,&DAT_0011b478,0x4f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2138a6044f1c5c61E
            (&local_ac0,local_578,&DAT_0011b4c7,0xe);
  _ZN12clap_builder7builder3arg3Arg8num_args17h289a892a01df22caE(local_578,&local_ac0,0,1);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17ha83625cce24bcc81E
            (&local_ac0,local_578,&DAT_0011913c,4);
  (*(code *)PTR_memcpy_001fc2a8)(local_2b0,&local_ac0,0x278);
  local_38 = local_848 | 0x80;
  local_34 = local_844;
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(local_578,&local_840,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(&local_840,&DAT_0011b195,5);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE(&local_ac0,&local_840,&DAT_0011b195,5);
  local_840 = &DAT_00118a30;
  local_838 = 8;
  local_830 = &DAT_0011b471;
  local_828 = 7;
  local_820 = &DAT_0011b4d5;
  local_818 = 6;
  local_810 = &DAT_0011914c;
  local_808 = 4;
                    /* try { // try from 00167ce3 to 00167cf7 has its CatchHandler @ 00168495 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17he9d0a3bbf7934a6bE
            (local_2b0,&local_840);
                    /* try { // try from 00167cf8 to 00167d11 has its CatchHandler @ 00168490 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3cb8544ab5861396E
            (&local_840,&local_ac0,local_2b0);
                    /* try { // try from 00167d12 to 00167d85 has its CatchHandler @ 00168527 */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,&local_840,&DAT_0011b4db,0x49);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2138a6044f1c5c61E
            (&local_840,&local_ac0,&DAT_0011b524,0xc);
  _ZN12clap_builder7builder3arg3Arg8num_args17h289a892a01df22caE(&local_ac0,&local_840,0,1);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17ha83625cce24bcc81E
            (&local_840,&local_ac0,&DAT_00118a30,8);
  (*(code *)PTR_memcpy_001fc2a8)(&local_ac0,&local_840,0x278);
  local_848 = local_5c8 | 0x80;
  local_844 = local_5c4;
  local_840 = &DAT_00118b10;
  local_838 = 8;
  local_830 = &DAT_0011b144;
  local_828 = 0xc;
  local_820 = &DAT_0011b180;
  local_818 = 6;
  local_810 = &DAT_0011b15b;
  local_808 = 5;
                    /* try { // try from 00167e27 to 00167e3e has its CatchHandler @ 00168527 */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h974208ce44964564E
            (local_2b0,&local_ac0,&local_840);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(&local_840,local_578,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(local_578,&DAT_0011b150,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,local_578,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE(local_578,&local_ac0,&DAT_0011b150,0xb)
  ;
                    /* try { // try from 00167eab to 00167ee1 has its CatchHandler @ 00168503 */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,local_578,&DAT_0011b530,0x2a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2138a6044f1c5c61E
            (local_2b0,&local_ac0,&DAT_0011b55a,1);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(local_578,&local_840,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(&local_840,&DAT_0011b15b,5);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,&local_840,99);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE(&local_840,&local_ac0,&DAT_0011b15b,5);
                    /* try { // try from 00167f4e to 00167f66 has its CatchHandler @ 0016847b */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,&local_840,&DAT_0011b55b,0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h7728b7fb311eeddbE(local_2b0,&local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(&local_840,local_578,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(local_578,&DAT_0011b160,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,local_578,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE(local_578,&local_ac0,&DAT_0011b160,0xb)
  ;
                    /* try { // try from 00167fe8 to 00168000 has its CatchHandler @ 00168466 */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,local_578,&DAT_0011b584,0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h7728b7fb311eeddbE(local_2b0,&local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(local_578,&local_840,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(&local_840,&DAT_00118b10,8);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,&local_840,100);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE(&local_840,&local_ac0,&DAT_00118b10,8);
                    /* try { // try from 00168082 to 0016809a has its CatchHandler @ 00168451 */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,&local_840,&DAT_0011b5ad,0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h7728b7fb311eeddbE(local_2b0,&local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(&local_840,local_578,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(local_578,&DAT_0011b176,10);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,local_578,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE(local_578,&local_ac0,&DAT_0011b176,10);
                    /* try { // try from 0016811c to 00168152 has its CatchHandler @ 001684f1 */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,local_578,&DAT_0011b5c7,0x26);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2138a6044f1c5c61E
            (local_2b0,&local_ac0,&DAT_0011b55a,1);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(local_578,&local_840,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(&local_840,&DAT_0011b16b,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,&local_840,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE
            (&local_840,&local_ac0,&DAT_0011b16b,0xb);
                    /* try { // try from 001681bf to 001681f5 has its CatchHandler @ 001684df */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,&local_840,&DAT_0011b5ed,0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2138a6044f1c5c61E
            (local_2b0,&local_ac0,&DAT_0011b55a,1);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(&local_840,local_578,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(local_578,&DAT_0011b180,6);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,local_578,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE(local_578,&local_ac0,&DAT_0011b180,6);
                    /* try { // try from 00168262 to 0016827a has its CatchHandler @ 0016843c */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,local_578,&DAT_0011b60f,0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h7728b7fb311eeddbE(local_2b0,&local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(local_578,&local_840,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(&local_840,&DAT_0011b186,0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h183e18805da6d851E(&local_ac0,&local_840,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17ha75f5eebc05afc3aE
            (&local_840,&local_ac0,&DAT_0011b186,0xf);
                    /* try { // try from 001682fc to 00168314 has its CatchHandler @ 00168427 */
  _ZN12clap_builder7builder3arg3Arg4help17h0eb09b9d405a57afE
            (&local_ac0,&local_840,&DAT_0011b626,0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h7728b7fb311eeddbE(local_2b0,&local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(&local_840,local_578,local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h3b7e4712a4d626b2E(local_578,&DAT_0011b19a,5);
  _ZN12clap_builder7builder3arg3Arg6action17h7728b7fb311eeddbE(&local_ac0,local_578,1);
  local_2b0[0] = 2;
                    /* try { // try from 00168384 to 0016839b has its CatchHandler @ 001684cd */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hab7395ab21ef09e9E
            (local_578,&local_ac0,local_2b0);
  _ZN12clap_builder7builder3arg3Arg8num_args17h289a892a01df22caE(&local_ac0,local_578,0,2);
  (*(code *)PTR_memcpy_001fc2a8)(local_578,&local_ac0,0x278);
  local_300 = local_848 | 4;
  local_2fc = local_844;
                    /* try { // try from 001683f0 to 001683fc has its CatchHandler @ 001684cd */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5354491d139b2233E(&local_ac0,local_578);
  _ZN12clap_builder7builder7command7Command3arg17h0acc9ddbe8cb7ea7E(param_1,&local_840,&local_ac0);
  return param_1;
}