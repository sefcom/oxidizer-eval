undefined8 _ZN9uu_csplit6uu_app17h86eb726b6073e125E(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [584];
  uint local_540;
  undefined4 local_53c;
  undefined local_538 [584];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar2 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hb6d046c22d0ef603E(local_538,uVar2);
  _ZN12clap_builder7builder7command7Command7version17hbce6c3f8c7c6cd3aE
            (local_a50,local_538,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17hf404c7feac6198e2E
            (local_538,local_a50,"Split a file into sections determined by context lines",0x36);
                    /* try { // try from 002bd542 to 002bd55b has its CatchHandler @ 002bdb98 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_788,"{} [OPTION]... FILE PATTERN...",0x1e);
  _ZN12clap_builder7builder7command7Command14override_usage17h8d1bbf79058ebe18E
            (local_a50,local_538,local_788);
  (*(code *)PTR_memcpy_0041f850)(local_538,local_a50,700);
  local_27c = local_794 | 0x8800000088;
  local_274 = local_78c;
                    /* try { // try from 002bd5b7 to 002bd639 has its CatchHandler @ 002bdc1f */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_a50,"suffix-format",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17h4278cc11f1512de5E(local_788,local_a50,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h5b9f19b5fc5c0111E
            (local_a50,local_788,"suffix-format",0xd);
  _ZN12clap_builder7builder3arg3Arg10value_name17h433bed507f4a0ecaE(local_788,local_a50,"FORMAT");
  _ZN12clap_builder7builder3arg3Arg4help17h453b8918274ccd7fE
            (local_270,local_788,"use sprintf FORMAT instead of %02d",0x22);
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_a50,local_538,local_270);
                    /* try { // try from 002bd654 to 002bd6e2 has its CatchHandler @ 002bdc10 */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_538,"prefix",6);
  _ZN12clap_builder7builder3arg3Arg5short17h4278cc11f1512de5E(local_788,local_538,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h5b9f19b5fc5c0111E(local_538,local_788,"prefix",6);
  _ZN12clap_builder7builder3arg3Arg10value_name17h433bed507f4a0ecaE(local_788,local_538,"PREFIX");
  _ZN12clap_builder7builder3arg3Arg4help17h453b8918274ccd7fE
            (local_270,local_788,"use PREFIX instead of \'xx\'",0x1a);
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_538,local_a50,local_270);
                    /* try { // try from 002bd6fd to 002bd763 has its CatchHandler @ 002bdbdd */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_a50,"keep-files",10);
  _ZN12clap_builder7builder3arg3Arg5short17h4278cc11f1512de5E(local_788,local_a50,0x6b);
  _ZN12clap_builder7builder3arg3Arg4long17h5b9f19b5fc5c0111E(local_a50,local_788,"keep-files",10);
  _ZN12clap_builder7builder3arg3Arg4help17h453b8918274ccd7fE
            (local_788,local_a50,"do not remove output files on errors",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17h9b4010247a2cfc2eE(local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_a50,local_538,local_270);
                    /* try { // try from 002bd796 to 002bd7f0 has its CatchHandler @ 002bdbce */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_538,&DAT_00165d60,0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h5b9f19b5fc5c0111E(local_788,local_538,&DAT_00165d60,0x10)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h453b8918274ccd7fE
            (local_538,local_788,"suppress the lines matching PATTERN",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17h9b4010247a2cfc2eE(local_788,local_538,2);
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_538,local_a50,local_788);
                    /* try { // try from 002bd823 to 002bd8a5 has its CatchHandler @ 002bdbfe */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_a50,"digits: ",6);
  _ZN12clap_builder7builder3arg3Arg5short17h4278cc11f1512de5E(local_788,local_a50,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h5b9f19b5fc5c0111E(local_a50,local_788,"digits: ",6);
  _ZN12clap_builder7builder3arg3Arg10value_name17h433bed507f4a0ecaE(local_788,local_a50,"DIGITS");
  _ZN12clap_builder7builder3arg3Arg4help17h453b8918274ccd7fE
            (local_270,local_788,"use specified number of digits instead of 2",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_a50,local_538,local_270);
                    /* try { // try from 002bd8c0 to 002bd953 has its CatchHandler @ 002bdbef */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_538,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg5short17h4278cc11f1512de5E(local_788,local_538,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h5b9f19b5fc5c0111E(local_538,local_788,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg13visible_alias17h1c77802993eed174E
            (local_788,local_538,"silent",6);
  _ZN12clap_builder7builder3arg3Arg4help17h453b8918274ccd7fE
            (local_538,local_788,"do not print counts of output file sizes",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17h9b4010247a2cfc2eE(local_788,local_538,2);
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_538,local_a50,local_788);
                    /* try { // try from 002bd986 to 002bd9ec has its CatchHandler @ 002bdbbc */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_a50,"elide-empty-files",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h4278cc11f1512de5E(local_788,local_a50,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h5b9f19b5fc5c0111E
            (local_a50,local_788,"elide-empty-files",0x11);
  _ZN12clap_builder7builder3arg3Arg4help17h453b8918274ccd7fE
            (local_788,local_a50,"remove empty output files",0x19);
  _ZN12clap_builder7builder3arg3Arg6action17h9b4010247a2cfc2eE(local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_a50,local_538,local_270);
                    /* try { // try from 002bda1f to 002bda37 has its CatchHandler @ 002bdbad */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_538,"filemode",4);
  (*(code *)PTR_memcpy_0041f850)(local_788,local_538,0x248);
  local_540 = local_2f0 | 5;
  local_53c = local_2ec;
                    /* try { // try from 002bda75 to 002bda89 has its CatchHandler @ 002bdbad */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h3e8455d3453ae831E(local_270,local_788,3);
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_538,local_a50,local_270);
                    /* try { // try from 002bdaa4 to 002bdab9 has its CatchHandler @ 002bdb83 */
  _ZN12clap_builder7builder3arg3Arg3new17h58dfbbb12e485797E(local_a50,"pattern",7);
  puVar1 = PTR_memcpy_0041f850;
  (*(code *)PTR_memcpy_0041f850)(local_788,local_a50,0x248);
  local_540 = local_808 | 4;
  local_53c = local_804;
  _ZN12clap_builder7builder3arg3Arg6action17h9b4010247a2cfc2eE(local_a50,local_788,1);
  (*(code *)puVar1)(local_788,local_a50,0x248);
  local_540 = local_808 | 1;
  local_53c = local_804;
  _ZN12clap_builder7builder7command7Command3arg17h37d599ab080beb55E(local_a50,local_538,local_788);
  _ZN12clap_builder7builder7command7Command10after_help17ha6aa7879de8ba777E
            (param_1,local_a50,
             "Output pieces of FILE separated by PATTERN(s) to files \'xx00\', \'xx01\', ..., and output byte counts of each piece to standard output."
             ,0x84);
  return param_1;
}