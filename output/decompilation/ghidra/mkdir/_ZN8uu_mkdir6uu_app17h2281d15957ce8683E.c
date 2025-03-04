undefined8 _ZN8uu_mkdir6uu_app17h2281d15957ce8683E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [584];
  uint local_538;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268 [74];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h795eb4adb8e3c50aE(auStack_a48,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6e703008c761bba0E
            (local_530,auStack_a48,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h8658f4a857dcef07E
            (auStack_a48,local_530,"Create the given DIRECTORY(ies) if they do not exist",0x34);
                    /* try { // try from 001b2859 to 001b2872 has its CatchHandler @ 001b2b66 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_780,"{} [OPTION]... DIRECTORY...",0x1b);
  _ZN12clap_builder7builder7command7Command14override_usage17hce6268cc1a1bc3e2E
            (local_530,auStack_a48,local_780);
  (*(code *)PTR_memcpy_002242f0)(auStack_a48,local_530,700);
  local_78c = local_274 | 0x8000000080;
  local_784 = local_26c;
                    /* try { // try from 001b28c7 to 001b2939 has its CatchHandler @ 001b2b80 */
  _ZN12clap_builder7builder3arg3Arg3new17hd930c321111f1ba4E(local_530,&DAT_00114314,4);
  _ZN12clap_builder7builder3arg3Arg5short17h188d8eee4027bccaE(local_780,local_530,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17h0e7f97fad10cb351E(local_530,local_780,&DAT_00114314,4);
  _ZN12clap_builder7builder3arg3Arg4help17hfcfe8af5e4e0b317E
            (local_780,local_530,"set file mode (not implemented on windows)",0x2a);
  _ZN12clap_builder7builder7command7Command3arg17h689a48614b8bd7d5E(local_530,auStack_a48,local_780)
  ;
                    /* try { // try from 001b2952 to 001b29cc has its CatchHandler @ 001b2b9f */
  _ZN12clap_builder7builder3arg3Arg3new17hd930c321111f1ba4E(auStack_a48,"parents",7);
  _ZN12clap_builder7builder3arg3Arg5short17h188d8eee4027bccaE(local_780,auStack_a48,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17h0e7f97fad10cb351E(auStack_a48,local_780,"parents",7);
  _ZN12clap_builder7builder3arg3Arg4help17hfcfe8af5e4e0b317E
            (local_780,auStack_a48,"make parent directories as needed",0x21);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb5e23a6bb58cce2dE
            (auStack_a48,local_780,"parents",7);
  _ZN12clap_builder7builder3arg3Arg6action17h4db85773161f88deE(local_780,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h689a48614b8bd7d5E(auStack_a48,local_530,local_780)
  ;
                    /* try { // try from 001b29f8 to 001b2a6a has its CatchHandler @ 001b2b73 */
  _ZN12clap_builder7builder3arg3Arg3new17hd930c321111f1ba4E(local_530,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17h188d8eee4027bccaE(local_780,local_530,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h0e7f97fad10cb351E(local_530,local_780,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg4help17hfcfe8af5e4e0b317E
            (local_780,local_530,"print a message for each printed directory: \n",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17h4db85773161f88deE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h689a48614b8bd7d5E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b2a9b to 001b2ad1 has its CatchHandler @ 001b2b8d */
  _ZN12clap_builder7builder3arg3Arg3new17hd930c321111f1ba4E(auStack_a48,&DAT_001142bc,4);
  _ZN12clap_builder7builder3arg3Arg6action17h4db85773161f88deE(local_780,auStack_a48,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17ha621a2a957949a4bE(auStack_a48,local_780);
  (*(code *)PTR_memcpy_002242f0)(local_780,auStack_a48,0x248);
  local_538 = local_800 | 1;
  local_534 = local_7fc;
  local_268[0] = 2;
                    /* try { // try from 001b2b16 to 001b2b3d has its CatchHandler @ 001b2b8d */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h771dc5ae7e04ccf8E
            (auStack_a48,local_780,local_268);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4c514b1e571be732E(local_780,auStack_a48,4);
  _ZN12clap_builder7builder7command7Command3arg17h689a48614b8bd7d5E(param_1,local_530,local_780);
  return param_1;
}