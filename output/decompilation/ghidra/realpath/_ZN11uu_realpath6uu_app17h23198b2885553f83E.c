undefined8 _ZN11uu_realpath6uu_app17h23198b2885553f83E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ac0 [632];
  uint local_848;
  undefined4 local_844;
  undefined local_840 [632];
  uint local_5c8;
  undefined4 local_5c4;
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [700];
  ulong local_2bc;
  undefined4 local_2b4;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f2f98)();
  _ZN12clap_builder7builder7command7Command3new17h9eb3dd0cefff68bdE(local_840,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hbb3216ff362417f3E(local_578,local_840);
  _ZN12clap_builder7builder7command7Command5about17hc5467f1323680862E(local_840,local_578);
                    /* try { // try from 00162170 to 00162186 has its CatchHandler @ 001628ac */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f3348)(local_ac0,&DAT_0011a0d4,0x16)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17heb7ada44a1d67407E
            (local_578,local_840,local_ac0);
  (*(code *)PTR_memcpy_001f3148)(local_840,local_578,700);
  local_584 = local_2bc | 0x8000000080;
  local_57c = local_2b4;
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_578,&DAT_0011a0a5,5);
  _ZN12clap_builder7builder3arg3Arg5short17he744ecbbf5f02b5fE(local_ac0,local_578,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E(local_578,local_ac0,&DAT_0011a0a5,5);
                    /* try { // try from 00162231 to 00162249 has its CatchHandler @ 0016289a */
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E(local_ac0,local_578,&DAT_0011a0ea,0x27)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h8afc00c92188ded9E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_840,&DAT_0011a0aa,5);
  _ZN12clap_builder7builder3arg3Arg5short17he744ecbbf5f02b5fE(local_ac0,local_840,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E(local_840,local_ac0,&DAT_0011a0aa,5);
                    /* try { // try from 001622cb to 001622f5 has its CatchHandler @ 001628e2 */
  _ZN12clap_builder7builder3arg3Arg13visible_alias17h597518f0e50fabd9E(local_ac0,local_840);
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E(local_840,local_ac0,&DAT_0011a11c,0x44)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h8afc00c92188ded9E(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_578,&DAT_00118544,4);
  _ZN12clap_builder7builder3arg3Arg5short17he744ecbbf5f02b5fE(local_ac0,local_578,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E(local_578,local_ac0,&DAT_00118544,4);
                    /* try { // try from 00162377 to 0016238f has its CatchHandler @ 00162888 */
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E(local_ac0,local_578,&DAT_0011a160,0x35)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h8afc00c92188ded9E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_840,&DAT_0011a0af,7);
  _ZN12clap_builder7builder3arg3Arg5short17he744ecbbf5f02b5fE(local_ac0,local_840,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E(local_840,local_ac0,&DAT_0011a0af,7);
                    /* try { // try from 00162411 to 00162429 has its CatchHandler @ 00162873 */
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E(local_ac0,local_840,&DAT_0011a195,0x27)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h8afc00c92188ded9E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_578,"physicalNotFoundTimedOut",8);
  _ZN12clap_builder7builder3arg3Arg5short17he744ecbbf5f02b5fE(local_ac0,local_578,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E
            (local_578,local_ac0,"physicalNotFoundTimedOut",8);
  local_2b0 = &DAT_0011a0aa;
  local_2a8 = 5;
  local_2a0 = &DAT_0011a0af;
  local_298 = 7;
                    /* try { // try from 001624d3 to 00162505 has its CatchHandler @ 001628d0 */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h416ca1dd45e1b9cbE
            (local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E(local_578,local_ac0,&DAT_0011a1bc,0x29)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h8afc00c92188ded9E(local_ac0,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_840,&DAT_0011a1e5,0x15);
  _ZN12clap_builder7builder3arg3Arg5short17he744ecbbf5f02b5fE(local_ac0,local_840,0x65);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E(local_840,local_ac0,&DAT_0011a1e5,0x15)
  ;
                    /* try { // try from 00162587 to 0016259f has its CatchHandler @ 0016285e */
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E(local_ac0,local_840,&DAT_0011a1fa,0x73)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h8afc00c92188ded9E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_578,&DAT_0011a26d,0x14);
  _ZN12clap_builder7builder3arg3Arg5short17he744ecbbf5f02b5fE(local_ac0,local_578,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E(local_578,local_ac0,&DAT_0011a26d,0x14)
  ;
                    /* try { // try from 00162621 to 00162639 has its CatchHandler @ 00162849 */
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E(local_ac0,local_578,&DAT_0011a281,0x86)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h8afc00c92188ded9E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_840,&DAT_0011a307,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E(local_ac0,local_840,&DAT_0011a307,0xb);
                    /* try { // try from 001626a3 to 001626e2 has its CatchHandler @ 00162906 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h36652fb51b007f48E(local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1091437068a8dc7eE(local_ac0,local_840);
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E
            (&local_2b0,local_ac0,&DAT_0011a315,0x27);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_578,&DAT_0011a33c,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17hf9247904d0c5a845E(local_ac0,local_578,&DAT_0011a33c,0xd);
                    /* try { // try from 00162737 to 00162776 has its CatchHandler @ 001628f4 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h36652fb51b007f48E(local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1091437068a8dc7eE(local_ac0,local_578);
  _ZN12clap_builder7builder3arg3Arg4help17habd2b4d5dc8fd694E
            (&local_2b0,local_ac0,&DAT_0011a349,0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hdf316cce76806a0bE(local_840,&DAT_0011a0b6,5);
  _ZN12clap_builder7builder3arg3Arg6action17h8afc00c92188ded9E(local_ac0,local_840,1);
  (*(code *)PTR_memcpy_001f3148)(local_840,local_ac0,0x278);
  local_5c8 = local_848 | 1;
  local_5c4 = local_844;
                    /* try { // try from 001627fd to 0016281b has its CatchHandler @ 001628be */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1091437068a8dc7eE(local_ac0,local_840);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf6aa3d24fb040055E(local_840,local_ac0);
  _ZN12clap_builder7builder7command7Command3arg17h9c566b4dd2ff9d4cE(param_1,local_578,local_840);
  return param_1;
}