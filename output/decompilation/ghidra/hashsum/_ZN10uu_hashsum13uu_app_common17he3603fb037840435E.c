undefined8 _ZN10uu_hashsum13uu_app_common17he3603fb037840435E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ac0 [640];
  undefined local_840 [700];
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [700];
  ulong local_2bc;
  undefined4 local_2b4;
  char *local_2b0;
  undefined8 local_2a8;
  char *local_2a0;
  undefined8 local_298;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0025abd8)();
  _ZN12clap_builder7builder7command7Command3new17he81fabb331bef1c2E(local_840,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h0c4a60c7163dd065E(local_578,local_840);
  _ZN12clap_builder7builder7command7Command5about17h22d722537367ec5aE(local_840,local_578);
                    /* try { // try from 001827c0 to 001827d6 has its CatchHandler @ 00183029 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0025af20)
            (local_ac0,"{} --<digest> [OPTIONS]... [FILE]...",0x24);
  _ZN12clap_builder7builder7command7Command14override_usage17h33fbfcc08b9c7cb8E
            (local_578,local_840,local_ac0);
  (*(code *)PTR_memcpy_0025ac18)(local_840,local_578,700);
  local_584 = local_2bc | 0x8800000088;
  local_57c = local_2b4;
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_578,"binary",6);
  _ZN12clap_builder7builder3arg3Arg5short17h94ef1aed863077dbE(local_ac0,local_578,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_578,local_ac0,"binary",6);
                    /* try { // try from 00182881 to 00182899 has its CatchHandler @ 00183014 */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_ac0,local_578,"read in binary mode",0x13);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_840,"check",5);
  _ZN12clap_builder7builder3arg3Arg5short17h94ef1aed863077dbE(local_ac0,local_840,99);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_840,local_ac0,"check",5);
                    /* try { // try from 0018291b to 00182966 has its CatchHandler @ 00183095 */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_ac0,local_840,"read hashsums from the FILEs and check them",0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_840,local_ac0,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6e58a9bdfee48787E(local_ac0,local_840,"tag",3)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_578,"tag",3);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_ac0,local_578,"tag",3);
                    /* try { // try from 001829b8 to 00182a09 has its CatchHandler @ 00183083 */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_578,local_ac0,"create a BSD-style checksum",0x1b);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_ac0,local_578,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6e58a9bdfee48787E
            (&local_2b0,local_ac0,&DAT_00111d48,4);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_840,&DAT_00111d48,4);
  _ZN12clap_builder7builder3arg3Arg5short17h94ef1aed863077dbE(local_ac0,local_840,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_840,local_ac0,&DAT_00111d48,4);
                    /* try { // try from 00182a76 to 00182aac has its CatchHandler @ 00183071 */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_ac0,local_840,"read in text mode (default)",0x1b);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6e58a9bdfee48787E
            (local_840,local_ac0,"binary",6);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_578,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg5short17h94ef1aed863077dbE(local_ac0,local_578,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_578,local_ac0,"quiet",5);
                    /* try { // try from 00182b2e to 00182bab has its CatchHandler @ 0018305f */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_ac0,local_578,"don\'t print OK for each successfully verified file",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_578,local_ac0,2);
  local_2b0 = "status";
  local_2a8 = 6;
  local_2a0 = "warnZero\x1b[7mBool";
  local_298 = 4;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hf9e822be6c4c71eeE
            (local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_840,"status",6);
  _ZN12clap_builder7builder3arg3Arg5short17h94ef1aed863077dbE(local_ac0,local_840,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_840,local_ac0,"status",6);
                    /* try { // try from 00182c15 to 00182c84 has its CatchHandler @ 0018304d */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_ac0,local_840,"don\'t output anything, status code shows success",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_840,local_ac0,2);
  local_2b0 = "quiet";
  local_2a8 = 5;
  local_2a0 = "warnZero\x1b[7mBool";
  local_298 = 4;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hf9e822be6c4c71eeE
            (local_ac0,local_840,&local_2b0);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_578,"strict",6);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_ac0,local_578,"strict",6);
                    /* try { // try from 00182cd6 to 00182cf1 has its CatchHandler @ 00182fff */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_578,local_ac0,"exit non-zero for improperly formatted checksum lines",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_ac0,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_840,"ignore-missing",0xe);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE
            (local_ac0,local_840,"ignore-missing",0xe);
                    /* try { // try from 00182d5b to 00182d76 has its CatchHandler @ 00182fea */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_840,local_ac0,"don\'t fail or report status for missing files",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_578,&DAT_00111cec,4);
  _ZN12clap_builder7builder3arg3Arg5short17h94ef1aed863077dbE(local_ac0,local_578,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_578,local_ac0,&DAT_00111cec,4);
                    /* try { // try from 00182df8 to 00182e67 has its CatchHandler @ 0018303b */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_ac0,local_578,"warn about improperly formatted checksum lines",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_578,local_ac0,2);
  local_2b0 = "quiet";
  local_2a8 = 5;
  local_2a0 = "status";
  local_298 = 6;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hf9e822be6c4c71eeE
            (local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_840,&DAT_00111d78,4);
  _ZN12clap_builder7builder3arg3Arg5short17h94ef1aed863077dbE(local_ac0,local_840,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_840,local_ac0,&DAT_00111d78,4);
                    /* try { // try from 00182ed1 to 00182ee9 has its CatchHandler @ 00182fd5 */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (local_ac0,local_840,"end each output line with NUL, not newline",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(local_578,&DAT_00111db8,4);
  _ZN12clap_builder7builder3arg3Arg5index17h9a9056642d48bc66E(local_ac0,local_578);
  _ZN12clap_builder7builder3arg3Arg6action17ha30e37a18dbb74d5E(local_578,local_ac0,1);
                    /* try { // try from 00182f63 to 00182faa has its CatchHandler @ 001830a7 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h58de39279c54d2faE
            (local_ac0,local_578,&DAT_00111db8);
  _ZN12clap_builder7builder3arg3Arg10value_hint17he985ef4fc9802ca6E(local_578,local_ac0);
  local_2b0 = (char *)0x2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc0836ea164fad5feE
            (local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(param_1,local_840,local_ac0);
  return param_1;
}