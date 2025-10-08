undefined8 _ZN9uu_csplit6uu_app17h42f8ce6b5616d423E(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined auStack_ab8 [632];
  uint local_840;
  undefined4 local_83c;
  undefined local_838 [632];
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_57c;
  undefined4 local_574;
  undefined local_570 [632];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_2b4;
  undefined4 local_2ac;
  undefined local_2a8 [640];
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_003711e8)();
  _ZN12clap_builder7builder7command7Command3new17h5a6ba2d3539a27ebE(local_570,uVar2);
  _ZN12clap_builder7builder7command7Command7version17hf5894aa04f40a972E(local_838,local_570);
  _ZN12clap_builder7builder7command7Command5about17h2dbfc5197ccfd120E(local_570,local_838);
                    /* try { // try from 00221ccf to 00221ce3 has its CatchHandler @ 002222fc */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00371358)
            (auStack_ab8,"{} [OPTION]... FILE PATTERN...",0x1e);
  _ZN12clap_builder7builder7command7Command14override_usage17h936a8d0018dd6f8aE
            (local_838,local_570,auStack_ab8);
  (*(code *)PTR_memcpy_00371038)(local_570,local_838,700);
  local_2b4 = local_57c | 0x8800000088;
  local_2ac = local_574;
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_838,"suffix-format",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17h5aad91a10d636568E(auStack_ab8,local_838,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h9e4de3590b8c1812E
            (local_838,auStack_ab8,"suffix-format",0xd);
                    /* try { // try from 00221d8a to 00221db7 has its CatchHandler @ 00222332 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hdcfc0949d8f230b8E(auStack_ab8,local_838,"FORMAT");
  _ZN12clap_builder7builder3arg3Arg4help17h4ee47e970b7a47e9E
            (local_2a8,auStack_ab8,"use sprintf FORMAT instead of %02d",0x22);
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_838,local_570,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_570,"prefix",6);
  _ZN12clap_builder7builder3arg3Arg5short17h5aad91a10d636568E(auStack_ab8,local_570,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h9e4de3590b8c1812E(local_570,auStack_ab8,"prefix",6);
                    /* try { // try from 00221e22 to 00221e4f has its CatchHandler @ 00222320 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hdcfc0949d8f230b8E(auStack_ab8,local_570,"PREFIX");
  _ZN12clap_builder7builder3arg3Arg4help17h4ee47e970b7a47e9E
            (local_2a8,auStack_ab8,"use PREFIX instead of \'xx\'",0x1a);
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_570,local_838,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_838,"keep-files",10);
  _ZN12clap_builder7builder3arg3Arg5short17h5aad91a10d636568E(auStack_ab8,local_838,0x6b);
  _ZN12clap_builder7builder3arg3Arg4long17h9e4de3590b8c1812E(local_838,auStack_ab8,"keep-files",10);
                    /* try { // try from 00221eba to 00221ed0 has its CatchHandler @ 002222ea */
  _ZN12clap_builder7builder3arg3Arg4help17h4ee47e970b7a47e9E
            (auStack_ab8,local_838,"do not remove output files on errors",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17hf8ec2a46c2017d05E(local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_838,local_570,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_570,&DAT_001531a0,0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h9e4de3590b8c1812E
            (auStack_ab8,local_570,&DAT_001531a0,0x10);
                    /* try { // try from 00221f36 to 00221f51 has its CatchHandler @ 002222d8 */
  _ZN12clap_builder7builder3arg3Arg4help17h4ee47e970b7a47e9E
            (local_570,auStack_ab8,"suppress the lines matching PATTERN",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17hf8ec2a46c2017d05E(auStack_ab8,local_570,2);
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_570,local_838,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_838,"digits",6);
  _ZN12clap_builder7builder3arg3Arg5short17h5aad91a10d636568E(auStack_ab8,local_838,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h9e4de3590b8c1812E(local_838,auStack_ab8,"digits",6);
                    /* try { // try from 00221fcf to 00221ffc has its CatchHandler @ 0022230e */
  _ZN12clap_builder7builder3arg3Arg10value_name17hdcfc0949d8f230b8E(auStack_ab8,local_838,"DIGITS");
  _ZN12clap_builder7builder3arg3Arg4help17h4ee47e970b7a47e9E
            (local_2a8,auStack_ab8,"use specified number of digits instead of 2",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_838,local_570,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_570,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg5short17h5aad91a10d636568E(auStack_ab8,local_570,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h9e4de3590b8c1812E(local_570,auStack_ab8,"quiet",5);
                    /* try { // try from 00222067 to 0022209d has its CatchHandler @ 00222344 */
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17hd2a084eafea17228E(auStack_ab8,local_570);
  _ZN12clap_builder7builder3arg3Arg13visible_alias17hfed137be98bf7791E(local_570,auStack_ab8);
  _ZN12clap_builder7builder3arg3Arg4help17h4ee47e970b7a47e9E
            (auStack_ab8,local_570,"do not print counts of output file sizes",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17hf8ec2a46c2017d05E(local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_570,local_838,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_838,"elide-empty-files",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h5aad91a10d636568E(auStack_ab8,local_838,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h9e4de3590b8c1812E
            (local_838,auStack_ab8,"elide-empty-files",0x11);
                    /* try { // try from 0022211b to 00222131 has its CatchHandler @ 002222c6 */
  _ZN12clap_builder7builder3arg3Arg4help17h4ee47e970b7a47e9E
            (auStack_ab8,local_838,"remove empty output files",0x19);
  _ZN12clap_builder7builder3arg3Arg6action17hf8ec2a46c2017d05E(local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_838,local_570,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_570,"filemode",4);
  (*(code *)PTR_memcpy_00371038)(auStack_ab8,local_570,0x278);
  local_840 = local_2f8 | 5;
  local_83c = local_2f4;
                    /* try { // try from 002221b1 to 002221c0 has its CatchHandler @ 002222b1 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5feeb2e351cda2f9E(local_2a8,auStack_ab8);
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_570,local_838,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h729e94e24d1ea6adE(local_838,"pattern",7);
  puVar1 = PTR_memcpy_00371038;
  (*(code *)PTR_memcpy_00371038)(auStack_ab8,local_838,0x278);
  local_840 = local_5c0 | 4;
  local_83c = local_5bc;
  _ZN12clap_builder7builder3arg3Arg6action17hf8ec2a46c2017d05E(local_838,auStack_ab8,1);
  (*(code *)puVar1)(auStack_ab8,local_838,0x278);
  local_840 = local_5c0 | 1;
  local_83c = local_5bc;
  _ZN12clap_builder7builder7command7Command3arg17h0f06af1b398bdcceE(local_838,local_570,auStack_ab8)
  ;
  _ZN12clap_builder7builder7command7Command10after_help17h604e4921132b5c6dE(param_1,local_838);
  return param_1;
}