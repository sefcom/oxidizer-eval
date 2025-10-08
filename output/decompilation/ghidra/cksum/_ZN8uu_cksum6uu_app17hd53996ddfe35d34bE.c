undefined8 _ZN8uu_cksum6uu_app17hd53996ddfe35d34bE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_ac0;
  undefined8 local_ab8;
  char *local_ab0;
  undefined8 local_aa8;
  uint local_848;
  undefined4 local_844;
  ulong local_804;
  undefined4 local_7fc;
  undefined *local_7f8;
  undefined8 local_7f0;
  char *local_7e8;
  undefined8 local_7e0;
  uint local_580;
  undefined4 local_57c;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [632];
  uint local_2b8;
  undefined4 local_2b4;
  char *local_2b0;
  undefined8 local_2a8;
  char *local_2a0;
  undefined8 local_298;
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0026cf20)();
  _ZN12clap_builder7builder7command7Command3new17h86bca4edd46ce944E(&local_7f8,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h4696be916ffd3e36E(&local_ac0,&local_7f8);
  _ZN12clap_builder7builder7command7Command5about17h371ec2c1bae9bec7E(&local_7f8,&local_ac0);
                    /* try { // try from 0018853d to 00188556 has its CatchHandler @ 00189193 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0026d078)
            (local_530,"{} [OPTIONS] [FILE]...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h9e547c574281f7cfE
            (&local_ac0,&local_7f8,local_530);
  puVar1 = PTR_memcpy_0026ce40;
  (*(code *)PTR_memcpy_0026ce40)(&local_7f8,&local_ac0,700);
  local_53c = local_804 | 0x8800000088;
  local_534 = local_7fc;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_ac0,&DAT_001119a4,4);
  (*(code *)puVar1)(local_530,&local_ac0,0x278);
  local_2b8 = local_848 | 4;
  local_2b4 = local_844;
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(&local_ac0,local_530,1);
  local_2b0 = (char *)0x2;
                    /* try { // try from 00188625 to 00188651 has its CatchHandler @ 0018920b */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc09459d7ca46cdbbE
            (local_530,&local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h6e1714ef82cfbba4E(&local_2b0,local_530);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E
            (&local_ac0,&local_7f8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_7f8,"algorithm",9);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_7f8,"algorithm",9);
  _ZN12clap_builder7builder3arg3Arg5short17h733728afe724fc49E(&local_7f8,local_530,0x61);
                    /* try { // try from 001886be to 0018870a has its CatchHandler @ 0018921d */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (local_530,&local_7f8,"select the digest type to use. See DIGEST below",0x2f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0871b1f3d27c73ccE(&local_7f8,local_530);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h83d1a6acb8f9671aE
            (local_530,&local_7f8,&PTR_DAT_00263a28);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E(&local_7f8,&local_ac0,local_530)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_ac0,"untagged",8);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_ac0,"untagged",8);
                    /* try { // try from 0018875c to 001887aa has its CatchHandler @ 001891f9 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_ac0,local_530,"create a reversed style checksum, without digest type",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_ac0,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5d3dca822e971d95E
            (&local_2b0,local_530,"tag",3);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E
            (&local_ac0,&local_7f8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_7f8,"tag",3);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_7f8,"tag",3);
                    /* try { // try from 001887ff to 00188853 has its CatchHandler @ 001891ea */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_7f8,local_530,"create a BSD style checksum, undo --untagged (default)",0x36);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_7f8,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5d3dca822e971d95E
            (&local_2b0,local_530,"untagged",8);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E
            (&local_7f8,&local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_ac0,"length",6);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_ac0,"length",6);
                    /* try { // try from 001888a2 to 001888ad has its CatchHandler @ 00189171 */
  local_2a8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha89766014a00d51dE
                        (
                        _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17he7963e1397bf94dbE
                        );
  local_2b0 = (char *)0x4;
  local_2a0 = "";
                    /* try { // try from 001888d1 to 001888ea has its CatchHandler @ 0018916c */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb36bfb2bf239caa7E
            (&local_ac0,local_530,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg5short17h733728afe724fc49E(local_530,&local_ac0,0x6c);
                    /* try { // try from 00188905 to 0018891d has its CatchHandler @ 00189167 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_ac0,local_530,
             "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8"
             ,99);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_ac0,0);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E(&local_ac0,&local_7f8,local_530)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_7f8,"raw",3);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_7f8,"raw",3);
                    /* try { // try from 00188984 to 0018899f has its CatchHandler @ 00189155 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_7f8,local_530,"emit a raw binary digest, not hexadecimal",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E(&local_7f8,&local_ac0,local_530)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_ac0,"strict",6);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_ac0,"strict",6);
                    /* try { // try from 00188a09 to 00188a21 has its CatchHandler @ 00189140 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_ac0,local_530,"exit non-zero for improperly formatted checksum lines",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E(&local_ac0,&local_7f8,local_530)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_7f8,"check",5);
  _ZN12clap_builder7builder3arg3Arg5short17h733728afe724fc49E(local_530,&local_7f8,99);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(&local_7f8,local_530,"check",5);
                    /* try { // try from 00188aa3 to 00188abe has its CatchHandler @ 0018912e */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (local_530,&local_7f8,"read hashsums from the FILEs and check them",0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(&local_2b0,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E
            (&local_7f8,&local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_ac0,"base64",6);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_ac0,"base64",6);
                    /* try { // try from 00188b28 to 00188b6a has its CatchHandler @ 001891d8 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_ac0,local_530,"emit a base64 digest, not hexadecimal",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_ac0,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h1d1d9aaf39fd9027E(&local_2b0,local_530);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E
            (&local_ac0,&local_7f8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_7f8,&DAT_00111930,4);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_7f8,&DAT_00111930,4);
  _ZN12clap_builder7builder3arg3Arg5short17h733728afe724fc49E(&local_7f8,local_530,0x74);
  (*(code *)PTR_memcpy_0026ce40)(local_530,&local_7f8,0x278);
  local_2b8 = local_580 | 4;
  local_2b4 = local_57c;
                    /* try { // try from 00188c0f to 00188c2a has its CatchHandler @ 0018911c */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5d3dca822e971d95E
            (&local_7f8,local_530,"binary",6);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E(&local_7f8,&local_ac0,local_530)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_ac0,"binary",6);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_ac0,"binary",6);
  _ZN12clap_builder7builder3arg3Arg5short17h733728afe724fc49E(&local_ac0,local_530,0x62);
  (*(code *)PTR_memcpy_0026ce40)(local_530,&local_ac0,0x278);
  local_2b8 = local_848 | 4;
  local_2b4 = local_844;
                    /* try { // try from 00188ce1 to 00188cf9 has its CatchHandler @ 00189107 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5d3dca822e971d95E
            (&local_ac0,local_530,&DAT_00111930,4);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E(&local_ac0,&local_7f8,local_530)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_7f8,&DAT_001118d8,4);
  _ZN12clap_builder7builder3arg3Arg5short17h733728afe724fc49E(local_530,&local_7f8,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(&local_7f8,local_530,&DAT_001118d8,4);
                    /* try { // try from 00188d7b to 00188e01 has its CatchHandler @ 001891c9 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (local_530,&local_7f8,"warn about improperly formatted checksum lines",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(&local_7f8,local_530,2);
  local_2b0 = "status";
  local_2a8 = 6;
  local_2a0 = "quiet";
  local_298 = 5;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h29da6af960708cfcE
            (local_530,&local_7f8,&local_2b0);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E(&local_7f8,&local_ac0,local_530)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_ac0,"status",6);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_ac0,"status",6);
                    /* try { // try from 00188e53 to 00188eb6 has its CatchHandler @ 001891b7 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_ac0,local_530,"don\'t output anything, status code shows success",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_ac0,2);
  local_ac0 = &DAT_001118d8;
  local_ab8 = 4;
  local_ab0 = "quiet";
  local_aa8 = 5;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h29da6af960708cfcE
            (&local_2b0,local_530,&local_ac0);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E
            (&local_ac0,&local_7f8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_7f8,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_7f8,"quiet",5);
                    /* try { // try from 00188f0b to 00188f83 has its CatchHandler @ 001891a8 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_7f8,local_530,"don\'t print OK for each successfully verified file",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_7f8,2);
  local_7f8 = &DAT_001118d8;
  local_7f0 = 4;
  local_7e8 = "status";
  local_7e0 = 6;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h29da6af960708cfcE
            (&local_2b0,local_530,&local_7f8);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E
            (&local_7f8,&local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_ac0,"ignore-missing",0xe);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E
            (local_530,&local_ac0,"ignore-missing",0xe);
                    /* try { // try from 00188fd5 to 00188fed has its CatchHandler @ 001890f2 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (&local_ac0,local_530,"don\'t fail or report status for missing files",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(local_530,&local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E(&local_ac0,&local_7f8,local_530)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h8b2ba3a0c9b96a28E(&local_7f8,&DAT_00111960,4);
  _ZN12clap_builder7builder3arg3Arg4long17h85cad3c224406cd8E(local_530,&local_7f8,&DAT_00111960,4);
  _ZN12clap_builder7builder3arg3Arg5short17h733728afe724fc49E(&local_7f8,local_530,0x7a);
                    /* try { // try from 0018906f to 0018908a has its CatchHandler @ 001890e0 */
  _ZN12clap_builder7builder3arg3Arg4help17h11dda4755e33f1c5E
            (local_530,&local_7f8,
             "end each output line with NUL, not newline,\n and disable file name escaping",0x4b);
  _ZN12clap_builder7builder3arg3Arg6action17hafff6befccbb07d8E(&local_2b0,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h36db2069cadd3667E
            (&local_7f8,&local_ac0,&local_2b0);
  _ZN12clap_builder7builder7command7Command10after_help17h21e4264e3efad3b2E(param_1,&local_7f8);
  return param_1;
}