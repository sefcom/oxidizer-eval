undefined8 _ZN8uu_chown6uu_app17h7079829ae89435deE(undefined8 param_1)

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
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fcf38)();
  _ZN12clap_builder7builder7command7Command3new17he84976e68bf9751fE(auStack_ab8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17he6d09115f1abe4b4E(local_7f0,auStack_ab8);
  _ZN12clap_builder7builder7command7Command5about17h5d49ab93355817e2E(auStack_ab8,local_7f0);
                    /* try { // try from 00160d05 to 00160d1e has its CatchHandler @ 00161397 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001fd020)
            (local_528,
             "{} [OPTION]... [OWNER][:[GROUP]] FILE...\n{} [OPTION]... --reference=RFILE FILE...",
             0x51);
  _ZN12clap_builder7builder7command7Command14override_usage17hf74fadb7db654dbeE
            (local_7f0,auStack_ab8,local_528);
  (*(code *)PTR_memcpy_001fce40)(auStack_ab8,local_7f0,700);
  local_7fc = local_534 | 0x8008000080080;
  local_7f4 = local_52c;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(local_7f0,&DAT_001189f8,4);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E(local_528,local_7f0,&DAT_001189f8,4);
                    /* try { // try from 00160dad to 00160dc8 has its CatchHandler @ 0016138a */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE
            (local_7f0,local_528,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h9a5083a81a500870E(local_528,local_7f0,5);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(local_7f0,auStack_ab8,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(auStack_ab8,"changes",7);
  _ZN12clap_builder7builder3arg3Arg5short17h023b35eec73eba08E(local_528,auStack_ab8,99);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E(auStack_ab8,local_528,"changes",7);
                    /* try { // try from 00160e41 to 00160e5c has its CatchHandler @ 00161378 */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE
            (local_528,auStack_ab8,"like verbose but report only when a change is made",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17h9a5083a81a500870E(local_2a8,local_528,2);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(auStack_ab8,local_7f0,local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(local_7f0,"from",4);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E(local_528,local_7f0,"from",4);
                    /* try { // try from 00160ec7 to 00160f03 has its CatchHandler @ 001613a4 */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE
            (local_7f0,local_528,
             "change the owner and/or group of each file only if its current owner and/or group match those specified here. Either may be omitted, in which case a match is not required for the omitted attribute"
             ,0xc4);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1161217eea0dd428E
            (local_528,local_7f0,"CURRENT_OWNER:CURRENT_GROUP",0x1b);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(local_7f0,auStack_ab8,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(auStack_ab8,"preserve-root",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E
            (local_528,auStack_ab8,"preserve-root",0xd);
                    /* try { // try from 00160f51 to 00160f67 has its CatchHandler @ 00161366 */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE
            (auStack_ab8,local_528,"fail to operate recursively on \'/\'",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h9a5083a81a500870E(local_528,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(auStack_ab8,local_7f0,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(local_7f0,"no-preserve-root",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E
            (local_528,local_7f0,"no-preserve-root",0x10);
                    /* try { // try from 00160fcd to 00160fe8 has its CatchHandler @ 00161359 */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE
            (local_7f0,local_528,"do not treat \'/\' specially (the default)",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17h9a5083a81a500870E(local_528,local_7f0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(local_7f0,auStack_ab8,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(auStack_ab8,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E(local_528,auStack_ab8,"quiet",5);
                    /* try { // try from 0016104e to 00161064 has its CatchHandler @ 00161347 */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE
            (auStack_ab8,local_528,"suppress most error messages",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17h9a5083a81a500870E(local_528,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(auStack_ab8,local_7f0,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(local_7f0,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg5short17h023b35eec73eba08E(local_528,local_7f0,0x52);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E(local_7f0,local_528,"recursive",9);
                    /* try { // try from 001610e2 to 001610fd has its CatchHandler @ 0016133a */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE
            (local_528,local_7f0,"operate on files and directories recursively",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17h9a5083a81a500870E(local_2a8,local_528,2);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(local_7f0,auStack_ab8,local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(auStack_ab8,"reference",9);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E(local_528,auStack_ab8,"reference",9);
                    /* try { // try from 00161163 to 001611a5 has its CatchHandler @ 001613b1 */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE
            (auStack_ab8,local_528,
             "use RFILE\'s owner and group rather than specifying OWNER:GROUP va",0x45);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1161217eea0dd428E(local_528,auStack_ab8,"R",5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17head2676a54ba14e3E(auStack_ab8,local_528);
  _ZN12clap_builder7builder3arg3Arg8num_args17hcd1625a1d55df35bE(local_528,auStack_ab8);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(auStack_ab8,local_7f0,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(local_7f0,"s",6);
  _ZN12clap_builder7builder3arg3Arg5short17h023b35eec73eba08E(local_528,local_7f0,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E(local_7f0,local_528,"s",6);
  _ZN12clap_builder7builder3arg3Arg6action17h9a5083a81a500870E(local_528,local_7f0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(local_7f0,auStack_ab8,local_528)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hf74b138bbe56f1ebE(auStack_ab8,"v",7);
  _ZN12clap_builder7builder3arg3Arg4long17h416db7d698e07d33E(local_528,auStack_ab8,"v",7);
  _ZN12clap_builder7builder3arg3Arg5short17h023b35eec73eba08E(auStack_ab8,local_528,0x76);
                    /* try { // try from 00161294 to 001612af has its CatchHandler @ 00161325 */
  _ZN12clap_builder7builder3arg3Arg4help17hc3aff765a442d3deE(local_528,auStack_ab8,"o",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17h9a5083a81a500870E(local_2a8,local_528,2);
  _ZN12clap_builder7builder7command7Command3arg17h0075d72f8abe0bbfE(auStack_ab8,local_7f0,local_2a8)
  ;
                    /* try { // try from 001612e0 to 001612ed has its CatchHandler @ 00161315 */
  (*(code *)PTR__ZN6uucore8features5perms11common_args17h624fd87efa47755fE_001fd028)(local_7f0);
  _ZN12clap_builder7builder7command7Command4args17h6d978477c76bd577E(param_1,auStack_ab8,local_7f0);
  return param_1;
}