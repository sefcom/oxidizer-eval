undefined8 _ZN8uu_chcon6uu_app17h727a1888320f29f0E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ad8 [3];
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
  undefined *local_290;
  undefined8 local_288;
  char *local_280;
  undefined8 local_278;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f6f18)();
  _ZN12clap_builder7builder7command7Command3new17h4d2b11354696c581E(local_840,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h7a468b25787f4d61E(local_578,local_840);
  _ZN12clap_builder7builder7command7Command5about17h06e63e27fa9a7df6E(local_840,local_578);
                    /* try { // try from 00163570 to 00163586 has its CatchHandler @ 001641c7 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f7098)
            (local_ac0,
             "{} [OPTION]... CONTEXT FILE...\n{} [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t TYPE] FILE...\n{} [OPTION]... --reference=RFILE FILE..."
             ,0x87);
  _ZN12clap_builder7builder7command7Command14override_usage17h87b95775a552981fE
            (local_578,local_840,local_ac0);
  (*(code *)PTR_memcpy_001f6e50)(local_840,local_578,700);
  local_584 = local_2bc | 0x8008800080088;
  local_57c = local_2b4;
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_578,&DAT_00119344,4);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_ac0,local_578,&DAT_00119344,4);
                    /* try { // try from 00163619 to 00163634 has its CatchHandler @ 001641b2 */
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_578,local_ac0,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(local_ac0,local_578,5);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_840,"dereference",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_ac0,local_840,"dereference",0xb);
                    /* try { // try from 0016369e to 001636d7 has its CatchHandler @ 00164206 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h88d3105140cc15d1E
            (local_840,local_ac0,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_ac0,local_840,
             "Affect the referent of each symbolic link (this is the default), rather than the symbolic link itself."
             ,0x66);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_578,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_578,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE
            (local_578,local_ac0,"no-dereference",0xe);
                    /* try { // try from 00163759 to 00163771 has its CatchHandler @ 0016419d */
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_ac0,local_578,"Affect symbolic links instead of any referenced file.",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_840,"preserve-root",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE
            (local_ac0,local_840,"preserve-root",0xd);
                    /* try { // try from 001637db to 00163814 has its CatchHandler @ 001641f1 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h88d3105140cc15d1E
            (local_840,local_ac0,"no-preserve-root",0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_ac0,local_840,"Fail to operate recursively on \'/\'.",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_578,"no-preserve-root",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE
            (local_ac0,local_578,"no-preserve-root",0x10);
                    /* try { // try from 0016387e to 00163899 has its CatchHandler @ 00164188 */
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_578,local_ac0,"Do not treat \'/\' specially (the default).",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(local_ac0,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_840,"reference",9);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_ac0,local_840,"reference",9);
                    /* try { // try from 00163903 to 001639f6 has its CatchHandler @ 00164299 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hdede60c7b57d89dbE(local_840,local_ac0,"RFILE",5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h7e35c6c438b4ad6bE(local_ac0,local_840,3);
  local_2b0 = "userSomedumb\x1b[5m\x1b[9m <= trueTERMmainFILEchar\x01";
  local_2a8 = 4;
  local_2a0 = "role) = Zero\x1b[7mBool";
  local_298 = 4;
  local_290 = &DAT_00119360;
  local_288 = 4;
  local_280 = "range";
  local_278 = 5;
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17hdaf60db3b13205d0E
            (local_840,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_ac0,local_840,
             "Use security context of RFILE, rather than specifying a CONTEXT value.",0x46);
  local_ad8[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h015a0df7468ee792E
            (&local_2b0,local_ac0,local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_840,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_578,&DAT_001192f8,4);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_578,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_578,local_ac0,&DAT_001192f8,4);
                    /* try { // try from 00163a63 to 00163ac5 has its CatchHandler @ 00164287 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hdede60c7b57d89dbE
            (local_ac0,local_578,&DAT_00119354,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h7e35c6c438b4ad6bE(local_578,local_ac0,9);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_ac0,local_578,"Set user USER in the target security context.",0x2d);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h015a0df7468ee792E
            (&local_2b0,local_ac0,local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_840,&DAT_001192a0,4);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_840,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_840,local_ac0,&DAT_001192a0,4);
                    /* try { // try from 00163b32 to 00163b7d has its CatchHandler @ 00164275 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hdede60c7b57d89dbE
            (local_ac0,local_840,&DAT_0011932c,4);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_840,local_ac0,"Set role ROLE in the target security context.",0x2d);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h015a0df7468ee792E(local_ac0,local_840,local_ad8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_578,&DAT_00119360,4);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_578,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_578,local_ac0,&DAT_00119360,4);
                    /* try { // try from 00163be7 to 00163c32 has its CatchHandler @ 00164263 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hdede60c7b57d89dbE
            (local_ac0,local_578,&DAT_00119368,4);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_578,local_ac0,"Set type TYPE in the target security context.",0x2d);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h015a0df7468ee792E(local_ac0,local_578,local_ad8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_840,"range",5);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_840,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_840,local_ac0,"range",5);
                    /* try { // try from 00163c9c to 00163ce7 has its CatchHandler @ 00164251 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hdede60c7b57d89dbE(local_ac0,local_840,"RANGE",5);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_840,local_ac0,"Set range RANGE in the target security context.",0x2f);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h015a0df7468ee792E(local_ac0,local_840,local_ad8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_578,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_578,0x52);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_578,local_ac0,"recursive",9);
                    /* try { // try from 00163d51 to 00163d69 has its CatchHandler @ 00164173 */
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_ac0,local_578,"Operate on files and directories recursively.",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E
            (local_840,"follow-arg-dir-sym-link",0x17);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_840,0x48);
                    /* try { // try from 00163dd0 to 00163e4d has its CatchHandler @ 0016423f */
  _ZN12clap_builder7builder3arg3Arg8requires17h97f6ac681d65abafE(local_840,local_ac0);
  local_2b0 = "follow-dir-sym-links";
  local_2a8 = 0x14;
  local_2a0 = "no-follow-sym-links";
  local_298 = 0x13;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h8db72c3cce94688dE
            (local_ac0,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_840,local_ac0,
             "If a command line argument is a symbolic link to a directory, traverse it. Only valid when -R is specified."
             ,0x6b);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_578,"follow-dir-sym-links",0x14);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_578,0x4c);
                    /* try { // try from 00163eb4 to 00163f23 has its CatchHandler @ 0016422d */
  _ZN12clap_builder7builder3arg3Arg8requires17h97f6ac681d65abafE(local_578,local_ac0);
  local_2b0 = "follow-arg-dir-sym-link";
  local_2a8 = 0x17;
  local_2a0 = "no-follow-sym-links";
  local_298 = 0x13;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h8db72c3cce94688dE
            (local_ac0,local_578,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_578,local_ac0,
             "Traverse every symbolic link to a directory encountered. Only valid when -R is specified."
             ,0x59);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(local_ac0,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_578,local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_840,"no-follow-sym-links",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_840,0x50);
                    /* try { // try from 00163f87 to 00163ff6 has its CatchHandler @ 0016421b */
  _ZN12clap_builder7builder3arg3Arg8requires17h97f6ac681d65abafE(local_840,local_ac0);
  local_2b0 = "follow-arg-dir-sym-link";
  local_2a8 = 0x17;
  local_2a0 = "follow-dir-sym-links";
  local_298 = 0x14;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h8db72c3cce94688dE
            (local_ac0,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_840,local_ac0,
             "Do not traverse any symbolic links (default). Only valid when -R is specified.",0x4e);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(local_ac0,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_578,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17h29bb6cc97c4741d9E(local_ac0,local_578,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17ha7c235b447fa29cfE(local_578,local_ac0,"verbose",7);
                    /* try { // try from 00164078 to 00164090 has its CatchHandler @ 0016415e */
  _ZN12clap_builder7builder3arg3Arg4help17h573259a5cdbcd234E
            (local_ac0,local_578,"Output a diagnostic for every file processed.",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(local_578,local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf273b8c0a0d2821E(local_840,&DAT_0011931c,4);
  _ZN12clap_builder7builder3arg3Arg6action17h445940f1731e1f95E(local_ac0,local_840,1);
                    /* try { // try from 001640f4 to 00164130 has its CatchHandler @ 001641dc */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h7e35c6c438b4ad6bE(local_840,local_ac0,3);
  _ZN12clap_builder7builder3arg3Arg8num_args17h268453c0b9c8aa6eE(local_ac0,local_840);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h015a0df7468ee792E(local_840,local_ac0,local_ad8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hd9b7a629f9ec12e2E(param_1,local_578,local_840);
  return param_1;
}