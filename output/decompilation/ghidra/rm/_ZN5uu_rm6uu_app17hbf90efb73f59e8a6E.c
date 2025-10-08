undefined8 _ZN5uu_rm6uu_app17hbf90efb73f59e8a6E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ac0 [632];
  uint local_848;
  undefined4 local_844;
  ulong local_804;
  undefined4 local_7fc;
  undefined local_7f8 [632];
  uint local_580;
  undefined4 local_57c;
  undefined local_578 [632];
  uint local_300;
  undefined4 local_2fc;
  ulong local_2bc;
  undefined4 local_2b4;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
  _ZN12clap_builder7builder7command7Command3new17hbca3ce061ed456d5E(local_ac0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h1ea3b78b22168264E(local_578,local_ac0);
  _ZN12clap_builder7builder7command7Command5about17h9ca2956cc22ebd03E(local_ac0,local_578);
                    /* try { // try from 0015bb9a to 0015bbb3 has its CatchHandler @ 0015c4a7 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f1068)(local_7f8,&DAT_0011a125,0x16)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h65a27385442ac47fE
            (local_578,local_ac0,local_7f8);
  (*(code *)PTR_memcpy_001f0dc8)(local_ac0,local_578,700);
  local_804 = local_2bc | 0x8800000088;
  local_7fc = local_2b4;
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_578,&DAT_0011a098,5);
  _ZN12clap_builder7builder3arg3Arg5short17h78641cdcffff5928E(local_7f8,local_578,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE(local_578,local_7f8,&DAT_0011a098,5);
                    /* try { // try from 0015bc5e to 0015bc79 has its CatchHandler @ 0015c498 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_7f8,local_578,&DAT_0011a13b,0x34)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(&local_2b0,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_578,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_ac0,&DAT_0011a0b9,6);
  _ZN12clap_builder7builder3arg3Arg5short17h78641cdcffff5928E(local_7f8,local_ac0,0x69);
                    /* try { // try from 0015bce0 to 0015bd48 has its CatchHandler @ 0015c4e9 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_ac0,local_7f8,&DAT_0011a16f,0x1b)
  ;
  local_2b0 = &DAT_0011a0bf;
  local_2a8 = 0xb;
  local_2a0 = &DAT_0011a08d;
  local_298 = 0xb;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h22ab1893dc6423bdE
            (local_7f8,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(&local_2b0,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_578,&DAT_0011a0bf,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h78641cdcffff5928E(local_7f8,local_578,0x49);
                    /* try { // try from 0015bdb2 to 0015be12 has its CatchHandler @ 0015c4da */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_578,local_7f8,&DAT_0011a18a,0xa1)
  ;
  local_2b0 = &DAT_0011a0b9;
  local_2a8 = 6;
  local_2a0 = &DAT_0011a08d;
  local_298 = 0xb;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h22ab1893dc6423bdE
            (local_7f8,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(&local_2b0,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_578,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_ac0,&DAT_0011a08d,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE(local_7f8,local_ac0,&DAT_0011a08d,0xb);
                    /* try { // try from 0015be7c to 0015bea6 has its CatchHandler @ 0015c4fb */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_ac0,local_7f8,&DAT_0011a22b,0x58)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa87db88236180f7E(local_7f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg8num_args17h4b3ed2f2cfb334dfE(local_ac0,local_7f8,0,1);
  (*(code *)PTR_memcpy_001f0dc8)(local_7f8,local_ac0,0x278);
  local_580 = local_848 | 0x80;
  local_57c = local_844;
                    /* try { // try from 0015befd to 0015bf4b has its CatchHandler @ 0015c4fb */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17hba2383e2563ce42fE(local_ac0,local_7f8);
  local_2b0 = &DAT_0011a0b9;
  local_2a8 = 6;
  local_2a0 = &DAT_0011a0bf;
  local_298 = 0xb;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h22ab1893dc6423bdE
            (local_7f8,local_ac0,&local_2b0);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_ac0,local_578,local_7f8);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_578,&DAT_0011a09d,0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE(local_7f8,local_578,&DAT_0011a09d,0xf);
                    /* try { // try from 0015bfa0 to 0015bfbb has its CatchHandler @ 0015c489 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_578,local_7f8,&DAT_0011a289,0xa3)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(local_7f8,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_578,local_ac0,local_7f8);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_ac0,"no-preserve-root",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE
            (local_7f8,local_ac0,"no-preserve-root",0x10);
                    /* try { // try from 0015c025 to 0015c03d has its CatchHandler @ 0015c474 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_ac0,local_7f8,&DAT_0011a32c,0x1a)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(local_7f8,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_ac0,local_578,local_7f8);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_578,&DAT_0011a0ac,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE(local_7f8,local_578,&DAT_0011a0ac,0xd);
                    /* try { // try from 0015c0a7 to 0015c0c2 has its CatchHandler @ 0015c462 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_578,local_7f8,&DAT_0011a346,0x1b)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(local_7f8,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_578,local_ac0,local_7f8);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_ac0,&DAT_0011a0ca,9);
  _ZN12clap_builder7builder3arg3Arg5short17h78641cdcffff5928E(local_7f8,local_ac0,0x72);
                    /* try { // try from 0015c126 to 0015c16c has its CatchHandler @ 0015c4c8 */
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17h720b4d9aeed4ef99E(local_ac0,local_7f8);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE(local_7f8,local_ac0,&DAT_0011a0ca,9);
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_ac0,local_7f8,&DAT_0011a361,0x31)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(local_7f8,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_ac0,local_578,local_7f8);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_578,&DAT_0011a08a,3);
  _ZN12clap_builder7builder3arg3Arg5short17h78641cdcffff5928E(local_7f8,local_578,100);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE(local_578,local_7f8,&DAT_0011a08a,3);
                    /* try { // try from 0015c1ee to 0015c209 has its CatchHandler @ 0015c450 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_7f8,local_578,&DAT_0011a392,0x18)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(&local_2b0,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_578,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_ac0,&DAT_0011a0d3,7);
  _ZN12clap_builder7builder3arg3Arg5short17h78641cdcffff5928E(local_7f8,local_ac0,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE(local_ac0,local_7f8,&DAT_0011a0d3,7);
                    /* try { // try from 0015c288 to 0015c2a3 has its CatchHandler @ 0015c43b */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2f4fbd60549b49E(local_7f8,local_ac0,&DAT_0011a3aa,0x1a)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(&local_2b0,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_578,&DAT_0011a0da,0x12);
  _ZN12clap_builder7builder3arg3Arg4long17h129d89526844dfbcE(local_7f8,local_578,&DAT_0011a3c4,0x11)
  ;
                    /* try { // try from 0015c311 to 0015c320 has its CatchHandler @ 0015c429 */
  _ZN12clap_builder7builder3arg3Arg5alias17hda9a93e6fca109a6E(local_578,local_7f8);
  (*(code *)PTR_memcpy_001f0dc8)(local_7f8,local_578,0x278);
  local_580 = local_300 | 4;
  local_57c = local_2fc;
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(&local_2b0,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(local_578,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17ha01614abf7ee4185E(local_ac0,&DAT_0011a0ec,5);
  _ZN12clap_builder7builder3arg3Arg6action17h85eb9950b74f585bE(local_7f8,local_ac0,1);
  local_2b0 = (undefined *)0x2;
                    /* try { // try from 0015c3c8 to 0015c3fe has its CatchHandler @ 0015c4b6 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h2941a6fcbfa50731E
            (local_ac0,local_7f8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg8num_args17h06df245c713ce67dE(local_7f8,local_ac0);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h883341e5b4207766E(local_ac0,local_7f8);
  _ZN12clap_builder7builder7command7Command3arg17h88e40eca71908716E(param_1,local_578,local_ac0);
  return param_1;
}