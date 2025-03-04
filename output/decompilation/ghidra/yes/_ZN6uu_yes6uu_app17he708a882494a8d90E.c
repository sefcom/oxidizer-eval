long _ZN6uu_yes6uu_app17he708a882494a8d90E(long param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [592];
  undefined local_530 [712];
  undefined8 local_268 [74];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h4136bba7276c3d15E(auStack_a48,uVar1);
  _ZN12clap_builder7builder7command7Command7version17heeae237705f6760dE
            (local_530,auStack_a48,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h5208c568fd344ef5E
            (auStack_a48,local_530,"Repeatedly display a line with STRING (or \'y\')",0x2e);
                    /* try { // try from 001a6869 to 001a6882 has its CatchHandler @ 001a6948 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_780,"{} [STRING]...",0xe);
  _ZN12clap_builder7builder7command7Command14override_usage17h404a480372021b18E
            (local_530,auStack_a48,local_780);
                    /* try { // try from 001a689b to 001a68d2 has its CatchHandler @ 001a6955 */
  _ZN12clap_builder7builder3arg3Arg3new17hb6e5126fac425e19E(auStack_a48,"STRING",6);
  local_268[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h23dd186edb3427c3E
            (local_780,auStack_a48,local_268);
  _ZN12clap_builder7builder3arg3Arg6action17ha46d941798abb8f4E(local_268,local_780);
  _ZN12clap_builder7builder7command7Command3arg17h875451c49d14dbcbE(auStack_a48,local_530,local_268)
  ;
  (*(code *)PTR_memcpy_0020d0b0)(param_1,auStack_a48,700);
  *(ulong *)(param_1 + 700) = local_78c | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_784;
  return param_1;
}