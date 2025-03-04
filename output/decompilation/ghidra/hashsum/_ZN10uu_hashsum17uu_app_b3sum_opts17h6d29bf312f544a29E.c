void _ZN10uu_hashsum17uu_app_b3sum_opts17h6d29bf312f544a29E(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_778 [592];
  undefined local_528 [592];
  undefined local_2d8 [712];
  
  (*(code *)PTR_memcpy_0047f5e0)(local_2d8,param_2,0x2c8);
                    /* try { // try from 002db510 to 002db55b has its CatchHandler @ 002db592 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(auStack_778,"no-names",8);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_528,auStack_778,"no-names",8);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (auStack_778,local_528,
             "Omits filenames in the output (option not present in GNU/Coreutils)",0x43);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_528,auStack_778,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(param_1,local_2d8,local_528);
  return;
}