undefined8 _ZN6uu_env6uu_app17hee268625580a1e1bE(undefined8 param_1)

{
  undefined8 local_a68;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined8 local_a58;
  undefined local_a50 [592];
  undefined local_800 [700];
  uint local_544;
  ulong local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 local_528;
  uint local_27c;
  ulong local_278;
  undefined8 local_268 [2];
  undefined8 local_258;
  
  _ZN12clap_builder7builder7command7Command3new17h82ee946e88d35563E(&local_538,&DAT_001244c5,6);
  _ZN12clap_builder7builder7command7Command7version17hea5eef57fa44d04cE
            (local_800,&local_538,&DAT_001244cb,6);
  _ZN12clap_builder7builder7command7Command5about17h499a27fded82a175E
            (&local_538,local_800,&DAT_001244d1,0x39);
                    /* try { // try from 001ccb16 to 001ccb2c has its CatchHandler @ 001cd3d2 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_a50,&DAT_0012450a,0x35);
  _ZN12clap_builder7builder7command7Command14override_usage17h2d939722c7265726E
            (local_800,&local_538,local_a50);
  _ZN12clap_builder7builder7command7Command10after_help17h40247e36bfff4c88E
            (&local_538,local_800,&DAT_0012453f,0x44);
  (*(code *)PTR_memcpy_0024d1c8)(local_800,&local_538,700);
  local_540 = local_278 | 0x80;
  local_544 = local_27c | 0xa0;
                    /* try { // try from 001ccba7 to 001ccc13 has its CatchHandler @ 001cd423 */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(&local_538,&DAT_00124583,0x12);
  _ZN12clap_builder7builder3arg3Arg5short17he904153c6ff7f0aeE(local_a50,&local_538,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE
            (&local_538,local_a50,&DAT_00124583,0x12);
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE
            (local_a50,&local_538,&DAT_00124595,0x1f);
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(local_268,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(&local_538,local_800,local_268);
                    /* try { // try from 001ccc46 to 001ccd47 has its CatchHandler @ 001cd48f */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(local_800,&DAT_001245b4,5);
  _ZN12clap_builder7builder3arg3Arg5short17he904153c6ff7f0aeE(local_a50,local_800,0x43);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE(local_800,local_a50,&DAT_001245b4,5);
  _ZN12clap_builder7builder3arg3Arg16number_of_values17h0593b8edb9882a67E(local_a50,local_800,1);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf84e6eac4729b848E
            (local_800,local_a50,&DAT_001245b9,3);
  local_a68 = 2;
  local_258 = local_a58;
  local_268[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1e063e34e188f6afE(local_a50,local_800,local_268)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd2c2f8470b8dc8daE(local_800,local_a50,4);
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE(local_a50,local_800,&DAT_001245bc,0x1f)
  ;
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(local_800,&local_538,local_a50);
                    /* try { // try from 001ccd62 to 001ccdce has its CatchHandler @ 001cd411 */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(&local_538,"nullXCPU",4);
  _ZN12clap_builder7builder3arg3Arg5short17he904153c6ff7f0aeE(local_a50,&local_538,0x30);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE(&local_538,local_a50,"nullXCPU",4);
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE(local_a50,&local_538,&DAT_001245db,99);
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(local_268,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(&local_538,local_800,local_268);
                    /* try { // try from 001cce01 to 001cceea has its CatchHandler @ 001cd47d */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(local_800,&DAT_00117680,4);
  _ZN12clap_builder7builder3arg3Arg5short17he904153c6ff7f0aeE(local_a50,local_800,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE(local_800,local_a50,&DAT_00117680,4);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf84e6eac4729b848E
            (local_a50,local_800,&DAT_001175fc,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd2c2f8470b8dc8daE(local_800,local_a50,3);
  local_258 = local_a58;
  local_268[0] = local_a68;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1e063e34e188f6afE(local_a50,local_800,local_268)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(local_800,local_a50,1);
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE(local_a50,local_800,&DAT_0012463e,0x5d)
  ;
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(local_800,&local_538,local_a50);
                    /* try { // try from 001ccf05 to 001ccfd7 has its CatchHandler @ 001cd459 */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(&local_538,&DAT_0012469b,5);
  _ZN12clap_builder7builder3arg3Arg5short17he904153c6ff7f0aeE(local_a50,&local_538,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE(&local_538,local_a50,&DAT_0012469b,5);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf84e6eac4729b848E
            (local_a50,&local_538,&DAT_00117624,4);
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(&local_538,local_a50,1);
  local_258 = local_a58;
  local_268[0] = local_a68;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1e063e34e188f6afE
            (local_a50,&local_538,local_268);
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE(local_268,local_a50,&DAT_001246a0,0x24)
  ;
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(&local_538,local_800,local_268);
                    /* try { // try from 001ccff5 to 001cd079 has its CatchHandler @ 001cd3fc */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(local_800,&DAT_001246c4,5);
  _ZN12clap_builder7builder3arg3Arg5short17he904153c6ff7f0aeE(local_a50,local_800,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE(local_800,local_a50,&DAT_001246c4,5);
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(local_a50,local_800,4);
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE(local_268,local_a50,&DAT_001246c9,0x32)
  ;
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(local_800,&local_538,local_268);
                    /* try { // try from 001cd097 to 001cd166 has its CatchHandler @ 001cd447 */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(&local_538,&DAT_001246fb,0xc);
  _ZN12clap_builder7builder3arg3Arg5short17he904153c6ff7f0aeE(local_a50,&local_538,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE(&local_538,local_a50,&DAT_001246fb,0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hf84e6eac4729b848E
            (local_a50,&local_538,&DAT_00124707,1);
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(&local_538,local_a50,0);
  local_258 = local_a58;
  local_268[0] = local_a68;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1e063e34e188f6afE
            (local_a50,&local_538,local_268);
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE(local_268,local_a50,&DAT_00124708,0x5d)
  ;
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(&local_538,local_800,local_268);
                    /* try { // try from 001cd184 to 001cd271 has its CatchHandler @ 001cd46b */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(local_800,&DAT_00124765,5);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h6554d17c14b8bfeaE
            (local_a50,local_800,&DAT_00124765,5);
  _ZN12clap_builder7builder3arg3Arg5short17he904153c6ff7f0aeE(local_800,local_a50,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE(local_a50,local_800,&DAT_00124765,5);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf84e6eac4729b848E
            (local_800,local_a50,&DAT_0012476a,1);
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(local_a50,local_800,0);
  local_258 = local_a58;
  local_268[0] = local_a68;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1e063e34e188f6afE(local_800,local_a50,local_268)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE(local_a50,local_800,&DAT_0012476b,0x7c)
  ;
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(local_800,&local_538,local_a50);
                    /* try { // try from 001cd28c to 001cd2ef has its CatchHandler @ 001cd3e7 */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(&local_538,&DAT_00117600,4);
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(local_a50,&local_538,1);
  local_528 = local_a58;
  local_538 = (undefined4)local_a68;
  uStack_534 = local_a68._4_4_;
  uStack_530 = uStack_a60;
  uStack_52c = uStack_a5c;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1e063e34e188f6afE
            (local_268,local_a50,&local_538);
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(&local_538,local_800,local_268);
                    /* try { // try from 001cd30d to 001cd3ac has its CatchHandler @ 001cd435 */
  _ZN12clap_builder7builder3arg3Arg3new17h34c168b44b098725E(local_800,&DAT_001247e7,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17hdc1abf31efe80dfcE(local_a50,local_800,&DAT_001247e7,0xd);
  _ZN12clap_builder7builder3arg3Arg10value_name17hf84e6eac4729b848E
            (local_800,local_a50,&DAT_001247f4,3);
  _ZN12clap_builder7builder3arg3Arg6action17h7e39ad1df3936387E(local_a50,local_800,1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h1e063e34e188f6afE
            (local_800,local_a50,&local_a68);
  _ZN12clap_builder7builder3arg3Arg4help17hb149cd933903096fE(local_a50,local_800,&DAT_001247f7,0x2b)
  ;
  _ZN12clap_builder7builder7command7Command3arg17he80fb21d4daf850cE(param_1,&local_538,local_a50);
  return param_1;
}