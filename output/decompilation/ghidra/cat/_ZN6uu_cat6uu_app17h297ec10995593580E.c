undefined8 _ZN6uu_cat6uu_app17h297ec10995593580E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [700];
  ulong local_4c4;
  undefined4 local_4bc;
  undefined local_4b8 [584];
  uint local_270;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hb7751347de0bc77cE(local_780,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h62abd575415b3c83E
            (auStack_a48,local_780,"0.0.28",6);
                    /* try { // try from 001ae5bf to 001ae5d8 has its CatchHandler @ 001aec7f */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_4b8,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h05aa70576fd37d7fE
            (local_780,auStack_a48,local_4b8);
  _ZN12clap_builder7builder7command7Command5about17h93fccad803b098fcE
            (auStack_a48,local_780,
             "Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input."
             ,0x70);
  (*(code *)PTR_memcpy_0021c170)(local_780,auStack_a48,700);
  local_4c4 = local_78c | 0x8800000088;
  local_4bc = local_784;
                    /* try { // try from 001ae64c to 001ae65f has its CatchHandler @ 001aecc1 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(auStack_a48,"file",4);
  (*(code *)PTR_memcpy_0021c170)(local_4b8,auStack_a48,0x248);
  local_270 = local_800 | 4;
  local_26c = local_7fc;
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(auStack_a48,local_4b8,1);
                    /* try { // try from 001ae6ab to 001ae6bf has its CatchHandler @ 001aecc1 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf044cb3d24704047E(local_4b8,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(auStack_a48,local_780,local_4b8)
  ;
                    /* try { // try from 001ae6d8 to 001ae74a has its CatchHandler @ 001aed35 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E
            (local_780,&anon_1ec98090b1de29d3df94daf5d400a23b_19_llvm_15213056334004324336,8);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,local_780,0x41);
  _ZN12clap_builder7builder3arg3Arg4long17ha5ab6f27da2dfddaE
            (local_780,local_4b8,&anon_1ec98090b1de29d3df94daf5d400a23b_19_llvm_15213056334004324336
             ,8);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_4b8,local_780,"equivalent to -vET",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_268,local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(local_780,auStack_a48,local_268)
  ;
                    /* try { // try from 001ae77b to 001ae7d9 has its CatchHandler @ 001aed23 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(auStack_a48,"number-nonblank",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,auStack_a48,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17ha5ab6f27da2dfddaE
            (auStack_a48,local_4b8,"number-nonblank",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_4b8,auStack_a48,"number nonempty output lines, overrides -n",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_268,local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001ae80a to 001ae85b has its CatchHandler @ 001aecb4 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(local_780,"e",1);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,local_780,0x65);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_780,local_4b8,"equivalent to -vE",0x11);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(local_780,auStack_a48,local_4b8)
  ;
                    /* try { // try from 001ae88c to 001ae8ea has its CatchHandler @ 001aed11 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(auStack_a48,"show-ends",9);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,auStack_a48,0x45);
  _ZN12clap_builder7builder3arg3Arg4long17ha5ab6f27da2dfddaE(auStack_a48,local_4b8,"show-ends",9);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_4b8,auStack_a48,"display $ at end of each line",0x1d);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_268,local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001ae91b to 001ae98d has its CatchHandler @ 001aed04 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(local_780,"number",6);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,local_780,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17ha5ab6f27da2dfddaE(local_780,local_4b8,"number",6);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_4b8,local_780,"number all output lines",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_268,local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(local_780,auStack_a48,local_268)
  ;
                    /* try { // try from 001ae9be to 001aea1c has its CatchHandler @ 001aecf2 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(auStack_a48,"squeeze-blank",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17ha5ab6f27da2dfddaE
            (auStack_a48,local_4b8,"squeeze-blank",0xd);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_4b8,auStack_a48,"suppress repeated empty output lines",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_268,local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001aea4d to 001aea9e has its CatchHandler @ 001aeca4 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(local_780,"t",1);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,local_780,0x74);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_780,local_4b8,"equivalent to -vT",0x11);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_4b8,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(local_780,auStack_a48,local_4b8)
  ;
                    /* try { // try from 001aeacf to 001aeb2d has its CatchHandler @ 001aece0 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(auStack_a48,"show-tabs",9);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,auStack_a48,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17ha5ab6f27da2dfddaE(auStack_a48,local_4b8,"show-tabs",9);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_4b8,auStack_a48,"display TAB characters at ^I",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_268,local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001aeb5e to 001aebd0 has its CatchHandler @ 001aecd3 */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E
            (local_780,anon_1ec98090b1de29d3df94daf5d400a23b_27_llvm_15213056334004324336,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,local_780,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17ha5ab6f27da2dfddaE
            (local_780,local_4b8,anon_1ec98090b1de29d3df94daf5d400a23b_27_llvm_15213056334004324336,
             0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E
            (local_4b8,local_780,"use ^ and M- notation, except for LF (\\n) and TAB (\\t)",0x36);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_268,local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(local_780,auStack_a48,local_268)
  ;
                    /* try { // try from 001aec01 to 001aec43 has its CatchHandler @ 001aec8f */
  _ZN12clap_builder7builder3arg3Arg3new17hb23b1cf0c4b89743E(auStack_a48,"ignored-u",9);
  _ZN12clap_builder7builder3arg3Arg5short17ha8d1cf55182a47daE(local_4b8,auStack_a48,0x75);
  _ZN12clap_builder7builder3arg3Arg4help17h5a14ce4130ccf484E(auStack_a48,local_4b8,"(ignored): ",9);
  _ZN12clap_builder7builder3arg3Arg6action17h57f2e90371cbae81E(local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h191ca0900231d25cE(param_1,local_780,local_4b8);
  return param_1;
}