undefined8 _ZN5uu_pr6uu_app17hd57f601a60b3d98fE(undefined8 param_1)

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
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00398a90)();
  _ZN12clap_builder7builder7command7Command3new17h7bd21421599d0cd9E(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h3a9bfc8a8d7544a4E(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17hc9cce853574a2770E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command10after_help17hb5fba745b951e2d3E(local_830,local_568);
                    /* try { // try from 00232630 to 00232646 has its CatchHandler @ 0023336e */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00398d98)(local_ab0,&DAT_0015734d,0x18)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17hc4aa069dcb95aa33E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_00398a40)(local_830,local_568,700);
  local_574 = local_2ac | 0x8008800080088;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_00157365,5);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_ab0,local_568,&DAT_00157365,5);
                    /* try { // try from 002326d9 to 00232712 has its CatchHandler @ 00233455 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_568,local_ab0,&DAT_0015736a,0x38)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_ab0,local_568,&DAT_001573a2,0x16);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_001573b8,6);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_830,local_ab0,&DAT_001573b8,6);
                    /* try { // try from 0023277c to 002327b2 has its CatchHandler @ 00233443 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_830,&DAT_001573be,0x42)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_2a0,local_ab0,&DAT_00157400,6);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_00157406,0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_568,100);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_568,local_ab0,&DAT_00157406,0xc);
                    /* try { // try from 0023281f to 00232837 has its CatchHandler @ 00233359 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_568,&DAT_00157412,0x7a)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_0015748c,0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_830,local_ab0,&DAT_0015748c,0xc);
                    /* try { // try from 002328b9 to 002328d1 has its CatchHandler @ 00233431 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E
            (local_ab0,local_830,&DAT_00157498,0x185);
  (*(code *)PTR_memcpy_00398a40)(local_830,local_ab0,0x278);
  local_5b8 = local_838 | 0x20;
  local_5b4 = local_834;
                    /* try { // try from 0023290c to 00232924 has its CatchHandler @ 00233431 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_ab0,local_830,&DAT_0015761d,0xd);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_0015762a,0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_568,0x4e);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_568,local_ab0,&DAT_0015762a,0x11)
  ;
                    /* try { // try from 0023298e to 002329c4 has its CatchHandler @ 0023341f */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_568,&DAT_0015763b,0x3c)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_2a0,local_ab0,&DAT_00157677,6);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_0015767d,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_830,local_ab0,&DAT_0015767d,0xb);
                    /* try { // try from 00232a31 to 00232a49 has its CatchHandler @ 00233344 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_830,&DAT_00157688,0xbe)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_00157746,6);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_568,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_568,local_ab0,&DAT_00157746,6);
                    /* try { // try from 00232acb to 00232b01 has its CatchHandler @ 0023340d */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E
            (local_ab0,local_568,&DAT_0015774c,0x131);
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_2a0,local_ab0,&DAT_0015787d,0xb);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_001511d0,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_830,local_ab0,&DAT_001511d0,0x10)
  ;
                    /* try { // try from 00232b6e to 00232b86 has its CatchHandler @ 0023332f */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_830,&DAT_00157888,0x29)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_001578b1,9);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_568,0x46);
                    /* try { // try from 00232bea to 00232c36 has its CatchHandler @ 002333fb */
  _ZN12clap_builder7builder3arg3Arg11short_alias17ha070c9909ee467a2E(local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_ab0,local_568,&DAT_001578b1,9);
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_568,local_ab0,&DAT_001578ba,100);
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_ab0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_0015791e,5);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_830,local_ab0,&DAT_0015791e,5);
                    /* try { // try from 00232cb8 to 00232cee has its CatchHandler @ 002333e9 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E
            (local_ab0,local_830,&DAT_00157923,0x120);
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_2a0,local_ab0,&DAT_0015791e,5);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_00157a43,10);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_568,0x57);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_568,local_ab0,&DAT_00157a43,10);
                    /* try { // try from 00232d5b to 00232d91 has its CatchHandler @ 002333d7 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_568,&DAT_00157a4d,0x7b)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_2a0,local_ab0,&DAT_0015791e,5);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_00157ac8,6);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_830,local_ab0,&DAT_00157ac8,6);
                    /* try { // try from 00232dfe to 00232e16 has its CatchHandler @ 0023331a */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E
            (local_ab0,local_830,&DAT_00157ace,0x106);
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_00157bd4,6);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_ab0,local_568,&DAT_00157bd4,6);
                    /* try { // try from 00232e80 to 00232eb9 has its CatchHandler @ 002333c2 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E
            (local_568,local_ab0,&DAT_00157bda,0x21c);
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_ab0,local_568,&DAT_00157bd4,6);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_00157df6,9);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_830,local_ab0,&DAT_00157df6,9);
                    /* try { // try from 00232f23 to 00232f59 has its CatchHandler @ 002333ad */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_830,&DAT_00157dff,0x8e)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_2a0,local_ab0,&DAT_00152f18,4);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_00157e8d,10);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_568,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_568,local_ab0,&DAT_00157e8d,10);
                    /* try { // try from 00232fc6 to 00232ffc has its CatchHandler @ 00233398 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_568,&DAT_00157e97,0x8a)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_2a0,local_ab0,&DAT_00157f21,6);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_00157f27,5);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_830,local_ab0,&DAT_00157f27,5);
                    /* try { // try from 00233069 to 00233081 has its CatchHandler @ 00233305 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E
            (local_ab0,local_830,&DAT_00157f2c,0x125);
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,&DAT_00158051,6);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_568,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_568,local_ab0,&DAT_00158051,6);
                    /* try { // try from 00233103 to 00233139 has its CatchHandler @ 00233383 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_ab0,local_568,&DAT_00158057,0xd1)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hfa23fa27713d41dcE
            (local_2a0,local_ab0,&DAT_00158128,6);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_0015812e,10);
  _ZN12clap_builder7builder3arg3Arg5short17h9fdb089fc1274f91E(local_ab0,local_830,0x4a);
                    /* try { // try from 00233188 to 002331a3 has its CatchHandler @ 002332f0 */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_830,local_ab0,&DAT_00158138,0x6a)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_568,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4long17hc7bc1e16787d5f6fE(local_ab0,local_568,"helpt",4);
                    /* try { // try from 0023320d to 00233228 has its CatchHandler @ 002332db */
  _ZN12clap_builder7builder3arg3Arg4help17h236e427149429541E(local_568,local_ab0,&DAT_001581a2,0x16)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_ab0,local_568,5);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h13be9b64df8b7861E(local_830,&DAT_001581b8,5);
  _ZN12clap_builder7builder3arg3Arg6action17h205145bd2fe5073fE(local_ab0,local_830,1);
                    /* try { // try from 0023328c to 0023329b has its CatchHandler @ 002332c6 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h49cc9350e030d14dE(local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h65738565064a8c14E(param_1,local_568,local_830);
  return param_1;
}