undefined8 _ZN9uu_expand6uu_app17h244b390e8990c65cE(undefined8 param_1)

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
  _ZN12clap_builder7builder7command7Command3new17hfc6c8b31e1f3b5d9E(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hbee543eae6b1aabdE
            (local_7f8,local_530,&DAT_0011d0b3,6);
  _ZN12clap_builder7builder7command7Command5about17h1a6582d3f5c95cc5E
            (local_530,local_7f8,&DAT_0011d0b9,0x7e);
  _ZN12clap_builder7builder7command7Command10after_help17h93937b3acdbe28a7E(local_7f8,local_530,1,0)
  ;
                    /* try { // try from 001b254d to 001b2561 has its CatchHandler @ 001b281e */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,&DAT_0011d137,0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h8c4a27fecbffb0b0E
            (local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_00220ac0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8800000088;
  local_534 = local_26c;
                    /* try { // try from 001b25bb to 001b261e has its CatchHandler @ 001b2854 */
  _ZN12clap_builder7builder3arg3Arg3new17h444236ecf1ab14fbE(local_530,"initial",7);
  _ZN12clap_builder7builder3arg3Arg4long17h4cce9299e3254cc4E(auStack_a48,local_530,"initial",7);
  _ZN12clap_builder7builder3arg3Arg5short17h9feb5ee7bae1030bE(local_530,auStack_a48,0x69);
  _ZN12clap_builder7builder3arg3Arg4help17hc42e98c4b39f72b2E
            (auStack_a48,local_530,&DAT_0011d14f,0x24);
  _ZN12clap_builder7builder3arg3Arg6action17hda9f4dbe01033f9eE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hfa75f4a9a76db4c2E(local_530,local_7f8,local_268);
                    /* try { // try from 001b264f to 001b26d5 has its CatchHandler @ 001b2866 */
  _ZN12clap_builder7builder3arg3Arg3new17h444236ecf1ab14fbE
            (local_7f8,&anon_b3080d5aab7317ae3a539a511968743d_32_llvm_17726817573235010998,4);
  _ZN12clap_builder7builder3arg3Arg4long17h4cce9299e3254cc4E
            (auStack_a48,local_7f8,
             &anon_b3080d5aab7317ae3a539a511968743d_32_llvm_17726817573235010998,4);
  _ZN12clap_builder7builder3arg3Arg5short17h9feb5ee7bae1030bE(local_7f8,auStack_a48,0x74);
  _ZN12clap_builder7builder3arg3Arg10value_name17hffbc3eef5026b0d6E(auStack_a48,local_7f8);
  _ZN12clap_builder7builder3arg3Arg6action17hda9f4dbe01033f9eE(local_7f8,auStack_a48,1);
  _ZN12clap_builder7builder3arg3Arg4help17hc42e98c4b39f72b2E
            (auStack_a48,local_7f8,&DAT_0011d17a,0x59);
  _ZN12clap_builder7builder7command7Command3arg17hfa75f4a9a76db4c2E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001b26ee to 001b2751 has its CatchHandler @ 001b2842 */
  _ZN12clap_builder7builder3arg3Arg3new17h444236ecf1ab14fbE(local_530,"no-utf8",7);
  _ZN12clap_builder7builder3arg3Arg4long17h4cce9299e3254cc4E(auStack_a48,local_530,"no-utf8",7);
  _ZN12clap_builder7builder3arg3Arg5short17h9feb5ee7bae1030bE(local_530,auStack_a48,0x55);
  _ZN12clap_builder7builder3arg3Arg4help17hc42e98c4b39f72b2E
            (auStack_a48,local_530,&DAT_0011d1d3,0x35);
  _ZN12clap_builder7builder3arg3Arg6action17hda9f4dbe01033f9eE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hfa75f4a9a76db4c2E(local_530,local_7f8,local_268);
                    /* try { // try from 001b2782 to 001b279a has its CatchHandler @ 001b2830 */
  _ZN12clap_builder7builder3arg3Arg3new17h444236ecf1ab14fbE(local_7f8,"FILES",5);
  _ZN12clap_builder7builder3arg3Arg6action17hda9f4dbe01033f9eE(auStack_a48,local_7f8,1);
  (*(code *)PTR_memcpy_00220ac0)(local_7f8,auStack_a48,0x248);
  local_5b0 = local_800 | 4;
  local_5ac = local_7fc;
                    /* try { // try from 001b27eb to 001b27fa has its CatchHandler @ 001b2830 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h706c0d5e67080208E(auStack_a48,local_7f8,3);
  _ZN12clap_builder7builder7command7Command3arg17hfa75f4a9a76db4c2E(param_1,local_530,auStack_a48);
  return param_1;
}