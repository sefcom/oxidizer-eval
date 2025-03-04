undefined8 _ZN6uu_pwd6uu_app17h4454d6573b8ab8c1E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [700];
  ulong local_4c4;
  undefined4 local_4bc;
  undefined local_4b8 [592];
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h4db4874b3d8a8e03E(auStack_a48,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd81a191cd3852812E
            (local_780,auStack_a48,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h2a616f008716511aE
            (auStack_a48,local_780,"Display the full filename of the current working directory.",
             0x3b);
                    /* try { // try from 001a5e69 to 001a5e82 has its CatchHandler @ 001a6026 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_4b8,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hc7ce4cdbf0739487E
            (local_780,auStack_a48,local_4b8);
  (*(code *)PTR_memcpy_0020d458)(auStack_a48,local_780,700);
  local_78c = local_4c4 | 0x8000000080;
  local_784 = local_4bc;
                    /* try { // try from 001a5ed7 to 001a5f49 has its CatchHandler @ 001a6033 */
  _ZN12clap_builder7builder3arg3Arg3new17h9a2c8fb07ae21ef0E(local_780,"logical",7);
  _ZN12clap_builder7builder3arg3Arg5short17ha1a52b1a12f316bdE(local_4b8,local_780,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17h0f58ade3dc6edfdcE(local_780,local_4b8,"logical",7);
  _ZN12clap_builder7builder3arg3Arg4help17hcb45fc58d41bd583E
            (local_4b8,local_780,"use PWD from environment, even if it contains symlinks",0x36);
  _ZN12clap_builder7builder3arg3Arg6action17h245ce03bcb8e7ef2E(local_268,local_4b8);
  _ZN12clap_builder7builder7command7Command3arg17h75d695ccf32429d8E(local_780,auStack_a48,local_268)
  ;
                    /* try { // try from 001a5f75 to 001a5fef has its CatchHandler @ 001a6040 */
  _ZN12clap_builder7builder3arg3Arg3new17h9a2c8fb07ae21ef0E(auStack_a48,&DAT_00112990,8);
  _ZN12clap_builder7builder3arg3Arg5short17ha1a52b1a12f316bdE(local_4b8,auStack_a48,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h0f58ade3dc6edfdcE(auStack_a48,local_4b8,&DAT_00112990,8);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h8ab3139c02792904E
            (local_4b8,auStack_a48,"logical",7);
  _ZN12clap_builder7builder3arg3Arg4help17hcb45fc58d41bd583E
            (auStack_a48,local_4b8,"avoid all symlinks",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17h245ce03bcb8e7ef2E(local_4b8,auStack_a48);
  _ZN12clap_builder7builder7command7Command3arg17h75d695ccf32429d8E(param_1,local_780,local_4b8);
  return param_1;
}