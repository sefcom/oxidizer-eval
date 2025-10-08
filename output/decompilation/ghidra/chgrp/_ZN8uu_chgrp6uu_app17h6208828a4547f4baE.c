undefined8 _ZN8uu_chgrp6uu_app17h6208828a4547f4baE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_ab8 [700];
  ulong local_7fc;
  undefined4 local_7f4;
  undefined local_7f0 [700];
  ulong local_534;
  undefined4 local_52c;
  undefined local_528 [640];
  undefined local_2a8 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fb878)();
  _ZN12clap_builder7builder7command7Command3new17h5c9e62701b541373E(auStack_ab8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17he69f8f6affdfaa7cE(local_7f0,auStack_ab8);
  _ZN12clap_builder7builder7command7Command5about17he7faf4f77555da3fE(auStack_ab8,local_7f0);
                    /* try { // try from 00160175 to 0016018e has its CatchHandler @ 001607f4 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001fb958)
            (local_528,"{} [OPTION]... GROUP FILE...\n{} [OPTION]... --reference=RFILE FILE...",0x45
            );
  _ZN12clap_builder7builder7command7Command14override_usage17hd34ff91a9dc99181E
            (local_7f0,auStack_ab8,local_528);
  (*(code *)PTR_memcpy_001fb780)(auStack_ab8,local_7f0,700);
  local_7fc = local_534 | 0x8008000080080;
  local_7f4 = local_52c;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(local_7f0,&DAT_00118978,4);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E(local_528,local_7f0,&DAT_00118978,4);
                    /* try { // try from 0016021d to 00160238 has its CatchHandler @ 001607e7 */
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E
            (local_7f0,local_528,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17ha8eb24f67130ade1E(local_528,local_7f0,5);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(local_7f0,auStack_ab8,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(auStack_ab8,"changes",7);
  _ZN12clap_builder7builder3arg3Arg5short17ha7b6029c61dc3bd1E(local_528,auStack_ab8,99);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E(auStack_ab8,local_528,"changes",7);
                    /* try { // try from 001602b1 to 001602cc has its CatchHandler @ 001607d5 */
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E
            (local_528,auStack_ab8,"like verbose but report only when a change is made",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17ha8eb24f67130ade1E(local_2a8,local_528,2);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(auStack_ab8,local_7f0,local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(local_7f0,"silent",6);
  _ZN12clap_builder7builder3arg3Arg5short17ha7b6029c61dc3bd1E(local_528,local_7f0,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E(local_7f0,local_528,"silent",6);
  _ZN12clap_builder7builder3arg3Arg6action17ha8eb24f67130ade1E(local_528,local_7f0,2);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(local_7f0,auStack_ab8,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(auStack_ab8,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E(local_528,auStack_ab8,"quiet",5);
                    /* try { // try from 001603b2 to 001603c8 has its CatchHandler @ 001607c3 */
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E
            (auStack_ab8,local_528,"suppress most error messages",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17ha8eb24f67130ade1E(local_528,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(auStack_ab8,local_7f0,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(local_7f0,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17ha7b6029c61dc3bd1E(local_528,local_7f0,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E(local_7f0,local_528,"verbose",7);
                    /* try { // try from 00160446 to 00160461 has its CatchHandler @ 001607b6 */
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E
            (local_528,local_7f0,"output a diagnostic for every file processed",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17ha8eb24f67130ade1E(local_2a8,local_528,2);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(local_7f0,auStack_ab8,local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(auStack_ab8,"preserve-root",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E
            (local_528,auStack_ab8,"preserve-root",0xd);
                    /* try { // try from 001604c7 to 001604dd has its CatchHandler @ 001607a4 */
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E
            (auStack_ab8,local_528,"fail to operate recursively on \'/\'",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17ha8eb24f67130ade1E(local_528,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(auStack_ab8,local_7f0,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(local_7f0,"no-preserve-root",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E
            (local_528,local_7f0,"no-preserve-root",0x10);
                    /* try { // try from 00160543 to 0016055e has its CatchHandler @ 00160797 */
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E
            (local_7f0,local_528,"do not treat \'/\' specially (the default)",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17ha8eb24f67130ade1E(local_528,local_7f0,2);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(local_7f0,auStack_ab8,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(auStack_ab8,"reference",9);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E(local_528,auStack_ab8,"reference",9);
                    /* try { // try from 001605c4 to 00160606 has its CatchHandler @ 0016080e */
  _ZN12clap_builder7builder3arg3Arg10value_name17h03f7a1afaf14cfc4E(auStack_ab8,local_528,"RFILE");
  _ZN12clap_builder7builder3arg3Arg10value_hint17h780abdc9a8911276E(local_528,auStack_ab8);
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E(local_2a8,local_528,"u",0x35);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(auStack_ab8,local_7f0,local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(local_7f0,"from",4);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E(local_528,local_7f0,"from",4);
                    /* try { // try from 00160659 to 00160690 has its CatchHandler @ 00160801 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h03f7a1afaf14cfc4E(local_7f0,local_528,"GROUP");
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E
            (local_528,local_7f0,"change the group only if its current group matches GROUP",0x38);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(local_7f0,auStack_ab8,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h19cf1d2daaecb700E(auStack_ab8,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg5short17ha7b6029c61dc3bd1E(local_528,auStack_ab8,0x52);
  _ZN12clap_builder7builder3arg3Arg4long17he0af6dfb0317af69E(auStack_ab8,local_528,"recursive",9);
                    /* try { // try from 001606f1 to 0016070c has its CatchHandler @ 00160782 */
  _ZN12clap_builder7builder3arg3Arg4help17h7b06416bbf045f94E
            (local_528,auStack_ab8,"operate on files and directories recursively",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17ha8eb24f67130ade1E(local_2a8,local_528,2);
  _ZN12clap_builder7builder7command7Command3arg17he56e5b2211f53072E(auStack_ab8,local_7f0,local_2a8)
  ;
                    /* try { // try from 0016073d to 0016074a has its CatchHandler @ 00160772 */
  (*(code *)PTR__ZN6uucore8features5perms11common_args17h624fd87efa47755fE_001fb960)(local_7f0);
  _ZN12clap_builder7builder7command7Command4args17hacb627b6c4835d7aE(param_1,auStack_ab8,local_7f0);
  return param_1;
}