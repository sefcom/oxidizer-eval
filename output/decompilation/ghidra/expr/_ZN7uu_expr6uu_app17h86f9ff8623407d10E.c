undefined8 _ZN7uu_expr6uu_app17h86f9ff8623407d10E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [632];
  uint local_28;
  undefined4 local_24;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002518e0)();
  _ZN12clap_builder7builder7command7Command3new17hc0e5161aa5bd7d16E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h76a834f190c7e1adE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17hced8d3e3fa52b3e6E(local_830,local_568);
                    /* try { // try from 001a6307 to 001a6320 has its CatchHandler @ 001a653d */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00251aa8)
            (local_2a0,"{} [EXPRESSION]\n{} [OPTIONS]",0x1c);
  _ZN12clap_builder7builder7command7Command14override_usage17h75aa238ea17948cfE
            (local_568,local_830,local_2a0);
  _ZN12clap_builder7builder7command7Command10after_help17h0b7723ae8346c24cE(local_830,local_568);
  (*(code *)PTR_memcpy_002518a0)(local_568,local_830,700);
  local_2ac = local_574 | 0x28008000280080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h5bb66e70f2231dfdE(local_830,"version",7);
  _ZN12clap_builder7builder3arg3Arg4long17hd0314e17453a4952E(local_2a0,local_830,"version",7);
                    /* try { // try from 001a63c3 to 001a63db has its CatchHandler @ 001a652b */
  _ZN12clap_builder7builder3arg3Arg4help17h612f93627d21296fE
            (local_830,local_2a0,"output version information and exit",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17h8696c1470f65d99dE(local_2a0,local_830,8);
  _ZN12clap_builder7builder7command7Command3arg17h9331b8048d11d233E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5bb66e70f2231dfdE(local_568,&DAT_0011b7d4,4);
  _ZN12clap_builder7builder3arg3Arg4long17hd0314e17453a4952E(local_2a0,local_568,&DAT_0011b7d4,4);
                    /* try { // try from 001a6445 to 001a6460 has its CatchHandler @ 001a651c */
  _ZN12clap_builder7builder3arg3Arg4help17h612f93627d21296fE
            (local_568,local_2a0,"display this help and exit",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h8696c1470f65d99dE(local_2a0,local_568,5);
  _ZN12clap_builder7builder7command7Command3arg17h9331b8048d11d233E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5bb66e70f2231dfdE(local_830,"expression",10);
  _ZN12clap_builder7builder3arg3Arg6action17h8696c1470f65d99dE(local_2a0,local_830,1);
  (*(code *)PTR_memcpy_002518a0)(local_830,local_2a0,0x278);
  local_5b8 = local_28 | 0x20;
  local_5b4 = local_24;
  _ZN12clap_builder7builder7command7Command3arg17h9331b8048d11d233E(param_1,local_568,local_830);
  return param_1;
}