undefined8 _ZN8uu_sleep6uu_app17h7f221250c3adad43E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h550840e1cc1ba956E(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17ha3a67252f6f91644E
            (auStack_7f8,local_530,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h76115d2a8ee9f3e6E
            (local_530,auStack_7f8,"Pause for NUMBER seconds.",0x19);
  _ZN12clap_builder7builder7command7Command10after_help17he1950b12e48d234eE
            (auStack_7f8,local_530,
             "Pause for NUMBER seconds.  SUFFIX may be \'s\' for seconds (the default),\n\'m\' for minutes, \'h\' for hours or \'d\' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint number.  Given two or more arguments, pause for the amount of time\nspecified by the sum of their values."
             ,0x14f);
                    /* try { // try from 001abe58 to 001abe71 has its CatchHandler @ 001abf3f */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_268,"{} NUMBER[SUFFIX]...\n{} OPTION",0x1e);
  _ZN12clap_builder7builder7command7Command14override_usage17hfb5f500f09c205e8E
            (local_530,auStack_7f8,local_268);
  (*(code *)PTR_memcpy_0021aa80)(auStack_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001abec6 to 001abf08 has its CatchHandler @ 001abf4c */
  _ZN12clap_builder7builder3arg3Arg3new17ha16ac1f27ee23c7eE(local_530,"NUMBER",6);
  _ZN12clap_builder7builder3arg3Arg4help17hd1cb79528c548903E(local_268,local_530);
  _ZN12clap_builder7builder3arg3Arg10value_name17he21f62fd7314821fE(local_530,local_268);
  _ZN12clap_builder7builder3arg3Arg6action17h97274f682063a2c0E(local_268,local_530);
  _ZN12clap_builder7builder7command7Command3arg17h4d4defefb4443c82E(param_1,auStack_7f8,local_268);
  return param_1;
}