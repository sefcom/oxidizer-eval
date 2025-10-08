undefined8 _ZN9uu_mkfifo6uu_app17hfa7e86d425877003E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [632];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_2ac;
  undefined4 local_2a4;
  undefined8 local_2a0 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4888)();
  _ZN12clap_builder7builder7command7Command3new17h32f7b6db344be44fE(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h748f316f30032e37E(local_830,local_568);
                    /* try { // try from 00155daa to 00155dc0 has its CatchHandler @ 00156117 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e4960)
            (local_ab0,"{} [OPTION]... NAME...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h8c1e700828855e22E
            (local_568,local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17h8d619714d1f70eb4E(local_830,local_568);
  (*(code *)PTR_memcpy_001e4848)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h0a377786ac0964c7E(local_830,"mode",4);
  _ZN12clap_builder7builder3arg3Arg5short17h5b453aa659ec3ed1E(local_ab0,local_830,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17h725d4a7d6933f0feE(local_830,local_ab0,"mode",4);
                    /* try { // try from 00155e7e to 00155eb4 has its CatchHandler @ 00156129 */
  _ZN12clap_builder7builder3arg3Arg4help17h4d66b5390fd0a813E
            (local_ab0,local_830,"file permissions for the fifo",0x1d);
  _ZN12clap_builder7builder3arg3Arg10value_name17h75de148b26b11eb0E
            (local_2a0,local_ab0,&DAT_001171e0,4);
  _ZN12clap_builder7builder7command7Command3arg17hb4ec6104fb27e15eE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h0a377786ac0964c7E(local_568,"Z",1);
  _ZN12clap_builder7builder3arg3Arg5short17h5b453aa659ec3ed1E(local_ab0,local_568,0x5a);
                    /* try { // try from 00155f03 to 00155f1e has its CatchHandler @ 00156105 */
  _ZN12clap_builder7builder3arg3Arg4help17h4d66b5390fd0a813E
            (local_568,local_ab0,"set the SELinux security context to default type",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17h41dc92a5fe5b90f2E(local_ab0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17hb4ec6104fb27e15eE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h0a377786ac0964c7E(local_830,"context",7);
  _ZN12clap_builder7builder3arg3Arg4long17h725d4a7d6933f0feE(local_ab0,local_830,"context",7);
                    /* try { // try from 00155f88 to 00155fc9 has its CatchHandler @ 0015613b */
  _ZN12clap_builder7builder3arg3Arg10value_name17h75de148b26b11eb0E(local_830,local_ab0,"CTX",3);
  local_2a0[0] = 1;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h6edeb62ec2066a81E(local_ab0,local_830,local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg8num_args17h6d9b43ad34bb3461E(local_830,local_ab0,0,1);
  (*(code *)PTR_memcpy_001e4848)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 0x80;
  local_834 = local_5b4;
                    /* try { // try from 0015601d to 00156038 has its CatchHandler @ 0015613b */
  _ZN12clap_builder7builder3arg3Arg4help17h4d66b5390fd0a813E
            (local_2a0,local_ab0,
             "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX"
             ,0x55);
  _ZN12clap_builder7builder7command7Command3arg17hb4ec6104fb27e15eE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h0a377786ac0964c7E(local_568,&DAT_001171c8,4);
  (*(code *)PTR_memcpy_001e4848)(local_ab0,local_568,0x278);
  local_838 = local_2f0 | 4;
  local_834 = local_2ec;
  _ZN12clap_builder7builder3arg3Arg6action17h41dc92a5fe5b90f2E(local_568,local_ab0,1);
                    /* try { // try from 001560bf to 001560cb has its CatchHandler @ 001560f3 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h2c166b6a63a06657E(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17hb4ec6104fb27e15eE(param_1,local_830,local_ab0);
  return param_1;
}