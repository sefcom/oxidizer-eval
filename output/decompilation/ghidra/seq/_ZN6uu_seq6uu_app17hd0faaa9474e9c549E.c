undefined8 _ZN6uu_seq6uu_app17hd0faaa9474e9c549E(undefined8 param_1)

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
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002239b8)();
  _ZN12clap_builder7builder7command7Command3new17h5cb23e1ac5739594E(local_568,uVar1);
  (*(code *)PTR_memcpy_00223980)(local_830,local_568,700);
  local_574 = local_2ac | 0x80000000a0;
  local_56c = local_2a4;
  _ZN12clap_builder7builder7command7Command7version17hcdc379ddc83d0d65E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h93686247d6d06d43E(local_830,local_568);
                    /* try { // try from 001718ee to 00171904 has its CatchHandler @ 00171c2d */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00223b68)
            (local_ab0,
             "{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LAST",
             0x51);
  _ZN12clap_builder7builder7command7Command14override_usage17h74edbb0ebd361d6dE
            (local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h7a8258fe94008aeeE(local_830,"separator",9);
  _ZN12clap_builder7builder3arg3Arg5short17hde81792d29fb55dbE(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h43604bf00dfdcf5cE(local_830,local_ab0,"separator",9);
                    /* try { // try from 0017196e to 00171986 has its CatchHandler @ 00171c1b */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2020f8146d1c0aE
            (local_ab0,local_830,"Separator character (defaults to \\n)",0x24);
  _ZN12clap_builder7builder7command7Command3arg17hed2b26f2619ded49E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h7a8258fe94008aeeE(local_568,"terminator",10);
  _ZN12clap_builder7builder3arg3Arg5short17hde81792d29fb55dbE(local_ab0,local_568,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h43604bf00dfdcf5cE(local_568,local_ab0,"terminator",10);
                    /* try { // try from 001719f0 to 00171a08 has its CatchHandler @ 00171c09 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2020f8146d1c0aE
            (local_ab0,local_568,"Terminator character (defaults to \\n)",0x25);
  _ZN12clap_builder7builder7command7Command3arg17hed2b26f2619ded49E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h7a8258fe94008aeeE(local_830,"equal-width",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hde81792d29fb55dbE(local_ab0,local_830,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h43604bf00dfdcf5cE(local_830,local_ab0,"equal-width",0xb);
                    /* try { // try from 00171a72 to 00171a8a has its CatchHandler @ 00171bf7 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2020f8146d1c0aE
            (local_ab0,local_830,"Equalize widths of all numbers by padding with zeros",0x34);
  _ZN12clap_builder7builder3arg3Arg6action17h39df4f4086732c05E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hed2b26f2619ded49E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h7a8258fe94008aeeE(local_568,"format",6);
  _ZN12clap_builder7builder3arg3Arg5short17hde81792d29fb55dbE(local_ab0,local_568,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h43604bf00dfdcf5cE(local_568,local_ab0,"format",6);
                    /* try { // try from 00171b0c to 00171b24 has its CatchHandler @ 00171be5 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e2020f8146d1c0aE
            (local_ab0,local_568,"use printf style floating-point FORMAT",0x26);
  _ZN12clap_builder7builder7command7Command3arg17hed2b26f2619ded49E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h7a8258fe94008aeeE(local_830,"numbers",7);
  (*(code *)PTR_memcpy_00223980)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 0x20;
  local_834 = local_5b4;
  _ZN12clap_builder7builder3arg3Arg6action17h39df4f4086732c05E(local_830,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h5d7a5d1b5605d797E(local_ab0,local_830,1,3);
  _ZN12clap_builder7builder7command7Command3arg17hed2b26f2619ded49E(param_1,local_568,local_ab0);
  return param_1;
}