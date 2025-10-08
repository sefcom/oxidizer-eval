undefined8 _ZN7uu_head6uu_app17hf575c326a0d0e85dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_ab8 [632];
  uint local_840;
  undefined4 local_83c;
  char *local_838;
  undefined8 local_830;
  char *local_828;
  undefined8 local_820;
  uint local_5c0;
  undefined4 local_5bc;
  undefined local_5b8 [700];
  ulong local_2fc;
  undefined4 local_2f4;
  undefined local_2f0 [632];
  uint local_78;
  undefined4 local_74;
  ulong local_34;
  undefined4 local_2c;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fe6b0)();
  _ZN12clap_builder7builder7command7Command3new17h1047f487047397bdE(local_5b8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h0fd0861a6e08fac5E(local_2f0,local_5b8);
  _ZN12clap_builder7builder7command7Command5about17h6924745dfae50584E(local_5b8,local_2f0);
                    /* try { // try from 0016667f to 00166693 has its CatchHandler @ 00166cad */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001fe8b8)
            (auStack_ab8,"{} [FLAG]... [FILE]...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17habfb21397b00b097E
            (local_2f0,local_5b8,auStack_ab8);
  (*(code *)PTR_memcpy_001fe660)(local_5b8,local_2f0,700);
  local_2fc = local_34 | 0x8000000080;
  local_2f4 = local_2c;
  _ZN12clap_builder7builder3arg3Arg3new17h48624643ca4d9bceE(local_2f0,"BYTES",5);
  _ZN12clap_builder7builder3arg3Arg5short17hda0aeb282315bcb6E(auStack_ab8,local_2f0,99);
  _ZN12clap_builder7builder3arg3Arg4long17h39b7b2513578f6afE(local_2f0,auStack_ab8,"bytes",5);
                    /* try { // try from 0016673e to 001667ab has its CatchHandler @ 00166d07 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hc8f8d32efc38a834E(auStack_ab8,local_2f0);
  _ZN12clap_builder7builder3arg3Arg4help17hcbf5a373f041def8E
            (local_2f0,auStack_ab8,
             "print the first NUM bytes of each file;\nwith the leading \'-\', print all but the last\nNUM bytes of each file"
             ,0x6b);
  local_838 = "BYTES";
  local_830 = 5;
  local_828 = "LINES";
  local_820 = 5;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hc7ea4b778ce83afeE
            (auStack_ab8,local_2f0,&local_838);
  (*(code *)PTR_memcpy_001fe660)(&local_838,auStack_ab8,0x278);
  local_5c0 = local_840 | 0x20;
  local_5bc = local_83c;
  _ZN12clap_builder7builder7command7Command3arg17h3fb2fb45cd0382a8E(local_2f0,local_5b8,&local_838);
  _ZN12clap_builder7builder3arg3Arg3new17h48624643ca4d9bceE(local_5b8,"LINES",5);
  _ZN12clap_builder7builder3arg3Arg5short17hda0aeb282315bcb6E(auStack_ab8,local_5b8,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h39b7b2513578f6afE(local_5b8,auStack_ab8,"lines",5);
                    /* try { // try from 0016684d to 001668b3 has its CatchHandler @ 00166cf5 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hc8f8d32efc38a834E(auStack_ab8,local_5b8);
  _ZN12clap_builder7builder3arg3Arg4help17hcbf5a373f041def8E
            (local_5b8,auStack_ab8,
             "print the first NUM lines instead of the first 10;\nwith the leading \'-\', print all but the last\nNUM lines of each file"
             ,0x76);
  local_838 = "LINES";
  local_830 = 5;
  local_828 = "BYTES";
  local_820 = 5;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hc7ea4b778ce83afeE
            (auStack_ab8,local_5b8,&local_838);
  (*(code *)PTR_memcpy_001fe660)(&local_838,auStack_ab8,0x278);
  local_5c0 = local_840 | 0x20;
  local_5bc = local_83c;
  _ZN12clap_builder7builder7command7Command3arg17h3fb2fb45cd0382a8E(local_5b8,local_2f0,&local_838);
  _ZN12clap_builder7builder3arg3Arg3new17h48624643ca4d9bceE(local_2f0,"QUIET",5);
  _ZN12clap_builder7builder3arg3Arg5short17hda0aeb282315bcb6E(auStack_ab8,local_2f0,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h39b7b2513578f6afE(local_2f0,auStack_ab8,"quiet",5);
                    /* try { // try from 00166955 to 001669c2 has its CatchHandler @ 00166ce3 */
  _ZN12clap_builder7builder3arg3Arg13visible_alias17h65b8a385453d17ddE(auStack_ab8,local_2f0);
  _ZN12clap_builder7builder3arg3Arg4help17hcbf5a373f041def8E
            (local_2f0,auStack_ab8,"never print headers giving file names",0x25);
  local_838 = "VERBOSE";
  local_830 = 7;
  local_828 = "QUIET";
  local_820 = 5;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hc7ea4b778ce83afeE
            (auStack_ab8,local_2f0,&local_838);
  _ZN12clap_builder7builder3arg3Arg6action17h4976dbc225bc84e4E(&local_838,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h3fb2fb45cd0382a8E(local_2f0,local_5b8,&local_838);
  _ZN12clap_builder7builder3arg3Arg3new17h48624643ca4d9bceE(local_5b8,"VERBOSE",7);
  _ZN12clap_builder7builder3arg3Arg5short17hda0aeb282315bcb6E(auStack_ab8,local_5b8,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h39b7b2513578f6afE(local_5b8,auStack_ab8,"verbose",7);
                    /* try { // try from 00166a44 to 00166a9a has its CatchHandler @ 00166cd1 */
  _ZN12clap_builder7builder3arg3Arg4help17hcbf5a373f041def8E
            (auStack_ab8,local_5b8,"always print headers giving file names",0x26);
  local_838 = "QUIET";
  local_830 = 5;
  local_828 = "VERBOSE";
  local_820 = 7;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hc7ea4b778ce83afeE
            (local_5b8,auStack_ab8,&local_838);
  _ZN12clap_builder7builder3arg3Arg6action17h4976dbc225bc84e4E(auStack_ab8,local_5b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h3fb2fb45cd0382a8E(local_5b8,local_2f0,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h48624643ca4d9bceE(local_2f0,"-PRESUME-INPUT-PIPE",0x13);
  _ZN12clap_builder7builder3arg3Arg4long17h39b7b2513578f6afE
            (auStack_ab8,local_2f0,"presume-input-pipe",0x12);
                    /* try { // try from 00166b01 to 00166b10 has its CatchHandler @ 00166c9b */
  _ZN12clap_builder7builder3arg3Arg5alias17h655a8802d96abcd9E(local_2f0,auStack_ab8);
  (*(code *)PTR_memcpy_001fe660)(auStack_ab8,local_2f0,0x278);
  local_840 = local_78 | 4;
  local_83c = local_74;
  _ZN12clap_builder7builder3arg3Arg6action17h4976dbc225bc84e4E(&local_838,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h3fb2fb45cd0382a8E(local_2f0,local_5b8,&local_838);
  _ZN12clap_builder7builder3arg3Arg3new17h48624643ca4d9bceE(local_5b8,&DAT_00118e94,4);
  _ZN12clap_builder7builder3arg3Arg5short17hda0aeb282315bcb6E(auStack_ab8,local_5b8,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h39b7b2513578f6afE
            (local_5b8,auStack_ab8,"zero-terminated",0xf);
                    /* try { // try from 00166bc7 to 00166bed has its CatchHandler @ 00166cbf */
  _ZN12clap_builder7builder3arg3Arg4help17hcbf5a373f041def8E
            (auStack_ab8,local_5b8,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hd5c60e758e699a8dE(local_5b8,auStack_ab8);
  _ZN12clap_builder7builder3arg3Arg6action17h4976dbc225bc84e4E(auStack_ab8,local_5b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h3fb2fb45cd0382a8E(local_5b8,local_2f0,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h48624643ca4d9bceE(local_2f0,&DAT_00118eec,4);
  _ZN12clap_builder7builder3arg3Arg6action17h4976dbc225bc84e4E(auStack_ab8,local_2f0,1);
                    /* try { // try from 00166c4d to 00166c5c has its CatchHandler @ 00166c89 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h953f21bc881e7e35E(local_2f0,auStack_ab8);
  _ZN12clap_builder7builder7command7Command3arg17h3fb2fb45cd0382a8E(param_1,local_5b8,local_2f0);
  return param_1;
}