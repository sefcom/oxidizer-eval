undefined8 _ZN6uu_cut6uu_app17h2a5a44b0da1a04d9E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined local_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h9a8f3ee55af8c901E(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h000f49d8f9d72961E
            (local_530,local_7f8,&DAT_0011dcc1,6);
                    /* try { // try from 001b75c4 to 001b75da has its CatchHandler @ 001b7de6 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_a48,&DAT_0011dcc7,0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h61d50ed17fd5192cE
            (local_7f8,local_530,local_a48);
  _ZN12clap_builder7builder7command7Command5about17h9b454bf679160896E
            (local_530,local_7f8,&DAT_0011dcdd,0x51);
  _ZN12clap_builder7builder7command7Command10after_help17h3c9450aca7021bb3E
            (local_7f8,local_530,&DAT_0011dd2e,0xc0b);
  (*(code *)PTR_memcpy_0022cc88)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8800000088;
  local_26c = local_534;
                    /* try { // try from 001b7674 to 001b76e0 has its CatchHandler @ 001b7e7f */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_7f8,&DAT_0011e939,5);
  _ZN12clap_builder7builder3arg3Arg5short17hfb3a8ccc6277d940E(local_a48,local_7f8,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17hb1fc0d277df3e81eE(local_7f8,local_a48,&DAT_0011e939,5);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_a48,local_7f8,&DAT_0011e93e,0x29)
  ;
  (*(code *)PTR_memcpy_0022cc88)(local_7f8,local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001b771b to 001b7733 has its CatchHandler @ 001b7e7f */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1390c70eac450fe9E
            (local_a48,local_7f8,&DAT_0011486c,4);
  _ZN12clap_builder7builder3arg3Arg6action17h37fd892093594a74E(&local_268,local_a48,1);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7766 to 001b77d2 has its CatchHandler @ 001b7e6d */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_530,&DAT_0011e967,10);
  _ZN12clap_builder7builder3arg3Arg5short17hfb3a8ccc6277d940E(local_a48,local_530,99);
  _ZN12clap_builder7builder3arg3Arg4long17hb1fc0d277df3e81eE(local_530,local_a48,&DAT_0011e967,10);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_a48,local_530,&DAT_0011e971,0x18)
  ;
  (*(code *)PTR_memcpy_0022cc88)(local_530,local_a48,0x248);
  local_2e8 = local_800 | 0x20;
  local_2e4 = local_7fc;
                    /* try { // try from 001b780d to 001b7825 has its CatchHandler @ 001b7e6d */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1390c70eac450fe9E
            (local_a48,local_530,&DAT_0011486c,4);
  _ZN12clap_builder7builder3arg3Arg6action17h37fd892093594a74E(&local_268,local_a48,1);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_530,local_7f8,&local_268);
                    /* try { // try from 001b7858 to 001b792c has its CatchHandler @ 001b7ea3 */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_7f8,"delimiter",9);
  _ZN12clap_builder7builder3arg3Arg5short17hfb3a8ccc6277d940E(local_a48,local_7f8,100);
  _ZN12clap_builder7builder3arg3Arg4long17hb1fc0d277df3e81eE(local_7f8,local_a48,"delimiter",9);
  local_a60 = 2;
  local_258 = local_a50;
  local_268 = 2;
  local_260 = local_a58;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h2cda3b3bd319a7faE
            (local_a48,local_7f8,&local_268);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_7f8,local_a48,&DAT_0011e989,0x5b)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17h1390c70eac450fe9E
            (local_a48,local_7f8,&DAT_0011e9e4,5);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_7f8,local_530,local_a48);
                    /* try { // try from 001b7947 to 001b79b3 has its CatchHandler @ 001b7e49 */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_530,"whitespace-delimited",0x14);
  _ZN12clap_builder7builder3arg3Arg5short17hfb3a8ccc6277d940E(local_a48,local_530,0x77);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_530,local_a48,&DAT_0011e9e9,0x65)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17h1390c70eac450fe9E
            (local_a48,local_530,&DAT_0011ea4e,10);
  _ZN12clap_builder7builder3arg3Arg6action17h37fd892093594a74E(&local_268,local_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_530,local_7f8,&local_268);
                    /* try { // try from 001b79e6 to 001b7a52 has its CatchHandler @ 001b7e5b */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_7f8,&DAT_0011ea58,6);
  _ZN12clap_builder7builder3arg3Arg5short17hfb3a8ccc6277d940E(local_a48,local_7f8,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hb1fc0d277df3e81eE(local_7f8,local_a48,&DAT_0011ea58,6);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_a48,local_7f8,&DAT_0011ea5e,0x2a)
  ;
  (*(code *)PTR_memcpy_0022cc88)(local_7f8,local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001b7a8d to 001b7aa5 has its CatchHandler @ 001b7e5b */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1390c70eac450fe9E
            (local_a48,local_7f8,&DAT_0011486c,4);
  _ZN12clap_builder7builder3arg3Arg6action17h37fd892093594a74E(&local_268,local_a48,1);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7ad8 to 001b7b2c has its CatchHandler @ 001b7e37 */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_530,&DAT_0011ea88,10);
  _ZN12clap_builder7builder3arg3Arg4long17hb1fc0d277df3e81eE(local_a48,local_530,&DAT_0011ea88,10);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_530,local_a48,&DAT_0011ea92,0x62)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h37fd892093594a74E(local_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_530,local_7f8,local_a48);
                    /* try { // try from 001b7b5f to 001b7bcb has its CatchHandler @ 001b7e25 */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_7f8,&DAT_0011eaf4,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hfb3a8ccc6277d940E(local_a48,local_7f8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hb1fc0d277df3e81eE(local_7f8,local_a48,&DAT_0011eaf4,0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_a48,local_7f8,&DAT_0011eb02,0x3b)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h37fd892093594a74E(&local_268,local_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7bfe to 001b7c6a has its CatchHandler @ 001b7e10 */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_530,&DAT_0011eb3d,0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hfb3a8ccc6277d940E(local_a48,local_530,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17hb1fc0d277df3e81eE(local_530,local_a48,&DAT_0011eb3d,0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_a48,local_530,&DAT_0011eb4c,0x57)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h37fd892093594a74E(&local_268,local_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_530,local_7f8,&local_268);
                    /* try { // try from 001b7c9d to 001b7d26 has its CatchHandler @ 001b7e91 */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_7f8,&DAT_001153e0,0x10);
  _ZN12clap_builder7builder3arg3Arg4long17hb1fc0d277df3e81eE(local_a48,local_7f8,&DAT_001153e0,0x10)
  ;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h2cda3b3bd319a7faE
            (local_7f8,local_a48,&local_a60);
  _ZN12clap_builder7builder3arg3Arg4help17h6f87bca85c8439b4E(local_a48,local_7f8,&DAT_0011eba3,0x50)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17h1390c70eac450fe9E
            (&local_268,local_a48,&DAT_0011ebf3,9);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(local_7f8,local_530,&local_268);
                    /* try { // try from 001b7d44 to 001b7d5c has its CatchHandler @ 001b7dfb */
  _ZN12clap_builder7builder3arg3Arg3new17hb8ba1c2db8ac019eE(local_530,"file",4);
  (*(code *)PTR_memcpy_0022cc88)(local_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  _ZN12clap_builder7builder3arg3Arg6action17h37fd892093594a74E(local_530,local_a48,1);
                    /* try { // try from 001b7daf to 001b7dc0 has its CatchHandler @ 001b7dfb */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h6e24acd5b6e1d083E(local_a48,local_530,3);
  _ZN12clap_builder7builder7command7Command3arg17hc176e8913b4d502bE(param_1,local_7f8,local_a48);
  return param_1;
}