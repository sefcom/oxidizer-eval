undefined8 _ZN7uu_shuf6uu_app17h710a705446bc3bb0E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [592];
  undefined local_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h0bf11a27185a90baE(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command5about17hd597994d8cea349dE
            (local_530,local_7f8,&DAT_0011f141,0xa5);
  _ZN12clap_builder7builder7command7Command7version17habf91e8854255576E
            (local_7f8,local_530,&DAT_0011f1e6,6);
                    /* try { // try from 001c1013 to 001c1027 has its CatchHandler @ 001c15da */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,&DAT_0011f0f9,0x48);
  _ZN12clap_builder7builder7command7Command14override_usage17h86fbf536ab62a2a8E
            (local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0023bd60)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001c1081 to 001c1134 has its CatchHandler @ 001c166d */
  _ZN12clap_builder7builder3arg3Arg3new17hb55e6547f701c544E
            (local_530,"echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4)
  ;
  _ZN12clap_builder7builder3arg3Arg5short17hc5895820c9001562E(auStack_a48,local_530,0x65);
  _ZN12clap_builder7builder3arg3Arg4long17h4f4cbd0b31a73627E
            (local_530,auStack_a48,
             "echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4);
  _ZN12clap_builder7builder3arg3Arg4help17h60914f8564d33ae9E
            (auStack_a48,local_530,&DAT_0011f1ec,0x1f);
  _ZN12clap_builder7builder3arg3Arg6action17haa75458d1b56b731E(local_530,auStack_a48,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5143f80bad1c105aE
            (auStack_a48,local_530,
             "echoERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6545cdf5d75a2560E
            (local_268,auStack_a48,"input-range",0xb);
  _ZN12clap_builder7builder7command7Command3arg17h1b9d832713c89b77E(local_530,local_7f8,local_268);
                    /* try { // try from 001c1152 to 001c11f2 has its CatchHandler @ 001c165b */
  _ZN12clap_builder7builder3arg3Arg3new17hb55e6547f701c544E(local_7f8,"input-range",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hc5895820c9001562E(auStack_a48,local_7f8,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h4f4cbd0b31a73627E
            (local_7f8,auStack_a48,"input-range",0xb);
  _ZN12clap_builder7builder3arg3Arg10value_name17h07ba2a10b48e0628E
            (auStack_a48,local_7f8,&DAT_0011f20b,5);
  _ZN12clap_builder7builder3arg3Arg4help17h60914f8564d33ae9E
            (local_7f8,auStack_a48,&DAT_0011f210,0x30);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h6545cdf5d75a2560E
            (auStack_a48,local_7f8,"file-or-args",0xc);
  _ZN12clap_builder7builder7command7Command3arg17h1b9d832713c89b77E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001c120b to 001c12a2 has its CatchHandler @ 001c1625 */
  _ZN12clap_builder7builder3arg3Arg3new17hb55e6547f701c544E(local_530,"head-count",10);
  _ZN12clap_builder7builder3arg3Arg5short17hc5895820c9001562E(auStack_a48,local_530,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h4f4cbd0b31a73627E(local_530,auStack_a48,"head-count",10);
  _ZN12clap_builder7builder3arg3Arg10value_name17h07ba2a10b48e0628E
            (auStack_a48,local_530,&DAT_0011f240,5);
  _ZN12clap_builder7builder3arg3Arg6action17haa75458d1b56b731E(local_530,auStack_a48,1);
  _ZN12clap_builder7builder3arg3Arg4help17h60914f8564d33ae9E
            (auStack_a48,local_530,&DAT_0011f245,0x1a);
  _ZN12clap_builder7builder7command7Command3arg17h1b9d832713c89b77E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 001c12bb to 001c1354 has its CatchHandler @ 001c1649 */
  _ZN12clap_builder7builder3arg3Arg3new17hb55e6547f701c544E(local_7f8,"output",6);
  _ZN12clap_builder7builder3arg3Arg5short17hc5895820c9001562E(auStack_a48,local_7f8,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17h4f4cbd0b31a73627E(local_7f8,auStack_a48,"output",6);
  _ZN12clap_builder7builder3arg3Arg10value_name17h07ba2a10b48e0628E
            (auStack_a48,local_7f8,&DAT_00115f8c,4);
  _ZN12clap_builder7builder3arg3Arg4help17h60914f8564d33ae9E
            (local_7f8,auStack_a48,&DAT_0011f25f,0x2f);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h546644f1bcd1fd0eE(auStack_a48,local_7f8,3);
  _ZN12clap_builder7builder7command7Command3arg17h1b9d832713c89b77E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001c136d to 001c13ee has its CatchHandler @ 001c1637 */
  _ZN12clap_builder7builder3arg3Arg3new17hb55e6547f701c544E(local_530,"random-source",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h4f4cbd0b31a73627E
            (auStack_a48,local_530,"random-source",0xd);
  _ZN12clap_builder7builder3arg3Arg10value_name17h07ba2a10b48e0628E
            (local_530,auStack_a48,&DAT_00115f8c,4);
  _ZN12clap_builder7builder3arg3Arg4help17h60914f8564d33ae9E
            (auStack_a48,local_530,&DAT_0011f28e,0x1a);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h546644f1bcd1fd0eE(local_268,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h1b9d832713c89b77E(local_530,local_7f8,local_268);
                    /* try { // try from 001c140c to 001c14a3 has its CatchHandler @ 001c1613 */
  _ZN12clap_builder7builder3arg3Arg3new17hb55e6547f701c544E(local_7f8,"repeat",6);
  _ZN12clap_builder7builder3arg3Arg5short17hc5895820c9001562E(auStack_a48,local_7f8,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h4f4cbd0b31a73627E(local_7f8,auStack_a48,"repeat",6);
  _ZN12clap_builder7builder3arg3Arg4help17h60914f8564d33ae9E
            (auStack_a48,local_7f8,&DAT_0011f2a8,0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17haa75458d1b56b731E(local_7f8,auStack_a48,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5143f80bad1c105aE
            (auStack_a48,local_7f8,"repeat",6);
  _ZN12clap_builder7builder7command7Command3arg17h1b9d832713c89b77E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001c14bc to 001c1553 has its CatchHandler @ 001c1601 */
  _ZN12clap_builder7builder3arg3Arg3new17hb55e6547f701c544E(local_530,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hc5895820c9001562E(auStack_a48,local_530,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h4f4cbd0b31a73627E
            (local_530,auStack_a48,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h60914f8564d33ae9E
            (auStack_a48,local_530,&DAT_0011f2c4,0x22);
  _ZN12clap_builder7builder3arg3Arg6action17haa75458d1b56b731E(local_530,auStack_a48,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5143f80bad1c105aE
            (auStack_a48,local_530,"zero-terminated",0xf);
  _ZN12clap_builder7builder7command7Command3arg17h1b9d832713c89b77E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 001c156c to 001c15b1 has its CatchHandler @ 001c15ef */
  _ZN12clap_builder7builder3arg3Arg3new17hb55e6547f701c544E(local_7f8,"file-or-args",0xc);
  _ZN12clap_builder7builder3arg3Arg6action17haa75458d1b56b731E(auStack_a48,local_7f8,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h546644f1bcd1fd0eE(local_7f8,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h1b9d832713c89b77E(param_1,local_530,local_7f8);
  return param_1;
}