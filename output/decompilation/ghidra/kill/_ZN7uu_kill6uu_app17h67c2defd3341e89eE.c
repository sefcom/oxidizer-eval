undefined8 _ZN7uu_kill6uu_app17h67c2defd3341e89eE(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_ab8;
  undefined8 local_ab0;
  char *local_aa8;
  undefined8 local_aa0;
  uint local_7fc;
  ulong local_7f8;
  undefined local_7f0 [632];
  uint local_578;
  undefined4 local_574;
  uint local_534;
  ulong local_530;
  undefined local_528 [632];
  uint local_2b0;
  undefined4 local_2ac;
  undefined local_2a8 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ee048)();
  _ZN12clap_builder7builder7command7Command3new17h6fa87b3300ec2930E(local_7f0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd54432e6861dc023E(&local_ab8,local_7f0);
  _ZN12clap_builder7builder7command7Command5about17h44fdab56d4fece5cE(local_7f0,&local_ab8);
                    /* try { // try from 0015cc3a to 0015cc53 has its CatchHandler @ 0015cf69 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001ee168)
            (local_528,"{} [OPTIONS]... PID...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h8eeb4b3fa81c1504E
            (&local_ab8,local_7f0,local_528);
  (*(code *)PTR_memcpy_001ee008)(local_7f0,&local_ab8,700);
  local_530 = local_7f8 | 0x80;
  local_534 = local_7fc | 0x84;
  _ZN12clap_builder7builder3arg3Arg3new17h422eccc46783c9b6E(&local_ab8,"listTSTP",4);
  _ZN12clap_builder7builder3arg3Arg5short17h4235b86b2bd99630E(local_528,&local_ab8,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17h5ac6de4a8d5e976bE(&local_ab8,local_528,"listTSTP",4);
                    /* try { // try from 0015ccf5 to 0015cd20 has its CatchHandler @ 0015cf88 */
  _ZN12clap_builder7builder3arg3Arg4help17hdf0b172cc09426b6E
            (local_528,&local_ab8,"Lists signals",0xd);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h359c7df78d87d7e0E(&local_ab8,local_528);
  _ZN12clap_builder7builder3arg3Arg6action17h3a3c0bbf65d9b33bE(local_528,&local_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17h3d2a979e69efb1fdE(&local_ab8,local_7f0,local_528);
  _ZN12clap_builder7builder3arg3Arg3new17h422eccc46783c9b6E(local_7f0,"table",5);
  _ZN12clap_builder7builder3arg3Arg5short17h4235b86b2bd99630E(local_528,local_7f0,0x74);
                    /* try { // try from 0015cd80 to 0015cdd7 has its CatchHandler @ 0015cf7b */
  _ZN12clap_builder7builder3arg3Arg11short_alias17h44539dfd0a463bbdE(local_7f0,local_528,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17h5ac6de4a8d5e976bE(local_528,local_7f0,"table",5);
  _ZN12clap_builder7builder3arg3Arg4help17hdf0b172cc09426b6E
            (local_7f0,local_528,"Lists table of signals",0x16);
  _ZN12clap_builder7builder3arg3Arg6action17h3a3c0bbf65d9b33bE(local_528,local_7f0,2);
  _ZN12clap_builder7builder7command7Command3arg17h3d2a979e69efb1fdE(local_7f0,&local_ab8,local_528);
  _ZN12clap_builder7builder3arg3Arg3new17h422eccc46783c9b6E(&local_ab8,"signal",6);
  _ZN12clap_builder7builder3arg3Arg5short17h4235b86b2bd99630E(local_528,&local_ab8,0x73);
                    /* try { // try from 0015ce37 to 0015cebf has its CatchHandler @ 0015cf9a */
  _ZN12clap_builder7builder3arg3Arg11short_alias17h44539dfd0a463bbdE(&local_ab8,local_528,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h5ac6de4a8d5e976bE(local_528,&local_ab8,"signal",6);
  _ZN12clap_builder7builder3arg3Arg10value_name17h614ea83213447e48E(&local_ab8,local_528);
  _ZN12clap_builder7builder3arg3Arg4help17hdf0b172cc09426b6E
            (local_528,&local_ab8,"Sends given signal instead of SIGTERM",0x25);
  local_ab8 = "listTSTP";
  local_ab0 = 4;
  local_aa8 = "table";
  local_aa0 = 5;
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17hc05b378e702faecdE
            (local_2a8,local_528,&local_ab8);
  _ZN12clap_builder7builder7command7Command3arg17h3d2a979e69efb1fdE(&local_ab8,local_7f0,local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h422eccc46783c9b6E(local_7f0,"pids_or_signals",0xf);
  (*(code *)PTR_memcpy_001ee008)(local_528,local_7f0,0x278);
  local_2b0 = local_578 | 4;
  local_2ac = local_574;
  _ZN12clap_builder7builder3arg3Arg6action17h3a3c0bbf65d9b33bE(local_7f0,local_528,1);
  _ZN12clap_builder7builder7command7Command3arg17h3d2a979e69efb1fdE(param_1,&local_ab8,local_7f0);
  return param_1;
}