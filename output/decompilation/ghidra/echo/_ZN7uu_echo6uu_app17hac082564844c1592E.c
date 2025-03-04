undefined8 _ZN7uu_echo6uu_app17hac082564844c1592E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  uint local_78c;
  undefined8 local_788;
  undefined local_780 [700];
  uint local_4c4;
  undefined8 local_4c0;
  undefined local_4b8 [592];
  undefined8 local_268 [74];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hc7ec6dfb1f3b4da7E(auStack_a48,uVar1);
  (*(code *)PTR_memcpy_00209138)(local_780,auStack_a48,700);
  local_4c4 = local_78c | 0x22;
  local_4c0 = local_788;
  _ZN12clap_builder7builder7command7Command7version17hafd05bea21e57d41E(auStack_a48,local_780);
  _ZN12clap_builder7builder7command7Command5about17hf2b328b183190985E(local_780,auStack_a48);
  _ZN12clap_builder7builder7command7Command10after_help17hcc85c3a742b69a8bE(auStack_a48,local_780);
                    /* try { // try from 001a4999 to 001a49b2 has its CatchHandler @ 001a4c09 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_4b8,&DAT_0011b5f8,0x1b);
  _ZN12clap_builder7builder7command7Command14override_usage17h92e7942a580e103dE
            (local_780,auStack_a48,local_4b8);
  _ZN12clap_builder7builder3arg3Arg3new17hb5e8990be33da4cdE(auStack_a48,&DAT_0011b613,10);
  _ZN12clap_builder7builder3arg3Arg5short17h0c0faedee966dc35E(local_4b8,auStack_a48,0x6e);
                    /* try { // try from 001a49fa to 001a4a10 has its CatchHandler @ 001a4bf7 */
  _ZN12clap_builder7builder3arg3Arg4help17h832a6dbb682de13bE
            (auStack_a48,local_4b8,&DAT_0011b61d,0x22);
  _ZN12clap_builder7builder3arg3Arg6action17hf068255853920169E(local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h68fa26210e2f8086E(auStack_a48,local_780,local_4b8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hb5e8990be33da4cdE(local_780,&DAT_0011b63f,0x17);
  _ZN12clap_builder7builder3arg3Arg5short17h0c0faedee966dc35E(local_4b8,local_780,0x65);
                    /* try { // try from 001a4a70 to 001a4ac4 has its CatchHandler @ 001a4c28 */
  _ZN12clap_builder7builder3arg3Arg4help17h832a6dbb682de13bE(local_780,local_4b8,&DAT_0011b656,0x2a)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hf068255853920169E(local_4b8,local_780,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h554d066c90c03c16E
            (local_268,local_4b8,&DAT_0011b680,0x18);
  _ZN12clap_builder7builder7command7Command3arg17h68fa26210e2f8086E(local_780,auStack_a48,local_268)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hb5e8990be33da4cdE(auStack_a48,&DAT_0011b680,0x18);
  _ZN12clap_builder7builder3arg3Arg5short17h0c0faedee966dc35E(local_4b8,auStack_a48,0x45);
                    /* try { // try from 001a4b0c to 001a4b56 has its CatchHandler @ 001a4c16 */
  _ZN12clap_builder7builder3arg3Arg4help17h832a6dbb682de13bE
            (auStack_a48,local_4b8,&DAT_0011b698,0x35);
  _ZN12clap_builder7builder3arg3Arg6action17hf068255853920169E(local_4b8,auStack_a48,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h554d066c90c03c16E
            (local_268,local_4b8,&DAT_0011b63f,0x17);
  _ZN12clap_builder7builder7command7Command3arg17h68fa26210e2f8086E(auStack_a48,local_780,local_268)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hb5e8990be33da4cdE(local_780,&DAT_0011b6cd,6);
  _ZN12clap_builder7builder3arg3Arg6action17hf068255853920169E(local_4b8,local_780,1);
  local_268[0] = 2;
                    /* try { // try from 001a4baf to 001a4bc6 has its CatchHandler @ 001a4bea */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h5c4830a846a90debE(local_780,local_4b8,local_268)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h68fa26210e2f8086E(param_1,auStack_a48,local_780);
  return param_1;
}