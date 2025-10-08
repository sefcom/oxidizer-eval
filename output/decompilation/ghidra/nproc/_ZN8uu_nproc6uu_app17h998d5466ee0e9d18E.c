undefined8 _ZN8uu_nproc6uu_app17h998d5466ee0e9d18E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e7478)();
  _ZN12clap_builder7builder7command7Command3new17h93bc6311aa466ae4E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h92178293ed7099bdE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17he43e05ef87956149E(local_830,local_568);
                    /* try { // try from 001554f7 to 00155510 has its CatchHandler @ 00155687 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e7548)
            (local_2a0,"{} [OPTIONS]...",0xf);
  _ZN12clap_builder7builder7command7Command14override_usage17hd9ba48e6009df6a1E
            (local_568,local_830,local_2a0);
  (*(code *)PTR_memcpy_001e7440)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17hb9361d905053f36dE(local_568,"all",3);
  _ZN12clap_builder7builder3arg3Arg4long17h6c2d08cefa9a9462E(local_2a0,local_568,"all",3);
                    /* try { // try from 001555a3 to 001555be has its CatchHandler @ 00155678 */
  _ZN12clap_builder7builder3arg3Arg4help17hf952c3f9d610f7f7E
            (local_568,local_2a0,"print the number of cores available to the system",0x31);
  _ZN12clap_builder7builder3arg3Arg6action17h1747dee6f055c1ddE(local_2a0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17hf4d3b30c757fbc74E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb9361d905053f36dE(local_830,"ignore",6);
  _ZN12clap_builder7builder3arg3Arg4long17h6c2d08cefa9a9462E(local_2a0,local_830,"ignore",6);
                    /* try { // try from 00155623 to 0015564d has its CatchHandler @ 00155696 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h38066391a1cb9874E(local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg4help17hf952c3f9d610f7f7E
            (local_2a0,local_830,"ignore up to N cores",0x14);
  _ZN12clap_builder7builder7command7Command3arg17hf4d3b30c757fbc74E(param_1,local_568,local_2a0);
  return param_1;
}