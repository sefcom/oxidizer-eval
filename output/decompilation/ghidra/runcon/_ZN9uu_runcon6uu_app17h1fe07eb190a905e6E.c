long _ZN9uu_runcon6uu_app17h1fe07eb190a905e6E(long param_1)

{
  undefined8 uVar1;
  undefined8 local_ac8 [3];
  undefined local_ab0 [640];
  undefined local_830 [700];
  uint local_574;
  undefined4 uStack_570;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f22c0)();
  _ZN12clap_builder7builder7command7Command3new17h656122781c2c2e6fE(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h848a0d4f0fbaa52bE(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17hf27dcc54746c88f1E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command10after_help17h22876d193ffeb47cE(local_830,local_568);
                    /* try { // try from 00160c50 to 00160c66 has its CatchHandler @ 001610ff */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f23c8)
            (local_ab0,
             "{} CONTEXT COMMAND [ARG...]\n{} [-c] [-u USER] [-r ROLE] [-t TYPE] [-l RANGE] COMMAND [ARG...]"
             ,0x5d);
  _ZN12clap_builder7builder7command7Command14override_usage17hc0860ff1a469243eE
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001f2270)(local_830,local_568,700);
  local_574 = (uint)(local_2ac | 0x8000000080);
  uStack_570 = (undefined4)((local_2ac | 0x8000000080) >> 0x20);
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h9ceb494e35a9d462E(local_568,"compute",7);
  _ZN12clap_builder7builder3arg3Arg5short17h86c131a4dbaa6954E(local_ab0,local_568,99);
  _ZN12clap_builder7builder3arg3Arg4long17hf5348895895b9c86E(local_568,local_ab0,"compute",7);
                    /* try { // try from 00160d11 to 00160d29 has its CatchHandler @ 001610ed */
  _ZN12clap_builder7builder3arg3Arg4help17h706f8f8d3d425d9fE
            (local_ab0,local_568,"Compute process transition context before modifying.",0x34);
  _ZN12clap_builder7builder3arg3Arg6action17h14f9250bb3c7c1ffE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h33cebf69b39935e2E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h9ceb494e35a9d462E(local_830,&DAT_00118c6c,4);
  _ZN12clap_builder7builder3arg3Arg5short17h86c131a4dbaa6954E(local_ab0,local_830,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17hf5348895895b9c86E(local_830,local_ab0,&DAT_00118c6c,4);
                    /* try { // try from 00160dab to 00160dfe has its CatchHandler @ 00161159 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h4cb69874de1a7d65E
            (local_ab0,local_830,&DAT_00118cc4,4);
  _ZN12clap_builder7builder3arg3Arg4help17h706f8f8d3d425d9fE
            (local_830,local_ab0,"Set user USER in the target security context.",0x2d);
  local_ac8[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17he1e245ff32adbcd9E(local_ab0,local_830,local_ac8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h33cebf69b39935e2E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h9ceb494e35a9d462E(local_568,&DAT_00118c14,4);
  _ZN12clap_builder7builder3arg3Arg5short17h86c131a4dbaa6954E(local_ab0,local_568,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17hf5348895895b9c86E(local_568,local_ab0,&DAT_00118c14,4);
                    /* try { // try from 00160e68 to 00160eb3 has its CatchHandler @ 00161147 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h4cb69874de1a7d65E
            (local_ab0,local_568,&DAT_00118c9c,4);
  _ZN12clap_builder7builder3arg3Arg4help17h706f8f8d3d425d9fE
            (local_568,local_ab0,"Set role ROLE in the target security context.",0x2d);
  _ZN12clap_builder7builder3arg3Arg12value_parser17he1e245ff32adbcd9E(local_ab0,local_568,local_ac8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h33cebf69b39935e2E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h9ceb494e35a9d462E(local_830,&DAT_00118cd0,4);
  _ZN12clap_builder7builder3arg3Arg5short17h86c131a4dbaa6954E(local_ab0,local_830,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hf5348895895b9c86E(local_830,local_ab0,&DAT_00118cd0,4);
                    /* try { // try from 00160f1d to 00160f68 has its CatchHandler @ 00161135 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h4cb69874de1a7d65E
            (local_ab0,local_830,&DAT_00118cd8,4);
  _ZN12clap_builder7builder3arg3Arg4help17h706f8f8d3d425d9fE
            (local_830,local_ab0,"Set type TYPE in the target security context.",0x2d);
  _ZN12clap_builder7builder3arg3Arg12value_parser17he1e245ff32adbcd9E(local_ab0,local_830,local_ac8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h33cebf69b39935e2E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h9ceb494e35a9d462E(local_568,"range",5);
  _ZN12clap_builder7builder3arg3Arg5short17h86c131a4dbaa6954E(local_ab0,local_568,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17hf5348895895b9c86E(local_568,local_ab0,"range",5);
                    /* try { // try from 00160fd2 to 0016101d has its CatchHandler @ 00161123 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h4cb69874de1a7d65E(local_ab0,local_568,"RANGE",5);
  _ZN12clap_builder7builder3arg3Arg4help17h706f8f8d3d425d9fE
            (local_568,local_ab0,"Set range RANGE in the target security context.",0x2f);
  _ZN12clap_builder7builder3arg3Arg12value_parser17he1e245ff32adbcd9E(local_ab0,local_568,local_ac8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h33cebf69b39935e2E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h9ceb494e35a9d462E(local_830,"ARG",3);
  _ZN12clap_builder7builder3arg3Arg6action17h14f9250bb3c7c1ffE(local_ab0,local_830,1);
                    /* try { // try from 00161069 to 0016108d has its CatchHandler @ 00161111 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17he1e245ff32adbcd9E(local_830,local_ab0,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h8b4b7dcb2e6f132bE(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h33cebf69b39935e2E(local_830,local_568,local_ab0);
  (*(code *)PTR_memcpy_001f2270)(param_1,local_830,700);
  *(uint *)(param_1 + 700) = local_574 | 0x20;
  *(ulong *)(param_1 + 0x2c0) = CONCAT44(local_56c,uStack_570);
  return param_1;
}