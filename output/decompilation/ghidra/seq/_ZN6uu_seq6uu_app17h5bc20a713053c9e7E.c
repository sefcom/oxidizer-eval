undefined8 _ZN6uu_seq6uu_app17h5bc20a713053c9e7E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [700];
  ulong local_4c4;
  undefined4 local_4bc;
  undefined local_4b8 [592];
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h70e60addb5ac5618E(local_780,uVar1);
  (*(code *)PTR_memcpy_002488d0)(auStack_a48,local_780,700);
  local_78c = local_4c4 | 0x80000000a4;
  local_784 = local_4bc;
  _ZN12clap_builder7builder7command7Command7version17h39cda120b5e96539E
            (local_780,auStack_a48,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17hb7cd82dead60a251E
            (auStack_a48,local_780,"Display numbers from FIRST to LAST, in steps of INCREMENT.",0x3a
            );
                    /* try { // try from 001c760a to 001c7623 has its CatchHandler @ 001c78c9 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E
            (local_4b8,
             "{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LAST",
             0x51);
  _ZN12clap_builder7builder7command7Command14override_usage17hfb685ff62d43e39dE
            (local_780,auStack_a48,local_4b8);
                    /* try { // try from 001c763c to 001c769d has its CatchHandler @ 001c7902 */
  _ZN12clap_builder7builder3arg3Arg3new17h6fdd348e62deb03dE(auStack_a48,"separator",9);
  _ZN12clap_builder7builder3arg3Arg5short17h30cb111526dd9718E(local_4b8,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h9872abf788435f05E(auStack_a48,local_4b8,"separator",9);
  _ZN12clap_builder7builder3arg3Arg4help17hc6b390ea58bb10afE
            (local_4b8,auStack_a48,"Separator character (defaults to \\n)",0x24);
  _ZN12clap_builder7builder7command7Command3arg17h2b155dfcc00bacbaE(auStack_a48,local_780,local_4b8)
  ;
                    /* try { // try from 001c76b6 to 001c7726 has its CatchHandler @ 001c78f5 */
  _ZN12clap_builder7builder3arg3Arg3new17h6fdd348e62deb03dE(local_780,"terminator",10);
  _ZN12clap_builder7builder3arg3Arg5short17h30cb111526dd9718E(local_4b8,local_780,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h9872abf788435f05E(local_780,local_4b8,"terminator",10);
  _ZN12clap_builder7builder3arg3Arg4help17hc6b390ea58bb10afE
            (local_4b8,local_780,"Terminator character (defaults to \\n)",0x25);
  _ZN12clap_builder7builder7command7Command3arg17h2b155dfcc00bacbaE(local_780,auStack_a48,local_4b8)
  ;
                    /* try { // try from 001c773f to 001c77a0 has its CatchHandler @ 001c78e3 */
  _ZN12clap_builder7builder3arg3Arg3new17h6fdd348e62deb03dE(auStack_a48,"equal-width",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h30cb111526dd9718E(local_4b8,auStack_a48,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h9872abf788435f05E
            (auStack_a48,local_4b8,"equal-width",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17hc6b390ea58bb10afE
            (local_4b8,auStack_a48,"Equalize widths of all numbers by padding with zeros",0x34);
  _ZN12clap_builder7builder3arg3Arg6action17h64d48ec922aa36c9E(local_268,local_4b8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2b155dfcc00bacbaE(auStack_a48,local_780,local_268)
  ;
                    /* try { // try from 001c77d1 to 001c7841 has its CatchHandler @ 001c78d6 */
  _ZN12clap_builder7builder3arg3Arg3new17h6fdd348e62deb03dE(local_780,"format",6);
  _ZN12clap_builder7builder3arg3Arg5short17h30cb111526dd9718E(local_4b8,local_780,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h9872abf788435f05E(local_780,local_4b8,"format",6);
  _ZN12clap_builder7builder3arg3Arg4help17hc6b390ea58bb10afE
            (local_4b8,local_780,"use printf style floating-point FORMAT",0x26);
  _ZN12clap_builder7builder7command7Command3arg17h2b155dfcc00bacbaE(local_780,auStack_a48,local_4b8)
  ;
                    /* try { // try from 001c785a to 001c786d has its CatchHandler @ 001c78b7 */
  _ZN12clap_builder7builder3arg3Arg3new17h6fdd348e62deb03dE(auStack_a48,"numbers",7);
  _ZN12clap_builder7builder3arg3Arg6action17h64d48ec922aa36c9E(local_4b8,auStack_a48,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h2e5e4b9423a09621E(auStack_a48,local_4b8);
  _ZN12clap_builder7builder7command7Command3arg17h2b155dfcc00bacbaE(param_1,local_780,auStack_a48);
  return param_1;
}